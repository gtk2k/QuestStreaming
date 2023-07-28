using System;
using System.Collections;
using System.Threading;
using Unity.WebRTC;
using UnityEngine;
using UnityEngine.Networking;
using WebSocketSharp;
using WebSocketSharp.Server;

public class CameraStreamer : MonoBehaviour
{
    public Camera cam;
    public GameObject display;
    public string signalingURL;

    private RenderTexture rt;
    private SynchronizationContext ctx;

    private RTCPeerConnection peer;
    private enum Side { Local, Remote }

    private RTCConfiguration config = new RTCConfiguration
    {
        iceServers = new RTCIceServer[] { new RTCIceServer { urls = new[] { "stun:stun.l.google.com:19302" } } }
    };

    private class SignalingMessage
    {
        public string type;
        public string sdp;
        public string candidate;
        public string sdpMid;
        public int sdpMLineIndex;

        public RTCSessionDescription ToDesc()
        {
            return new RTCSessionDescription
            {
                type = type == "offer" ? RTCSdpType.Offer : RTCSdpType.Answer,
                sdp = sdp
            };
        }

        public RTCIceCandidate ToCand()
        {
            return new RTCIceCandidate(new RTCIceCandidateInit
            {
                candidate = candidate,
                sdpMid = sdpMid,
                sdpMLineIndex = sdpMLineIndex
            });
        }

        public static SignalingMessage FromDesc(RTCSessionDescription desc)
        {
            return new SignalingMessage
            {
                type = desc.type == RTCSdpType.Offer ? "offer" : "answer",
                sdp = desc.sdp
            };
        }

        public static SignalingMessage FromCand(RTCIceCandidate cand)
        {
            return new SignalingMessage
            {
                type = "candidate",
                candidate = cand.Candidate,
                sdpMid = cand.SdpMid,
                sdpMLineIndex = cand.SdpMLineIndex.Value
            };
        }
    }

#if !UNITY_EDITOR && UNITY_ANDROID
    private WebSocket ws;
#else
    private Action<string> msgSend;
    private WebSocketServer wss;

    private class SignalingBehaviour : WebSocketBehavior
    {
        public Action<Action<string>> OnWSOpen;
        public Action<string> OnWSMessage;
        protected override void OnOpen()
        {
            Debug.Log($"=== OnWSOpen");
            OnWSOpen?.Invoke(this.Send);
        }
        protected override void OnMessage(MessageEventArgs e)
        {
            Debug.Log($"=== OnWSMessage");
            OnWSMessage?.Invoke(e.Data);
        }
    }
#endif


    private void OnEnable()
    {
        //StartCoroutine(get());
        Debug.Log($"=== OnEnable");
        ctx = SynchronizationContext.Current;
        StartCoroutine(WebRTC.Update());

        rt = new RenderTexture(1280, 720, 24, RenderTextureFormat.BGRA32, 0);

#if !UNITY_EDITOR && UNITY_ANDROID
        Debug.Log($"=== Start SignalingConnect");
        ConnectSignaling();
#else
        Debug.Log($"Start SignalingServer");
        wss = new WebSocketServer(8080);
        wss.AddWebSocketService<SignalingBehaviour>("/", behaviour =>
        {
            behaviour.OnWSOpen += (fnc) =>
            {
                ctx.Post(_ => msgSend = fnc, null);
            };
            behaviour.OnWSMessage += OnMessage;
        });
        wss.Start();
#endif
    }
    //IEnumerator get()
    //{
    //    Debug.Log($"===GET");
    //    var req = UnityWebRequest.Get("https://google.com");
    //    yield return req.SendWebRequest();

    //    Debug.Log($"===Get Result {req.responseCode}> {req.downloadHandler.text}");
    //}

#if !UNITY_EDITOR && UNITY_ANDROID
    private void ConnectSignaling()
    {
        Debug.Log($"=== ConnectSignaling > {signalingURL}");
        ws = new WebSocket(signalingURL);
        ws.Log.Level = LogLevel.Debug;
        ws.SslConfiguration.EnabledSslProtocols = System.Security.Authentication.SslProtocols.Tls12 | System.Security.Authentication.SslProtocols.Tls11 | System.Security.Authentication.SslProtocols.Tls;
        ws.OnOpen += Ws_OnOpen;
        ws.OnMessage += (s, e) => OnMessage(e.Data);
        ws.OnClose += Ws_OnClose;
        ws.OnError += Ws_OnError;
        ws.Connect();
    }

