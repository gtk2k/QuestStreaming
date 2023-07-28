#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_t84E0474180BE74DC186BB652F051419C72E75519;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t7263C6B5DF528E9AAF5517B654F9EB38C19BF765;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.CreateSessionDescriptionObserver>
struct Dictionary_2_t6C2A6D2F50B04878141106312AC2959FE77E9685;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.RTCStatsCollectorCallback>
struct Dictionary_2_t0156089E42479D6FB761A7410B15912523AFADE3;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.SetSessionDescriptionObserver>
struct Dictionary_2_tF04CFD307AEA3892DBE8D5C020079FB0E94AA471;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_tB1D9C1FFE40358509EACFB290C5E10A3C519CF1E;
// System.Collections.Generic.HashSet`1<Unity.WebRTC.MediaStreamTrack>
struct HashSet_1_t760682EF2616B098599332862590C1607FFFAE42;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_t1FF73914A1CB7D2DFC1BFD8FAA96C8701452A85B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.WebRTC.RTCIceServer[]
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.WebRTC.AsyncOperationBase
struct AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t6EADF65CD74974F1783AD785778A24AA7F6D00A2;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.WebRTC.DelegateOnAddTrack
struct DelegateOnAddTrack_tCA18E923B6BAADF8427EA9331CA985968EB04481;
// Unity.WebRTC.DelegateOnConnectionStateChange
struct DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698;
// Unity.WebRTC.DelegateOnDataChannel
struct DelegateOnDataChannel_t51552F3ED53B6722654F04B70118D0674754AAA8;
// Unity.WebRTC.DelegateOnIceCandidate
struct DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D;
// Unity.WebRTC.DelegateOnIceConnectionChange
struct DelegateOnIceConnectionChange_tFB1664A52CE8214A21F6CC32AD78600EE4DE27E2;
// Unity.WebRTC.DelegateOnIceGatheringStateChange
struct DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4;
// Unity.WebRTC.DelegateOnNegotiationNeeded
struct DelegateOnNegotiationNeeded_t89583A830AB8849F5B439A8804A7F0E9B5914202;
// Unity.WebRTC.DelegateOnRemoveTrack
struct DelegateOnRemoveTrack_tA664D99D57FF887B46829D1837C1460A60F1FDFB;
// Unity.WebRTC.DelegateOnTrack
struct DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
// WebSocketSharp.Logger
struct Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Unity.WebRTC.MediaStream
struct MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED;
// Unity.WebRTC.MediaStreamTrack
struct MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_tAF63174AAA7DA3BECD41DCE272F38FC13984DFF7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Unity.WebRTC.OnVideoReceived
struct OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF;
// WebSocketSharp.PayloadData
struct PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1;
// Unity.WebRTC.RTCIceCandidate
struct RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4;
// Unity.WebRTC.RTCIceCandidateInit
struct RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9;
// Unity.WebRTC.RTCPeerConnection
struct RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2;
// Unity.WebRTC.RTCRtpSender
struct RTCRtpSender_t9F641589CAD8E9FECEE9613037EAF7BAD0C84657;
// Unity.WebRTC.RTCRtpTransceiver
struct RTCRtpTransceiver_t4950B33225C35C890A0894C738D3F6D19B39F0C5;
// Unity.WebRTC.RTCRtpTransform
struct RTCRtpTransform_tDD60C879F127AA4FE4609CDC0833EA4A83C09F83;
// Unity.WebRTC.RTCSessionDescriptionAsyncOperation
struct RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C;
// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation
struct RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49;
// Unity.WebRTC.RTCTrackEvent
struct RTCTrackEvent_t4D4EAF5A7C373AC90F758F3000434B3C151D29CA;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// Unity.WebRTC.UnityVideoRenderer
struct UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// Unity.WebRTC.VideoStreamTrack
struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B;
// Unity.WebRTC.VideoTrackSource
struct VideoTrackSource_tF200221BAF0F918B2D8E13703E311341F766B772;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebSocketSharp.WebSocket
struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t864B980CACE6C6D128960E555404BC87E7A4C3F2;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// cs
struct cs_t067FC2BA45CD2201EC75EF927291706D0C648239;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// cs/<>c
struct U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF;
// cs/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99;
// cs/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA;
// cs/<CreateDesc>d__19
struct U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E;
// cs/<SetDesc>d__20
struct U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C;
// cs/<get>d__11
struct U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A;
// cs/SignalingMessage
struct SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Side_tAE667DA83CE9205CBD7A71352BC437C330F034B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral031520C8EF652A35114004907C34C55DAC11FD0C;
IL2CPP_EXTERN_C String_t* _stringLiteral03321B4C6A0DC25D266C25BD256720C04551D112;
IL2CPP_EXTERN_C String_t* _stringLiteral0453DD7CACFDDBA688FBAFDB7D57E4F6217595FC;
IL2CPP_EXTERN_C String_t* _stringLiteral28C3D3E03B07EBE4B57FB8AF2DA50110F411CB20;
IL2CPP_EXTERN_C String_t* _stringLiteral29E0E06DB6B4F8482D1149EDA951A83D65B93BFD;
IL2CPP_EXTERN_C String_t* _stringLiteral3A25B1D950E15A315A70A565578BFDC91C3AAC33;
IL2CPP_EXTERN_C String_t* _stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669;
IL2CPP_EXTERN_C String_t* _stringLiteral6858330AEA4B60CCDD83693B5A7DA40E5458D1F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6B276E2F680053872996104D1B4FE397BDD8AA7A;
IL2CPP_EXTERN_C String_t* _stringLiteral8AABC6B8F86951F69ECE31BC8308C58E98E84065;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8;
IL2CPP_EXTERN_C String_t* _stringLiteral9CD38B3A6C796AE77A2C1D29A4616540351FE94A;
IL2CPP_EXTERN_C String_t* _stringLiteralAE78325C06CCD2AD720C54C87BEB746CAADF77D0;
IL2CPP_EXTERN_C String_t* _stringLiteralB6EB8216D6C7B4105917D97B27F450193394B177;
IL2CPP_EXTERN_C String_t* _stringLiteralC868B03AD485E3A4B44B845E128B7E5E95125C11;
IL2CPP_EXTERN_C String_t* _stringLiteralD3EBFB3857AB7509CA87AEFFFC96324784E871CC;
IL2CPP_EXTERN_C String_t* _stringLiteralDBC1ECB35B123C3A9632A1F7CB395093F1AC65F1;
IL2CPP_EXTERN_C String_t* _stringLiteralEF9D74E200A570AC641862ABDDB17C6DC61BE285;
IL2CPP_EXTERN_C String_t* _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30;
IL2CPP_EXTERN_C String_t* _stringLiteralF4201E7DFA1E2A56F383E667501EAC549089761B;
IL2CPP_EXTERN_C String_t* _stringLiteralF8EB3038EEC3698AFEE476BE3F98A7A3DFC61443;
IL2CPP_EXTERN_C String_t* _stringLiteralFA92D17E6525DDDC627B0D5A07452C3FA0904F59;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_m6DD4C7FCEEB91D5C01A96FA4C75378B97658C2D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateDescU3Ed__19_System_Collections_IEnumerator_Reset_m7A8BCF9005719E066A7AA35625E1981513CF3F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetDescU3Ed__20_System_Collections_IEnumerator_Reset_m4C2F178ACE1F0982A575A306A8D925937EE1BCCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreatePeerU3Eb__21_1_mBA9DB23328A3735348A4619BBF069F2814983690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreatePeerU3Eb__21_2_m02BDCE2A7BFBDBDD9517B434D16B046473CD2ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CWs_OnCloseU3Eb__0_mB6791687DB7F1E0356EC8C0856B246E14AAA18BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3COnMessageU3Eb__0_m9E6056D2E7663EC871253D633A3D695B477B153D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetU3Ed__11_System_Collections_IEnumerator_Reset_mDFCD8E67A8F06708D9726F55CB6602F34D02694C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_U3CConnectSignalingU3Eb__12_0_m82DE7BBA319E73C4D0900ECF00B5D9D5AC16AE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_U3CCreatePeerU3Eb__21_0_m404BF921B38A5EDD42BD845E42BA994AD1BDB343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_U3CCreatePeerU3Eb__21_3_m598C3B0C02936CAEA35B821E1585C8CF0454F026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_U3CWs_OnOpenU3Eb__15_0_mE27265814E2E75E851157CA95CE208D90394FF46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_VideoTrack_OnVideoReceived_mA3D3C677CE323947695CC46E6C7228D1BB660D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_Ws_OnClose_mACA9252D35A88208038FBA3254A268B5A106E006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_Ws_OnError_m6C2F20C871140EB4BCC24C30EB74EC74CE55E539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* cs_Ws_OnOpen_mEE489022170A805528F9CA60F83CF15CC3C28804_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603  : public RuntimeObject
{
	// System.Boolean WebSocketSharp.Net.ClientSslConfiguration::_checkCertRevocation
	bool ____checkCertRevocation_0;
	// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.ClientSslConfiguration::_clientCertSelectionCallback
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ____clientCertSelectionCallback_1;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection WebSocketSharp.Net.ClientSslConfiguration::_clientCerts
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ____clientCerts_2;
	// System.Security.Authentication.SslProtocols WebSocketSharp.Net.ClientSslConfiguration::_enabledSslProtocols
	int32_t ____enabledSslProtocols_3;
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ClientSslConfiguration::_serverCertValidationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ____serverCertValidationCallback_4;
	// System.String WebSocketSharp.Net.ClientSslConfiguration::_targetHost
	String_t* ____targetHost_5;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// WebSocketSharp.Logger
struct Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7  : public RuntimeObject
{
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_file
	String_t* ____file_0;
	// WebSocketSharp.LogLevel modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_level
	int32_t ____level_1;
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::_output
	Action_2_t7263C6B5DF528E9AAF5517B654F9EB38C19BF765* ____output_2;
	// System.Object WebSocketSharp.Logger::_sync
	RuntimeObject* ____sync_3;
};

// Unity.WebRTC.RTCTrackEvent
struct RTCTrackEvent_t4D4EAF5A7C373AC90F758F3000434B3C151D29CA  : public RuntimeObject
{
	// Unity.WebRTC.RTCRtpTransceiver Unity.WebRTC.RTCTrackEvent::<Transceiver>k__BackingField
	RTCRtpTransceiver_t4950B33225C35C890A0894C738D3F6D19B39F0C5* ___U3CTransceiverU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// cs/<>c
struct U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF  : public RuntimeObject
{
};

struct U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields
{
	// cs/<>c cs/<>c::<>9
	U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* ___U3CU3E9_0;
	// Unity.WebRTC.DelegateOnIceGatheringStateChange cs/<>c::<>9__21_1
	DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* ___U3CU3E9__21_1_1;
	// Unity.WebRTC.DelegateOnConnectionStateChange cs/<>c::<>9__21_2
	DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* ___U3CU3E9__21_2_2;
};

// cs/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99  : public RuntimeObject
{
	// WebSocketSharp.CloseEventArgs cs/<>c__DisplayClass14_0::e
	CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* ___e_0;
	// cs cs/<>c__DisplayClass14_0::<>4__this
	cs_t067FC2BA45CD2201EC75EF927291706D0C648239* ___U3CU3E4__this_1;
};

// cs/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA  : public RuntimeObject
{
	// System.String cs/<>c__DisplayClass18_0::data
	String_t* ___data_0;
	// cs cs/<>c__DisplayClass18_0::<>4__this
	cs_t067FC2BA45CD2201EC75EF927291706D0C648239* ___U3CU3E4__this_1;
};

// cs/<CreateDesc>d__19
struct U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E  : public RuntimeObject
{
	// System.Int32 cs/<CreateDesc>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object cs/<CreateDesc>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Unity.WebRTC.RTCSdpType cs/<CreateDesc>d__19::type
	int32_t ___type_2;
	// cs cs/<CreateDesc>d__19::<>4__this
	cs_t067FC2BA45CD2201EC75EF927291706D0C648239* ___U3CU3E4__this_3;
	// Unity.WebRTC.RTCSessionDescriptionAsyncOperation cs/<CreateDesc>d__19::<op>5__2
	RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* ___U3CopU3E5__2_4;
};

// cs/<get>d__11
struct U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A  : public RuntimeObject
{
	// System.Int32 cs/<get>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object cs/<get>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest cs/<get>d__11::<req>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CreqU3E5__2_2;
};

// cs/SignalingMessage
struct SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA  : public RuntimeObject
{
	// System.String cs/SignalingMessage::type
	String_t* ___type_0;
	// System.String cs/SignalingMessage::sdp
	String_t* ___sdp_1;
	// System.String cs/SignalingMessage::candidate
	String_t* ___candidate_2;
	// System.String cs/SignalingMessage::sdpMid
	String_t* ___sdpMid_3;
	// System.Int32 cs/SignalingMessage::sdpMLineIndex
	int32_t ___sdpMLineIndex_4;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy>
struct Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy>
struct Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 
{
	// System.String Unity.WebRTC.CandidateInternal::candidate
	String_t* ___candidate_0;
	// Unity.WebRTC.RTCIceComponent Unity.WebRTC.CandidateInternal::component
	int32_t ___component_1;
	// System.String Unity.WebRTC.CandidateInternal::foundation
	String_t* ___foundation_2;
	// System.String Unity.WebRTC.CandidateInternal::ip
	String_t* ___ip_3;
	// System.UInt16 Unity.WebRTC.CandidateInternal::port
	uint16_t ___port_4;
	// System.UInt32 Unity.WebRTC.CandidateInternal::priority
	uint32_t ___priority_5;
	// System.String Unity.WebRTC.CandidateInternal::address
	String_t* ___address_6;
	// System.String Unity.WebRTC.CandidateInternal::protocol
	String_t* ___protocol_7;
	// System.String Unity.WebRTC.CandidateInternal::relatedAddress
	String_t* ___relatedAddress_8;
	// System.UInt16 Unity.WebRTC.CandidateInternal::relatedPort
	uint16_t ___relatedPort_9;
	// System.String Unity.WebRTC.CandidateInternal::tcpType
	String_t* ___tcpType_10;
	// System.String Unity.WebRTC.CandidateInternal::type
	String_t* ___type_11;
	// System.String Unity.WebRTC.CandidateInternal::usernameFragment
	String_t* ___usernameFragment_12;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};
// Native definition for COM marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_com
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};

// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean WebSocketSharp.CloseEventArgs::_clean
	bool ____clean_1;
	// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::_payloadData
	PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* ____payloadData_2;
};

// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Exception WebSocketSharp.ErrorEventArgs::_exception
	Exception_t* ____exception_1;
	// System.String WebSocketSharp.ErrorEventArgs::_message
	String_t* ____message_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// System.Boolean WebSocketSharp.MessageEventArgs::_dataSet
	bool ____dataSet_2;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_3;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____rawData_4;
};

// Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E 
{
	// Unity.WebRTC.RTCErrorType Unity.WebRTC.RTCError::errorType
	int32_t ___errorType_0;
	// System.String Unity.WebRTC.RTCError::message
	String_t* ___message_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke
{
	int32_t ___errorType_0;
	char* ___message_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com
{
	int32_t ___errorType_0;
	Il2CppChar* ___message_1;
};

// Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B 
{
	// System.String Unity.WebRTC.RTCIceServer::credential
	String_t* ___credential_0;
	// Unity.WebRTC.RTCIceCredentialType Unity.WebRTC.RTCIceServer::credentialType
	int32_t ___credentialType_1;
	// System.String[] Unity.WebRTC.RTCIceServer::urls
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___urls_2;
	// System.String Unity.WebRTC.RTCIceServer::username
	String_t* ___username_3;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke
{
	char* ___credential_0;
	int32_t ___credentialType_1;
	char** ___urls_2;
	char* ___username_3;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com
{
	Il2CppChar* ___credential_0;
	int32_t ___credentialType_1;
	Il2CppChar** ___urls_2;
	Il2CppChar* ___username_3;
};

// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 
{
	// Unity.WebRTC.RTCSdpType Unity.WebRTC.RTCSessionDescription::type
	int32_t ___type_0;
	// System.String Unity.WebRTC.RTCSessionDescription::sdp
	String_t* ___sdp_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___sdp_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com
{
	int32_t ___type_0;
	char* ___sdp_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// Unity.WebRTC.AsyncOperationBase
struct AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Unity.WebRTC.RTCError Unity.WebRTC.AsyncOperationBase::<Error>k__BackingField
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___U3CErrorU3Ek__BackingField_0;
	// System.Boolean Unity.WebRTC.AsyncOperationBase::<IsError>k__BackingField
	bool ___U3CIsErrorU3Ek__BackingField_1;
	// System.Boolean Unity.WebRTC.AsyncOperationBase::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839 
{
	// Unity.WebRTC.RTCIceServer[] Unity.WebRTC.RTCConfiguration::iceServers
	RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* ___iceServers_0;
	// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy> Unity.WebRTC.RTCConfiguration::iceTransportPolicy
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy> Unity.WebRTC.RTCConfiguration::bundlePolicy
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	// System.Nullable`1<System.Int32> Unity.WebRTC.RTCConfiguration::iceCandidatePoolSize
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke* ___iceServers_0;
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com* ___iceServers_0;
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
};

// Unity.WebRTC.RTCIceCandidate
struct RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RTCIceCandidate::self
	intptr_t ___self_0;
	// Unity.WebRTC.CandidateInternal Unity.WebRTC.RTCIceCandidate::_candidate
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 ____candidate_1;
	// System.Boolean Unity.WebRTC.RTCIceCandidate::disposed
	bool ___disposed_2;
};

// Unity.WebRTC.RTCIceCandidateInit
struct RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9  : public RuntimeObject
{
	// System.String Unity.WebRTC.RTCIceCandidateInit::candidate
	String_t* ___candidate_0;
	// System.String Unity.WebRTC.RTCIceCandidateInit::sdpMid
	String_t* ___sdpMid_1;
	// System.Nullable`1<System.Int32> Unity.WebRTC.RTCIceCandidateInit::sdpMLineIndex
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___sdpMLineIndex_2;
};

// Unity.WebRTC.RTCPeerConnection
struct RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RTCPeerConnection::self
	intptr_t ___self_0;
	// System.Collections.Generic.HashSet`1<Unity.WebRTC.MediaStreamTrack> Unity.WebRTC.RTCPeerConnection::cacheTracks
	HashSet_1_t760682EF2616B098599332862590C1607FFFAE42* ___cacheTracks_1;
	// System.Boolean Unity.WebRTC.RTCPeerConnection::disposed
	bool ___disposed_2;
	// Unity.WebRTC.DelegateOnIceConnectionChange Unity.WebRTC.RTCPeerConnection::<OnIceConnectionChange>k__BackingField
	DelegateOnIceConnectionChange_tFB1664A52CE8214A21F6CC32AD78600EE4DE27E2* ___U3COnIceConnectionChangeU3Ek__BackingField_3;
	// Unity.WebRTC.DelegateOnConnectionStateChange Unity.WebRTC.RTCPeerConnection::<OnConnectionStateChange>k__BackingField
	DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* ___U3COnConnectionStateChangeU3Ek__BackingField_4;
	// Unity.WebRTC.DelegateOnIceGatheringStateChange Unity.WebRTC.RTCPeerConnection::<OnIceGatheringStateChange>k__BackingField
	DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* ___U3COnIceGatheringStateChangeU3Ek__BackingField_5;
	// Unity.WebRTC.DelegateOnIceCandidate Unity.WebRTC.RTCPeerConnection::<OnIceCandidate>k__BackingField
	DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* ___U3COnIceCandidateU3Ek__BackingField_6;
	// Unity.WebRTC.DelegateOnDataChannel Unity.WebRTC.RTCPeerConnection::<OnDataChannel>k__BackingField
	DelegateOnDataChannel_t51552F3ED53B6722654F04B70118D0674754AAA8* ___U3COnDataChannelU3Ek__BackingField_7;
	// Unity.WebRTC.DelegateOnNegotiationNeeded Unity.WebRTC.RTCPeerConnection::<OnNegotiationNeeded>k__BackingField
	DelegateOnNegotiationNeeded_t89583A830AB8849F5B439A8804A7F0E9B5914202* ___U3COnNegotiationNeededU3Ek__BackingField_8;
	// Unity.WebRTC.DelegateOnTrack Unity.WebRTC.RTCPeerConnection::<OnTrack>k__BackingField
	DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* ___U3COnTrackU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.SetSessionDescriptionObserver> Unity.WebRTC.RTCPeerConnection::dictSetSessionDescriptionObserver
	Dictionary_2_tF04CFD307AEA3892DBE8D5C020079FB0E94AA471* ___dictSetSessionDescriptionObserver_10;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.CreateSessionDescriptionObserver> Unity.WebRTC.RTCPeerConnection::dictCreateSessionDescriptionObserver
	Dictionary_2_t6C2A6D2F50B04878141106312AC2959FE77E9685* ___dictCreateSessionDescriptionObserver_11;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.RTCStatsCollectorCallback> Unity.WebRTC.RTCPeerConnection::dictCollectStatsCallback
	Dictionary_2_t0156089E42479D6FB761A7410B15912523AFADE3* ___dictCollectStatsCallback_12;
};

// Unity.WebRTC.RefCountedObject
struct RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RefCountedObject::self
	intptr_t ___self_0;
	// System.Boolean Unity.WebRTC.RefCountedObject::disposed
	bool ___disposed_1;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// WebSocketSharp.WebSocket
struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4  : public RuntimeObject
{
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t6EADF65CD74974F1783AD785778A24AA7F6D00A2* ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t864B980CACE6C6D128960E555404BC87E7A4C3F2* ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_tAF63174AAA7DA3BECD41DCE272F38FC13984DFF7* ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_10;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_11;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject* ____forMessageEventQueue_12;
	// System.Object WebSocketSharp.WebSocket::_forPing
	RuntimeObject* ____forPing_13;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject* ____forSend_14;
	// System.Object WebSocketSharp.WebSocket::_forState
	RuntimeObject* ____forState_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_tB1D9C1FFE40358509EACFB290C5E10A3C519CF1E* ____handshakeRequestChecker_20;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_21;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_23;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_log
	Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7* ____log_24;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_t84E0474180BE74DC186BB652F051419C72E75519* ____message_26;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_t1FF73914A1CB7D2DFC1BFD8FAA96C8701452A85B* ____messageEventQueue_27;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_28;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_29;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_pongReceived
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____pongReceived_30;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_31;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_32;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____protocols_33;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_34;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_tAF63174AAA7DA3BECD41DCE272F38FC13984DFF7* ____proxyCredentials_35;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____proxyUri_36;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_37;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_receivingExited
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____receivingExited_38;
	// System.Int32 WebSocketSharp.WebSocket::_retryCountForConnect
	int32_t ____retryCountForConnect_39;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_40;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* ____sslConfig_41;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_42;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ____tcpClient_43;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_44;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____waitTime_46;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* ___OnClose_50;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* ___OnError_51;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* ___OnMessage_52;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnOpen_53;
};

struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_StaticFields
{
	// System.Int32 WebSocketSharp.WebSocket::_maxRetryCountForConnect
	int32_t ____maxRetryCountForConnect_25;
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyBytes_47;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_48;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___RandomNumber_49;
};

// Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData
struct VideoStreamTrackData_t6CCBB3F74B759C5FDA7E754E3B7C69935EEC6465 
{
	// Unity.WebRTC.VideoStreamTrack/VideoStreamTrackAction Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData::action
	int32_t ___action_0;
	// System.IntPtr Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData::ptrTexture
	intptr_t ___ptrTexture_1;
	// System.IntPtr Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData::ptrSource
	intptr_t ___ptrSource_2;
	// System.Int32 Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData::width
	int32_t ___width_3;
	// System.Int32 Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData::height
	int32_t ___height_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData::format
	int32_t ___format_5;
};

// cs/<SetDesc>d__20
struct U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C  : public RuntimeObject
{
	// System.Int32 cs/<SetDesc>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object cs/<SetDesc>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// cs/Side cs/<SetDesc>d__20::side
	int32_t ___side_2;
	// Unity.WebRTC.RTCSessionDescription cs/<SetDesc>d__20::desc
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___desc_3;
	// cs cs/<SetDesc>d__20::<>4__this
	cs_t067FC2BA45CD2201EC75EF927291706D0C648239* ___U3CU3E4__this_4;
	// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation cs/<SetDesc>d__20::<op>5__2
	RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* ___U3CopU3E5__2_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.WebRTC.MediaStream
struct MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED  : public RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC
{
	// Unity.WebRTC.DelegateOnAddTrack Unity.WebRTC.MediaStream::onAddTrack
	DelegateOnAddTrack_tCA18E923B6BAADF8427EA9331CA985968EB04481* ___onAddTrack_2;
	// Unity.WebRTC.DelegateOnRemoveTrack Unity.WebRTC.MediaStream::onRemoveTrack
	DelegateOnRemoveTrack_tA664D99D57FF887B46829D1837C1460A60F1FDFB* ___onRemoveTrack_3;
	// System.Collections.Generic.HashSet`1<Unity.WebRTC.MediaStreamTrack> Unity.WebRTC.MediaStream::cacheTracks
	HashSet_1_t760682EF2616B098599332862590C1607FFFAE42* ___cacheTracks_4;
};

// Unity.WebRTC.MediaStreamTrack
struct MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6  : public RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.WebRTC.RTCRtpSender
struct RTCRtpSender_t9F641589CAD8E9FECEE9613037EAF7BAD0C84657  : public RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC
{
	// Unity.WebRTC.RTCPeerConnection Unity.WebRTC.RTCRtpSender::peer
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* ___peer_2;
	// Unity.WebRTC.RTCRtpTransform Unity.WebRTC.RTCRtpSender::transform
	RTCRtpTransform_tDD60C879F127AA4FE4609CDC0833EA4A83C09F83* ___transform_3;
};

// Unity.WebRTC.RTCSessionDescriptionAsyncOperation
struct RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
	// Unity.WebRTC.RTCSessionDescription Unity.WebRTC.RTCSessionDescriptionAsyncOperation::<Desc>k__BackingField
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___U3CDescU3Ek__BackingField_3;
};

// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation
struct RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.WebRTC.DelegateOnConnectionStateChange
struct DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateOnIceCandidate
struct DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateOnIceGatheringStateChange
struct DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateOnTrack
struct DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.WebRTC.OnVideoReceived
struct OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF  : public MulticastDelegate_t
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// Unity.WebRTC.VideoStreamTrack
struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B  : public MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6
{
	// Unity.WebRTC.UnityVideoRenderer Unity.WebRTC.VideoStreamTrack::m_renderer
	UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* ___m_renderer_3;
	// Unity.WebRTC.VideoTrackSource Unity.WebRTC.VideoStreamTrack::m_source
	VideoTrackSource_tF200221BAF0F918B2D8E13703E311341F766B772* ___m_source_4;
	// Unity.WebRTC.VideoStreamTrack/VideoStreamTrackData Unity.WebRTC.VideoStreamTrack::m_data
	VideoStreamTrackData_t6CCBB3F74B759C5FDA7E754E3B7C69935EEC6465 ___m_data_5;
	// System.IntPtr Unity.WebRTC.VideoStreamTrack::m_dataptr
	intptr_t ___m_dataptr_6;
	// Unity.WebRTC.OnVideoReceived Unity.WebRTC.VideoStreamTrack::OnVideoReceived
	OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF* ___OnVideoReceived_7;
};

struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>> Unity.WebRTC.VideoStreamTrack::s_tracks
	ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E* ___s_tracks_2;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// cs
struct cs_t067FC2BA45CD2201EC75EF927291706D0C648239  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera cs::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityEngine.GameObject cs::display
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___display_5;
	// System.String cs::signalingURL
	String_t* ___signalingURL_6;
	// UnityEngine.RenderTexture cs::rt
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt_7;
	// System.Threading.SynchronizationContext cs::ctx
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___ctx_8;
	// Unity.WebRTC.RTCPeerConnection cs::peer
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* ___peer_9;
	// Unity.WebRTC.RTCConfiguration cs::config
	RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839 ___config_10;
	// WebSocketSharp.WebSocket cs::ws
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* ___ws_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.WebRTC.RTCIceServer[]
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5  : public RuntimeArray
{
	ALIGN_FIELD (8) RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B m_Items[1];

	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___credential_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___urls_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_3), (void*)NULL);
		#endif
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___credential_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___urls_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;

// System.Collections.IEnumerator cs::get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cs_get_m3DF7D1342B37B07908DD3B436E3AD236E157C59A (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Unity.WebRTC.WebRTC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRTC_Update_m37E093D0931F75F1ACB8C4DA15CCD02A524F51D1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m7E177DB2DEF7CD2EEB812EEB262081E923BEF2AC (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___mipCount4, const RuntimeMethod* method) ;
// System.Void cs::ConnectSignaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_ConnectSignaling_m5094E89DE9CDFCDB7E59DB675CF5447CBC070AC6 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) ;
// System.Void cs/<get>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetU3Ed__11__ctor_m77DD63CC4F75F3C6EE788CFD1FBE7EB837353E0E (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE61AF5C55A248D7A6B3E3BC14D4BDE24387F6390 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, String_t* ___url0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___protocols1, const RuntimeMethod* method) ;
// WebSocketSharp.Logger WebSocketSharp.WebSocket::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7* WebSocket_get_Log_m347D13F33F1A920B9D530914CFA63FE5C9294BAD (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Logger::set_Level(WebSocketSharp.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_Level_m7F2B6EA2E57B7E1EB70E23FA6F0E111C803E204E (Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::get_SslConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* WebSocket_get_SslConfiguration_mBDAF6EF7F17D7803842800CE350BD0FDD4EC7B42 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSslConfiguration_set_EnabledSslProtocols_mB560EC68BCD7965457E59AC7C3843CF050AEB96F (ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m5715FC4EA7375D9465E94D361613C8335F16CDCC (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.MessageEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mBFF738C5B4A324ADE86116FCFB14BEBD465E278C (EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m958CB5E0C0A476F4D5AC753E1351F359717B4815 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.CloseEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3E0F9E4A1E4586F7783A529A94CF899EF217E3D1 (EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m09A4F73CC7535D8206A52A8CFBAAA4206D87C0B0 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.ErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEE692A37B9A9F48312806EC0503F42A6C0ECB289 (EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mC3207DE386AE7B354D314B5CB8F407702E72E95E (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* ___value0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m55D00EB93E84FA7C6A7655B46F54630D1A0167B5 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.Exception WebSocketSharp.ErrorEventArgs::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ErrorEventArgs_get_Exception_m307414C48CBFFA91C8F9F8BADE1B23180168A607 (ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void cs/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m9B19DCF8804485BC9FD580E2A9C42AAFF7E2883F (U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCPeerConnection_Close_m4A7E9986B74152BAAF950C6155E3BD39D8226FCC (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mE3876CFD424A250CA1BCB2079D7AA009E795FFC4 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mE275781E5A051D124CA6603C6DDF357E777DF3D1 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Void cs/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mF2602C983EB0B46433CB721623DF235945AE3AEB (U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* __this, const RuntimeMethod* method) ;
// System.Void cs/<CreateDesc>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDescU3Ed__19__ctor_m96AB759FD8AE22B95A9A1D6E7EBC4AD0F0E952E0 (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void cs/<SetDesc>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDescU3Ed__20__ctor_m18D01EDB87727407CE874ABC9E4FEF53A09BCED9 (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::.ctor(Unity.WebRTC.RTCConfiguration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCPeerConnection__ctor_m8B71DFA4536EDC2C382A8164FADF716BC2AAB7FE (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* ___configuration0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateOnIceCandidate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateOnIceCandidate__ctor_m5434F142DB3B3F3DFB94D575A0D1E3128D327853 (DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::set_OnIceCandidate(Unity.WebRTC.DelegateOnIceCandidate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnIceCandidate_m91B18C3CBA7F82BBBA0FE10D8251B830ACAE25E4_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateOnIceGatheringStateChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateOnIceGatheringStateChange__ctor_m81F57B33AF7011A17BCDDA465DE710A8D27DC1C2 (DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::set_OnIceGatheringStateChange(Unity.WebRTC.DelegateOnIceGatheringStateChange)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnIceGatheringStateChange_mAEBC40950256C34A9CB68840FA26FDCC7791AFDE_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateOnConnectionStateChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateOnConnectionStateChange__ctor_m653BF01A7F36078943104B6659194DCD185564DD (DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::set_OnConnectionStateChange(Unity.WebRTC.DelegateOnConnectionStateChange)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnConnectionStateChange_m08B0324E91E2E057AD2C36BF0EF175F99F35FA4D_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateOnTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateOnTrack__ctor_m9F9248EC74098EBE06A9120A5DEE3F4E816B0EFE (DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::set_OnTrack(Unity.WebRTC.DelegateOnTrack)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnTrack_mFC24230DF8CCAB0D65D01BE0116DE7AA9FEB765E_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.MediaStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaStream__ctor_mC5CCF48C9CE423D106ABF77D1C28C352B1CA7E3E (MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.VideoStreamTrack::.ctor(UnityEngine.Texture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoStreamTrack__ctor_mA1E49E6C301F533CD1FDA9917AB7DBDF94257419 (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, bool ___needFlip1, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.MediaStream::AddTrack(Unity.WebRTC.MediaStreamTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaStream_AddTrack_m280D5D34A30F42C0007D0B87E24657AAF5D4B2CC (MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED* __this, MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6* ___track0, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCRtpSender Unity.WebRTC.RTCPeerConnection::AddTrack(Unity.WebRTC.MediaStreamTrack,Unity.WebRTC.MediaStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCRtpSender_t9F641589CAD8E9FECEE9613037EAF7BAD0C84657* RTCPeerConnection_AddTrack_m98F6DF27832BA37E3BF69DEDF2168E1E20310F9D (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6* ___track0, MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED* ___stream1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String WebSocketSharp.MessageEventArgs::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageEventArgs_get_Data_m68CD4A6A914A8493DC327848521DA18278C1D8C4 (MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4* __this, const RuntimeMethod* method) ;
// System.Void cs::OnMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_OnMessage_mBD7429DAF9097DDC23EA7AEEB3C4240E05D15512 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, String_t* ___data0, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCPeerConnection cs::CreatePeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* cs_CreatePeer_m633A3E10BBDF5D765ADCDD0E3FCA8E1DDCA98FAA (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator cs::CreateDesc(Unity.WebRTC.RTCSdpType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cs_CreateDesc_m2667E0B98E904FF9F092F3BF62E791B4C52DFC32 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, int32_t ___type0, const RuntimeMethod* method) ;
// cs/SignalingMessage cs/SignalingMessage::FromCand(Unity.WebRTC.RTCIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* SignalingMessage_FromCand_mAB701000892FC74C9A18CAF73F05782C914B70DC (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* ___cand0, const RuntimeMethod* method) ;
// System.Void cs::Send(cs/SignalingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_Send_m23139E0290FA5D0E25BB6FE34C34AB5ED11A8C54 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* ___msg0, const RuntimeMethod* method) ;
// Unity.WebRTC.MediaStreamTrack Unity.WebRTC.RTCTrackEvent::get_Track()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6* RTCTrackEvent_get_Track_mFC03A93642EC435732A67FE9238C94FB49FC5CF7 (RTCTrackEvent_t4D4EAF5A7C373AC90F758F3000434B3C151D29CA* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.OnVideoReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVideoReceived__ctor_m795356B7B5C24017B50233288A9B3A4705868046 (OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.VideoStreamTrack::add_OnVideoReceived(Unity.WebRTC.OnVideoReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoStreamTrack_add_OnVideoReceived_m88D0D6D53D3814F32A377111891E7F2F6DFFDB1E (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* __this, OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCIceCandidateInit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCIceCandidateInit__ctor_mA0CE36E1BA753B3D74552C7B1356F058BF210E9F (RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Void Unity.WebRTC.RTCIceCandidate::.ctor(Unity.WebRTC.RTCIceCandidateInit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCIceCandidate__ctor_m164E2BFC8204774E120D7E74DD6E8D3C5C85124B (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* __this, RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9* ___candidateInfo0, const RuntimeMethod* method) ;
// System.Void cs/SignalingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalingMessage__ctor_mE2197DA609BA807059163FF9FA79F2ECB09177F9 (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* __this, const RuntimeMethod* method) ;
// System.String Unity.WebRTC.RTCIceCandidate::get_Candidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RTCIceCandidate_get_Candidate_m72D6C96D4B55F5B6AD526DEA591EA187F523FC33 (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* __this, const RuntimeMethod* method) ;
// System.String Unity.WebRTC.RTCIceCandidate::get_SdpMid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RTCIceCandidate_get_SdpMid_m6C861CD69BA17EBB90A33F6552B8311B18D8EE3C (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.WebRTC.RTCIceCandidate::get_SdpMLineIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 RTCIceCandidate_get_SdpMLineIndex_m3473B7A6D73AF1BF329BDE27EA979304B3778B5C (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.UInt16 WebSocketSharp.CloseEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CloseEventArgs_get_Code_m2E0325F4200D8AF0CA5537A890DAEC2670D197F4 (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, const RuntimeMethod* method) ;
// System.String WebSocketSharp.CloseEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloseEventArgs_get_Reason_m6A44D1218D4817D12EC9DBD14D9BD68E7B58BB29 (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<cs/SignalingMessage>(System.String)
inline SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* JsonUtility_FromJson_TisSignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_m6DD4C7FCEEB91D5C01A96FA4C75378B97658C2D3 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// Unity.WebRTC.RTCIceCandidate cs/SignalingMessage::ToCand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* SignalingMessage_ToCand_mD3E113E77DDC1FFFA6BF4FB69CFC84DFEBA3B95B (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.RTCPeerConnection::AddIceCandidate(Unity.WebRTC.RTCIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RTCPeerConnection_AddIceCandidate_mFF8063BC4DA7DE4FE0DCA8C842397A3D3F58BF50 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* ___candidate0, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCSessionDescription cs/SignalingMessage::ToDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 SignalingMessage_ToDesc_mC29F346138ECF5CCA50676F85059A8EEFC430D69 (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator cs::SetDesc(cs/Side,Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cs_SetDesc_m39E6BA5251F72C6735D7B63B6E47DD924390C1A2 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, int32_t ___side0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___desc1, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCSessionDescriptionAsyncOperation Unity.WebRTC.RTCPeerConnection::CreateAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* RTCPeerConnection_CreateAnswer_m5F0B054618405F0E2D5682AF121936BCD33DA1E5 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCSessionDescriptionAsyncOperation Unity.WebRTC.RTCPeerConnection::CreateOffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* RTCPeerConnection_CreateOffer_mBCC6AA1A090E6340816F09A8B9EC32A186184D5A (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_IsError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsError_mE62C0F4F75BDBCB7B4ED590CBC38C0F0B1AE494A_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCError Unity.WebRTC.AsyncOperationBase::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E AsyncOperationBase_get_Error_m8D2265FF78156B2BCF8334F6CEAC5C53BE7D0C98_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCSessionDescription Unity.WebRTC.RTCSessionDescriptionAsyncOperation::get_Desc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 RTCSessionDescriptionAsyncOperation_get_Desc_m6B2EF7D9EF0737D24C05B0D40BA83E6746FA1F04_inline (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation Unity.WebRTC.RTCPeerConnection::SetRemoteDescription(Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* RTCPeerConnection_SetRemoteDescription_m8775354452F39D7505F3A30A0B542432C1B427A2 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc0, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation Unity.WebRTC.RTCPeerConnection::SetLocalDescription(Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* RTCPeerConnection_SetLocalDescription_m47D48FEACF7EC5F1D7E2FCD52BA28384BCD41EB8 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc0, const RuntimeMethod* method) ;
// cs/SignalingMessage cs/SignalingMessage::FromDesc(Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* SignalingMessage_FromDesc_m0EF5986E878D5E27BA5DDE2032D702C696E41651 (RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___desc0, const RuntimeMethod* method) ;
// System.Void cs/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6F8EB055C93F766C95E8D44043D4750D0019AC26 (U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cs::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_OnEnable_m37265C0D453AEFFF6F1A7180F9E8DE2118E5C4F4 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C3D3E03B07EBE4B57FB8AF2DA50110F411CB20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBC1ECB35B123C3A9632A1F7CB395093F1AC65F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(get());
		RuntimeObject* L_0;
		L_0 = cs_get_m3DF7D1342B37B07908DD3B436E3AD236E157C59A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// Debug.Log($"=== OnEnable");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral28C3D3E03B07EBE4B57FB8AF2DA50110F411CB20, NULL);
		// ctx = SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_2;
		L_2 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		__this->___ctx_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ctx_8), (void*)L_2);
		// StartCoroutine(WebRTC.Update());
		RuntimeObject* L_3;
		L_3 = WebRTC_Update_m37E093D0931F75F1ACB8C4DA15CCD02A524F51D1(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// rt = new RenderTexture(1280, 720, 24, RenderTextureFormat.BGRA32, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RenderTexture__ctor_m7E177DB2DEF7CD2EEB812EEB262081E923BEF2AC(L_5, ((int32_t)1280), ((int32_t)720), ((int32_t)24), ((int32_t)20), 0, NULL);
		__this->___rt_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_7), (void*)L_5);
		// Debug.Log($"=== Start SignalingConnect");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralDBC1ECB35B123C3A9632A1F7CB395093F1AC65F1, NULL);
		// ConnectSignaling();
		cs_ConnectSignaling_m5094E89DE9CDFCDB7E59DB675CF5447CBC070AC6(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator cs::get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cs_get_m3DF7D1342B37B07908DD3B436E3AD236E157C59A (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* L_0 = (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A*)il2cpp_codegen_object_new(U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CgetU3Ed__11__ctor_m77DD63CC4F75F3C6EE788CFD1FBE7EB837353E0E(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void cs::ConnectSignaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_ConnectSignaling_m5094E89DE9CDFCDB7E59DB675CF5447CBC070AC6 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF9D74E200A570AC641862ABDDB17C6DC61BE285);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_U3CConnectSignalingU3Eb__12_0_m82DE7BBA319E73C4D0900ECF00B5D9D5AC16AE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_Ws_OnClose_mACA9252D35A88208038FBA3254A268B5A106E006_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_Ws_OnError_m6C2F20C871140EB4BCC24C30EB74EC74CE55E539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_Ws_OnOpen_mEE489022170A805528F9CA60F83CF15CC3C28804_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"=== ConnectSignaling > {signalingURL}");
		String_t* L_0 = __this->___signalingURL_6;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEF9D74E200A570AC641862ABDDB17C6DC61BE285, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// ws = new WebSocket(signalingURL);
		String_t* L_2 = __this->___signalingURL_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline(Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_4 = (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)il2cpp_codegen_object_new(WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WebSocket__ctor_mE61AF5C55A248D7A6B3E3BC14D4BDE24387F6390(L_4, L_2, L_3, NULL);
		__this->___ws_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ws_11), (void*)L_4);
		// ws.Log.Level = LogLevel.Debug;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_5 = __this->___ws_11;
		NullCheck(L_5);
		Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7* L_6;
		L_6 = WebSocket_get_Log_m347D13F33F1A920B9D530914CFA63FE5C9294BAD(L_5, NULL);
		NullCheck(L_6);
		Logger_set_Level_m7F2B6EA2E57B7E1EB70E23FA6F0E111C803E204E(L_6, 1, NULL);
		// ws.SslConfiguration.EnabledSslProtocols = System.Security.Authentication.SslProtocols.Tls12 | System.Security.Authentication.SslProtocols.Tls11 | System.Security.Authentication.SslProtocols.Tls;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_7 = __this->___ws_11;
		NullCheck(L_7);
		ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* L_8;
		L_8 = WebSocket_get_SslConfiguration_mBDAF6EF7F17D7803842800CE350BD0FDD4EC7B42(L_7, NULL);
		NullCheck(L_8);
		ClientSslConfiguration_set_EnabledSslProtocols_mB560EC68BCD7965457E59AC7C3843CF050AEB96F(L_8, ((int32_t)4032), NULL);
		// ws.OnOpen += Ws_OnOpen;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_9 = __this->___ws_11;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_10, __this, (intptr_t)((void*)cs_Ws_OnOpen_mEE489022170A805528F9CA60F83CF15CC3C28804_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		WebSocket_add_OnOpen_m5715FC4EA7375D9465E94D361613C8335F16CDCC(L_9, L_10, NULL);
		// ws.OnMessage += (s, e) => OnMessage(e.Data);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_11 = __this->___ws_11;
		EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* L_12 = (EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9*)il2cpp_codegen_object_new(EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EventHandler_1__ctor_mBFF738C5B4A324ADE86116FCFB14BEBD465E278C(L_12, __this, (intptr_t)((void*)cs_U3CConnectSignalingU3Eb__12_0_m82DE7BBA319E73C4D0900ECF00B5D9D5AC16AE0B_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		WebSocket_add_OnMessage_m958CB5E0C0A476F4D5AC753E1351F359717B4815(L_11, L_12, NULL);
		// ws.OnClose += Ws_OnClose;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_13 = __this->___ws_11;
		EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* L_14 = (EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5*)il2cpp_codegen_object_new(EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		EventHandler_1__ctor_m3E0F9E4A1E4586F7783A529A94CF899EF217E3D1(L_14, __this, (intptr_t)((void*)cs_Ws_OnClose_mACA9252D35A88208038FBA3254A268B5A106E006_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		WebSocket_add_OnClose_m09A4F73CC7535D8206A52A8CFBAAA4206D87C0B0(L_13, L_14, NULL);
		// ws.OnError += Ws_OnError;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_15 = __this->___ws_11;
		EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* L_16 = (EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291*)il2cpp_codegen_object_new(EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		EventHandler_1__ctor_mEE692A37B9A9F48312806EC0503F42A6C0ECB289(L_16, __this, (intptr_t)((void*)cs_Ws_OnError_m6C2F20C871140EB4BCC24C30EB74EC74CE55E539_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		WebSocket_add_OnError_mC3207DE386AE7B354D314B5CB8F407702E72E95E(L_15, L_16, NULL);
		// ws.Connect();
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_17 = __this->___ws_11;
		NullCheck(L_17);
		WebSocket_Connect_m55D00EB93E84FA7C6A7655B46F54630D1A0167B5(L_17, NULL);
		// }
		return;
	}
}
// System.Void cs::Ws_OnError(System.Object,WebSocketSharp.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_Ws_OnError_m6C2F20C871140EB4BCC24C30EB74EC74CE55E539 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, RuntimeObject* ___sender0, ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral031520C8EF652A35114004907C34C55DAC11FD0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError($"=== Ws_OnError {e.Exception.Message}");
		ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143* L_0 = ___e1;
		NullCheck(L_0);
		Exception_t* L_1;
		L_1 = ErrorEventArgs_get_Exception_m307414C48CBFFA91C8F9F8BADE1B23180168A607(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral031520C8EF652A35114004907C34C55DAC11FD0C, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
		// }
		return;
	}
}
// System.Void cs::Ws_OnClose(System.Object,WebSocketSharp.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_Ws_OnClose_mACA9252D35A88208038FBA3254A268B5A106E006 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, RuntimeObject* ___sender0, CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CWs_OnCloseU3Eb__0_mB6791687DB7F1E0356EC8C0856B246E14AAA18BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* L_0 = (U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m9B19DCF8804485BC9FD580E2A9C42AAFF7E2883F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* L_1 = V_0;
		CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* L_2 = ___e1;
		NullCheck(L_1);
		L_1->___e_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___e_0), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// ctx.Post(_ =>
		// {
		//     Debug.Log($"=== Ws_OnClose > code: {e.Code}, reason:{e.Reason}");
		//     ws?.Close();
		//     ws = null;
		//     Invoke("ConnectSignaling", 3f);
		// }, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4 = __this->___ctx_8;
		U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* L_5 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_6 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CWs_OnCloseU3Eb__0_mB6791687DB7F1E0356EC8C0856B246E14AAA18BE_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void cs::Ws_OnOpen(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_Ws_OnOpen_mEE489022170A805528F9CA60F83CF15CC3C28804 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_U3CWs_OnOpenU3Eb__15_0_mE27265814E2E75E851157CA95CE208D90394FF46_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ctx.Post(_ =>
		// {
		//     Debug.Log($"=== Ws_OnOpen");
		//     CreatePeer();
		//     StartCoroutine(CreateDesc(RTCSdpType.Offer));
		// }, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___ctx_8;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_1, __this, (intptr_t)((void*)cs_U3CWs_OnOpenU3Eb__15_0_mE27265814E2E75E851157CA95CE208D90394FF46_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void cs::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_OnDisable_mAB20BBECA5D1C1A555EB8D9C9C764060CD707CFA (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0453DD7CACFDDBA688FBAFDB7D57E4F6217595FC);
		s_Il2CppMethodInitialized = true;
	}
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* G_B2_0 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* G_B1_0 = NULL;
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* G_B5_0 = NULL;
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* G_B4_0 = NULL;
	{
		// Debug.Log($"=== OnDisable");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0453DD7CACFDDBA688FBAFDB7D57E4F6217595FC, NULL);
		// peer?.Close();
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_0 = __this->___peer_9;
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		goto IL_001b;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		RTCPeerConnection_Close_m4A7E9986B74152BAAF950C6155E3BD39D8226FCC(G_B2_0, NULL);
	}

IL_001b:
	{
		// ws?.Close();
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_2 = __this->___ws_11;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0027;
		}
	}
	{
		goto IL_002c;
	}

IL_0027:
	{
		NullCheck(G_B5_0);
		WebSocket_Close_mE3876CFD424A250CA1BCB2079D7AA009E795FFC4(G_B5_0, NULL);
	}

IL_002c:
	{
		// ws = null;
		__this->___ws_11 = (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ws_11), (void*)(WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)NULL);
		// peer = null;
		__this->___peer_9 = (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peer_9), (void*)(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)NULL);
		// }
		return;
	}
}
// System.Void cs::Send(cs/SignalingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_Send_m23139E0290FA5D0E25BB6FE34C34AB5ED11A8C54 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AABC6B8F86951F69ECE31BC8308C58E98E84065);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.Log($"=== Send > ${msg.type}");
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_0 = ___msg0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___type_0;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8AABC6B8F86951F69ECE31BC8308C58E98E84065, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// var data = JsonUtility.ToJson(msg);
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_3 = ___msg0;
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_3, NULL);
		V_0 = L_4;
		// ws.Send(data);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_5 = __this->___ws_11;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		WebSocket_Send_mE275781E5A051D124CA6603C6DDF357E777DF3D1(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void cs::OnMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_OnMessage_mBD7429DAF9097DDC23EA7AEEB3C4240E05D15512 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3COnMessageU3Eb__0_m9E6056D2E7663EC871253D633A3D695B477B153D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* L_0 = (U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_mF2602C983EB0B46433CB721623DF235945AE3AEB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* L_1 = V_0;
		String_t* L_2 = ___data0;
		NullCheck(L_1);
		L_1->___data_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___data_0), (void*)L_2);
		U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// ctx.Post(_ =>
		// {
		//     var msg = JsonUtility.FromJson<SignalingMessage>(data);
		//     Debug.Log($"=== OnMessage > {msg.type}");
		//     if (peer == null)
		//     {
		//         CreatePeer();
		//     }
		//     if (msg.type == "candidate")
		//     {
		//         peer.AddIceCandidate(msg.ToCand());
		//     }
		//     else
		//     {
		//         StartCoroutine(SetDesc(Side.Remote, msg.ToDesc()));
		//     }
		// }, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4 = __this->___ctx_8;
		U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* L_5 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_6 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3COnMessageU3Eb__0_m9E6056D2E7663EC871253D633A3D695B477B153D_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator cs::CreateDesc(Unity.WebRTC.RTCSdpType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cs_CreateDesc_m2667E0B98E904FF9F092F3BF62E791B4C52DFC32 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* L_0 = (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E*)il2cpp_codegen_object_new(U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCreateDescU3Ed__19__ctor_m96AB759FD8AE22B95A9A1D6E7EBC4AD0F0E952E0(L_0, 0, NULL);
		U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* L_2 = L_1;
		int32_t L_3 = ___type0;
		NullCheck(L_2);
		L_2->___type_2 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator cs::SetDesc(cs/Side,Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cs_SetDesc_m39E6BA5251F72C6735D7B63B6E47DD924390C1A2 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, int32_t ___side0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___desc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* L_0 = (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C*)il2cpp_codegen_object_new(U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetDescU3Ed__20__ctor_m18D01EDB87727407CE874ABC9E4FEF53A09BCED9(L_0, 0, NULL);
		U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* L_2 = L_1;
		int32_t L_3 = ___side0;
		NullCheck(L_2);
		L_2->___side_2 = L_3;
		U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* L_4 = L_2;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_5 = ___desc1;
		NullCheck(L_4);
		L_4->___desc_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_4->___desc_3))->___sdp_1), (void*)NULL);
		return L_4;
	}
}
// Unity.WebRTC.RTCPeerConnection cs::CreatePeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* cs_CreatePeer_m633A3E10BBDF5D765ADCDD0E3FCA8E1DDCA98FAA (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreatePeerU3Eb__21_1_mBA9DB23328A3735348A4619BBF069F2814983690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreatePeerU3Eb__21_2_m02BDCE2A7BFBDBDD9517B434D16B046473CD2ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA92D17E6525DDDC627B0D5A07452C3FA0904F59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_U3CCreatePeerU3Eb__21_0_m404BF921B38A5EDD42BD845E42BA994AD1BDB343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_U3CCreatePeerU3Eb__21_3_m598C3B0C02936CAEA35B821E1585C8CF0454F026_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* V_0 = NULL;
	DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* G_B2_0 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* G_B2_1 = NULL;
	DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* G_B1_0 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* G_B1_1 = NULL;
	DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* G_B4_0 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* G_B4_1 = NULL;
	DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* G_B3_0 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* G_B3_1 = NULL;
	{
		// Debug.Log($"=== CreatePeer");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralFA92D17E6525DDDC627B0D5A07452C3FA0904F59, NULL);
		// peer = new RTCPeerConnection(ref config);
		RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* L_0 = (&__this->___config_10);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_1 = (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)il2cpp_codegen_object_new(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RTCPeerConnection__ctor_m8B71DFA4536EDC2C382A8164FADF716BC2AAB7FE(L_1, L_0, NULL);
		__this->___peer_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peer_9), (void*)L_1);
		// peer.OnIceCandidate = cand =>
		// {
		//     Send(SignalingMessage.FromCand(cand));
		// };
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_2 = __this->___peer_9;
		DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* L_3 = (DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D*)il2cpp_codegen_object_new(DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DelegateOnIceCandidate__ctor_m5434F142DB3B3F3DFB94D575A0D1E3128D327853(L_3, __this, (intptr_t)((void*)cs_U3CCreatePeerU3Eb__21_0_m404BF921B38A5EDD42BD845E42BA994AD1BDB343_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RTCPeerConnection_set_OnIceCandidate_m91B18C3CBA7F82BBBA0FE10D8251B830ACAE25E4_inline(L_2, L_3, NULL);
		// peer.OnIceGatheringStateChange = state =>
		// {
		//     Debug.Log($"OnIceGatheringStateChange > ${state}");
		// };
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_4 = __this->___peer_9;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var);
		DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* L_5 = ((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9__21_1_1;
		DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var);
		U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* L_7 = ((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* L_8 = (DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4*)il2cpp_codegen_object_new(DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DelegateOnIceGatheringStateChange__ctor_m81F57B33AF7011A17BCDDA465DE710A8D27DC1C2(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CCreatePeerU3Eb__21_1_mBA9DB23328A3735348A4619BBF069F2814983690_RuntimeMethod_var), NULL);
		DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* L_9 = L_8;
		((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9__21_1_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9__21_1_1), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
	}

IL_0057:
	{
		NullCheck(G_B2_1);
		RTCPeerConnection_set_OnIceGatheringStateChange_mAEBC40950256C34A9CB68840FA26FDCC7791AFDE_inline(G_B2_1, G_B2_0, NULL);
		// peer.OnConnectionStateChange = state =>
		// {
		//     Debug.Log($"OnConnectionStateChange > ${state}");
		// };
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_10 = __this->___peer_9;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var);
		DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* L_11 = ((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9__21_2_2;
		DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_10;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_10;
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var);
		U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* L_13 = ((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* L_14 = (DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698*)il2cpp_codegen_object_new(DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DelegateOnConnectionStateChange__ctor_m653BF01A7F36078943104B6659194DCD185564DD(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CCreatePeerU3Eb__21_2_m02BDCE2A7BFBDBDD9517B434D16B046473CD2ECA_RuntimeMethod_var), NULL);
		DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* L_15 = L_14;
		((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9__21_2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9__21_2_2), (void*)L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
	}

IL_0081:
	{
		NullCheck(G_B4_1);
		RTCPeerConnection_set_OnConnectionStateChange_m08B0324E91E2E057AD2C36BF0EF175F99F35FA4D_inline(G_B4_1, G_B4_0, NULL);
		// peer.OnTrack = evt =>
		// {
		//     if (evt.Track is VideoStreamTrack videoTrack)
		//     {
		//         videoTrack.OnVideoReceived += VideoTrack_OnVideoReceived;
		//     }
		// };
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_16 = __this->___peer_9;
		DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* L_17 = (DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF*)il2cpp_codegen_object_new(DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		DelegateOnTrack__ctor_m9F9248EC74098EBE06A9120A5DEE3F4E816B0EFE(L_17, __this, (intptr_t)((void*)cs_U3CCreatePeerU3Eb__21_3_m598C3B0C02936CAEA35B821E1585C8CF0454F026_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		RTCPeerConnection_set_OnTrack_mFC24230DF8CCAB0D65D01BE0116DE7AA9FEB765E_inline(L_16, L_17, NULL);
		// var mediaStream = new MediaStream();
		MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED* L_18 = (MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED*)il2cpp_codegen_object_new(MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		MediaStream__ctor_mC5CCF48C9CE423D106ABF77D1C28C352B1CA7E3E(L_18, NULL);
		// var videoTrack = new VideoStreamTrack(rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = __this->___rt_7;
		VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_20 = (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B*)il2cpp_codegen_object_new(VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VideoStreamTrack__ctor_mA1E49E6C301F533CD1FDA9917AB7DBDF94257419(L_20, L_19, (bool)1, NULL);
		V_0 = L_20;
		// mediaStream.AddTrack(videoTrack);
		VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_21 = V_0;
		NullCheck(L_18);
		bool L_22;
		L_22 = MediaStream_AddTrack_m280D5D34A30F42C0007D0B87E24657AAF5D4B2CC(L_18, L_21, NULL);
		// peer.AddTrack(videoTrack);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_23 = __this->___peer_9;
		VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_24 = V_0;
		NullCheck(L_23);
		RTCRtpSender_t9F641589CAD8E9FECEE9613037EAF7BAD0C84657* L_25;
		L_25 = RTCPeerConnection_AddTrack_m98F6DF27832BA37E3BF69DEDF2168E1E20310F9D(L_23, L_24, (MediaStream_t8E9105D6B4F7FF90AEB7B50B1C5A02DCAEF9BDED*)NULL, NULL);
		// return peer;
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_26 = __this->___peer_9;
		return L_26;
	}
}
// System.Void cs::VideoTrack_OnVideoReceived(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_VideoTrack_OnVideoReceived_mA3D3C677CE323947695CC46E6C7228D1BB660D8E (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___renderer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD38B3A6C796AE77A2C1D29A4616540351FE94A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"=== CreateDesc > {rt}");
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___rt_7;
		String_t* L_1;
		L_1 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9CD38B3A6C796AE77A2C1D29A4616540351FE94A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// display.GetComponent<Renderer>().material.mainTexture = renderer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___display_5;
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___renderer0;
		NullCheck(L_4);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void cs::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_Update_m561F084CB69320D87878EDF8DC5E6CDAB4335211 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) 
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// var prev = cam.targetTexture;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_4;
		NullCheck(L_0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1;
		L_1 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_0, NULL);
		V_0 = L_1;
		// cam.targetTexture = rt;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cam_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___rt_7;
		NullCheck(L_2);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_2, L_3, NULL);
		// cam.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_4;
		NullCheck(L_4);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_4, NULL);
		// cam.targetTexture = prev;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_0;
		NullCheck(L_5);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void cs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs__ctor_m204BB2FED0E7CAB3FA3B43F40CA6C3EE62A9BFF7 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E0E06DB6B4F8482D1149EDA951A83D65B93BFD);
		s_Il2CppMethodInitialized = true;
	}
	RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private RTCConfiguration config = new RTCConfiguration
		// {
		//     iceServers = new RTCIceServer[] { new RTCIceServer { urls = new[] { "stun:stun.l.google.com:19302" } } }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839));
		RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* L_0 = (RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5*)(RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5*)SZArrayNew(RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5_il2cpp_TypeInfo_var, (uint32_t)1);
		RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* L_1 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral29E0E06DB6B4F8482D1149EDA951A83D65B93BFD);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral29E0E06DB6B4F8482D1149EDA951A83D65B93BFD);
		(&V_1)->___urls_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___urls_2), (void*)L_3);
		RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B L_4 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B)L_4);
		(&V_0)->___iceServers_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___iceServers_0), (void*)L_1);
		RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839 L_5 = V_0;
		__this->___config_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___config_10))->___iceServers_0), (void*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void cs::<ConnectSignaling>b__12_0(System.Object,WebSocketSharp.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_U3CConnectSignalingU3Eb__12_0_m82DE7BBA319E73C4D0900ECF00B5D9D5AC16AE0B (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, RuntimeObject* ___s0, MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4* ___e1, const RuntimeMethod* method) 
{
	{
		// ws.OnMessage += (s, e) => OnMessage(e.Data);
		MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4* L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MessageEventArgs_get_Data_m68CD4A6A914A8493DC327848521DA18278C1D8C4(L_0, NULL);
		cs_OnMessage_mBD7429DAF9097DDC23EA7AEEB3C4240E05D15512(__this, L_1, NULL);
		return;
	}
}
// System.Void cs::<Ws_OnOpen>b__15_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_U3CWs_OnOpenU3Eb__15_0_mE27265814E2E75E851157CA95CE208D90394FF46 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4201E7DFA1E2A56F383E667501EAC549089761B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"=== Ws_OnOpen");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF4201E7DFA1E2A56F383E667501EAC549089761B, NULL);
		// CreatePeer();
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_0;
		L_0 = cs_CreatePeer_m633A3E10BBDF5D765ADCDD0E3FCA8E1DDCA98FAA(__this, NULL);
		// StartCoroutine(CreateDesc(RTCSdpType.Offer));
		RuntimeObject* L_1;
		L_1 = cs_CreateDesc_m2667E0B98E904FF9F092F3BF62E791B4C52DFC32(__this, 0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }, null);
		return;
	}
}
// System.Void cs::<CreatePeer>b__21_0(Unity.WebRTC.RTCIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_U3CCreatePeerU3Eb__21_0_m404BF921B38A5EDD42BD845E42BA994AD1BDB343 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* ___cand0, const RuntimeMethod* method) 
{
	{
		// Send(SignalingMessage.FromCand(cand));
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_0 = ___cand0;
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_1;
		L_1 = SignalingMessage_FromCand_mAB701000892FC74C9A18CAF73F05782C914B70DC(L_0, NULL);
		cs_Send_m23139E0290FA5D0E25BB6FE34C34AB5ED11A8C54(__this, L_1, NULL);
		// };
		return;
	}
}
// System.Void cs::<CreatePeer>b__21_3(Unity.WebRTC.RTCTrackEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cs_U3CCreatePeerU3Eb__21_3_m598C3B0C02936CAEA35B821E1585C8CF0454F026 (cs_t067FC2BA45CD2201EC75EF927291706D0C648239* __this, RTCTrackEvent_t4D4EAF5A7C373AC90F758F3000434B3C151D29CA* ___evt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cs_VideoTrack_OnVideoReceived_mA3D3C677CE323947695CC46E6C7228D1BB660D8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* V_0 = NULL;
	{
		// if (evt.Track is VideoStreamTrack videoTrack)
		RTCTrackEvent_t4D4EAF5A7C373AC90F758F3000434B3C151D29CA* L_0 = ___evt0;
		NullCheck(L_0);
		MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6* L_1;
		L_1 = RTCTrackEvent_get_Track_mFC03A93642EC435732A67FE9238C94FB49FC5CF7(L_0, NULL);
		V_0 = ((VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B*)IsInstClass((RuntimeObject*)L_1, VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var));
		VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// videoTrack.OnVideoReceived += VideoTrack_OnVideoReceived;
		VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_3 = V_0;
		OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF* L_4 = (OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF*)il2cpp_codegen_object_new(OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnVideoReceived__ctor_m795356B7B5C24017B50233288A9B3A4705868046(L_4, __this, (intptr_t)((void*)cs_VideoTrack_OnVideoReceived_mA3D3C677CE323947695CC46E6C7228D1BB660D8E_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VideoStreamTrack_add_OnVideoReceived_m88D0D6D53D3814F32A377111891E7F2F6DFFDB1E(L_3, L_4, NULL);
	}

IL_0021:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.WebRTC.RTCSessionDescription cs/SignalingMessage::ToDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 SignalingMessage_ToDesc_mC29F346138ECF5CCA50676F85059A8EEFC430D69 (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8);
		s_Il2CppMethodInitialized = true;
	}
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* G_B2_0 = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* G_B3_1 = NULL;
	{
		// return new RTCSessionDescription
		// {
		//     type = type == "offer" ? RTCSdpType.Offer : RTCSdpType.Answer,
		//     sdp = sdp
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04));
		String_t* L_0 = __this->___type_0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8, NULL);
		G_B1_0 = (&V_0);
		if (L_1)
		{
			G_B2_0 = (&V_0);
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		G_B3_1->___type_0 = G_B3_0;
		String_t* L_2 = __this->___sdp_1;
		(&V_0)->___sdp_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___sdp_1), (void*)L_2);
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_3 = V_0;
		return L_3;
	}
}
// Unity.WebRTC.RTCIceCandidate cs/SignalingMessage::ToCand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* SignalingMessage_ToCand_mD3E113E77DDC1FFFA6BF4FB69CFC84DFEBA3B95B (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new RTCIceCandidate(new RTCIceCandidateInit
		// {
		//     candidate = candidate,
		//     sdpMid = sdpMid,
		//     sdpMLineIndex = sdpMLineIndex
		// });
		RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9* L_0 = (RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9*)il2cpp_codegen_object_new(RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RTCIceCandidateInit__ctor_mA0CE36E1BA753B3D74552C7B1356F058BF210E9F(L_0, NULL);
		RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9* L_1 = L_0;
		String_t* L_2 = __this->___candidate_2;
		NullCheck(L_1);
		L_1->___candidate_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___candidate_0), (void*)L_2);
		RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9* L_3 = L_1;
		String_t* L_4 = __this->___sdpMid_3;
		NullCheck(L_3);
		L_3->___sdpMid_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___sdpMid_1), (void*)L_4);
		RTCIceCandidateInit_t53B969F1B552C4A071DA16F855C6E12A68DDB0E9* L_5 = L_3;
		int32_t L_6 = __this->___sdpMLineIndex_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___sdpMLineIndex_2 = L_7;
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_8 = (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4*)il2cpp_codegen_object_new(RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		RTCIceCandidate__ctor_m164E2BFC8204774E120D7E74DD6E8D3C5C85124B(L_8, L_5, NULL);
		return L_8;
	}
}
// cs/SignalingMessage cs/SignalingMessage::FromDesc(Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* SignalingMessage_FromDesc_m0EF5986E878D5E27BA5DDE2032D702C696E41651 (RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___desc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30);
		s_Il2CppMethodInitialized = true;
	}
	SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* G_B2_0 = NULL;
	SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* G_B2_1 = NULL;
	SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* G_B1_0 = NULL;
	SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* G_B3_1 = NULL;
	SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* G_B3_2 = NULL;
	{
		// return new SignalingMessage
		// {
		//     type = desc.type == RTCSdpType.Offer ? "offer" : "answer",
		//     sdp = desc.sdp
		// };
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_0 = (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA*)il2cpp_codegen_object_new(SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignalingMessage__ctor_mE2197DA609BA807059163FF9FA79F2ECB09177F9(L_0, NULL);
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_1 = L_0;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_2 = ___desc0;
		int32_t L_3 = L_2.___type_0;
		G_B1_0 = L_1;
		G_B1_1 = L_1;
		if (!L_3)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_1;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___type_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___type_0), (void*)G_B3_0);
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_4 = G_B3_2;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_5 = ___desc0;
		String_t* L_6 = L_5.___sdp_1;
		NullCheck(L_4);
		L_4->___sdp_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sdp_1), (void*)L_6);
		return L_4;
	}
}
// cs/SignalingMessage cs/SignalingMessage::FromCand(Unity.WebRTC.RTCIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* SignalingMessage_FromCand_mAB701000892FC74C9A18CAF73F05782C914B70DC (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* ___cand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new SignalingMessage
		// {
		//     type = "candidate",
		//     candidate = cand.Candidate,
		//     sdpMid = cand.SdpMid,
		//     sdpMLineIndex = cand.SdpMLineIndex.Value
		// };
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_0 = (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA*)il2cpp_codegen_object_new(SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignalingMessage__ctor_mE2197DA609BA807059163FF9FA79F2ECB09177F9(L_0, NULL);
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_0 = _stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___type_0), (void*)_stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669);
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_2 = L_1;
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_3 = ___cand0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = RTCIceCandidate_get_Candidate_m72D6C96D4B55F5B6AD526DEA591EA187F523FC33(L_3, NULL);
		NullCheck(L_2);
		L_2->___candidate_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___candidate_2), (void*)L_4);
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_5 = L_2;
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_6 = ___cand0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = RTCIceCandidate_get_SdpMid_m6C861CD69BA17EBB90A33F6552B8311B18D8EE3C(L_6, NULL);
		NullCheck(L_5);
		L_5->___sdpMid_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___sdpMid_3), (void*)L_7);
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_8 = L_5;
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_9 = ___cand0;
		NullCheck(L_9);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10;
		L_10 = RTCIceCandidate_get_SdpMLineIndex_m3473B7A6D73AF1BF329BDE27EA979304B3778B5C(L_9, NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_0), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___sdpMLineIndex_4 = L_11;
		return L_8;
	}
}
// System.Void cs/SignalingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalingMessage__ctor_mE2197DA609BA807059163FF9FA79F2ECB09177F9 (SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cs/<get>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetU3Ed__11__ctor_m77DD63CC4F75F3C6EE788CFD1FBE7EB837353E0E (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void cs/<get>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetU3Ed__11_System_IDisposable_Dispose_mC69778679BEE46086C0CDB887C8252B01CA748F2 (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean cs/<get>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetU3Ed__11_MoveNext_m70AC704561A6C36DA982981D91747284F5102F51 (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03321B4C6A0DC25D266C25BD256720C04551D112);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6EB8216D6C7B4105917D97B27F450193394B177);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3EBFB3857AB7509CA87AEFFFC96324784E871CC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log($"===GET");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD3EBFB3857AB7509CA87AEFFFC96324784E871CC, NULL);
		// var req = UnityWebRequest.Get("https://google.com");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3;
		L_3 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(_stringLiteralB6EB8216D6C7B4105917D97B27F450193394B177, NULL);
		__this->___U3CreqU3E5__2_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_2), (void*)L_3);
		// yield return req.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->___U3CreqU3E5__2_2;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
		L_5 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log($"===Get Result {req.responseCode}> {req.downloadHandler.text}");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CreqU3E5__2_2;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_6, NULL);
		int64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_8);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CreqU3E5__2_2;
		NullCheck(L_10);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_11;
		L_11 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral03321B4C6A0DC25D266C25BD256720C04551D112, L_9, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object cs/<get>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgetU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC2B34A19D88C2B6D7F9C4E833C9B53BFD23F45EA (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void cs/<get>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetU3Ed__11_System_Collections_IEnumerator_Reset_mDFCD8E67A8F06708D9726F55CB6602F34D02694C (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetU3Ed__11_System_Collections_IEnumerator_Reset_mDFCD8E67A8F06708D9726F55CB6602F34D02694C_RuntimeMethod_var)));
	}
}
// System.Object cs/<get>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgetU3Ed__11_System_Collections_IEnumerator_get_Current_m8E7895B920079EFB747C1FF473B9CD37875B0F88 (U3CgetU3Ed__11_t83A49E875D6ED4EA5D98645D80D360C94A64D94A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cs/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m9B19DCF8804485BC9FD580E2A9C42AAFF7E2883F (U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void cs/<>c__DisplayClass14_0::<Ws_OnClose>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CWs_OnCloseU3Eb__0_mB6791687DB7F1E0356EC8C0856B246E14AAA18BE (U3CU3Ec__DisplayClass14_0_tAB8DD7DD85C03317F66FB43AB2F2176DD0260E99* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B276E2F680053872996104D1B4FE397BDD8AA7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8EB3038EEC3698AFEE476BE3F98A7A3DFC61443);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* G_B2_0 = NULL;
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* G_B1_0 = NULL;
	{
		// Debug.Log($"=== Ws_OnClose > code: {e.Code}, reason:{e.Reason}");
		CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* L_0 = __this->___e_0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = CloseEventArgs_get_Code_m2E0325F4200D8AF0CA5537A890DAEC2670D197F4(L_0, NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* L_4 = __this->___e_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = CloseEventArgs_get_Reason_m6A44D1218D4817D12EC9DBD14D9BD68E7B58BB29(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral6B276E2F680053872996104D1B4FE397BDD8AA7A, L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// ws?.Close();
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_7 = __this->___U3CU3E4__this_1;
		NullCheck(L_7);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_8 = L_7->___ws_11;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_9 = L_8;
		G_B1_0 = L_9;
		if (L_9)
		{
			G_B2_0 = L_9;
			goto IL_003b;
		}
	}
	{
		goto IL_0040;
	}

IL_003b:
	{
		NullCheck(G_B2_0);
		WebSocket_Close_mE3876CFD424A250CA1BCB2079D7AA009E795FFC4(G_B2_0, NULL);
	}

IL_0040:
	{
		// ws = null;
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_10 = __this->___U3CU3E4__this_1;
		NullCheck(L_10);
		L_10->___ws_11 = (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___ws_11), (void*)(WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)NULL);
		// Invoke("ConnectSignaling", 3f);
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_11 = __this->___U3CU3E4__this_1;
		NullCheck(L_11);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(L_11, _stringLiteralF8EB3038EEC3698AFEE476BE3F98A7A3DFC61443, (3.0f), NULL);
		// }, null);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cs/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mF2602C983EB0B46433CB721623DF235945AE3AEB (U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void cs/<>c__DisplayClass18_0::<OnMessage>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3COnMessageU3Eb__0_m9E6056D2E7663EC871253D633A3D695B477B153D (U3CU3Ec__DisplayClass18_0_t3DF7E04C8B797ABB794638B5975A272E653AE5FA* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_m6DD4C7FCEEB91D5C01A96FA4C75378B97658C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6858330AEA4B60CCDD83693B5A7DA40E5458D1F2);
		s_Il2CppMethodInitialized = true;
	}
	SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* V_0 = NULL;
	{
		// var msg = JsonUtility.FromJson<SignalingMessage>(data);
		String_t* L_0 = __this->___data_0;
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_1;
		L_1 = JsonUtility_FromJson_TisSignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_m6DD4C7FCEEB91D5C01A96FA4C75378B97658C2D3(L_0, JsonUtility_FromJson_TisSignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA_m6DD4C7FCEEB91D5C01A96FA4C75378B97658C2D3_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Log($"=== OnMessage > {msg.type}");
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___type_0;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6858330AEA4B60CCDD83693B5A7DA40E5458D1F2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// if (peer == null)
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_6 = L_5->___peer_9;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// CreatePeer();
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_7 = __this->___U3CU3E4__this_1;
		NullCheck(L_7);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_8;
		L_8 = cs_CreatePeer_m633A3E10BBDF5D765ADCDD0E3FCA8E1DDCA98FAA(L_7, NULL);
	}

IL_003a:
	{
		// if (msg.type == "candidate")
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___type_0;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// peer.AddIceCandidate(msg.ToCand());
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_12 = __this->___U3CU3E4__this_1;
		NullCheck(L_12);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_13 = L_12->___peer_9;
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_14 = V_0;
		NullCheck(L_14);
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_15;
		L_15 = SignalingMessage_ToCand_mD3E113E77DDC1FFFA6BF4FB69CFC84DFEBA3B95B(L_14, NULL);
		NullCheck(L_13);
		bool L_16;
		L_16 = RTCPeerConnection_AddIceCandidate_mFF8063BC4DA7DE4FE0DCA8C842397A3D3F58BF50(L_13, L_15, NULL);
		return;
	}

IL_0064:
	{
		// StartCoroutine(SetDesc(Side.Remote, msg.ToDesc()));
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_17 = __this->___U3CU3E4__this_1;
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_18 = __this->___U3CU3E4__this_1;
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_19 = V_0;
		NullCheck(L_19);
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_20;
		L_20 = SignalingMessage_ToDesc_mC29F346138ECF5CCA50676F85059A8EEFC430D69(L_19, NULL);
		NullCheck(L_18);
		RuntimeObject* L_21;
		L_21 = cs_SetDesc_m39E6BA5251F72C6735D7B63B6E47DD924390C1A2(L_18, 1, L_20, NULL);
		NullCheck(L_17);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_17, L_21, NULL);
		// }, null);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cs/<CreateDesc>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDescU3Ed__19__ctor_m96AB759FD8AE22B95A9A1D6E7EBC4AD0F0E952E0 (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void cs/<CreateDesc>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDescU3Ed__19_System_IDisposable_Dispose_m2B2D6ACB0294E74D111084490538B8A2BA648602 (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean cs/<CreateDesc>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateDescU3Ed__19_MoveNext_m1073DC462F8D5787077B2A3A488C15E2DE97D519 (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD38B3A6C796AE77A2C1D29A4616540351FE94A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	cs_t067FC2BA45CD2201EC75EF927291706D0C648239* V_1 = NULL;
	U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* G_B5_0 = NULL;
	U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* G_B4_0 = NULL;
	RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* G_B6_0 = NULL;
	U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log($"=== CreateDesc > {type}");
		int32_t L_4 = __this->___type_2;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9CD38B3A6C796AE77A2C1D29A4616540351FE94A, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// var op = type == RTCSdpType.Offer ? peer.CreateOffer() : peer.CreateAnswer();
		int32_t L_8 = __this->___type_2;
		G_B4_0 = __this;
		if (!L_8)
		{
			G_B5_0 = __this;
			goto IL_004e;
		}
	}
	{
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_9 = V_1;
		NullCheck(L_9);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_10 = L_9->___peer_9;
		NullCheck(L_10);
		RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* L_11;
		L_11 = RTCPeerConnection_CreateAnswer_m5F0B054618405F0E2D5682AF121936BCD33DA1E5(L_10, NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		goto IL_0059;
	}

IL_004e:
	{
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_12 = V_1;
		NullCheck(L_12);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_13 = L_12->___peer_9;
		NullCheck(L_13);
		RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* L_14;
		L_14 = RTCPeerConnection_CreateOffer_mBCC6AA1A090E6340816F09A8B9EC32A186184D5A(L_13, NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_0059:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CopU3E5__2_4 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CopU3E5__2_4), (void*)G_B6_0);
		// yield return op;
		RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* L_15 = __this->___U3CopU3E5__2_4;
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0073:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (op.IsError)
		RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* L_16 = __this->___U3CopU3E5__2_4;
		NullCheck(L_16);
		bool L_17;
		L_17 = AsyncOperationBase_get_IsError_mE62C0F4F75BDBCB7B4ED590CBC38C0F0B1AE494A_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		// Debug.LogError(op.Error.message);
		RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* L_18 = __this->___U3CopU3E5__2_4;
		NullCheck(L_18);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_19;
		L_19 = AsyncOperationBase_get_Error_m8D2265FF78156B2BCF8334F6CEAC5C53BE7D0C98_inline(L_18, NULL);
		String_t* L_20 = L_19.___message_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_20, NULL);
		// yield break;
		return (bool)0;
	}

