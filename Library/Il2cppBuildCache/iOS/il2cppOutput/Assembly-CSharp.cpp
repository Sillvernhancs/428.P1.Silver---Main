#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Threading.Mutex
struct Mutex_t20344F093646D8679E9E11939981AE14DD8B3148;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TextureScale
struct TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// TimeUpdater1
struct TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684;
// TimeUpdater2
struct TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WeatherAPIScript1
struct WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE;
// WeatherAPIscript2
struct WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF;
// egyptSunScript
struct egyptSunScript_t2A210D0A51780147AC7DF235DDD02A32AFA85194;
// mcSunScript
struct mcSunScript_t09E524C497F9A17E236406E25434ED951EAE8E38;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TextureScale/ThreadData
struct ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD;
// TimeUpdater1/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645;
// TimeUpdater2/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E;
// WeatherAPIScript1/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937;
// WeatherAPIscript2/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mutex_t20344F093646D8679E9E11939981AE14DD8B3148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D624BE517893410AA118931741AD1D74FB8703B;
IL2CPP_EXTERN_C String_t* _stringLiteral13020C7689DCCE76E8F88E23D6F329286413894E;
IL2CPP_EXTERN_C String_t* _stringLiteral13E51B57FC699BC6033620BE8642537C54777D01;
IL2CPP_EXTERN_C String_t* _stringLiteral18FF4EE509547E9F427ED4CBAD56460397F93F60;
IL2CPP_EXTERN_C String_t* _stringLiteral1E91C5CB993384E58E4DCE3EB04D01B0D6FEBFFD;
IL2CPP_EXTERN_C String_t* _stringLiteral3F1770B743B80474FFFD2821DAE0D18F8DABC620;
IL2CPP_EXTERN_C String_t* _stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral983ADA04D54A347164F53885C2B5CE8C39B39045;
IL2CPP_EXTERN_C String_t* _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5;
IL2CPP_EXTERN_C String_t* _stringLiteralB659606F6D26276A5A6D04D70208535DA638384F;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC720F67EA4F3A3871E35FB8356D4F582B9231D;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D369069F4E0463F888B8497ED744C442D370BC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA3C4754D00EF20A9AE9BEAA4EF602AAB1F54210;
IL2CPP_EXTERN_C String_t* _stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC;
IL2CPP_EXTERN_C String_t* _stringLiteralE09111D52D669D3376EF66985AEFF772324DA330;
IL2CPP_EXTERN_C String_t* _stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10;
IL2CPP_EXTERN_C String_t* _stringLiteralEA811744D9B9BE2E63475E7F40E1CE937EA6FF3D;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_BilinearScale_m37DACBBA5C3127D74C6FCAE04FA997B774E69663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_PointScale_m224AD40E0FCDC84E1EA520DBF35BF17DDC9D69CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m05E17AC1094587D84A814C8F5E0DF787FC368168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m89D803285F126CB3094D10C81C321C1EF167E6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m8A07D6765EBDAA889F9BD2A51D871B90E86D460E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_mE2CA7FC4DA3D7BA1D1A05FEC495522D9B4127B4F_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;

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
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// TextureScale
struct TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952  : public RuntimeObject
{
};

struct TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields
{
	// UnityEngine.Color[] TextureScale::texColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___texColors_0;
	// UnityEngine.Color[] TextureScale::newColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___newColors_1;
	// System.Int32 TextureScale::w
	int32_t ___w_2;
	// System.Single TextureScale::ratioX
	float ___ratioX_3;
	// System.Single TextureScale::ratioY
	float ___ratioY_4;
	// System.Int32 TextureScale::w2
	int32_t ___w2_5;
	// System.Int32 TextureScale::finishCount
	int32_t ___finishCount_6;
	// System.Threading.Mutex TextureScale::mutex
	Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* ___mutex_7;
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

// TextureScale/ThreadData
struct ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD  : public RuntimeObject
{
	// System.Int32 TextureScale/ThreadData::start
	int32_t ___start_0;
	// System.Int32 TextureScale/ThreadData::end
	int32_t ___end_1;
};

// TimeUpdater1/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645  : public RuntimeObject
{
	// System.Int32 TimeUpdater1/<GetRequest>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TimeUpdater1/<GetRequest>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String TimeUpdater1/<GetRequest>d__4::url
	String_t* ___url_2;
	// TimeUpdater1 TimeUpdater1/<GetRequest>d__4::<>4__this
	TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest TimeUpdater1/<GetRequest>d__4::<webRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__2_4;
};

// TimeUpdater2/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E  : public RuntimeObject
{
	// System.Int32 TimeUpdater2/<GetRequest>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TimeUpdater2/<GetRequest>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String TimeUpdater2/<GetRequest>d__4::url
	String_t* ___url_2;
	// TimeUpdater2 TimeUpdater2/<GetRequest>d__4::<>4__this
	TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest TimeUpdater2/<GetRequest>d__4::<webRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__2_4;
};

// WeatherAPIScript1/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937  : public RuntimeObject
{
	// System.Int32 WeatherAPIScript1/<GetRequest>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WeatherAPIScript1/<GetRequest>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String WeatherAPIScript1/<GetRequest>d__4::uri
	String_t* ___uri_2;
	// WeatherAPIScript1 WeatherAPIScript1/<GetRequest>d__4::<>4__this
	WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest WeatherAPIScript1/<GetRequest>d__4::<webRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__2_4;
};

// WeatherAPIscript2/<GetRequest>d__4
struct U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36  : public RuntimeObject
{
	// System.Int32 WeatherAPIscript2/<GetRequest>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WeatherAPIscript2/<GetRequest>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String WeatherAPIscript2/<GetRequest>d__4::uri
	String_t* ___uri_2;
	// WeatherAPIscript2 WeatherAPIscript2/<GetRequest>d__4::<>4__this
	WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest WeatherAPIscript2/<GetRequest>d__4::<webRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__2_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Threading.Mutex
struct Mutex_t20344F093646D8679E9E11939981AE14DD8B3148  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9  : public MulticastDelegate_t
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TimeUpdater1
struct TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TimeUpdater1::timeTextObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___timeTextObject_4;
	// System.String TimeUpdater1::url
	String_t* ___url_5;
};

// TimeUpdater2
struct TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TimeUpdater2::timeTextObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___timeTextObject_4;
	// System.String TimeUpdater2::url
	String_t* ___url_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WeatherAPIScript1
struct WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WeatherAPIScript1::weatherTextObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___weatherTextObject_4;
	// System.String WeatherAPIScript1::url
	String_t* ___url_5;
};

// WeatherAPIscript2
struct WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WeatherAPIscript2::weatherTextObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___weatherTextObject_4;
	// System.String WeatherAPIscript2::url
	String_t* ___url_5;
};

// egyptSunScript
struct egyptSunScript_t2A210D0A51780147AC7DF235DDD02A32AFA85194  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject egyptSunScript::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_4;
	// UnityEngine.GameObject egyptSunScript::sun
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sun_5;
	// System.Int32 egyptSunScript::state
	int32_t ___state_6;
};