    private void Ws_OnError(object sender, ErrorEventArgs e)
    {
        Debug.LogError($"=== Ws_OnError {e.Exception.Message}");
    }

    private void Ws_OnClose(object sender, CloseEventArgs e)
    {
        ctx.Post(_ =>
        {
            Debug.Log($"=== Ws_OnClose > code: {e.Code}, reason:{e.Reason}");
            ws?.Close();
            ws = null;
            Invoke("ConnectSignaling", 3f);
        }, null);
    }

#endif

    private void Ws_OnOpen(object sender, EventArgs e)
    {
        ctx.Post(_ =>
        {
            Debug.Log($"=== Ws_OnOpen");
            CreatePeer();
            StartCoroutine(CreateDesc(RTCSdpType.Offer));
        }, null);
    }

    private void OnDisable()
    {
        Debug.Log($"=== OnDisable");
        peer?.Close();
#if !UNITY_EDITOR && UNITY_ANDROID
        ws?.Close();
        ws = null;
#else
        wss?.Stop();
        wss = null;
#endif
        peer = null;
    }

    private void Send(SignalingMessage msg)
    {
        Debug.Log($"=== Send > ${msg.type}");
        var data = JsonUtility.ToJson(msg);
#if !UNITY_EDITOR && UNITY_ANDROID
        ws.Send(data);
#else
        msgSend(data);
#endif
    }

    private void OnMessage(string data)
    {
        ctx.Post(_ =>
        {
            var msg = JsonUtility.FromJson<SignalingMessage>(data);
            Debug.Log($"=== OnMessage > {msg.type}");
            if (peer == null)
            {
                CreatePeer();
            }
            if (msg.type == "candidate")
            {
                peer.AddIceCandidate(msg.ToCand());
            }
            else
            {
                StartCoroutine(SetDesc(Side.Remote, msg.ToDesc()));
            }
        }, null);
    }

    IEnumerator CreateDesc(RTCSdpType type)
    {
        Debug.Log($"=== CreateDesc > {type}");
        var op = type == RTCSdpType.Offer ? peer.CreateOffer() : peer.CreateAnswer();
        yield return op;
        if (op.IsError)
        {
            Debug.LogError(op.Error.message);
            yield break;
        }
        StartCoroutine(SetDesc(Side.Local, op.Desc));
    }

    IEnumerator SetDesc(Side side, RTCSessionDescription desc)
    {
        Debug.Log($"=== SetDesc > {side}, {desc.type}");
        var op = side == Side.Local ? peer.SetLocalDescription(ref desc) : peer.SetRemoteDescription(ref desc);
        yield return op;
        yield return op;
        if (op.IsError)
        {
            Debug.LogError(op.Error.message);
            yield break;
        }
        if (side == Side.Local)
        {
            Send(SignalingMessage.FromDesc(desc));
        }
        else if (desc.type == RTCSdpType.Offer)
        {
            StartCoroutine(CreateDesc(RTCSdpType.Answer));
        }
    }

    private RTCPeerConnection CreatePeer()
    {
        Debug.Log($"=== CreatePeer");
        peer = new RTCPeerConnection(ref config);
        peer.OnIceCandidate = cand =>
        {
            Send(SignalingMessage.FromCand(cand));
        };
        peer.OnIceGatheringStateChange = state =>
        {
            Debug.Log($"OnIceGatheringStateChange > ${state}");
        };
        peer.OnConnectionStateChange = state =>
        {
            Debug.Log($"OnConnectionStateChange > ${state}");
        };
        peer.OnTrack = evt =>
        {
            if (evt.Track is VideoStreamTrack videoTrack)
            {
                videoTrack.OnVideoReceived += VideoTrack_OnVideoReceived;
            }
        };
        var mediaStream = new MediaStream();
        var videoTrack = new VideoStreamTrack(rt);
        mediaStream.AddTrack(videoTrack);
        peer.AddTrack(videoTrack);

        return peer;
    }

    private void VideoTrack_OnVideoReceived(Texture renderer)
    {
        Debug.Log($"=== CreateDesc > {rt}");
        display.GetComponent<Renderer>().material.mainTexture = renderer;
    }

    // Update is called once per frame
    void Update()
    {
        var prev = cam.targetTexture;
        cam.targetTexture = rt;
        cam.Render();
        cam.targetTexture = prev;
    }
}