IL_009e:
	{
		// StartCoroutine(SetDesc(Side.Local, op.Desc));
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_21 = V_1;
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_22 = V_1;
		RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* L_23 = __this->___U3CopU3E5__2_4;
		NullCheck(L_23);
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_24;
		L_24 = RTCSessionDescriptionAsyncOperation_get_Desc_m6B2EF7D9EF0737D24C05B0D40BA83E6746FA1F04_inline(L_23, NULL);
		NullCheck(L_22);
		RuntimeObject* L_25;
		L_25 = cs_SetDesc_m39E6BA5251F72C6735D7B63B6E47DD924390C1A2(L_22, 0, L_24, NULL);
		NullCheck(L_21);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_21, L_25, NULL);
		// }
		return (bool)0;
	}
}
// System.Object cs/<CreateDesc>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateDescU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9B949960D48FACB2D55CF6B5EEB2676E2CA30695 (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void cs/<CreateDesc>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDescU3Ed__19_System_Collections_IEnumerator_Reset_m7A8BCF9005719E066A7AA35625E1981513CF3F45 (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateDescU3Ed__19_System_Collections_IEnumerator_Reset_m7A8BCF9005719E066A7AA35625E1981513CF3F45_RuntimeMethod_var)));
	}
}
// System.Object cs/<CreateDesc>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateDescU3Ed__19_System_Collections_IEnumerator_get_Current_m2709BEE8E99C98E11B37438E686791DA4AD960A5 (U3CCreateDescU3Ed__19_tAFAE9420509DC4C172F70EE777DBA198B930B08E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cs/<SetDesc>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDescU3Ed__20__ctor_m18D01EDB87727407CE874ABC9E4FEF53A09BCED9 (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void cs/<SetDesc>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDescU3Ed__20_System_IDisposable_Dispose_mA10D933CD260AD825BE92B21C08CE339D4AA19CB (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean cs/<SetDesc>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetDescU3Ed__20_MoveNext_mEEACD6A69FD92E1379247B2B9703498EACDB3A68 (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Side_tAE667DA83CE9205CBD7A71352BC437C330F034B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC868B03AD485E3A4B44B845E128B7E5E95125C11);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	cs_t067FC2BA45CD2201EC75EF927291706D0C648239* V_1 = NULL;
	U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* G_B4_0 = NULL;
	U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* G_B3_0 = NULL;
	RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* G_B5_0 = NULL;
	U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_00b6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log($"=== SetDesc > {side}, {desc.type}");
		int32_t L_3 = __this->___side_2;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Side_tAE667DA83CE9205CBD7A71352BC437C330F034B9_il2cpp_TypeInfo_var, &L_4);
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* L_6 = (&__this->___desc_3);
		int32_t L_7 = L_6->___type_0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralC868B03AD485E3A4B44B845E128B7E5E95125C11, L_5, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// var op = side == Side.Local ? peer.SetLocalDescription(ref desc) : peer.SetRemoteDescription(ref desc);
		int32_t L_11 = __this->___side_2;
		G_B3_0 = __this;
		if (!L_11)
		{
			G_B4_0 = __this;
			goto IL_006f;
		}
	}
	{
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_12 = V_1;
		NullCheck(L_12);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_13 = L_12->___peer_9;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* L_14 = (&__this->___desc_3);
		NullCheck(L_13);
		RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* L_15;
		L_15 = RTCPeerConnection_SetRemoteDescription_m8775354452F39D7505F3A30A0B542432C1B427A2(L_13, L_14, NULL);
		G_B5_0 = L_15;
		G_B5_1 = G_B3_0;
		goto IL_0080;
	}