// mcSunScript
struct mcSunScript_t09E524C497F9A17E236406E25434ED951EAE8E38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject mcSunScript::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_4;
	// UnityEngine.GameObject mcSunScript::sun
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sun_5;
	// System.Int32 mcSunScript::state
	int32_t ___state_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_m24E9BA5BFA10621C3F4A7B7D27D922A779C2A810 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m9161DEC1BC6A1D2431C23A291D3EDB288C2D9BD0 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void System.Threading.Mutex::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex__ctor_m5B66DF00F3580EB657EE520E65D2929B243863C9 (Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* __this, bool ___initiallyOwned0, const RuntimeMethod* method) ;
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2 (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method) ;
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718 (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, RuntimeObject* ___parameter0, const RuntimeMethod* method) ;
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m37DACBBA5C3127D74C6FCAE04FA997B774E69663 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_m224AD40E0FCDC84E1EA520DBF35BF17DDC9D69CD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Texture2D::Reinitialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextureScale_ColorLerpUnclamped_mB1FF3F3245A6EAFC403562EE0495576104B2DA21 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c10, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c21, float ___value2, const RuntimeMethod* method) ;
// System.Void System.Threading.Mutex::ReleaseMutex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex_ReleaseMutex_m72AE23EAAF122BA84AB32006A01D6B2D4A4B167C (Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TimeUpdater1::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeUpdater1_GetRequest_mB6481FA3CCA8018451A2186D0F3ABE1ED6035EC8 (TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* __this, String_t* ___url0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void TimeUpdater1/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_mF37249817A1C263A04A60720F02388E54AE63DBF (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TimeUpdater1/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m8C52E3943B675F40844F725BF949E9CA23BDD756 (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) ;
// System.Void TimeUpdater1/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m838DDD931D2CF19E4E2F07DECCA5589177A41C80 (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817 (String_t* ___s0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TimeUpdater2::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeUpdater2_GetRequest_m5FA93ED2A3CAFAE540D84E2875D59150A27A73C8 (TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Void TimeUpdater2/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_m88CC8DCF0BD35E568344FA80984567FF31143ABA (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TimeUpdater2/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m3B784A632422EECBD057F510B4AE4691719D8912 (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) ;
// System.Void TimeUpdater2/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_mF9F6DCDA253B2AC21B23F0A094281B6AA2561F98 (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WeatherAPIScript1::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeatherAPIScript1_GetRequest_mD386A8E36924EAACCA8FDDCF063545B5E320D04B (WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* __this, String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void WeatherAPIScript1/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_m7E230C9B17852C89289C5AC8AFBA8149F5A9A443 (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void WeatherAPIScript1/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m0CF5CB0A50DD170386959EE1A8E21EFF49215F8B (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) ;
// System.Void WeatherAPIScript1/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m18524ABE1DAAE197F4CC1BE48EA61E5282EF8C75 (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WeatherAPIscript2::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeatherAPIscript2_GetRequest_mC22D611DD75580257D07DB80C250BF773445D346 (WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* __this, String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void WeatherAPIscript2/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_m00F4F0935F1ADC37EBB59C1EBF33A6B72803080E (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void WeatherAPIscript2/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m30E71439289E60ED5CF100AC95E15F5080080FA5 (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) ;
// System.Void WeatherAPIscript2/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m4177E9D414C3F431C8281B651D83863FCAD3C34F (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) ;
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
// System.Void egyptSunScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void egyptSunScript_Update_m994FFF8CE572D79E9F0406BFAE199D413BDFFFB0 (egyptSunScript_t2A210D0A51780147AC7DF235DDD02A32AFA85194* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB659606F6D26276A5A6D04D70208535DA638384F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC720F67EA4F3A3871E35FB8356D4F582B9231D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector3.Dot(cube.transform.up, Vector3.down) > 0) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_4;
		L_4 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_2, L_3, NULL);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Debug.Log("upside down");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralCCC720F67EA4F3A3871E35FB8356D4F582B9231D, NULL);
		// if (state == 0) {
		int32_t L_5 = __this->___state_6;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		// state = 1;
		__this->___state_6 = 1;
		goto IL_007a;
	}

IL_003c:
	{
		// } else if (state == 2) {
		int32_t L_6 = __this->___state_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}
	{
		// state = 3;
		__this->___state_6 = 3;
		goto IL_007a;
	}

IL_004e:
	{
		// Debug.Log("right side up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB659606F6D26276A5A6D04D70208535DA638384F, NULL);
		// if (state == 1) {
		int32_t L_7 = __this->___state_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006a;
		}
	}
	{
		// state = 2;
		__this->___state_6 = 2;
		goto IL_007a;
	}

IL_006a:
	{
		// } else if (state == 3) {
		int32_t L_8 = __this->___state_6;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_007a;
		}
	}
	{
		// state = 0;
		__this->___state_6 = 0;
	}

IL_007a:
	{
		// Debug.Log(state);
		int32_t L_9 = __this->___state_6;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
		// if (state == 0) {
		int32_t L_12 = __this->___state_6;
		if (L_12)
		{
			goto IL_00a4;
		}
	}
	{
		// sun.GetComponent<Light>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___sun_5;
		NullCheck(L_13);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14;
		L_14 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_13, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)1, NULL);
		return;
	}

IL_00a4:
	{
		// } else if (state == 2) {
		int32_t L_15 = __this->___state_6;
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_00be;
		}
	}
	{
		// sun.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___sun_5;
		NullCheck(L_16);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17;
		L_17 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_16, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void egyptSunScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void egyptSunScript__ctor_m4086C8525B3CF1E50CB555798F16ADB38BFF94C3 (egyptSunScript_t2A210D0A51780147AC7DF235DDD02A32AFA85194* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void mcSunScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mcSunScript_Update_mEA99ACADA3921CC9DEEB12B0BF87C1B32DBBA451 (mcSunScript_t09E524C497F9A17E236406E25434ED951EAE8E38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB659606F6D26276A5A6D04D70208535DA638384F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC720F67EA4F3A3871E35FB8356D4F582B9231D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector3.Dot(cube.transform.up, Vector3.down) > 0) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_4;
		L_4 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_2, L_3, NULL);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Debug.Log("upside down");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralCCC720F67EA4F3A3871E35FB8356D4F582B9231D, NULL);
		// if (state == 0) {
		int32_t L_5 = __this->___state_6;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		// state = 1;
		__this->___state_6 = 1;
		goto IL_007a;
	}

IL_003c:
	{
		// } else if (state == 2) {
		int32_t L_6 = __this->___state_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}
	{
		// state = 3;
		__this->___state_6 = 3;
		goto IL_007a;
	}

IL_004e:
	{
		// Debug.Log("right side up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB659606F6D26276A5A6D04D70208535DA638384F, NULL);
		// if (state == 1) {
		int32_t L_7 = __this->___state_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006a;
		}
	}
	{
		// state = 2;
		__this->___state_6 = 2;
		goto IL_007a;
	}

IL_006a:
	{
		// } else if (state == 3) {
		int32_t L_8 = __this->___state_6;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_007a;
		}
	}
	{
		// state = 0;
		__this->___state_6 = 0;
	}

IL_007a:
	{
		// Debug.Log(state);
		int32_t L_9 = __this->___state_6;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
		// if (state == 0) {
		int32_t L_12 = __this->___state_6;
		if (L_12)
		{
			goto IL_00a4;
		}
	}
	{
		// sun.GetComponent<Light>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___sun_5;
		NullCheck(L_13);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14;
		L_14 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_13, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)1, NULL);
		return;
	}