IL_006f:
	{
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_16 = V_1;
		NullCheck(L_16);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_17 = L_16->___peer_9;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* L_18 = (&__this->___desc_3);
		NullCheck(L_17);
		RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* L_19;
		L_19 = RTCPeerConnection_SetLocalDescription_m47D48FEACF7EC5F1D7E2FCD52BA28384BCD41EB8(L_17, L_18, NULL);
		G_B5_0 = L_19;
		G_B5_1 = G_B4_0;
	}

IL_0080:
	{
		NullCheck(G_B5_1);
		G_B5_1->___U3CopU3E5__2_5 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___U3CopU3E5__2_5), (void*)G_B5_0);
		// yield return op;
		RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* L_20 = __this->___U3CopU3E5__2_5;
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return op;
		RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* L_21 = __this->___U3CopU3E5__2_5;
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (op.IsError)
		RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* L_22 = __this->___U3CopU3E5__2_5;
		NullCheck(L_22);
		bool L_23;
		L_23 = AsyncOperationBase_get_IsError_mE62C0F4F75BDBCB7B4ED590CBC38C0F0B1AE494A_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_00e1;
		}
	}
	{
		// Debug.LogError(op.Error.message);
		RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* L_24 = __this->___U3CopU3E5__2_5;
		NullCheck(L_24);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_25;
		L_25 = AsyncOperationBase_get_Error_m8D2265FF78156B2BCF8334F6CEAC5C53BE7D0C98_inline(L_24, NULL);
		String_t* L_26 = L_25.___message_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_26, NULL);
		// yield break;
		return (bool)0;
	}

IL_00e1:
	{
		// if (side == Side.Local)
		int32_t L_27 = __this->___side_2;
		if (L_27)
		{
			goto IL_00fc;
		}
	}
	{
		// Send(SignalingMessage.FromDesc(desc));
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_28 = V_1;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_29 = __this->___desc_3;
		SignalingMessage_tFC306985ACA15110045AD0F4EE4048567A7BAEAA* L_30;
		L_30 = SignalingMessage_FromDesc_m0EF5986E878D5E27BA5DDE2032D702C696E41651(L_29, NULL);
		NullCheck(L_28);
		cs_Send_m23139E0290FA5D0E25BB6FE34C34AB5ED11A8C54(L_28, L_30, NULL);
		goto IL_0117;
	}

IL_00fc:
	{
		// else if (desc.type == RTCSdpType.Offer)
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* L_31 = (&__this->___desc_3);
		int32_t L_32 = L_31->___type_0;
		if (L_32)
		{
			goto IL_0117;
		}
	}
	{
		// StartCoroutine(CreateDesc(RTCSdpType.Answer));
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_33 = V_1;
		cs_t067FC2BA45CD2201EC75EF927291706D0C648239* L_34 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = cs_CreateDesc_m2667E0B98E904FF9F092F3BF62E791B4C52DFC32(L_34, 2, NULL);
		NullCheck(L_33);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_36;
		L_36 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_33, L_35, NULL);
	}