IL_00a4:
	{
		// } else if (state == 2) {
		int32_t L_15 = __this->___state_6;
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_00be;
		}
	}
	{
		// sun.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___sun_5;
		NullCheck(L_16);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17;
		L_17 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_16, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void mcSunScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mcSunScript__ctor_m3870038EC465D1D5C2790B11D452B78DCBD757F5 (mcSunScript_t09E524C497F9A17E236406E25434ED951EAE8E38* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TextureScale::Point(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Point_mE26A3EEC5ED4FEC4FD9666B0FBD1EDD9D62A25BC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method) 
{
	{
		// ThreadedScale(tex, newWidth, newHeight, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex0;
		int32_t L_1 = ___newWidth1;
		int32_t L_2 = ___newHeight2;
		TextureScale_ThreadedScale_m24E9BA5BFA10621C3F4A7B7D27D922A779C2A810(L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TextureScale::Bilinear(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Bilinear_mDB28D682F094AF734B1D2C1005958E28D25662F3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method) 
{
	{
		// ThreadedScale(tex, newWidth, newHeight, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex0;
		int32_t L_1 = ___newWidth1;
		int32_t L_2 = ___newHeight2;
		TextureScale_ThreadedScale_m24E9BA5BFA10621C3F4A7B7D27D922A779C2A810(L_0, L_1, L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_m24E9BA5BFA10621C3F4A7B7D27D922A779C2A810 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mutex_t20344F093646D8679E9E11939981AE14DD8B3148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_BilinearScale_m37DACBBA5C3127D74C6FCAE04FA997B774E69663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_PointScale_m224AD40E0FCDC84E1EA520DBF35BF17DDC9D69CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_3 = NULL;
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_4 = NULL;
	ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* G_B10_0 = NULL;
	{
		// texColors = tex.GetPixels();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex0;
		NullCheck(L_0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_0, NULL);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0), (void*)L_1);
		// newColors = new Color[newWidth * newHeight];
		int32_t L_2 = ___newWidth1;
		int32_t L_3 = ___newHeight2;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3)));
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1), (void*)L_4);
		// if (useBilinear)
		bool L_5 = ___useBilinear3;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// ratioX = 1.0f / ((float)newWidth / (tex.width - 1));
		int32_t L_6 = ___newWidth1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___tex0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3 = ((float)((1.0f)/((float)(((float)L_6)/((float)((int32_t)il2cpp_codegen_subtract(L_8, 1)))))));
		// ratioY = 1.0f / ((float)newHeight / (tex.height - 1));
		int32_t L_9 = ___newHeight2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___tex0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4 = ((float)((1.0f)/((float)(((float)L_9)/((float)((int32_t)il2cpp_codegen_subtract(L_11, 1)))))));
		goto IL_0069;
	}

IL_004b:
	{
		// ratioX = ((float)tex.width) / newWidth;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ___tex0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		int32_t L_14 = ___newWidth1;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3 = ((float)(((float)L_13)/((float)L_14)));
		// ratioY = ((float)tex.height) / newHeight;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___tex0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		int32_t L_17 = ___newHeight2;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4 = ((float)(((float)L_16)/((float)L_17)));
	}

IL_0069:
	{
		// w = tex.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___tex0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2 = L_19;
		// w2 = newWidth;
		int32_t L_20 = ___newWidth1;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5 = L_20;
		// var cores = Mathf.Min(SystemInfo.processorCount, newHeight);
		int32_t L_21;
		L_21 = SystemInfo_get_processorCount_m9161DEC1BC6A1D2431C23A291D3EDB288C2D9BD0(NULL);
		int32_t L_22 = ___newHeight2;
		int32_t L_23;
		L_23 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_21, L_22, NULL);
		V_0 = L_23;
		// var slice = newHeight / cores;
		int32_t L_24 = ___newHeight2;
		int32_t L_25 = V_0;
		V_1 = ((int32_t)(L_24/L_25));
		// finishCount = 0;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6 = 0;
		// if (mutex == null)
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_26 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		if (L_26)
		{
			goto IL_00a2;
		}
	}
	{
		// mutex = new Mutex(false);
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_27 = (Mutex_t20344F093646D8679E9E11939981AE14DD8B3148*)il2cpp_codegen_object_new(Mutex_t20344F093646D8679E9E11939981AE14DD8B3148_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Mutex__ctor_m5B66DF00F3580EB657EE520E65D2929B243863C9(L_27, (bool)0, NULL);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7), (void*)L_27);
	}

IL_00a2:
	{
		// if (cores > 1)
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) <= ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		// int i = 0;
		V_2 = 0;
		// for (i = 0; i < cores - 1; i++)
		V_2 = 0;
		goto IL_00e6;
	}

IL_00ac:
	{
		// threadData = new ThreadData(slice * i, slice * (i + 1));
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_33 = (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)il2cpp_codegen_object_new(ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2(L_33, ((int32_t)il2cpp_codegen_multiply(L_29, L_30)), ((int32_t)il2cpp_codegen_multiply(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)))), NULL);
		V_3 = L_33;
		// ParameterizedThreadStart ts = useBilinear ? new ParameterizedThreadStart(BilinearScale) : new ParameterizedThreadStart(PointScale);
		bool L_34 = ___useBilinear3;
		if (L_34)
		{
			goto IL_00cb;
		}
	}
	{
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_35 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_35, NULL, (intptr_t)((void*)TextureScale_PointScale_m224AD40E0FCDC84E1EA520DBF35BF17DDC9D69CD_RuntimeMethod_var), NULL);
		G_B10_0 = L_35;
		goto IL_00d7;
	}

IL_00cb:
	{
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_36 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_36, NULL, (intptr_t)((void*)TextureScale_BilinearScale_m37DACBBA5C3127D74C6FCAE04FA997B774E69663_RuntimeMethod_var), NULL);
		G_B10_0 = L_36;
	}

IL_00d7:
	{
		// Thread thread = new Thread(ts);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_37 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_37, G_B10_0, NULL);
		// thread.Start(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_38 = V_3;
		NullCheck(L_37);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_37, L_38, NULL);
		// for (i = 0; i < cores - 1; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00e6:
	{
		// for (i = 0; i < cores - 1; i++)
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_41, 1)))))
		{
			goto IL_00ac;
		}
	}
	{
		// threadData = new ThreadData(slice * i, newHeight);
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = ___newHeight2;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_45 = (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)il2cpp_codegen_object_new(ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2(L_45, ((int32_t)il2cpp_codegen_multiply(L_42, L_43)), L_44, NULL);
		V_3 = L_45;
		// if (useBilinear)
		bool L_46 = ___useBilinear3;
		if (!L_46)
		{
			goto IL_0101;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_47 = V_3;
		TextureScale_BilinearScale_m37DACBBA5C3127D74C6FCAE04FA997B774E69663(L_47, NULL);
		goto IL_010f;
	}

IL_0101:
	{
		// PointScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_48 = V_3;
		TextureScale_PointScale_m224AD40E0FCDC84E1EA520DBF35BF17DDC9D69CD(L_48, NULL);
		goto IL_010f;
	}

IL_0109:
	{
		// Thread.Sleep(1);
		Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(1, NULL);
	}

IL_010f:
	{
		// while (finishCount < cores)
		int32_t L_49 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0109;
		}
	}
	{
		goto IL_0135;
	}

IL_0119:
	{
		// ThreadData threadData = new ThreadData(0, newHeight);
		int32_t L_51 = ___newHeight2;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_52 = (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)il2cpp_codegen_object_new(ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2(L_52, 0, L_51, NULL);
		V_4 = L_52;
		// if (useBilinear)
		bool L_53 = ___useBilinear3;
		if (!L_53)
		{
			goto IL_012e;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_54 = V_4;
		TextureScale_BilinearScale_m37DACBBA5C3127D74C6FCAE04FA997B774E69663(L_54, NULL);
		goto IL_0135;
	}

IL_012e:
	{
		// PointScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_55 = V_4;
		TextureScale_PointScale_m224AD40E0FCDC84E1EA520DBF35BF17DDC9D69CD(L_55, NULL);
	}

IL_0135:
	{
		// tex.Reinitialize(newWidth, newHeight);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_56 = ___tex0;
		int32_t L_57 = ___newWidth1;
		int32_t L_58 = ___newHeight2;
		NullCheck(L_56);
		bool L_59;
		L_59 = Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B(L_56, L_57, L_58, NULL);
		// tex.SetPixels(newColors);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60 = ___tex0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_61 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1;
		NullCheck(L_60);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_60, L_61, NULL);
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62 = ___tex0;
		NullCheck(L_62);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_62, NULL);
		// texColors = null;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0), (void*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL);
		// newColors = null;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1), (void*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL);
		// }
		return;
	}
}
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m37DACBBA5C3127D74C6FCAE04FA997B774E69663 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)CastclassClass((RuntimeObject*)L_0, ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___start_0;
		V_1 = L_2;
		goto IL_00e7;
	}

IL_0013:
	{
		// int yFloor = (int)Mathf.Floor(y * ratioY);
		int32_t L_3 = V_1;
		float L_4 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4;
		float L_5;
		L_5 = floorf(((float)il2cpp_codegen_multiply(((float)L_3), L_4)));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// var y1 = yFloor * w;
		int32_t L_6 = V_2;
		int32_t L_7 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_6, L_7));
		// var y2 = (yFloor + 1) * w;
		int32_t L_8 = V_2;
		int32_t L_9 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2;
		V_4 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_8, 1)), L_9));
		// var yw = y * w2;
		int32_t L_10 = V_1;
		int32_t L_11 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_10, L_11));
		// for (var x = 0; x < w2; x++)
		V_6 = 0;
		goto IL_00d7;
	}

IL_0046:
	{
		// int xFloor = (int)Mathf.Floor(x * ratioX);
		int32_t L_12 = V_6;
		float L_13 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3;
		float L_14;
		L_14 = floorf(((float)il2cpp_codegen_multiply(((float)L_12), L_13)));
		V_7 = il2cpp_codegen_cast_double_to_int<int32_t>(L_14);
		// var xLerp = x * ratioX - xFloor;
		int32_t L_15 = V_6;
		float L_16 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3;
		int32_t L_17 = V_7;
		V_8 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_15), L_16)), ((float)L_17)));
		// newColors[yw + x] = ColorLerpUnclamped(ColorLerpUnclamped(texColors[y1 + xFloor], texColors[y1 + xFloor + 1], xLerp),
		//                                        ColorLerpUnclamped(texColors[y2 + xFloor], texColors[y2 + xFloor + 1], xLerp),
		//                                        y * ratioY - yFloor);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_18 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1;
		int32_t L_19 = V_5;
		int32_t L_20 = V_6;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_21 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_22 = V_3;
		int32_t L_23 = V_7;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_26 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_27 = V_3;
		int32_t L_28 = V_7;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_27, L_28)), 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = TextureScale_ColorLerpUnclamped_mB1FF3F3245A6EAFC403562EE0495576104B2DA21(L_25, L_30, L_31, NULL);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_33 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_34 = V_4;
		int32_t L_35 = V_7;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_38 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_39 = V_4;
		int32_t L_40 = V_7;
		NullCheck(L_38);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_39, L_40)), 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		float L_43 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = TextureScale_ColorLerpUnclamped_mB1FF3F3245A6EAFC403562EE0495576104B2DA21(L_37, L_42, L_43, NULL);
		int32_t L_45 = V_1;
		float L_46 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4;
		int32_t L_47 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		L_48 = TextureScale_ColorLerpUnclamped_mB1FF3F3245A6EAFC403562EE0495576104B2DA21(L_32, L_44, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_45), L_46)), ((float)L_47))), NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_48);
		// for (var x = 0; x < w2; x++)
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00d7:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_50 = V_6;
		int32_t L_51 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0046;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00e7:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_53 = V_1;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___end_1;
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_0013;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_56 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_56);
		// finishCount++;
		int32_t L_58 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		// mutex.ReleaseMutex();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_59 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_59);
		Mutex_ReleaseMutex_m72AE23EAAF122BA84AB32006A01D6B2D4A4B167C(L_59, NULL);
		// }
		return;
	}
}
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_m224AD40E0FCDC84E1EA520DBF35BF17DDC9D69CD (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)CastclassClass((RuntimeObject*)L_0, ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___start_0;
		V_1 = L_2;
		goto IL_0065;
	}