IL_0117:
	{
		// }
		return (bool)0;
	}
}
// System.Object cs/<SetDesc>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetDescU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m71AFF06D6BF0E0E0B4C1DAABCD217686E3B95090 (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void cs/<SetDesc>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDescU3Ed__20_System_Collections_IEnumerator_Reset_m4C2F178ACE1F0982A575A306A8D925937EE1BCCD (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetDescU3Ed__20_System_Collections_IEnumerator_Reset_m4C2F178ACE1F0982A575A306A8D925937EE1BCCD_RuntimeMethod_var)));
	}
}
// System.Object cs/<SetDesc>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetDescU3Ed__20_System_Collections_IEnumerator_get_Current_mAD02EC77B3E91DC8F0B3D347D7A01562D4807A68 (U3CSetDescU3Ed__20_t3037E20FCC3CECA74D241374053BACEC95FB357C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cs/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m15916FCD0481E9F84EAEFFE71C9DA151BFDB5CAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* L_0 = (U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF*)il2cpp_codegen_object_new(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6F8EB055C93F766C95E8D44043D4750D0019AC26(L_0, NULL);
		((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void cs/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6F8EB055C93F766C95E8D44043D4750D0019AC26 (U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void cs/<>c::<CreatePeer>b__21_1(Unity.WebRTC.RTCIceGatheringState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreatePeerU3Eb__21_1_mBA9DB23328A3735348A4619BBF069F2814983690 (U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE78325C06CCD2AD720C54C87BEB746CAADF77D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"OnIceGatheringStateChange > ${state}");
		int32_t L_0 = ___state0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralAE78325C06CCD2AD720C54C87BEB746CAADF77D0, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// };
		return;
	}
}
// System.Void cs/<>c::<CreatePeer>b__21_2(Unity.WebRTC.RTCPeerConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreatePeerU3Eb__21_2_m02BDCE2A7BFBDBDD9517B434D16B046473CD2ECA (U3CU3Ec_tF32D02E6A840A6ABA6B5F0A5A8F6D1E9110BB8BF* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A25B1D950E15A315A70A565578BFDC91C3AAC33);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"OnConnectionStateChange > ${state}");
		int32_t L_0 = ___state0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3A25B1D950E15A315A70A565578BFDC91C3AAC33, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnIceCandidate_m91B18C3CBA7F82BBBA0FE10D8251B830ACAE25E4_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* ___value0, const RuntimeMethod* method) 
{
	{
		// public DelegateOnIceCandidate OnIceCandidate { get; set; }
		DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* L_0 = ___value0;
		__this->___U3COnIceCandidateU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnIceCandidateU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnIceGatheringStateChange_mAEBC40950256C34A9CB68840FA26FDCC7791AFDE_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* ___value0, const RuntimeMethod* method) 
{
	{
		// public DelegateOnIceGatheringStateChange OnIceGatheringStateChange { get; set; }
		DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* L_0 = ___value0;
		__this->___U3COnIceGatheringStateChangeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnIceGatheringStateChangeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnConnectionStateChange_m08B0324E91E2E057AD2C36BF0EF175F99F35FA4D_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* ___value0, const RuntimeMethod* method) 
{
	{
		// public DelegateOnConnectionStateChange OnConnectionStateChange { get; set; }
		DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* L_0 = ___value0;
		__this->___U3COnConnectionStateChangeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnConnectionStateChangeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCPeerConnection_set_OnTrack_mFC24230DF8CCAB0D65D01BE0116DE7AA9FEB765E_inline (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* ___value0, const RuntimeMethod* method) 
{
	{
		// public DelegateOnTrack OnTrack { get; set; }
		DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* L_0 = ___value0;
		__this->___U3COnTrackU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnTrackU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsError_mE62C0F4F75BDBCB7B4ED590CBC38C0F0B1AE494A_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsError { get; internal set; }
		bool L_0 = __this->___U3CIsErrorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E AsyncOperationBase_get_Error_m8D2265FF78156B2BCF8334F6CEAC5C53BE7D0C98_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public RTCError Error { get; internal set; }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = __this->___U3CErrorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 RTCSessionDescriptionAsyncOperation_get_Desc_m6B2EF7D9EF0737D24C05B0D40BA83E6746FA1F04_inline (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, const RuntimeMethod* method) 
{
	{
		// public RTCSessionDescription Desc { get; internal set; }
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_0 = __this->___U3CDescU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