IL_0010:
	{
		// var thisY = (int)(ratioY * y) * w;
		float L_3 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4;
		int32_t L_4 = V_1;
		int32_t L_5 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_3, ((float)L_4)))), L_5));
		// var yw = y * w2;
		int32_t L_6 = V_1;
		int32_t L_7 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_6, L_7));
		// for (var x = 0; x < w2; x++)
		V_4 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		// newColors[yw + x] = texColors[(int)(thisY + ratioX * x)];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1;
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_12 = V_2;
		float L_13 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3;
		int32_t L_14 = V_4;
		NullCheck(L_11);
		int32_t L_15 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)L_12), ((float)il2cpp_codegen_multiply(L_13, ((float)L_14))))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, L_10))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_16);
		// for (var x = 0; x < w2; x++)
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_18 = V_4;
		int32_t L_19 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002d;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0065:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_21 = V_1;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___end_1;
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0010;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_24 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_24);
		// finishCount++;
		int32_t L_26 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		// mutex.ReleaseMutex();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_27 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_27);
		Mutex_ReleaseMutex_m72AE23EAAF122BA84AB32006A01D6B2D4A4B167C(L_27, NULL);
		// }
		return;
	}
}
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextureScale_ColorLerpUnclamped_mB1FF3F3245A6EAFC403562EE0495576104B2DA21 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c10, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c21, float ___value2, const RuntimeMethod* method) 
{
	{
		// return new Color(c1.r + (c2.r - c1.r) * value,
		//                   c1.g + (c2.g - c1.g) * value,
		//                   c1.b + (c2.b - c1.b) * value,
		//                   c1.a + (c2.a - c1.a) * value);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c10;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c21;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c10;
		float L_5 = L_4.___r_0;
		float L_6 = ___value2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___c10;
		float L_8 = L_7.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___c21;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___c10;
		float L_12 = L_11.___g_1;
		float L_13 = ___value2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___c10;
		float L_15 = L_14.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___c21;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___c10;
		float L_19 = L_18.___b_2;
		float L_20 = ___value2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ___c10;
		float L_22 = L_21.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___c21;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___c10;
		float L_26 = L_25.___a_3;
		float L_27 = ___value2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_26)), L_27)))), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void TextureScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale__ctor_m58F73B7E18FAEC7656C4EFBBCEFA2D5E06297906 (TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952* __this, const RuntimeMethod* method) 
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
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2 (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method) 
{
	{
		// public ThreadData(int s, int e)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// start = s;
		int32_t L_0 = ___s0;
		__this->___start_0 = L_0;
		// end = e;
		int32_t L_1 = ___e1;
		__this->___end_1 = L_1;
		// }
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
// System.Void TimeUpdater1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpdater1_Start_mC636ED17AF835BC70A4A352E125FC5DFB79551C5 (TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA3C4754D00EF20A9AE9BEAA4EF602AAB1F54210);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("UpdateTime", 0f, 1f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralDA3C4754D00EF20A9AE9BEAA4EF602AAB1F54210, (0.0f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void TimeUpdater1::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpdater1_UpdateTime_m63C1441A40B68171137AD5711AE5EAA28CEE5F53 (TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GetRequest(url));
		String_t* L_0 = __this->___url_5;
		RuntimeObject* L_1;
		L_1 = TimeUpdater1_GetRequest_mB6481FA3CCA8018451A2186D0F3ABE1ED6035EC8(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TimeUpdater1::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeUpdater1_GetRequest_mB6481FA3CCA8018451A2186D0F3ABE1ED6035EC8 (TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* L_0 = (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645*)il2cpp_codegen_object_new(U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRequestU3Ed__4__ctor_mF37249817A1C263A04A60720F02388E54AE63DBF(L_0, 0, NULL);
		U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_2), (void*)L_3);
		return L_2;
	}
}
// System.Void TimeUpdater1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpdater1__ctor_m895CC18ED507EC95E62BE62F600FBB6BAF6A1E43 (TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1770B743B80474FFFD2821DAE0D18F8DABC620);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string url = "http://worldtimeapi.org/api/timezone/Africa/Cairo";
		__this->___url_5 = _stringLiteral3F1770B743B80474FFFD2821DAE0D18F8DABC620;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)_stringLiteral3F1770B743B80474FFFD2821DAE0D18F8DABC620);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TimeUpdater1/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_mF37249817A1C263A04A60720F02388E54AE63DBF (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TimeUpdater1/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m838DDD931D2CF19E4E2F07DECCA5589177A41C80 (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m8C52E3943B675F40844F725BF949E9CA23BDD756(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean TimeUpdater1/<GetRequest>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__4_MoveNext_m4A320CD7ECE38EDD9E7FC536F9002EEAE6B4DD8E (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D624BE517893410AA118931741AD1D74FB8703B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D369069F4E0463F888B8497ED744C442D370BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0148:
			{// begin fault (depth: 1)
				U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m838DDD931D2CF19E4E2F07DECCA5589177A41C80(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_014f;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
				String_t* L_4 = __this->___url_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
				L_5 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_4, NULL);
				__this->___U3CwebRequestU3E5__2_4 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)L_5);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_6);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
				L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
				__this->___U3CU3E2__current_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_014f;
			}

IL_005b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (webRequest.result ==  UnityWebRequest.Result.ConnectionError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_8, NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)2))))
				{
					goto IL_0090_1;
				}
			}
			{
				// Debug.Log(": Error: " + webRequest.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_10, NULL);
				String_t* L_12;
				L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC, L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
				goto IL_0137_1;
			}

IL_0090_1:
			{
				// int startIndex = webRequest.downloadHandler.text.IndexOf("datetime") + 26;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_13);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
				L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
				NullCheck(L_14);
				String_t* L_15;
				L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
				NullCheck(L_15);
				int32_t L_16;
				L_16 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_15, _stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10, NULL);
				V_3 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)26)));
				// string hour = (webRequest.downloadHandler.text.Substring(startIndex, 3).Replace(":", string.Empty));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_17);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_18;
				L_18 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_18, NULL);
				int32_t L_20 = V_3;
				NullCheck(L_19);
				String_t* L_21;
				L_21 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_19, L_20, 3, NULL);
				String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				NullCheck(L_21);
				String_t* L_23;
				L_23 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_21, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_22, NULL);
				// string mins = (webRequest.downloadHandler.text.Substring(startIndex + 2, 3).Replace(":", string.Empty));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_24);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_25;
				L_25 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_24, NULL);
				NullCheck(L_25);
				String_t* L_26;
				L_26 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_25, NULL);
				int32_t L_27 = V_3;
				NullCheck(L_26);
				String_t* L_28;
				L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_26, ((int32_t)il2cpp_codegen_add(L_27, 2)), 3, NULL);
				String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				NullCheck(L_28);
				String_t* L_30;
				L_30 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_28, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_29, NULL);
				V_4 = L_30;
				// DateTime time = DateTime.Parse(hour + ":" + mins);
				String_t* L_31 = V_4;
				String_t* L_32;
				L_32 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_23, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_31, NULL);
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33;
				L_33 = DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817(L_32, NULL);
				V_5 = L_33;
				// timeTextObject.GetComponent<TextMeshPro>().text = "time\n" + time.ToString("hh:mm tt");
				TimeUpdater1_t59BC72BD70BD9BCB175F31EF9D773C13CE0C9684* L_34 = V_2;
				NullCheck(L_34);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___timeTextObject_4;
				NullCheck(L_35);
				TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_36;
				L_36 = GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F(L_35, GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
				String_t* L_37;
				L_37 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_5), _stringLiteral0D624BE517893410AA118931741AD1D74FB8703B, NULL);
				String_t* L_38;
				L_38 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD3D369069F4E0463F888B8497ED744C442D370BC, L_37, NULL);
				NullCheck(L_36);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, L_38);
			}

IL_0137_1:
			{
				// }
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m8C52E3943B675F40844F725BF949E9CA23BDD756(__this, NULL);
				__this->___U3CwebRequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_014f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014f:
	{
		bool L_39 = V_0;
		return L_39;
	}
}
// System.Void TimeUpdater1/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m8C52E3943B675F40844F725BF949E9CA23BDD756 (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__2_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__2_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object TimeUpdater1/<GetRequest>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8AE2A7D4D02EDF0FAC6512A6C626B201193B9A14 (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TimeUpdater1/<GetRequest>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_mE2CA7FC4DA3D7BA1D1A05FEC495522D9B4127B4F (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_mE2CA7FC4DA3D7BA1D1A05FEC495522D9B4127B4F_RuntimeMethod_var)));
	}
}
// System.Object TimeUpdater1/<GetRequest>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_get_Current_mF073FF2A83EB4138B4F82C5B640CD8768AF56480 (U3CGetRequestU3Ed__4_tC656428A8ECB97FB568F635738F67D32D0677645* __this, const RuntimeMethod* method) 
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
// System.Void TimeUpdater2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpdater2_Start_mE28724088C47B2FF6634D542DFFB7D3B3460B5F1 (TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA3C4754D00EF20A9AE9BEAA4EF602AAB1F54210);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("UpdateTime", 0f, 1f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralDA3C4754D00EF20A9AE9BEAA4EF602AAB1F54210, (0.0f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void TimeUpdater2::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpdater2_UpdateTime_m37CE480921A611EC0C56BF31C8710357164FE569 (TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GetRequest(url));
		String_t* L_0 = __this->___url_5;
		RuntimeObject* L_1;
		L_1 = TimeUpdater2_GetRequest_m5FA93ED2A3CAFAE540D84E2875D59150A27A73C8(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TimeUpdater2::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeUpdater2_GetRequest_m5FA93ED2A3CAFAE540D84E2875D59150A27A73C8 (TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* L_0 = (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E*)il2cpp_codegen_object_new(U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRequestU3Ed__4__ctor_m88CC8DCF0BD35E568344FA80984567FF31143ABA(L_0, 0, NULL);
		U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_2), (void*)L_3);
		return L_2;
	}
}
// System.Void TimeUpdater2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpdater2__ctor_m45043EB1193F0D05AF844A11DB387FAACCB24060 (TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13020C7689DCCE76E8F88E23D6F329286413894E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string url = "http://worldtimeapi.org/api/timezone/America/Los_Angeles";
		__this->___url_5 = _stringLiteral13020C7689DCCE76E8F88E23D6F329286413894E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)_stringLiteral13020C7689DCCE76E8F88E23D6F329286413894E);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TimeUpdater2/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_m88CC8DCF0BD35E568344FA80984567FF31143ABA (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TimeUpdater2/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_mF9F6DCDA253B2AC21B23F0A094281B6AA2561F98 (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m3B784A632422EECBD057F510B4AE4691719D8912(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean TimeUpdater2/<GetRequest>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__4_MoveNext_m34E4C187633A64F2689F4756DF868D1BBC990545 (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18FF4EE509547E9F427ED4CBAD56460397F93F60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D369069F4E0463F888B8497ED744C442D370BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0148:
			{// begin fault (depth: 1)
				U3CGetRequestU3Ed__4_System_IDisposable_Dispose_mF9F6DCDA253B2AC21B23F0A094281B6AA2561F98(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_014f;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
				String_t* L_4 = __this->___url_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
				L_5 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_4, NULL);
				__this->___U3CwebRequestU3E5__2_4 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)L_5);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_6);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
				L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
				__this->___U3CU3E2__current_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_014f;
			}

IL_005b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (webRequest.result ==  UnityWebRequest.Result.ConnectionError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_8, NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)2))))
				{
					goto IL_0090_1;
				}
			}
			{
				// Debug.Log(": Error: " + webRequest.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_10, NULL);
				String_t* L_12;
				L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC, L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
				goto IL_0137_1;
			}

IL_0090_1:
			{
				// int startIndex = webRequest.downloadHandler.text.IndexOf("datetime") + 26;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_13);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
				L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
				NullCheck(L_14);
				String_t* L_15;
				L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
				NullCheck(L_15);
				int32_t L_16;
				L_16 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_15, _stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10, NULL);
				V_3 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)26)));
				// string hour = (webRequest.downloadHandler.text.Substring(startIndex, 3).Replace(":", string.Empty));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_17);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_18;
				L_18 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_18, NULL);
				int32_t L_20 = V_3;
				NullCheck(L_19);
				String_t* L_21;
				L_21 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_19, L_20, 3, NULL);
				String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				NullCheck(L_21);
				String_t* L_23;
				L_23 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_21, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_22, NULL);
				// string mins = (webRequest.downloadHandler.text.Substring(startIndex + 2, 3).Replace(":", string.Empty));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_24);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_25;
				L_25 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_24, NULL);
				NullCheck(L_25);
				String_t* L_26;
				L_26 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_25, NULL);
				int32_t L_27 = V_3;
				NullCheck(L_26);
				String_t* L_28;
				L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_26, ((int32_t)il2cpp_codegen_add(L_27, 2)), 3, NULL);
				String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				NullCheck(L_28);
				String_t* L_30;
				L_30 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_28, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_29, NULL);
				V_4 = L_30;
				// DateTime time = DateTime.Parse(hour + ":" + mins);
				String_t* L_31 = V_4;
				String_t* L_32;
				L_32 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_23, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_31, NULL);
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33;
				L_33 = DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817(L_32, NULL);
				V_5 = L_33;
				// timeTextObject.GetComponent<TextMeshPro>().text = "time\n" + time.ToString("HH:mm");
				TimeUpdater2_tF9D9C9969C134AE6330AB5E71A00B4E8158126C4* L_34 = V_2;
				NullCheck(L_34);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___timeTextObject_4;
				NullCheck(L_35);
				TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_36;
				L_36 = GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F(L_35, GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
				String_t* L_37;
				L_37 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_5), _stringLiteral18FF4EE509547E9F427ED4CBAD56460397F93F60, NULL);
				String_t* L_38;
				L_38 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD3D369069F4E0463F888B8497ED744C442D370BC, L_37, NULL);
				NullCheck(L_36);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, L_38);
			}

IL_0137_1:
			{
				// }
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m3B784A632422EECBD057F510B4AE4691719D8912(__this, NULL);
				__this->___U3CwebRequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_014f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014f:
	{
		bool L_39 = V_0;
		return L_39;
	}
}
// System.Void TimeUpdater2/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m3B784A632422EECBD057F510B4AE4691719D8912 (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__2_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__2_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object TimeUpdater2/<GetRequest>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDD8CB79750F01A747425991FF3C2522432AFE95D (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TimeUpdater2/<GetRequest>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m05E17AC1094587D84A814C8F5E0DF787FC368168 (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m05E17AC1094587D84A814C8F5E0DF787FC368168_RuntimeMethod_var)));
	}
}
// System.Object TimeUpdater2/<GetRequest>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_get_Current_m143176C0025E4367835FF1B759711FFCFE961CE3 (U3CGetRequestU3Ed__4_tFF9697DF24E8BBF12908CABFC0D1E7E609006F9E* __this, const RuntimeMethod* method) 
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
// System.Void WeatherAPIScript1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherAPIScript1_Start_m585FE9BEE8C68356924E815EA3D87B96D4C8E579 (WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE09111D52D669D3376EF66985AEFF772324DA330);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("GetDataFromWeb", 2f, 900f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralE09111D52D669D3376EF66985AEFF772324DA330, (2.0f), (900.0f), NULL);
		// }
		return;
	}
}
// System.Void WeatherAPIScript1::GetDataFromWeb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherAPIScript1_GetDataFromWeb_mC80662B20657E34DF02251D6C5D67CCFB0D082A4 (WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GetRequest(url));
		String_t* L_0 = __this->___url_5;
		RuntimeObject* L_1;
		L_1 = WeatherAPIScript1_GetRequest_mD386A8E36924EAACCA8FDDCF063545B5E320D04B(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WeatherAPIScript1::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeatherAPIScript1_GetRequest_mD386A8E36924EAACCA8FDDCF063545B5E320D04B (WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* __this, String_t* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* L_0 = (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937*)il2cpp_codegen_object_new(U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRequestU3Ed__4__ctor_m7E230C9B17852C89289C5AC8AFBA8149F5A9A443(L_0, 0, NULL);
		U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* L_2 = L_1;
		String_t* L_3 = ___uri0;
		NullCheck(L_2);
		L_2->___uri_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___uri_2), (void*)L_3);
		return L_2;
	}
}
// System.Void WeatherAPIScript1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherAPIScript1__ctor_m20F28E629504B9C3A7E71F4E684C793C9E81269B (WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral983ADA04D54A347164F53885C2B5CE8C39B39045);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string url = "http://api.openweathermap.org/data/2.5/weather?lat=29.9792&lon=31.1342&APPID=b00687ddad4344eb32313dc21cdc4d86&units=imperial";
		__this->___url_5 = _stringLiteral983ADA04D54A347164F53885C2B5CE8C39B39045;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)_stringLiteral983ADA04D54A347164F53885C2B5CE8C39B39045);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WeatherAPIScript1/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_m7E230C9B17852C89289C5AC8AFBA8149F5A9A443 (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WeatherAPIScript1/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m18524ABE1DAAE197F4CC1BE48EA61E5282EF8C75 (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m0CF5CB0A50DD170386959EE1A8E21EFF49215F8B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean WeatherAPIScript1/<GetRequest>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__4_MoveNext_mD0480710FDF17D6F6F1D28F3394494CAA8D9CF57 (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13E51B57FC699BC6033620BE8642537C54777D01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0186:
			{// begin fault (depth: 1)
				U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m18524ABE1DAAE197F4CC1BE48EA61E5282EF8C75(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_018d;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
				String_t* L_4 = __this->___uri_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
				L_5 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_4, NULL);
				__this->___U3CwebRequestU3E5__2_4 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)L_5);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_6);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
				L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
				__this->___U3CU3E2__current_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_018d;
			}

IL_005b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (webRequest.result ==  UnityWebRequest.Result.ConnectionError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_8, NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)2))))
				{
					goto IL_0090_1;
				}
			}
			{
				// Debug.Log(": Error: " + webRequest.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_10, NULL);
				String_t* L_12;
				L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC, L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
				goto IL_0175_1;
			}

IL_0090_1:
			{
				// int startTemp = webRequest.downloadHandler.text.IndexOf("temp",0);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_13);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
				L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
				NullCheck(L_14);
				String_t* L_15;
				L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
				NullCheck(L_15);
				int32_t L_16;
				L_16 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_15, _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5, 0, NULL);
				V_3 = L_16;
				// int endTemp = webRequest.downloadHandler.text.IndexOf(",",startTemp);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_17);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_18;
				L_18 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_18, NULL);
				int32_t L_20 = V_3;
				NullCheck(L_19);
				int32_t L_21;
				L_21 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_19, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_20, NULL);
				V_4 = L_21;
				// double tempF = float.Parse(webRequest.downloadHandler.text.Substring(startTemp+6, (endTemp-startTemp-6)));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_22);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_23;
				L_23 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_22, NULL);
				NullCheck(L_23);
				String_t* L_24;
				L_24 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_23, NULL);
				int32_t L_25 = V_3;
				int32_t L_26 = V_4;
				int32_t L_27 = V_3;
				NullCheck(L_24);
				String_t* L_28;
				L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, ((int32_t)il2cpp_codegen_add(L_25, 6)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_26, L_27)), 6)), NULL);
				float L_29;
				L_29 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_28, NULL);
				// int easyTempF = Mathf.RoundToInt((float)tempF);
				int32_t L_30;
				L_30 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)((double)L_29)), NULL);
				V_5 = L_30;
				// int startConditions = webRequest.downloadHandler.text.IndexOf("main",0);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_31 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_31);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_32;
				L_32 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_31, NULL);
				NullCheck(L_32);
				String_t* L_33;
				L_33 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_32, NULL);
				NullCheck(L_33);
				int32_t L_34;
				L_34 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_33, _stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185, 0, NULL);
				V_6 = L_34;
				// int endConditions = webRequest.downloadHandler.text.IndexOf(",",startConditions);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_35 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_35);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_36;
				L_36 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_35, NULL);
				NullCheck(L_36);
				String_t* L_37;
				L_37 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_36, NULL);
				int32_t L_38 = V_6;
				NullCheck(L_37);
				int32_t L_39;
				L_39 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_37, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_38, NULL);
				V_7 = L_39;
				// string conditions = webRequest.downloadHandler.text.Substring(startConditions+7, (endConditions-startConditions-8));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_40 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_40);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_41;
				L_41 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_40, NULL);
				NullCheck(L_41);
				String_t* L_42;
				L_42 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_41, NULL);
				int32_t L_43 = V_6;
				int32_t L_44 = V_7;
				int32_t L_45 = V_6;
				NullCheck(L_42);
				String_t* L_46;
				L_46 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_42, ((int32_t)il2cpp_codegen_add(L_43, 7)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_44, L_45)), 8)), NULL);
				V_8 = L_46;
				// weatherTextObject.GetComponent<TextMeshPro>().text = "" + easyTempF.ToString() + "?F\n" + conditions;
				WeatherAPIScript1_tCC7BBC3544358E12FCF2807D253F4632E75088FE* L_47 = V_2;
				NullCheck(L_47);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___weatherTextObject_4;
				NullCheck(L_48);
				TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_49;
				L_49 = GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F(L_48, GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
				String_t* L_50;
				L_50 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
				String_t* L_51 = V_8;
				String_t* L_52;
				L_52 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_50, _stringLiteral13E51B57FC699BC6033620BE8642537C54777D01, L_51, NULL);
				NullCheck(L_49);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_49, L_52);
			}

IL_0175_1:
			{
				// }
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m0CF5CB0A50DD170386959EE1A8E21EFF49215F8B(__this, NULL);
				__this->___U3CwebRequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_018d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_018d:
	{
		bool L_53 = V_0;
		return L_53;
	}
}
// System.Void WeatherAPIScript1/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m0CF5CB0A50DD170386959EE1A8E21EFF49215F8B (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__2_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__2_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object WeatherAPIScript1/<GetRequest>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA8CA5B061CBF58F59019A422B526599CEE201183 (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WeatherAPIScript1/<GetRequest>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m8A07D6765EBDAA889F9BD2A51D871B90E86D460E (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m8A07D6765EBDAA889F9BD2A51D871B90E86D460E_RuntimeMethod_var)));
	}
}
// System.Object WeatherAPIScript1/<GetRequest>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_get_Current_m542A911F0DE4EBB3D14C5E06A634DC9BD2268564 (U3CGetRequestU3Ed__4_tC3CA042E44CC65B7998794A2BC7772B4E3805937* __this, const RuntimeMethod* method) 
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
// System.Void WeatherAPIscript2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherAPIscript2_Start_m25ECE4CE3C04802181FCB5C519851E1131958052 (WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE09111D52D669D3376EF66985AEFF772324DA330);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("GetDataFromWeb", 2f, 900f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralE09111D52D669D3376EF66985AEFF772324DA330, (2.0f), (900.0f), NULL);
		// }
		return;
	}
}
// System.Void WeatherAPIscript2::GetDataFromWeb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherAPIscript2_GetDataFromWeb_m0AEB07A2A6774EE9F5157AF2E357FB42C796B41D (WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GetRequest(url));
		String_t* L_0 = __this->___url_5;
		RuntimeObject* L_1;
		L_1 = WeatherAPIscript2_GetRequest_mC22D611DD75580257D07DB80C250BF773445D346(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WeatherAPIscript2::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeatherAPIscript2_GetRequest_mC22D611DD75580257D07DB80C250BF773445D346 (WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* __this, String_t* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* L_0 = (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36*)il2cpp_codegen_object_new(U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRequestU3Ed__4__ctor_m00F4F0935F1ADC37EBB59C1EBF33A6B72803080E(L_0, 0, NULL);
		U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* L_2 = L_1;
		String_t* L_3 = ___uri0;
		NullCheck(L_2);
		L_2->___uri_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___uri_2), (void*)L_3);
		return L_2;
	}
}
// System.Void WeatherAPIscript2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherAPIscript2__ctor_m924B50A84897F4B727370008A341B7B4999947EB (WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E91C5CB993384E58E4DCE3EB04D01B0D6FEBFFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string url = "http://api.openweathermap.org/data/2.5/weather?lat=47.6062&lon=122.3321&APPID=b00687ddad4344eb32313dc21cdc4d86&units=metric";
		__this->___url_5 = _stringLiteral1E91C5CB993384E58E4DCE3EB04D01B0D6FEBFFD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)_stringLiteral1E91C5CB993384E58E4DCE3EB04D01B0D6FEBFFD);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WeatherAPIscript2/<GetRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4__ctor_m00F4F0935F1ADC37EBB59C1EBF33A6B72803080E (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WeatherAPIscript2/<GetRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m4177E9D414C3F431C8281B651D83863FCAD3C34F (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m30E71439289E60ED5CF100AC95E15F5080080FA5(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean WeatherAPIscript2/<GetRequest>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__4_MoveNext_m1347EAD52482B8C2C4B066676B4005CB7AC1A259 (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA811744D9B9BE2E63475E7F40E1CE937EA6FF3D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0186:
			{// begin fault (depth: 1)
				U3CGetRequestU3Ed__4_System_IDisposable_Dispose_m4177E9D414C3F431C8281B651D83863FCAD3C34F(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_018d;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
				String_t* L_4 = __this->___uri_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
				L_5 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_4, NULL);
				__this->___U3CwebRequestU3E5__2_4 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)L_5);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_6);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
				L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
				__this->___U3CU3E2__current_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_018d;
			}

IL_005b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (webRequest.result ==  UnityWebRequest.Result.ConnectionError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_8, NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)2))))
				{
					goto IL_0090_1;
				}
			}
			{
				// Debug.Log(": Error: " + webRequest.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_10, NULL);
				String_t* L_12;
				L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDC95BE891CCA9321AAE5D0581CF733E9A962A6AC, L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
				goto IL_0175_1;
			}

IL_0090_1:
			{
				// int startTemp = webRequest.downloadHandler.text.IndexOf("temp",0);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_13);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
				L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
				NullCheck(L_14);
				String_t* L_15;
				L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
				NullCheck(L_15);
				int32_t L_16;
				L_16 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_15, _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5, 0, NULL);
				V_3 = L_16;
				// int endTemp = webRequest.downloadHandler.text.IndexOf(",",startTemp);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_17);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_18;
				L_18 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_18, NULL);
				int32_t L_20 = V_3;
				NullCheck(L_19);
				int32_t L_21;
				L_21 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_19, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_20, NULL);
				V_4 = L_21;
				// double tempF = float.Parse(webRequest.downloadHandler.text.Substring(startTemp+6, (endTemp-startTemp-6)));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_22);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_23;
				L_23 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_22, NULL);
				NullCheck(L_23);
				String_t* L_24;
				L_24 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_23, NULL);
				int32_t L_25 = V_3;
				int32_t L_26 = V_4;
				int32_t L_27 = V_3;
				NullCheck(L_24);
				String_t* L_28;
				L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, ((int32_t)il2cpp_codegen_add(L_25, 6)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_26, L_27)), 6)), NULL);
				float L_29;
				L_29 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_28, NULL);
				// int easyTempF = Mathf.RoundToInt((float)tempF);
				int32_t L_30;
				L_30 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)((double)L_29)), NULL);
				V_5 = L_30;
				// int startConditions = webRequest.downloadHandler.text.IndexOf("main",0);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_31 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_31);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_32;
				L_32 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_31, NULL);
				NullCheck(L_32);
				String_t* L_33;
				L_33 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_32, NULL);
				NullCheck(L_33);
				int32_t L_34;
				L_34 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_33, _stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185, 0, NULL);
				V_6 = L_34;
				// int endConditions = webRequest.downloadHandler.text.IndexOf(",",startConditions);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_35 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_35);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_36;
				L_36 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_35, NULL);
				NullCheck(L_36);
				String_t* L_37;
				L_37 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_36, NULL);
				int32_t L_38 = V_6;
				NullCheck(L_37);
				int32_t L_39;
				L_39 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_37, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_38, NULL);
				V_7 = L_39;
				// string conditions = webRequest.downloadHandler.text.Substring(startConditions+7, (endConditions-startConditions-8));
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_40 = __this->___U3CwebRequestU3E5__2_4;
				NullCheck(L_40);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_41;
				L_41 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_40, NULL);
				NullCheck(L_41);
				String_t* L_42;
				L_42 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_41, NULL);
				int32_t L_43 = V_6;
				int32_t L_44 = V_7;
				int32_t L_45 = V_6;
				NullCheck(L_42);
				String_t* L_46;
				L_46 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_42, ((int32_t)il2cpp_codegen_add(L_43, 7)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_44, L_45)), 8)), NULL);
				V_8 = L_46;
				// weatherTextObject.GetComponent<TextMeshPro>().text = "" + easyTempF.ToString() + "?C\n" + conditions;
				WeatherAPIscript2_tAFAA37C800F3BC8227FC904510EBB79C0DEA0BCF* L_47 = V_2;
				NullCheck(L_47);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___weatherTextObject_4;
				NullCheck(L_48);
				TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_49;
				L_49 = GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F(L_48, GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
				String_t* L_50;
				L_50 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
				String_t* L_51 = V_8;
				String_t* L_52;
				L_52 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_50, _stringLiteralEA811744D9B9BE2E63475E7F40E1CE937EA6FF3D, L_51, NULL);
				NullCheck(L_49);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_49, L_52);
			}

IL_0175_1:
			{
				// }
				U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m30E71439289E60ED5CF100AC95E15F5080080FA5(__this, NULL);
				__this->___U3CwebRequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_018d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_018d:
	{
		bool L_53 = V_0;
		return L_53;
	}
}
// System.Void WeatherAPIscript2/<GetRequest>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_U3CU3Em__Finally1_m30E71439289E60ED5CF100AC95E15F5080080FA5 (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__2_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__2_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object WeatherAPIscript2/<GetRequest>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m222BC0AADF38709FDAEF58CFCADABD561D042147 (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WeatherAPIscript2/<GetRequest>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m89D803285F126CB3094D10C81C321C1EF167E6F0 (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRequestU3Ed__4_System_Collections_IEnumerator_Reset_m89D803285F126CB3094D10C81C321C1EF167E6F0_RuntimeMethod_var)));
	}
}
// System.Object WeatherAPIscript2/<GetRequest>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequestU3Ed__4_System_Collections_IEnumerator_get_Current_mC073AE389C771C976B0AF9D432B7A8C2D1B5EE58 (U3CGetRequestU3Ed__4_t455EDB146D6516B4E6CFA5C21414086B9336AE36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
