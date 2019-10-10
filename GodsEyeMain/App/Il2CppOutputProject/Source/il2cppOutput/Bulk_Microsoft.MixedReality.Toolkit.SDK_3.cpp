#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tCBA62DEF21603B4400B8B808242A6C650E7F8C4F;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_t60A83629BE6315E6FE52306F971A6EE38463C952;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tE0E928A8AFA1825E798A69EB5D4BE993B8227ED2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tE4BAFE2B5651E0CF0E856FD73C51FE942284CF4E;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_t2B968A7033751E001274E541108F0772C4029C8E;
// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873;
// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection/<>c
struct U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60;
// Microsoft.MixedReality.Toolkit.Utilities.Easing
struct Easing_t13E61FF806357D21552C3028585751420EDCD360;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4;
// Microsoft.MixedReality.Toolkit.Utilities.HeadPositionOffset
struct HeadPositionOffset_t3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3;
// Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode[]
struct ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9;
// Microsoft.MixedReality.Toolkit.Utilities.ScatterObjectCollection
struct ScatterObjectCollection_t2932B812F93E9835CF59CD0CCD179DF22A0136F0;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize
struct ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder
struct ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t6DB2D7D3026C02B914763DA2213A9BC8917D0891;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3;
// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5;
// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>
struct Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_tD8E7EFDFA64E247FDE82D2B9AB868C69D33A7C8C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tAAAF3681567B6F264703A0E15FC97E88BBF520D3;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t03B34F7709599434AEB744E8135E739798FC6B4F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC;
// System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
extern RuntimeClass* Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityControllerVisualizer_tF11B01C18D3E7D9443AFA3B890520D0F196716C5_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityHand_t5D2E2914E93365AF052B9DE664513E720951514C_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
extern RuntimeClass* LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t03B34F7709599434AEB744E8135E739798FC6B4F_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityRaycaster_t6A866535743148643BB004E077F92EE4B44D731F_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackedObjectType_tD9B3AD7CFF77DA9C8E5C17D3B17981BC948F66AC_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral02793D7F946903A7127623EBFA011A4C42E41FFC;
extern String_t* _stringLiteral337DC22AD1BCD14C4699A0C75B3F0C5B196A21EA;
extern String_t* _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E;
extern String_t* _stringLiteral876EFE77BBB1116A9EB37236F7EBA6789027A9F6;
extern String_t* _stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B;
extern String_t* _stringLiteral9BD8A27C841628004562B3CF4F16D6E590E106C3;
extern String_t* _stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F;
extern String_t* _stringLiteralBE46EBBCE2D34C657657AC4DB28D959908FA7215;
extern String_t* _stringLiteralD5F2B42FDCA2897E50838908138E953DF1E2CC8B;
extern String_t* _stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE;
extern const RuntimeMethod* Comparison_1__ctor_m15AE944F3556CD05B000BF7B327058B44D4B1FB5_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m92EFF432C642AEB971AAC3333F7A7170A7CC3318_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_m819E150F4FCA28D98BE1B05844AA2531D2455D84_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponents_TisSolver_t79AE87802ED7C51B02E35D03DF67E057377E1011_mFED5BA4231B190C114EA3BEA24CB3C305CD87A9C_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_mCC697F4BBA5EE64613FEC30A0BAC86085CBD6C85_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_mC89D6D0649D82CB969262590D25615C13052FF55_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_mEA2319825B896746CC9DCF34CFCFF99A9602BF44_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Sort_m323C2301497D0BAFC3256EA3601B5F697F0A008D_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m932D030551FD1CF8EE717D69C9EB18EE91EC129A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3C9FCB1273C303CC7E53935904D38EAC8E494A67_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mB96E69621C240E0827568F2007C2FB8A6477FA3F_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_RuntimeMethod_var;
extern const RuntimeMethod* MixedRealityToolkit_GetService_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_mF1F5525FE530580E425851294D2F95E17DD48752_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m0732BB3E14200FEF0204CD4062878683EE759DBD_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m823E766F59AF39F4E4F1DB87695B73FA8D181D4B_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mA695C4BF91D8A19331B9DCF66796F34A2409FADA_RuntimeMethod_var;
extern const RuntimeMethod* ScatterObjectCollection_ScatterSort_mE65ED6AF152AEF6EECAB4362B1347D824FDDB0E4_RuntimeMethod_var;
extern const uint32_t ConstantViewSize_SolverUpdate_m2531A3107824B2C0152168AE4544C6505A93DDD9_MetadataUsageId;
extern const uint32_t ConstantViewSize_Start_m991C3583D06EEC3052488EF77708026BDEB0076D_MetadataUsageId;
extern const uint32_t ConstantViewSize_get_FovScale_mE8AF4BDB5D54BBB4594A6FC62864788FEAF82A21_MetadataUsageId;
extern const uint32_t ControllerFinder_AddControllerTransform_m460890F21C2057D3022AF7069027E1BABB002BDF_MetadataUsageId;
extern const uint32_t ControllerFinder_OnSourceDetected_mCFA11CBDE6BAC872F3613A228E230D06AB0E15CD_MetadataUsageId;
extern const uint32_t ControllerFinder_OnSourceLost_mCF4191E8BF05F0D02A3BE105B59FFFADAFEF09A0_MetadataUsageId;
extern const uint32_t ControllerFinder_RefreshControllerTransform_m150FC68FF1FB3A1270BD64A2BC3652132F4B6417_MetadataUsageId;
extern const uint32_t ControllerFinder_RemoveControllerTransform_mE963ADDACEC4E04C28DE0CE68E70B287CF49E7F8_MetadataUsageId;
extern const uint32_t ControllerFinder_TryAndAddControllerTransform_mE17792545F0D536A2F91701128EB2B70993A0B63_MetadataUsageId;
extern const uint32_t Easing_OnUpdate_mA6B09E77C4D71046C7E2C7E0E95115C39E1054F0_MetadataUsageId;
extern const uint32_t Easing_SetCurve_m2FF160EB0297CE2CE1BDC50BD7C247186A2035DE_MetadataUsageId;
extern const uint32_t GridObjectCollection_LayoutChildren_m5A1603983042D651824A34FFC19D75800740D532_MetadataUsageId;
extern const uint32_t GridObjectCollection_OnDrawGizmosSelected_mEC179401E69AB9C1011B94077120DF5768A7590F_MetadataUsageId;
extern const uint32_t GridObjectCollection_ResolveGridLayout_mB85544BCBE64D0BF06AE2C2A36ED93A31EC76926_MetadataUsageId;
extern const uint32_t GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710_MetadataUsageId;
extern const uint32_t HeadPositionOffset_OnEnable_mABAD8950E285FE6A703C4C088DCC99C67D59E851_MetadataUsageId;
extern const uint32_t HeadPositionOffset_Start_m693E19366C7205D96F7D17CF2C412DDCA4F97347_MetadataUsageId;
extern const uint32_t InBetween_AdjustPositionForOffset_m3D831AEAD3353285F4B573911B152C3390E4CB63_MetadataUsageId;
extern const uint32_t InBetween_SolverUpdate_mEFB0693A0FA32B45E2B0F27F221FE2FA20DA7114_MetadataUsageId;
extern const uint32_t InBetween_Start_m44297DF0AB1085FE63EE4F43DC7EA8399408A594_MetadataUsageId;
extern const uint32_t InBetween_UpdateSecondSolverHandler_m8246596E8D35C1F8F24329FD7B37F2521ADF7BE2_MetadataUsageId;
extern const uint32_t InBetween_set_PartwayOffset_mD060F58C746AA1BAA7C67E85DD91A678DF57377C_MetadataUsageId;
extern const uint32_t InBetween_set_TrackedObjectForSecondTransform_m3B1AE48A4CFF5D5432D1A1F55489602739767A7A_MetadataUsageId;
extern const uint32_t Momentum_OnEnable_m87F6ECD1221563F487A38C2C96C867F2DC76B2CF_MetadataUsageId;
extern const uint32_t Momentum_SnapTo_m08B7D257C034945885AA614D25CA0A4DC40B0EB8_MetadataUsageId;
extern const uint32_t Momentum_SolverUpdate_m8A6C6AF273BA99191BD85BAF1C0CB53228A63A25_MetadataUsageId;
extern const uint32_t Momentum_get_ReferencePosition_mD6FD850F21EB46CCF6A9BF8254A5A1FD220AD54B_MetadataUsageId;
extern const uint32_t Orbital_CalculateDesiredRotation_m8444E82FF685992F2087C48C65B5B67157EB26E0_MetadataUsageId;
extern const uint32_t Orbital_SnapToTetherAngleSteps_m60B09A90AAEF7485126CC9357E93EA25FD9B5D3B_MetadataUsageId;
extern const uint32_t Orbital_SolverUpdate_mAC55E2246F1858BE11F1C691A6821C0F1CE315FB_MetadataUsageId;
extern const uint32_t Orbital__ctor_mA3576DD3D4E1B58B2B0E07C1ABBC4A1C91F265E7_MetadataUsageId;
extern const uint32_t Orbital_set_TetherAngleSteps_m19D662D53BC9920AFD3C9C329803235E765DDDF6_MetadataUsageId;
extern const uint32_t RadialView_GetDesiredOrientation_DistanceOnly_mD9D33B4F9768894C571F2687010309EC0E667906_MetadataUsageId;
extern const uint32_t RadialView_GetDesiredOrientation_m997B52F4C3AA3212F8889107B8F4F9EEC16AF0A4_MetadataUsageId;
extern const uint32_t RadialView_SolverUpdate_mCA40052876C71CFD3C9852B843815CE244C8374C_MetadataUsageId;
extern const uint32_t RadialView_get_ReferencePoint_m8EABB403AE403CE2A027A40F7C0DE7492B21D766_MetadataUsageId;
extern const uint32_t RadialView_get_SolverReferenceDirection_m1E2FAA775A65E165CE8B2BCA553060F71CA1DB1F_MetadataUsageId;
extern const uint32_t RadialView_get_UpReference_m27849124AD720D6FCC1A85F188C01A4C4C809E78_MetadataUsageId;
extern const uint32_t ScatterObjectCollection_IterateScatterPacking_mC0DD7B1323B048CA3953B850304039AFBC3D948A_MetadataUsageId;
extern const uint32_t ScatterObjectCollection_LayoutChildren_m2D5110CFE453F408A95F252F89AC6F79AB475984_MetadataUsageId;
extern const uint32_t SolverHandler_Awake_m8B7CBDCA167BEFB6680A80CC761CA2A6B9AB5F17_MetadataUsageId;
extern const uint32_t SolverHandler_DetachFromCurrentTrackedObject_mBFD32DAB4CCD97B2E692DA9563EA2AC873B52066_MetadataUsageId;
extern const uint32_t SolverHandler_LateUpdate_mA20098F7C1CEB2ADE2C2AD58114A5CCD3F514A51_MetadataUsageId;
extern const uint32_t SolverHandler_MakeOffsetTransform_m2AE87D91CE5A2F024829028B9DA3D301F76E891C_MetadataUsageId;
extern const uint32_t SolverHandler_OnControllerFound_m94531DDA6C093DF2EC65ACAB04FBFAC6E548AE40_MetadataUsageId;
extern const uint32_t SolverHandler_RequestEnableHandJoint_m9D6EB39860A781E95F22F683E3E1A408A9963F35_MetadataUsageId;
extern const uint32_t SolverHandler_Start_m64EB3EE35B8F90451B41365235AE9BBDD43FA33C_MetadataUsageId;
extern const uint32_t SolverHandler__ctor_m48D3680D579A137035102B51F873915C580D8007_MetadataUsageId;
extern const uint32_t SolverHandler_get_HandJointService_m7C8FA41412B7720154FB5EFCB468B5E1D2BF7818_MetadataUsageId;
extern const uint32_t Solver_AddOffset_m673ABC8FE3531B9DF2E39DB31F31D85511241D23_MetadataUsageId;
extern const uint32_t Solver_Awake_m3D6C1EA665F89E3EC25E2605F2A1E338ADD436F1_MetadataUsageId;
extern const uint32_t Solver_OnEnable_m2C1DAD96179B3122345E5D8E147F4A0C9906E4E4_MetadataUsageId;
extern const uint32_t Solver_OnValidate_mB9A6BB7C5D3806BBFFCBF871BD990B8C0B071A33_MetadataUsageId;
extern const uint32_t Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B_MetadataUsageId;
extern const uint32_t Solver_SmoothTo_mFF21E0575E17088CD8549A71575CCBD776AFCF8E_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_BoxRaycastStepUpdate_m9A32EAF452D27FD75D1EE75DA62D45A2554F9E25_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_FindPlacementPlane_m4CEE4578BE4A74F21E3B813514A402854BB3DD03_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_IsNormalVertical_m84F3A5E0B5E81E8964FB3DE1D0136D04CD25802E_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_OnValidate_mEC131FA49F4B71FF74F2BC2EABD5963774402F2F_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SimpleRaycastStepUpdate_m9984BF80D1666557B6EB152739FC628A325DBC8F_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SolverUpdate_mCF647DEEA98D9343307977F1AA5DF0B3770DE21E_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SphereRaycastStepUpdate_m98B2448E8C8E29B60F3BA436D74EF1344D207397_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_Start_m05A084A84756A5462C94A59D7635CF1B765840F8_MetadataUsageId;
extern const uint32_t SurfaceMagnetism__ctor_mED034D35A9BDCC63FC7AF2D88AFF11226183A1F3_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastDirection_m6D485097AE52AE4DEB900393379C85EB8A3CDD84_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastEndPoint_mBD183548533193F60CD564D1870C898161785A42_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastOrigin_mD7CD2E0E6F9DD5042C75449B8DFA195BF2AEB1A2_MetadataUsageId;
extern const uint32_t TileGridObjectCollection_GetListPosition_m816B8467F9F7B22F190AA7038539374FE5F50955_MetadataUsageId;
extern const uint32_t TileGridObjectCollection_Update_mA13B511BD3E489008189A9AAF6A8302102856C64_MetadataUsageId;
extern const uint32_t TileGridObjectCollection__ctor_mD7944138C1E4B4EA241F07A3AD652BEF37816C31_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_mB8118E026C357D2EE00950DF59C07987E5B43DD9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CU3EC_T29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_H
#define U3CU3EC_T29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c
struct  U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<>9
	U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * ___U3CU3E9_0;
	// System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<>9__15_0
	Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * ___U3CU3E9__15_0_1;
	// System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<>9__15_1
	Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * ___U3CU3E9__15_1_2;
	// System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<>9__15_2
	Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * ___U3CU3E9__15_2_3;
	// System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<>9__15_3
	Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * ___U3CU3E9__15_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_StaticFields, ___U3CU3E9__15_0_1)); }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * get_U3CU3E9__15_0_1() const { return ___U3CU3E9__15_0_1; }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 ** get_address_of_U3CU3E9__15_0_1() { return &___U3CU3E9__15_0_1; }
	inline void set_U3CU3E9__15_0_1(Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * value)
	{
		___U3CU3E9__15_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__15_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_StaticFields, ___U3CU3E9__15_1_2)); }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * get_U3CU3E9__15_1_2() const { return ___U3CU3E9__15_1_2; }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 ** get_address_of_U3CU3E9__15_1_2() { return &___U3CU3E9__15_1_2; }
	inline void set_U3CU3E9__15_1_2(Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * value)
	{
		___U3CU3E9__15_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__15_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_StaticFields, ___U3CU3E9__15_2_3)); }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * get_U3CU3E9__15_2_3() const { return ___U3CU3E9__15_2_3; }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 ** get_address_of_U3CU3E9__15_2_3() { return &___U3CU3E9__15_2_3; }
	inline void set_U3CU3E9__15_2_3(Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * value)
	{
		___U3CU3E9__15_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__15_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_StaticFields, ___U3CU3E9__15_3_4)); }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * get_U3CU3E9__15_3_4() const { return ___U3CU3E9__15_3_4; }
	inline Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 ** get_address_of_U3CU3E9__15_3_4() { return &___U3CU3E9__15_3_4; }
	inline void set_U3CU3E9__15_3_4(Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * value)
	{
		___U3CU3E9__15_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__15_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_H
#ifndef EASING_T13E61FF806357D21552C3028585751420EDCD360_H
#define EASING_T13E61FF806357D21552C3028585751420EDCD360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Easing
struct  Easing_t13E61FF806357D21552C3028585751420EDCD360  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Easing::Enabled
	bool ___Enabled_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Utilities.Easing::Curve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___Curve_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Easing::LerpTime
	float ___LerpTime_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Easing::timer
	float ___timer_3;
	// UnityEngine.Keyframe[] Microsoft.MixedReality.Toolkit.Utilities.Easing::cachedKeys
	KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* ___cachedKeys_4;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(Easing_t13E61FF806357D21552C3028585751420EDCD360, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_Curve_1() { return static_cast<int32_t>(offsetof(Easing_t13E61FF806357D21552C3028585751420EDCD360, ___Curve_1)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_Curve_1() const { return ___Curve_1; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_Curve_1() { return &___Curve_1; }
	inline void set_Curve_1(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___Curve_1 = value;
		Il2CppCodeGenWriteBarrier((&___Curve_1), value);
	}

	inline static int32_t get_offset_of_LerpTime_2() { return static_cast<int32_t>(offsetof(Easing_t13E61FF806357D21552C3028585751420EDCD360, ___LerpTime_2)); }
	inline float get_LerpTime_2() const { return ___LerpTime_2; }
	inline float* get_address_of_LerpTime_2() { return &___LerpTime_2; }
	inline void set_LerpTime_2(float value)
	{
		___LerpTime_2 = value;
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(Easing_t13E61FF806357D21552C3028585751420EDCD360, ___timer_3)); }
	inline float get_timer_3() const { return ___timer_3; }
	inline float* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(float value)
	{
		___timer_3 = value;
	}

	inline static int32_t get_offset_of_cachedKeys_4() { return static_cast<int32_t>(offsetof(Easing_t13E61FF806357D21552C3028585751420EDCD360, ___cachedKeys_4)); }
	inline KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* get_cachedKeys_4() const { return ___cachedKeys_4; }
	inline KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D** get_address_of_cachedKeys_4() { return &___cachedKeys_4; }
	inline void set_cachedKeys_4(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* value)
	{
		___cachedKeys_4 = value;
		Il2CppCodeGenWriteBarrier((&___cachedKeys_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASING_T13E61FF806357D21552C3028585751420EDCD360_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef HASHSET_1_T02265BFDCA60AA11C8DAAD2906D880F8171B5229_H
#define HASHSET_1_T02265BFDCA60AA11C8DAAD2906D880F8171B5229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct  HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____slots_8)); }
	inline SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T02265BFDCA60AA11C8DAAD2906D880F8171B5229_H
#ifndef LIST_1_T7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE_H
#define LIST_1_T7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct  List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE, ____items_1)); }
	inline ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9* get__items_1() const { return ____items_1; }
	inline ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE_StaticFields, ____emptyArray_5)); }
	inline ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectCollectionNodeU5BU5D_t70BD35C25553BF0860F3990B5B1CDFC78403EEC9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE_H
#ifndef LIST_1_T03B34F7709599434AEB744E8135E739798FC6B4F_H
#define LIST_1_T03B34F7709599434AEB744E8135E739798FC6B4F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  List_1_t03B34F7709599434AEB744E8135E739798FC6B4F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t03B34F7709599434AEB744E8135E739798FC6B4F, ____items_1)); }
	inline SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* get__items_1() const { return ____items_1; }
	inline SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t03B34F7709599434AEB744E8135E739798FC6B4F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t03B34F7709599434AEB744E8135E739798FC6B4F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t03B34F7709599434AEB744E8135E739798FC6B4F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t03B34F7709599434AEB744E8135E739798FC6B4F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t03B34F7709599434AEB744E8135E739798FC6B4F_StaticFields, ____emptyArray_5)); }
	inline SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T03B34F7709599434AEB744E8135E739798FC6B4F_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_T42984CA33BF22C1464CD34BCEA40497BAFFD7DCD_H
#define ENUMERATOR_T42984CA33BF22C1464CD34BCEA40497BAFFD7DCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1_Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct  Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____set_0)); }
	inline HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((&____set_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T42984CA33BF22C1464CD34BCEA40497BAFFD7DCD_H
#ifndef ENUMERATOR_T8434FF623060595DB1C2B2231A4DC225034F0A7A_H
#define ENUMERATOR_T8434FF623060595DB1C2B2231A4DC225034F0A7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1_Enumerator<System.Object>
struct  Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____set_0)); }
	inline HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((&____set_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T8434FF623060595DB1C2B2231A4DC225034F0A7A_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef KEYFRAME_T9E945CACC5AC36E067B15A634096A223A06D2D74_H
#define KEYFRAME_T9E945CACC5AC36E067B15A634096A223A06D2D74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T9E945CACC5AC36E067B15A634096A223A06D2D74_H
#ifndef LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#define LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef RAYSTEP_T8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B_H
#define RAYSTEP_T8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct  RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B_StaticFields, ___dist_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dist_0() const { return ___dist_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B_StaticFields, ___dir_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dir_1() const { return ___dir_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B_StaticFields, ___pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_2() const { return ___pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYSTEP_T8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B_H
#ifndef SCENEQUERYTYPE_T3A84FBB8135D4A121DDF1E93FA4AA08BF6C80229_H
#define SCENEQUERYTYPE_T3A84FBB8135D4A121DDF1E93FA4AA08BF6C80229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct  SceneQueryType_t3A84FBB8135D4A121DDF1E93FA4AA08BF6C80229 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t3A84FBB8135D4A121DDF1E93FA4AA08BF6C80229, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEQUERYTYPE_T3A84FBB8135D4A121DDF1E93FA4AA08BF6C80229_H
#ifndef AXISTYPE_T45CEF046648179DA1FDF98C495D40AA34823C164_H
#define AXISTYPE_T45CEF046648179DA1FDF98C495D40AA34823C164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTYPE_T45CEF046648179DA1FDF98C495D40AA34823C164_H
#ifndef COLLATIONORDER_T515E0BB074BE25ED67629C76ACFE667E2DD373B6_H
#define COLLATIONORDER_T515E0BB074BE25ED67629C76ACFE667E2DD373B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder
struct  CollationOrder_t515E0BB074BE25ED67629C76ACFE667E2DD373B6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.CollationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollationOrder_t515E0BB074BE25ED67629C76ACFE667E2DD373B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLATIONORDER_T515E0BB074BE25ED67629C76ACFE667E2DD373B6_H
#ifndef BASICEASECURVES_T98A7EE5DBB8CE5EB9C18223017FD2DA9C78ABF9A_H
#define BASICEASECURVES_T98A7EE5DBB8CE5EB9C18223017FD2DA9C78ABF9A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Easing_BasicEaseCurves
struct  BasicEaseCurves_t98A7EE5DBB8CE5EB9C18223017FD2DA9C78ABF9A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Easing_BasicEaseCurves::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BasicEaseCurves_t98A7EE5DBB8CE5EB9C18223017FD2DA9C78ABF9A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICEASECURVES_T98A7EE5DBB8CE5EB9C18223017FD2DA9C78ABF9A_H
#ifndef HANDEDNESS_TA51C49CA286A1BC201E1680F521639E9AC1165AB_H
#define HANDEDNESS_TA51C49CA286A1BC201E1680F521639E9AC1165AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_TA51C49CA286A1BC201E1680F521639E9AC1165AB_H
#ifndef LAYOUTORDER_TEEB3CE75A90E480BA984ADC4632861C017D51C0A_H
#define LAYOUTORDER_TEEB3CE75A90E480BA984ADC4632861C017D51C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder
struct  LayoutOrder_tEEB3CE75A90E480BA984ADC4632861C017D51C0A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutOrder_tEEB3CE75A90E480BA984ADC4632861C017D51C0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTORDER_TEEB3CE75A90E480BA984ADC4632861C017D51C0A_H
#ifndef OBJECTCOLLECTIONNODE_T826AC33CFBA42D5D51D2DE3106A7B68E250BC425_H
#define OBJECTCOLLECTIONNODE_T826AC33CFBA42D5D51D2DE3106A7B68E250BC425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
struct  ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Name
	String_t* ___Name_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Offset_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Radius
	float ___Radius_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Transform_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425, ___Offset_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Offset_1() const { return ___Offset_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Radius_2() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425, ___Radius_2)); }
	inline float get_Radius_2() const { return ___Radius_2; }
	inline float* get_address_of_Radius_2() { return &___Radius_2; }
	inline void set_Radius_2(float value)
	{
		___Radius_2 = value;
	}

	inline static int32_t get_offset_of_Transform_3() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425, ___Transform_3)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Transform_3() const { return ___Transform_3; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Transform_3() { return &___Transform_3; }
	inline void set_Transform_3(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Transform_3 = value;
		Il2CppCodeGenWriteBarrier((&___Transform_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
struct ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_pinvoke
{
	char* ___Name_0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Offset_1;
	float ___Radius_2;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Transform_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
struct ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_com
{
	Il2CppChar* ___Name_0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Offset_1;
	float ___Radius_2;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Transform_3;
};
#endif // OBJECTCOLLECTIONNODE_T826AC33CFBA42D5D51D2DE3106A7B68E250BC425_H
#ifndef OBJECTORIENTATIONSURFACETYPE_TEA4BE4186E677D04B5105B7CF9F5026895AF9F5D_H
#define OBJECTORIENTATIONSURFACETYPE_TEA4BE4186E677D04B5105B7CF9F5026895AF9F5D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType
struct  ObjectOrientationSurfaceType_tEA4BE4186E677D04B5105B7CF9F5026895AF9F5D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectOrientationSurfaceType_tEA4BE4186E677D04B5105B7CF9F5026895AF9F5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTORIENTATIONSURFACETYPE_TEA4BE4186E677D04B5105B7CF9F5026895AF9F5D_H
#ifndef ORIENTATIONTYPE_TB6FB0E1746B10E1C14DCCEF33535D2EF537D1BEC_H
#define ORIENTATIONTYPE_TB6FB0E1746B10E1C14DCCEF33535D2EF537D1BEC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.OrientationType
struct  OrientationType_tB6FB0E1746B10E1C14DCCEF33535D2EF537D1BEC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationType_tB6FB0E1746B10E1C14DCCEF33535D2EF537D1BEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATIONTYPE_TB6FB0E1746B10E1C14DCCEF33535D2EF537D1BEC_H
#ifndef RADIALVIEWREFERENCEDIRECTION_T224AD8E054E80BDDCF50FD830729AD80B561F006_H
#define RADIALVIEWREFERENCEDIRECTION_T224AD8E054E80BDDCF50FD830729AD80B561F006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection
struct  RadialViewReferenceDirection_t224AD8E054E80BDDCF50FD830729AD80B561F006 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RadialViewReferenceDirection_t224AD8E054E80BDDCF50FD830729AD80B561F006, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RADIALVIEWREFERENCEDIRECTION_T224AD8E054E80BDDCF50FD830729AD80B561F006_H
#ifndef SCALESTATE_T1267BB5CBC733E6AD11436E37A0248DAB657F03D_H
#define SCALESTATE_T1267BB5CBC733E6AD11436E37A0248DAB657F03D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.ScaleState
struct  ScaleState_t1267BB5CBC733E6AD11436E37A0248DAB657F03D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ScaleState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleState_t1267BB5CBC733E6AD11436E37A0248DAB657F03D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCALESTATE_T1267BB5CBC733E6AD11436E37A0248DAB657F03D_H
#ifndef SOLVERORIENTATIONTYPE_T76AF2F52E10AB44FF66F622603C8954247BCFBFD_H
#define SOLVERORIENTATIONTYPE_T76AF2F52E10AB44FF66F622603C8954247BCFBFD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType
struct  SolverOrientationType_t76AF2F52E10AB44FF66F622603C8954247BCFBFD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOrientationType_t76AF2F52E10AB44FF66F622603C8954247BCFBFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERORIENTATIONTYPE_T76AF2F52E10AB44FF66F622603C8954247BCFBFD_H
#ifndef ORIENTMODEENUM_T16E7A61F47025479B3EDFC63A8FB28686B734AF3_H
#define ORIENTMODEENUM_T16E7A61F47025479B3EDFC63A8FB28686B734AF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientModeEnum
struct  OrientModeEnum_t16E7A61F47025479B3EDFC63A8FB28686B734AF3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientModeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientModeEnum_t16E7A61F47025479B3EDFC63A8FB28686B734AF3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTMODEENUM_T16E7A61F47025479B3EDFC63A8FB28686B734AF3_H
#ifndef RAYCASTDIRECTIONENUM_T50481DECA2CA1E827C2E198771DDA579AB3280F6_H
#define RAYCASTDIRECTIONENUM_T50481DECA2CA1E827C2E198771DDA579AB3280F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionEnum
struct  RaycastDirectionEnum_t50481DECA2CA1E827C2E198771DDA579AB3280F6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionEnum_t50481DECA2CA1E827C2E198771DDA579AB3280F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTDIRECTIONENUM_T50481DECA2CA1E827C2E198771DDA579AB3280F6_H
#ifndef GRIDDIVISIONS_TAA47591F80DE8EBC541A3BBFC67DDAB82AA0FF81_H
#define GRIDDIVISIONS_TAA47591F80DE8EBC541A3BBFC67DDAB82AA0FF81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions
struct  GridDivisions_tAA47591F80DE8EBC541A3BBFC67DDAB82AA0FF81 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_tAA47591F80DE8EBC541A3BBFC67DDAB82AA0FF81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDDIVISIONS_TAA47591F80DE8EBC541A3BBFC67DDAB82AA0FF81_H
#ifndef TRACKEDHANDJOINT_TDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_H
#define TRACKEDHANDJOINT_TDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDHANDJOINT_TDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_H
#ifndef TRACKEDOBJECTTYPE_TD9B3AD7CFF77DA9C8E5C17D3B17981BC948F66AC_H
#define TRACKEDOBJECTTYPE_TD9B3AD7CFF77DA9C8E5C17D3B17981BC948F66AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct  TrackedObjectType_tD9B3AD7CFF77DA9C8E5C17D3B17981BC948F66AC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_tD9B3AD7CFF77DA9C8E5C17D3B17981BC948F66AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDOBJECTTYPE_TD9B3AD7CFF77DA9C8E5C17D3B17981BC948F66AC_H
#ifndef VECTOR3SMOOTHED_TF6A4C81C95F58D5620F05043EF2DECB78FC988C6_H
#define VECTOR3SMOOTHED_TF6A4C81C95F58D5620F05043EF2DECB78FC988C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct  Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3SMOOTHED_TF6A4C81C95F58D5620F05043EF2DECB78FC988C6_H
#ifndef BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#define BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#define ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#define PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#define RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifndef MIXEDREALITYINPUTACTION_TF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_H
#define MIXEDREALITYINPUTACTION_TF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_TF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef NULLABLE_1_TBD5BCA98767B0035CE68E24069088BC9242CB231_H
#define NULLABLE_1_TBD5BCA98767B0035CE68E24069088BC9242CB231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>
struct  Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_TBD5BCA98767B0035CE68E24069088BC9242CB231_H
#ifndef NULLABLE_1_TAD3D374B25057F9C5F22F267FE9A4F0EE5F82152_H
#define NULLABLE_1_TAD3D374B25057F9C5F22F267FE9A4F0EE5F82152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.ByteEnum>
struct  Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_TAD3D374B25057F9C5F22F267FE9A4F0EE5F82152_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef BASEINPUTEVENTDATA_TAF6552FE95917E1D365301264A6A2135813628FE_H
#define BASEINPUTEVENTDATA_TAF6552FE95917E1D365301264A6A2135813628FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___U3CMixedRealityInputActionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE, ___U3CSourceIdU3Ek__BackingField_4)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_4() const { return ___U3CSourceIdU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_4() { return &___U3CSourceIdU3Ek__BackingField_4; }
	inline void set_U3CSourceIdU3Ek__BackingField_4(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE, ___U3CMixedRealityInputActionU3Ek__BackingField_5)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_U3CMixedRealityInputActionU3Ek__BackingField_5() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return &___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_5(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTEVENTDATA_TAF6552FE95917E1D365301264A6A2135813628FE_H
#ifndef COMPARISON_1_TD5CF35A150128547802730D4B1D520CB27DDF4B4_H
#define COMPARISON_1_TD5CF35A150128547802730D4B1D520CB27DDF4B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct  Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_TD5CF35A150128547802730D4B1D520CB27DDF4B4_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef SOURCESTATEEVENTDATA_TC17E9EB097E08CCA954A82FAEAC9D010CF8798F8_H
#define SOURCESTATEEVENTDATA_TC17E9EB097E08CCA954A82FAEAC9D010CF8798F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct  SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8  : public BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8, ___U3CControllerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_6() const { return ___U3CControllerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_6() { return &___U3CControllerU3Ek__BackingField_6; }
	inline void set_U3CControllerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControllerU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCESTATEEVENTDATA_TC17E9EB097E08CCA954A82FAEAC9D010CF8798F8_H
#ifndef BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#define BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef MIXEDREALITYTOOLKIT_TDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_H
#define MIXEDREALITYTOOLKIT_TDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct  MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * ___activeProfile_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.MixedRealityToolkit::mixedRealityPlayspace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mixedRealityPlayspace_14;

public:
	inline static int32_t get_offset_of_activeProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47, ___activeProfile_7)); }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * get_activeProfile_7() const { return ___activeProfile_7; }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 ** get_address_of_activeProfile_7() { return &___activeProfile_7; }
	inline void set_activeProfile_7(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * value)
	{
		___activeProfile_7 = value;
		Il2CppCodeGenWriteBarrier((&___activeProfile_7), value);
	}

	inline static int32_t get_offset_of_mixedRealityPlayspace_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47, ___mixedRealityPlayspace_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mixedRealityPlayspace_14() const { return ___mixedRealityPlayspace_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mixedRealityPlayspace_14() { return &___mixedRealityPlayspace_14; }
	inline void set_mixedRealityPlayspace_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mixedRealityPlayspace_14 = value;
		Il2CppCodeGenWriteBarrier((&___mixedRealityPlayspace_14), value);
	}
};

struct MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * ___activeSystems_8;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * ___registeredMixedRealityServices_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::instance
	MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * ___instance_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_11;
	// System.Object Microsoft.MixedReality.Toolkit.MixedRealityToolkit::initializedLock
	RuntimeObject * ___initializedLock_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::searchForInstance
	bool ___searchForInstance_13;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::inputSystem
	RuntimeObject* ___inputSystem_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logInputSystem
	bool ___logInputSystem_16;
	// Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::boundarySystem
	RuntimeObject* ___boundarySystem_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logBoundarySystem
	bool ___logBoundarySystem_18;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::spatialAwarenessSystem
	RuntimeObject* ___spatialAwarenessSystem_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logSpatialAwarenessSystem
	bool ___logSpatialAwarenessSystem_20;
	// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::teleportSystem
	RuntimeObject* ___teleportSystem_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logTeleportSystem
	bool ___logTeleportSystem_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::diagnosticsSystem
	RuntimeObject* ___diagnosticsSystem_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logDiagnosticsSystem
	bool ___logDiagnosticsSystem_24;

public:
	inline static int32_t get_offset_of_isInitializing_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___isInitializing_5)); }
	inline bool get_isInitializing_5() const { return ___isInitializing_5; }
	inline bool* get_address_of_isInitializing_5() { return &___isInitializing_5; }
	inline void set_isInitializing_5(bool value)
	{
		___isInitializing_5 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___isApplicationQuitting_6)); }
	inline bool get_isApplicationQuitting_6() const { return ___isApplicationQuitting_6; }
	inline bool* get_address_of_isApplicationQuitting_6() { return &___isApplicationQuitting_6; }
	inline void set_isApplicationQuitting_6(bool value)
	{
		___isApplicationQuitting_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___activeSystems_8)); }
	inline Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * get_activeSystems_8() const { return ___activeSystems_8; }
	inline Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 ** get_address_of_activeSystems_8() { return &___activeSystems_8; }
	inline void set_activeSystems_8(Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * value)
	{
		___activeSystems_8 = value;
		Il2CppCodeGenWriteBarrier((&___activeSystems_8), value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___registeredMixedRealityServices_9)); }
	inline List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * get_registeredMixedRealityServices_9() const { return ___registeredMixedRealityServices_9; }
	inline List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC ** get_address_of_registeredMixedRealityServices_9() { return &___registeredMixedRealityServices_9; }
	inline void set_registeredMixedRealityServices_9(List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * value)
	{
		___registeredMixedRealityServices_9 = value;
		Il2CppCodeGenWriteBarrier((&___registeredMixedRealityServices_9), value);
	}

	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___instance_10)); }
	inline MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * get_instance_10() const { return ___instance_10; }
	inline MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___instance_10), value);
	}

	inline static int32_t get_offset_of_newInstanceBeingInitialized_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___newInstanceBeingInitialized_11)); }
	inline bool get_newInstanceBeingInitialized_11() const { return ___newInstanceBeingInitialized_11; }
	inline bool* get_address_of_newInstanceBeingInitialized_11() { return &___newInstanceBeingInitialized_11; }
	inline void set_newInstanceBeingInitialized_11(bool value)
	{
		___newInstanceBeingInitialized_11 = value;
	}

	inline static int32_t get_offset_of_initializedLock_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___initializedLock_12)); }
	inline RuntimeObject * get_initializedLock_12() const { return ___initializedLock_12; }
	inline RuntimeObject ** get_address_of_initializedLock_12() { return &___initializedLock_12; }
	inline void set_initializedLock_12(RuntimeObject * value)
	{
		___initializedLock_12 = value;
		Il2CppCodeGenWriteBarrier((&___initializedLock_12), value);
	}

	inline static int32_t get_offset_of_searchForInstance_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___searchForInstance_13)); }
	inline bool get_searchForInstance_13() const { return ___searchForInstance_13; }
	inline bool* get_address_of_searchForInstance_13() { return &___searchForInstance_13; }
	inline void set_searchForInstance_13(bool value)
	{
		___searchForInstance_13 = value;
	}

	inline static int32_t get_offset_of_inputSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___inputSystem_15)); }
	inline RuntimeObject* get_inputSystem_15() const { return ___inputSystem_15; }
	inline RuntimeObject** get_address_of_inputSystem_15() { return &___inputSystem_15; }
	inline void set_inputSystem_15(RuntimeObject* value)
	{
		___inputSystem_15 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_15), value);
	}

	inline static int32_t get_offset_of_logInputSystem_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logInputSystem_16)); }
	inline bool get_logInputSystem_16() const { return ___logInputSystem_16; }
	inline bool* get_address_of_logInputSystem_16() { return &___logInputSystem_16; }
	inline void set_logInputSystem_16(bool value)
	{
		___logInputSystem_16 = value;
	}

	inline static int32_t get_offset_of_boundarySystem_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___boundarySystem_17)); }
	inline RuntimeObject* get_boundarySystem_17() const { return ___boundarySystem_17; }
	inline RuntimeObject** get_address_of_boundarySystem_17() { return &___boundarySystem_17; }
	inline void set_boundarySystem_17(RuntimeObject* value)
	{
		___boundarySystem_17 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystem_17), value);
	}

	inline static int32_t get_offset_of_logBoundarySystem_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logBoundarySystem_18)); }
	inline bool get_logBoundarySystem_18() const { return ___logBoundarySystem_18; }
	inline bool* get_address_of_logBoundarySystem_18() { return &___logBoundarySystem_18; }
	inline void set_logBoundarySystem_18(bool value)
	{
		___logBoundarySystem_18 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystem_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___spatialAwarenessSystem_19)); }
	inline RuntimeObject* get_spatialAwarenessSystem_19() const { return ___spatialAwarenessSystem_19; }
	inline RuntimeObject** get_address_of_spatialAwarenessSystem_19() { return &___spatialAwarenessSystem_19; }
	inline void set_spatialAwarenessSystem_19(RuntimeObject* value)
	{
		___spatialAwarenessSystem_19 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessSystem_19), value);
	}

	inline static int32_t get_offset_of_logSpatialAwarenessSystem_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logSpatialAwarenessSystem_20)); }
	inline bool get_logSpatialAwarenessSystem_20() const { return ___logSpatialAwarenessSystem_20; }
	inline bool* get_address_of_logSpatialAwarenessSystem_20() { return &___logSpatialAwarenessSystem_20; }
	inline void set_logSpatialAwarenessSystem_20(bool value)
	{
		___logSpatialAwarenessSystem_20 = value;
	}

	inline static int32_t get_offset_of_teleportSystem_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___teleportSystem_21)); }
	inline RuntimeObject* get_teleportSystem_21() const { return ___teleportSystem_21; }
	inline RuntimeObject** get_address_of_teleportSystem_21() { return &___teleportSystem_21; }
	inline void set_teleportSystem_21(RuntimeObject* value)
	{
		___teleportSystem_21 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystem_21), value);
	}

	inline static int32_t get_offset_of_logTeleportSystem_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logTeleportSystem_22)); }
	inline bool get_logTeleportSystem_22() const { return ___logTeleportSystem_22; }
	inline bool* get_address_of_logTeleportSystem_22() { return &___logTeleportSystem_22; }
	inline void set_logTeleportSystem_22(bool value)
	{
		___logTeleportSystem_22 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystem_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___diagnosticsSystem_23)); }
	inline RuntimeObject* get_diagnosticsSystem_23() const { return ___diagnosticsSystem_23; }
	inline RuntimeObject** get_address_of_diagnosticsSystem_23() { return &___diagnosticsSystem_23; }
	inline void set_diagnosticsSystem_23(RuntimeObject* value)
	{
		___diagnosticsSystem_23 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystem_23), value);
	}

	inline static int32_t get_offset_of_logDiagnosticsSystem_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logDiagnosticsSystem_24)); }
	inline bool get_logDiagnosticsSystem_24() const { return ___logDiagnosticsSystem_24; }
	inline bool* get_address_of_logDiagnosticsSystem_24() { return &___logDiagnosticsSystem_24; }
	inline void set_logDiagnosticsSystem_24(bool value)
	{
		___logDiagnosticsSystem_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTOOLKIT_TDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_H
#ifndef BASEOBJECTCOLLECTION_T28800ED99C48E52676F95791DA3FE02771D11873_H
#define BASEOBJECTCOLLECTION_T28800ED99C48E52676F95791DA3FE02771D11873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct  BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<OnCollectionUpdated>k__BackingField
	Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 * ___U3COnCollectionUpdatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<NodeList>k__BackingField
	List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * ___U3CNodeListU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::ignoreInactiveTransforms
	bool ___ignoreInactiveTransforms_6;
	// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::sortType
	int32_t ___sortType_7;

public:
	inline static int32_t get_offset_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___U3COnCollectionUpdatedU3Ek__BackingField_4)); }
	inline Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 * get_U3COnCollectionUpdatedU3Ek__BackingField_4() const { return ___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 ** get_address_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return &___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline void set_U3COnCollectionUpdatedU3Ek__BackingField_4(Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 * value)
	{
		___U3COnCollectionUpdatedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnCollectionUpdatedU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CNodeListU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___U3CNodeListU3Ek__BackingField_5)); }
	inline List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * get_U3CNodeListU3Ek__BackingField_5() const { return ___U3CNodeListU3Ek__BackingField_5; }
	inline List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE ** get_address_of_U3CNodeListU3Ek__BackingField_5() { return &___U3CNodeListU3Ek__BackingField_5; }
	inline void set_U3CNodeListU3Ek__BackingField_5(List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * value)
	{
		___U3CNodeListU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNodeListU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_ignoreInactiveTransforms_6() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___ignoreInactiveTransforms_6)); }
	inline bool get_ignoreInactiveTransforms_6() const { return ___ignoreInactiveTransforms_6; }
	inline bool* get_address_of_ignoreInactiveTransforms_6() { return &___ignoreInactiveTransforms_6; }
	inline void set_ignoreInactiveTransforms_6(bool value)
	{
		___ignoreInactiveTransforms_6 = value;
	}

	inline static int32_t get_offset_of_sortType_7() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___sortType_7)); }
	inline int32_t get_sortType_7() const { return ___sortType_7; }
	inline int32_t* get_address_of_sortType_7() { return &___sortType_7; }
	inline void set_sortType_7(int32_t value)
	{
		___sortType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEOBJECTCOLLECTION_T28800ED99C48E52676F95791DA3FE02771D11873_H
#ifndef HEADPOSITIONOFFSET_T3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3_H
#define HEADPOSITIONOFFSET_T3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.HeadPositionOffset
struct  HeadPositionOffset_t3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.HeadPositionOffset::HeadOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___HeadOffset_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.HeadPositionOffset::started
	bool ___started_5;

public:
	inline static int32_t get_offset_of_HeadOffset_4() { return static_cast<int32_t>(offsetof(HeadPositionOffset_t3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3, ___HeadOffset_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_HeadOffset_4() const { return ___HeadOffset_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_HeadOffset_4() { return &___HeadOffset_4; }
	inline void set_HeadOffset_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___HeadOffset_4 = value;
	}

	inline static int32_t get_offset_of_started_5() { return static_cast<int32_t>(offsetof(HeadPositionOffset_t3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3, ___started_5)); }
	inline bool get_started_5() const { return ___started_5; }
	inline bool* get_address_of_started_5() { return &___started_5; }
	inline void set_started_5(bool value)
	{
		___started_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADPOSITIONOFFSET_T3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3_H
#ifndef CONTROLLERFINDER_T0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F_H
#define CONTROLLERFINDER_T0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder
struct  ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::handedness
	uint8_t ___handedness_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::ControllerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ControllerTransform_5;

public:
	inline static int32_t get_offset_of_handedness_4() { return static_cast<int32_t>(offsetof(ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F, ___handedness_4)); }
	inline uint8_t get_handedness_4() const { return ___handedness_4; }
	inline uint8_t* get_address_of_handedness_4() { return &___handedness_4; }
	inline void set_handedness_4(uint8_t value)
	{
		___handedness_4 = value;
	}

	inline static int32_t get_offset_of_ControllerTransform_5() { return static_cast<int32_t>(offsetof(ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F, ___ControllerTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ControllerTransform_5() const { return ___ControllerTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ControllerTransform_5() { return &___ControllerTransform_5; }
	inline void set_ControllerTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ControllerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___ControllerTransform_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERFINDER_T0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F_H
#ifndef SOLVER_T79AE87802ED7C51B02E35D03DF67E057377E1011_H
#define SOLVER_T79AE87802ED7C51B02E35D03DF67E057377E1011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct  Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScale
	bool ___maintainScale_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * ___SolverHandler_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::GoalPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___GoalPosition_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::GoalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___GoalRotation_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::GoalScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___GoalScale_15;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScale_8() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___maintainScale_8)); }
	inline bool get_maintainScale_8() const { return ___maintainScale_8; }
	inline bool* get_address_of_maintainScale_8() { return &___maintainScale_8; }
	inline void set_maintainScale_8(bool value)
	{
		___maintainScale_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___SolverHandler_12)); }
	inline SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___SolverHandler_12), value);
	}

	inline static int32_t get_offset_of_GoalPosition_13() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___GoalPosition_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_GoalPosition_13() const { return ___GoalPosition_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_GoalPosition_13() { return &___GoalPosition_13; }
	inline void set_GoalPosition_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___GoalPosition_13 = value;
	}

	inline static int32_t get_offset_of_GoalRotation_14() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___GoalRotation_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_GoalRotation_14() const { return ___GoalRotation_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_GoalRotation_14() { return &___GoalRotation_14; }
	inline void set_GoalRotation_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___GoalRotation_14 = value;
	}

	inline static int32_t get_offset_of_GoalScale_15() { return static_cast<int32_t>(offsetof(Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011, ___GoalScale_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_GoalScale_15() const { return ___GoalScale_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_GoalScale_15() { return &___GoalScale_15; }
	inline void set_GoalScale_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___GoalScale_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVER_T79AE87802ED7C51B02E35D03DF67E057377E1011_H
#ifndef TILEGRIDOBJECTCOLLECTION_T833AB0F588F859C5C5CEADA2E015C5FF9C1281E5_H
#define TILEGRIDOBJECTCOLLECTION_T833AB0F588F859C5C5CEADA2E015C5FF9C1281E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct  TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Columns
	int32_t ___Columns_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::TileSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TileSize_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Gutters
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Gutters_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::LayoutDireciton
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LayoutDireciton_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::StartPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___StartPosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Centered
	bool ___Centered_9;
	// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::DepthCalculatedBy
	int32_t ___DepthCalculatedBy_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnlyInEditMode
	bool ___OnlyInEditMode_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::offSet
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offSet_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::editorUpdated
	bool ___editorUpdated_13;

public:
	inline static int32_t get_offset_of_Columns_4() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___Columns_4)); }
	inline int32_t get_Columns_4() const { return ___Columns_4; }
	inline int32_t* get_address_of_Columns_4() { return &___Columns_4; }
	inline void set_Columns_4(int32_t value)
	{
		___Columns_4 = value;
	}

	inline static int32_t get_offset_of_TileSize_5() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___TileSize_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TileSize_5() const { return ___TileSize_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TileSize_5() { return &___TileSize_5; }
	inline void set_TileSize_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TileSize_5 = value;
	}

	inline static int32_t get_offset_of_Gutters_6() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___Gutters_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Gutters_6() const { return ___Gutters_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Gutters_6() { return &___Gutters_6; }
	inline void set_Gutters_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Gutters_6 = value;
	}

	inline static int32_t get_offset_of_LayoutDireciton_7() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___LayoutDireciton_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LayoutDireciton_7() const { return ___LayoutDireciton_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LayoutDireciton_7() { return &___LayoutDireciton_7; }
	inline void set_LayoutDireciton_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LayoutDireciton_7 = value;
	}

	inline static int32_t get_offset_of_StartPosition_8() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___StartPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_StartPosition_8() const { return ___StartPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_StartPosition_8() { return &___StartPosition_8; }
	inline void set_StartPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___StartPosition_8 = value;
	}

	inline static int32_t get_offset_of_Centered_9() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___Centered_9)); }
	inline bool get_Centered_9() const { return ___Centered_9; }
	inline bool* get_address_of_Centered_9() { return &___Centered_9; }
	inline void set_Centered_9(bool value)
	{
		___Centered_9 = value;
	}

	inline static int32_t get_offset_of_DepthCalculatedBy_10() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___DepthCalculatedBy_10)); }
	inline int32_t get_DepthCalculatedBy_10() const { return ___DepthCalculatedBy_10; }
	inline int32_t* get_address_of_DepthCalculatedBy_10() { return &___DepthCalculatedBy_10; }
	inline void set_DepthCalculatedBy_10(int32_t value)
	{
		___DepthCalculatedBy_10 = value;
	}

	inline static int32_t get_offset_of_OnlyInEditMode_11() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___OnlyInEditMode_11)); }
	inline bool get_OnlyInEditMode_11() const { return ___OnlyInEditMode_11; }
	inline bool* get_address_of_OnlyInEditMode_11() { return &___OnlyInEditMode_11; }
	inline void set_OnlyInEditMode_11(bool value)
	{
		___OnlyInEditMode_11 = value;
	}

	inline static int32_t get_offset_of_offSet_12() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___offSet_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offSet_12() const { return ___offSet_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offSet_12() { return &___offSet_12; }
	inline void set_offSet_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offSet_12 = value;
	}

	inline static int32_t get_offset_of_editorUpdated_13() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5, ___editorUpdated_13)); }
	inline bool get_editorUpdated_13() const { return ___editorUpdated_13; }
	inline bool* get_address_of_editorUpdated_13() { return &___editorUpdated_13; }
	inline void set_editorUpdated_13(bool value)
	{
		___editorUpdated_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEGRIDOBJECTCOLLECTION_T833AB0F588F859C5C5CEADA2E015C5FF9C1281E5_H
#ifndef GRIDOBJECTCOLLECTION_TAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4_H
#define GRIDOBJECTCOLLECTION_TAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct  GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4  : public BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::surfaceType
	int32_t ___surfaceType_8;
	// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::orientType
	int32_t ___orientType_9;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::layout
	int32_t ___layout_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radius
	float ___radius_11;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radialRange
	float ___radialRange_12;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rows
	int32_t ___rows_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellWidth
	float ___cellWidth_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellHeight
	float ___cellHeight_15;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<SphereMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CSphereMeshU3Ek__BackingField_16;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<CylinderMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CCylinderMeshU3Ek__BackingField_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::Columns
	int32_t ___Columns_18;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::HalfCell
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___HalfCell_19;

public:
	inline static int32_t get_offset_of_surfaceType_8() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___surfaceType_8)); }
	inline int32_t get_surfaceType_8() const { return ___surfaceType_8; }
	inline int32_t* get_address_of_surfaceType_8() { return &___surfaceType_8; }
	inline void set_surfaceType_8(int32_t value)
	{
		___surfaceType_8 = value;
	}

	inline static int32_t get_offset_of_orientType_9() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___orientType_9)); }
	inline int32_t get_orientType_9() const { return ___orientType_9; }
	inline int32_t* get_address_of_orientType_9() { return &___orientType_9; }
	inline void set_orientType_9(int32_t value)
	{
		___orientType_9 = value;
	}

	inline static int32_t get_offset_of_layout_10() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___layout_10)); }
	inline int32_t get_layout_10() const { return ___layout_10; }
	inline int32_t* get_address_of_layout_10() { return &___layout_10; }
	inline void set_layout_10(int32_t value)
	{
		___layout_10 = value;
	}

	inline static int32_t get_offset_of_radius_11() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___radius_11)); }
	inline float get_radius_11() const { return ___radius_11; }
	inline float* get_address_of_radius_11() { return &___radius_11; }
	inline void set_radius_11(float value)
	{
		___radius_11 = value;
	}

	inline static int32_t get_offset_of_radialRange_12() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___radialRange_12)); }
	inline float get_radialRange_12() const { return ___radialRange_12; }
	inline float* get_address_of_radialRange_12() { return &___radialRange_12; }
	inline void set_radialRange_12(float value)
	{
		___radialRange_12 = value;
	}

	inline static int32_t get_offset_of_rows_13() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___rows_13)); }
	inline int32_t get_rows_13() const { return ___rows_13; }
	inline int32_t* get_address_of_rows_13() { return &___rows_13; }
	inline void set_rows_13(int32_t value)
	{
		___rows_13 = value;
	}

	inline static int32_t get_offset_of_cellWidth_14() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___cellWidth_14)); }
	inline float get_cellWidth_14() const { return ___cellWidth_14; }
	inline float* get_address_of_cellWidth_14() { return &___cellWidth_14; }
	inline void set_cellWidth_14(float value)
	{
		___cellWidth_14 = value;
	}

	inline static int32_t get_offset_of_cellHeight_15() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___cellHeight_15)); }
	inline float get_cellHeight_15() const { return ___cellHeight_15; }
	inline float* get_address_of_cellHeight_15() { return &___cellHeight_15; }
	inline void set_cellHeight_15(float value)
	{
		___cellHeight_15 = value;
	}

	inline static int32_t get_offset_of_U3CSphereMeshU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___U3CSphereMeshU3Ek__BackingField_16)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CSphereMeshU3Ek__BackingField_16() const { return ___U3CSphereMeshU3Ek__BackingField_16; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CSphereMeshU3Ek__BackingField_16() { return &___U3CSphereMeshU3Ek__BackingField_16; }
	inline void set_U3CSphereMeshU3Ek__BackingField_16(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CSphereMeshU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSphereMeshU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3CCylinderMeshU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___U3CCylinderMeshU3Ek__BackingField_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CCylinderMeshU3Ek__BackingField_17() const { return ___U3CCylinderMeshU3Ek__BackingField_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CCylinderMeshU3Ek__BackingField_17() { return &___U3CCylinderMeshU3Ek__BackingField_17; }
	inline void set_U3CCylinderMeshU3Ek__BackingField_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CCylinderMeshU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCylinderMeshU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_Columns_18() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___Columns_18)); }
	inline int32_t get_Columns_18() const { return ___Columns_18; }
	inline int32_t* get_address_of_Columns_18() { return &___Columns_18; }
	inline void set_Columns_18(int32_t value)
	{
		___Columns_18 = value;
	}

	inline static int32_t get_offset_of_HalfCell_19() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___HalfCell_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_HalfCell_19() const { return ___HalfCell_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_HalfCell_19() { return &___HalfCell_19; }
	inline void set_HalfCell_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___HalfCell_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDOBJECTCOLLECTION_TAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4_H
#ifndef CONSTANTVIEWSIZE_TE25B1B9009965C08B8D6B962C7D4723B9B64829C_H
#define CONSTANTVIEWSIZE_TE25B1B9009965C08B8D6B962C7D4723B9B64829C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize
struct  ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C  : public Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::targetViewPercentV
	float ___targetViewPercentV_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::minDistance
	float ___minDistance_18;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::maxDistance
	float ___maxDistance_19;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::minScale
	float ___minScale_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::maxScale
	float ___maxScale_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::scaleBuffer
	float ___scaleBuffer_22;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::manualObjectSize
	float ___manualObjectSize_23;
	// Microsoft.MixedReality.Toolkit.Utilities.ScaleState Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::<ScaleState>k__BackingField
	int32_t ___U3CScaleStateU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::<CurrentScalePercent>k__BackingField
	float ___U3CCurrentScalePercentU3Ek__BackingField_25;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::<CurrentDistancePercent>k__BackingField
	float ___U3CCurrentDistancePercentU3Ek__BackingField_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::fovScalar
	float ___fovScalar_27;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::objectSize
	float ___objectSize_28;

public:
	inline static int32_t get_offset_of_targetViewPercentV_17() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___targetViewPercentV_17)); }
	inline float get_targetViewPercentV_17() const { return ___targetViewPercentV_17; }
	inline float* get_address_of_targetViewPercentV_17() { return &___targetViewPercentV_17; }
	inline void set_targetViewPercentV_17(float value)
	{
		___targetViewPercentV_17 = value;
	}

	inline static int32_t get_offset_of_minDistance_18() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___minDistance_18)); }
	inline float get_minDistance_18() const { return ___minDistance_18; }
	inline float* get_address_of_minDistance_18() { return &___minDistance_18; }
	inline void set_minDistance_18(float value)
	{
		___minDistance_18 = value;
	}

	inline static int32_t get_offset_of_maxDistance_19() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___maxDistance_19)); }
	inline float get_maxDistance_19() const { return ___maxDistance_19; }
	inline float* get_address_of_maxDistance_19() { return &___maxDistance_19; }
	inline void set_maxDistance_19(float value)
	{
		___maxDistance_19 = value;
	}

	inline static int32_t get_offset_of_minScale_20() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___minScale_20)); }
	inline float get_minScale_20() const { return ___minScale_20; }
	inline float* get_address_of_minScale_20() { return &___minScale_20; }
	inline void set_minScale_20(float value)
	{
		___minScale_20 = value;
	}

	inline static int32_t get_offset_of_maxScale_21() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___maxScale_21)); }
	inline float get_maxScale_21() const { return ___maxScale_21; }
	inline float* get_address_of_maxScale_21() { return &___maxScale_21; }
	inline void set_maxScale_21(float value)
	{
		___maxScale_21 = value;
	}

	inline static int32_t get_offset_of_scaleBuffer_22() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___scaleBuffer_22)); }
	inline float get_scaleBuffer_22() const { return ___scaleBuffer_22; }
	inline float* get_address_of_scaleBuffer_22() { return &___scaleBuffer_22; }
	inline void set_scaleBuffer_22(float value)
	{
		___scaleBuffer_22 = value;
	}

	inline static int32_t get_offset_of_manualObjectSize_23() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___manualObjectSize_23)); }
	inline float get_manualObjectSize_23() const { return ___manualObjectSize_23; }
	inline float* get_address_of_manualObjectSize_23() { return &___manualObjectSize_23; }
	inline void set_manualObjectSize_23(float value)
	{
		___manualObjectSize_23 = value;
	}

	inline static int32_t get_offset_of_U3CScaleStateU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___U3CScaleStateU3Ek__BackingField_24)); }
	inline int32_t get_U3CScaleStateU3Ek__BackingField_24() const { return ___U3CScaleStateU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CScaleStateU3Ek__BackingField_24() { return &___U3CScaleStateU3Ek__BackingField_24; }
	inline void set_U3CScaleStateU3Ek__BackingField_24(int32_t value)
	{
		___U3CScaleStateU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentScalePercentU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___U3CCurrentScalePercentU3Ek__BackingField_25)); }
	inline float get_U3CCurrentScalePercentU3Ek__BackingField_25() const { return ___U3CCurrentScalePercentU3Ek__BackingField_25; }
	inline float* get_address_of_U3CCurrentScalePercentU3Ek__BackingField_25() { return &___U3CCurrentScalePercentU3Ek__BackingField_25; }
	inline void set_U3CCurrentScalePercentU3Ek__BackingField_25(float value)
	{
		___U3CCurrentScalePercentU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentDistancePercentU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___U3CCurrentDistancePercentU3Ek__BackingField_26)); }
	inline float get_U3CCurrentDistancePercentU3Ek__BackingField_26() const { return ___U3CCurrentDistancePercentU3Ek__BackingField_26; }
	inline float* get_address_of_U3CCurrentDistancePercentU3Ek__BackingField_26() { return &___U3CCurrentDistancePercentU3Ek__BackingField_26; }
	inline void set_U3CCurrentDistancePercentU3Ek__BackingField_26(float value)
	{
		___U3CCurrentDistancePercentU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_fovScalar_27() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___fovScalar_27)); }
	inline float get_fovScalar_27() const { return ___fovScalar_27; }
	inline float* get_address_of_fovScalar_27() { return &___fovScalar_27; }
	inline void set_fovScalar_27(float value)
	{
		___fovScalar_27 = value;
	}

	inline static int32_t get_offset_of_objectSize_28() { return static_cast<int32_t>(offsetof(ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C, ___objectSize_28)); }
	inline float get_objectSize_28() const { return ___objectSize_28; }
	inline float* get_address_of_objectSize_28() { return &___objectSize_28; }
	inline void set_objectSize_28(float value)
	{
		___objectSize_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTVIEWSIZE_TE25B1B9009965C08B8D6B962C7D4723B9B64829C_H
#ifndef INBETWEEN_T1D97EC9DB2AC2DA255787479C706F604F3D20D06_H
#define INBETWEEN_T1D97EC9DB2AC2DA255787479C706F604F3D20D06_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct  InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06  : public Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::partwayOffset
	float ___partwayOffset_16;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::trackedObjectForSecondTransform
	int32_t ___trackedObjectForSecondTransform_17;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTransformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransformOverride_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondSolverHandler
	SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * ___secondSolverHandler_19;

public:
	inline static int32_t get_offset_of_partwayOffset_16() { return static_cast<int32_t>(offsetof(InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06, ___partwayOffset_16)); }
	inline float get_partwayOffset_16() const { return ___partwayOffset_16; }
	inline float* get_address_of_partwayOffset_16() { return &___partwayOffset_16; }
	inline void set_partwayOffset_16(float value)
	{
		___partwayOffset_16 = value;
	}

	inline static int32_t get_offset_of_trackedObjectForSecondTransform_17() { return static_cast<int32_t>(offsetof(InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06, ___trackedObjectForSecondTransform_17)); }
	inline int32_t get_trackedObjectForSecondTransform_17() const { return ___trackedObjectForSecondTransform_17; }
	inline int32_t* get_address_of_trackedObjectForSecondTransform_17() { return &___trackedObjectForSecondTransform_17; }
	inline void set_trackedObjectForSecondTransform_17(int32_t value)
	{
		___trackedObjectForSecondTransform_17 = value;
	}

	inline static int32_t get_offset_of_secondTransformOverride_18() { return static_cast<int32_t>(offsetof(InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06, ___secondTransformOverride_18)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_secondTransformOverride_18() const { return ___secondTransformOverride_18; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_secondTransformOverride_18() { return &___secondTransformOverride_18; }
	inline void set_secondTransformOverride_18(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___secondTransformOverride_18 = value;
		Il2CppCodeGenWriteBarrier((&___secondTransformOverride_18), value);
	}

	inline static int32_t get_offset_of_secondSolverHandler_19() { return static_cast<int32_t>(offsetof(InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06, ___secondSolverHandler_19)); }
	inline SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * get_secondSolverHandler_19() const { return ___secondSolverHandler_19; }
	inline SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE ** get_address_of_secondSolverHandler_19() { return &___secondSolverHandler_19; }
	inline void set_secondSolverHandler_19(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * value)
	{
		___secondSolverHandler_19 = value;
		Il2CppCodeGenWriteBarrier((&___secondSolverHandler_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INBETWEEN_T1D97EC9DB2AC2DA255787479C706F604F3D20D06_H
#ifndef MOMENTUM_T6698497A4E1A66AF49880B0ADEF5369FBBD96B3E_H
#define MOMENTUM_T6698497A4E1A66AF49880B0ADEF5369FBBD96B3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct  Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E  : public Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistance
	float ___resistance_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistanceVelocityPower
	float ___resistanceVelocityPower_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::accelerationRate
	float ___accelerationRate_18;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::springiness
	float ___springiness_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::snapZ
	bool ___snapZ_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity_21;

public:
	inline static int32_t get_offset_of_resistance_16() { return static_cast<int32_t>(offsetof(Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E, ___resistance_16)); }
	inline float get_resistance_16() const { return ___resistance_16; }
	inline float* get_address_of_resistance_16() { return &___resistance_16; }
	inline void set_resistance_16(float value)
	{
		___resistance_16 = value;
	}

	inline static int32_t get_offset_of_resistanceVelocityPower_17() { return static_cast<int32_t>(offsetof(Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E, ___resistanceVelocityPower_17)); }
	inline float get_resistanceVelocityPower_17() const { return ___resistanceVelocityPower_17; }
	inline float* get_address_of_resistanceVelocityPower_17() { return &___resistanceVelocityPower_17; }
	inline void set_resistanceVelocityPower_17(float value)
	{
		___resistanceVelocityPower_17 = value;
	}

	inline static int32_t get_offset_of_accelerationRate_18() { return static_cast<int32_t>(offsetof(Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E, ___accelerationRate_18)); }
	inline float get_accelerationRate_18() const { return ___accelerationRate_18; }
	inline float* get_address_of_accelerationRate_18() { return &___accelerationRate_18; }
	inline void set_accelerationRate_18(float value)
	{
		___accelerationRate_18 = value;
	}

	inline static int32_t get_offset_of_springiness_19() { return static_cast<int32_t>(offsetof(Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E, ___springiness_19)); }
	inline float get_springiness_19() const { return ___springiness_19; }
	inline float* get_address_of_springiness_19() { return &___springiness_19; }
	inline void set_springiness_19(float value)
	{
		___springiness_19 = value;
	}

	inline static int32_t get_offset_of_snapZ_20() { return static_cast<int32_t>(offsetof(Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E, ___snapZ_20)); }
	inline bool get_snapZ_20() const { return ___snapZ_20; }
	inline bool* get_address_of_snapZ_20() { return &___snapZ_20; }
	inline void set_snapZ_20(bool value)
	{
		___snapZ_20 = value;
	}

	inline static int32_t get_offset_of_velocity_21() { return static_cast<int32_t>(offsetof(Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E, ___velocity_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocity_21() const { return ___velocity_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocity_21() { return &___velocity_21; }
	inline void set_velocity_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocity_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOMENTUM_T6698497A4E1A66AF49880B0ADEF5369FBBD96B3E_H
#ifndef ORBITAL_TD614902EB47022013E650D5A78562570BD6FDB9B_H
#define ORBITAL_TD614902EB47022013E650D5A78562570BD6FDB9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct  Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B  : public Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::orientationType
	int32_t ___orientationType_16;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::localOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localOffset_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::worldOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldOffset_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::useAngleSteppingForWorldOffset
	bool ___useAngleSteppingForWorldOffset_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::tetherAngleSteps
	int32_t ___tetherAngleSteps_20;

public:
	inline static int32_t get_offset_of_orientationType_16() { return static_cast<int32_t>(offsetof(Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B, ___orientationType_16)); }
	inline int32_t get_orientationType_16() const { return ___orientationType_16; }
	inline int32_t* get_address_of_orientationType_16() { return &___orientationType_16; }
	inline void set_orientationType_16(int32_t value)
	{
		___orientationType_16 = value;
	}

	inline static int32_t get_offset_of_localOffset_17() { return static_cast<int32_t>(offsetof(Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B, ___localOffset_17)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localOffset_17() const { return ___localOffset_17; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localOffset_17() { return &___localOffset_17; }
	inline void set_localOffset_17(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localOffset_17 = value;
	}

	inline static int32_t get_offset_of_worldOffset_18() { return static_cast<int32_t>(offsetof(Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B, ___worldOffset_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldOffset_18() const { return ___worldOffset_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldOffset_18() { return &___worldOffset_18; }
	inline void set_worldOffset_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldOffset_18 = value;
	}

	inline static int32_t get_offset_of_useAngleSteppingForWorldOffset_19() { return static_cast<int32_t>(offsetof(Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B, ___useAngleSteppingForWorldOffset_19)); }
	inline bool get_useAngleSteppingForWorldOffset_19() const { return ___useAngleSteppingForWorldOffset_19; }
	inline bool* get_address_of_useAngleSteppingForWorldOffset_19() { return &___useAngleSteppingForWorldOffset_19; }
	inline void set_useAngleSteppingForWorldOffset_19(bool value)
	{
		___useAngleSteppingForWorldOffset_19 = value;
	}

	inline static int32_t get_offset_of_tetherAngleSteps_20() { return static_cast<int32_t>(offsetof(Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B, ___tetherAngleSteps_20)); }
	inline int32_t get_tetherAngleSteps_20() const { return ___tetherAngleSteps_20; }
	inline int32_t* get_address_of_tetherAngleSteps_20() { return &___tetherAngleSteps_20; }
	inline void set_tetherAngleSteps_20(int32_t value)
	{
		___tetherAngleSteps_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORBITAL_TD614902EB47022013E650D5A78562570BD6FDB9B_H
#ifndef OVERLAP_T6DB2D7D3026C02B914763DA2213A9BC8917D0891_H
#define OVERLAP_T6DB2D7D3026C02B914763DA2213A9BC8917D0891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct  Overlap_t6DB2D7D3026C02B914763DA2213A9BC8917D0891  : public Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERLAP_T6DB2D7D3026C02B914763DA2213A9BC8917D0891_H
#ifndef RADIALVIEW_T8F595AE184F6959905B0DEE7DE93C37ADA83B2F0_H
#define RADIALVIEW_T8F595AE184F6959905B0DEE7DE93C37ADA83B2F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct  RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0  : public Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::referenceDirection
	int32_t ___referenceDirection_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minDistance
	float ___minDistance_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxDistance
	float ___maxDistance_18;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minViewDegrees
	float ___minViewDegrees_19;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxViewDegrees
	float ___maxViewDegrees_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::aspectV
	float ___aspectV_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_24;

public:
	inline static int32_t get_offset_of_referenceDirection_16() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___referenceDirection_16)); }
	inline int32_t get_referenceDirection_16() const { return ___referenceDirection_16; }
	inline int32_t* get_address_of_referenceDirection_16() { return &___referenceDirection_16; }
	inline void set_referenceDirection_16(int32_t value)
	{
		___referenceDirection_16 = value;
	}

	inline static int32_t get_offset_of_minDistance_17() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___minDistance_17)); }
	inline float get_minDistance_17() const { return ___minDistance_17; }
	inline float* get_address_of_minDistance_17() { return &___minDistance_17; }
	inline void set_minDistance_17(float value)
	{
		___minDistance_17 = value;
	}

	inline static int32_t get_offset_of_maxDistance_18() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___maxDistance_18)); }
	inline float get_maxDistance_18() const { return ___maxDistance_18; }
	inline float* get_address_of_maxDistance_18() { return &___maxDistance_18; }
	inline void set_maxDistance_18(float value)
	{
		___maxDistance_18 = value;
	}

	inline static int32_t get_offset_of_minViewDegrees_19() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___minViewDegrees_19)); }
	inline float get_minViewDegrees_19() const { return ___minViewDegrees_19; }
	inline float* get_address_of_minViewDegrees_19() { return &___minViewDegrees_19; }
	inline void set_minViewDegrees_19(float value)
	{
		___minViewDegrees_19 = value;
	}

	inline static int32_t get_offset_of_maxViewDegrees_20() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___maxViewDegrees_20)); }
	inline float get_maxViewDegrees_20() const { return ___maxViewDegrees_20; }
	inline float* get_address_of_maxViewDegrees_20() { return &___maxViewDegrees_20; }
	inline void set_maxViewDegrees_20(float value)
	{
		___maxViewDegrees_20 = value;
	}

	inline static int32_t get_offset_of_aspectV_21() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___aspectV_21)); }
	inline float get_aspectV_21() const { return ___aspectV_21; }
	inline float* get_address_of_aspectV_21() { return &___aspectV_21; }
	inline void set_aspectV_21(float value)
	{
		___aspectV_21 = value;
	}

	inline static int32_t get_offset_of_ignoreAngleClamp_22() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___ignoreAngleClamp_22)); }
	inline bool get_ignoreAngleClamp_22() const { return ___ignoreAngleClamp_22; }
	inline bool* get_address_of_ignoreAngleClamp_22() { return &___ignoreAngleClamp_22; }
	inline void set_ignoreAngleClamp_22(bool value)
	{
		___ignoreAngleClamp_22 = value;
	}

	inline static int32_t get_offset_of_ignoreDistanceClamp_23() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___ignoreDistanceClamp_23)); }
	inline bool get_ignoreDistanceClamp_23() const { return ___ignoreDistanceClamp_23; }
	inline bool* get_address_of_ignoreDistanceClamp_23() { return &___ignoreDistanceClamp_23; }
	inline void set_ignoreDistanceClamp_23(bool value)
	{
		___ignoreDistanceClamp_23 = value;
	}

	inline static int32_t get_offset_of_orientToReferenceDirection_24() { return static_cast<int32_t>(offsetof(RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0, ___orientToReferenceDirection_24)); }
	inline bool get_orientToReferenceDirection_24() const { return ___orientToReferenceDirection_24; }
	inline bool* get_address_of_orientToReferenceDirection_24() { return &___orientToReferenceDirection_24; }
	inline void set_orientToReferenceDirection_24(bool value)
	{
		___orientToReferenceDirection_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RADIALVIEW_T8F595AE184F6959905B0DEE7DE93C37ADA83B2F0_H
#ifndef SOLVERHANDLER_TB266A703760FDE8F574DAB22078E58FBD4F181FE_H
#define SOLVERHANDLER_TB266A703760FDE8F574DAB22078E58FBD4F181FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct  SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE  : public ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedObjectToReference
	int32_t ___trackedObjectToReference_6;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformTarget
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformTarget_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_12;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  ___U3CAltScaleU3Ek__BackingField_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * ___solvers_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_18;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformWithOffset
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___transformWithOffset_19;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_20;

public:
	inline static int32_t get_offset_of_trackedObjectToReference_6() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___trackedObjectToReference_6)); }
	inline int32_t get_trackedObjectToReference_6() const { return ___trackedObjectToReference_6; }
	inline int32_t* get_address_of_trackedObjectToReference_6() { return &___trackedObjectToReference_6; }
	inline void set_trackedObjectToReference_6(int32_t value)
	{
		___trackedObjectToReference_6 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_7() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___trackedHandJoint_7)); }
	inline int32_t get_trackedHandJoint_7() const { return ___trackedHandJoint_7; }
	inline int32_t* get_address_of_trackedHandJoint_7() { return &___trackedHandJoint_7; }
	inline void set_trackedHandJoint_7(int32_t value)
	{
		___trackedHandJoint_7 = value;
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_transformTarget_10() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___transformTarget_10)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformTarget_10() const { return ___transformTarget_10; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformTarget_10() { return &___transformTarget_10; }
	inline void set_transformTarget_10(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformTarget_10 = value;
		Il2CppCodeGenWriteBarrier((&___transformTarget_10), value);
	}

	inline static int32_t get_offset_of_updateSolvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___updateSolvers_11)); }
	inline bool get_updateSolvers_11() const { return ___updateSolvers_11; }
	inline bool* get_address_of_updateSolvers_11() { return &___updateSolvers_11; }
	inline void set_updateSolvers_11(bool value)
	{
		___updateSolvers_11 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___U3CGoalPositionU3Ek__BackingField_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_12() const { return ___U3CGoalPositionU3Ek__BackingField_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_12() { return &___U3CGoalPositionU3Ek__BackingField_12; }
	inline void set_U3CGoalPositionU3Ek__BackingField_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___U3CGoalRotationU3Ek__BackingField_13)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_13() const { return ___U3CGoalRotationU3Ek__BackingField_13; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_13() { return &___U3CGoalRotationU3Ek__BackingField_13; }
	inline void set_U3CGoalRotationU3Ek__BackingField_13(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___U3CGoalScaleU3Ek__BackingField_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_14() const { return ___U3CGoalScaleU3Ek__BackingField_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_14() { return &___U3CGoalScaleU3Ek__BackingField_14; }
	inline void set_U3CGoalScaleU3Ek__BackingField_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___U3CAltScaleU3Ek__BackingField_15)); }
	inline Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  get_U3CAltScaleU3Ek__BackingField_15() const { return ___U3CAltScaleU3Ek__BackingField_15; }
	inline Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6 * get_address_of_U3CAltScaleU3Ek__BackingField_15() { return &___U3CAltScaleU3Ek__BackingField_15; }
	inline void set_U3CAltScaleU3Ek__BackingField_15(Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  value)
	{
		___U3CAltScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___U3CDeltaTimeU3Ek__BackingField_16)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_16() const { return ___U3CDeltaTimeU3Ek__BackingField_16; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_16() { return &___U3CDeltaTimeU3Ek__BackingField_16; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_16(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_solvers_17() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___solvers_17)); }
	inline List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * get_solvers_17() const { return ___solvers_17; }
	inline List_1_t03B34F7709599434AEB744E8135E739798FC6B4F ** get_address_of_solvers_17() { return &___solvers_17; }
	inline void set_solvers_17(List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * value)
	{
		___solvers_17 = value;
		Il2CppCodeGenWriteBarrier((&___solvers_17), value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_18() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___lastUpdateTime_18)); }
	inline float get_lastUpdateTime_18() const { return ___lastUpdateTime_18; }
	inline float* get_address_of_lastUpdateTime_18() { return &___lastUpdateTime_18; }
	inline void set_lastUpdateTime_18(float value)
	{
		___lastUpdateTime_18 = value;
	}

	inline static int32_t get_offset_of_transformWithOffset_19() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___transformWithOffset_19)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_transformWithOffset_19() const { return ___transformWithOffset_19; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_transformWithOffset_19() { return &___transformWithOffset_19; }
	inline void set_transformWithOffset_19(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___transformWithOffset_19 = value;
		Il2CppCodeGenWriteBarrier((&___transformWithOffset_19), value);
	}

	inline static int32_t get_offset_of_handJointService_20() { return static_cast<int32_t>(offsetof(SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE, ___handJointService_20)); }
	inline RuntimeObject* get_handJointService_20() const { return ___handJointService_20; }
	inline RuntimeObject** get_address_of_handJointService_20() { return &___handJointService_20; }
	inline void set_handJointService_20(RuntimeObject* value)
	{
		___handJointService_20 = value;
		Il2CppCodeGenWriteBarrier((&___handJointService_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERHANDLER_TB266A703760FDE8F574DAB22078E58FBD4F181FE_H
#ifndef SURFACEMAGNETISM_T37A75E1089BCC708028AFC651CACFE62EADBB8E3_H
#define SURFACEMAGNETISM_T37A75E1089BCC708028AFC651CACFE62EADBB8E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct  SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3  : public Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maxDistance
	float ___maxDistance_18;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::closeDistance
	float ___closeDistance_19;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_21;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_22;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_24;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_25;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::sphereSize
	float ___sphereSize_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_28;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionEnum Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastDirection
	int32_t ___raycastDirection_29;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientModeEnum Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_30;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_33;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_34;

public:
	inline static int32_t get_offset_of_magneticSurfaces_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___magneticSurfaces_17)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_17() const { return ___magneticSurfaces_17; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_17() { return &___magneticSurfaces_17; }
	inline void set_magneticSurfaces_17(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_17 = value;
		Il2CppCodeGenWriteBarrier((&___magneticSurfaces_17), value);
	}

	inline static int32_t get_offset_of_maxDistance_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___maxDistance_18)); }
	inline float get_maxDistance_18() const { return ___maxDistance_18; }
	inline float* get_address_of_maxDistance_18() { return &___maxDistance_18; }
	inline void set_maxDistance_18(float value)
	{
		___maxDistance_18 = value;
	}

	inline static int32_t get_offset_of_closeDistance_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___closeDistance_19)); }
	inline float get_closeDistance_19() const { return ___closeDistance_19; }
	inline float* get_address_of_closeDistance_19() { return &___closeDistance_19; }
	inline void set_closeDistance_19(float value)
	{
		___closeDistance_19 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___surfaceNormalOffset_20)); }
	inline float get_surfaceNormalOffset_20() const { return ___surfaceNormalOffset_20; }
	inline float* get_address_of_surfaceNormalOffset_20() { return &___surfaceNormalOffset_20; }
	inline void set_surfaceNormalOffset_20(float value)
	{
		___surfaceNormalOffset_20 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___surfaceRayOffset_21)); }
	inline float get_surfaceRayOffset_21() const { return ___surfaceRayOffset_21; }
	inline float* get_address_of_surfaceRayOffset_21() { return &___surfaceRayOffset_21; }
	inline void set_surfaceRayOffset_21(float value)
	{
		___surfaceRayOffset_21 = value;
	}

	inline static int32_t get_offset_of_raycastMode_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___raycastMode_22)); }
	inline int32_t get_raycastMode_22() const { return ___raycastMode_22; }
	inline int32_t* get_address_of_raycastMode_22() { return &___raycastMode_22; }
	inline void set_raycastMode_22(int32_t value)
	{
		___raycastMode_22 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___boxRaysPerEdge_23)); }
	inline int32_t get_boxRaysPerEdge_23() const { return ___boxRaysPerEdge_23; }
	inline int32_t* get_address_of_boxRaysPerEdge_23() { return &___boxRaysPerEdge_23; }
	inline void set_boxRaysPerEdge_23(int32_t value)
	{
		___boxRaysPerEdge_23 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___orthographicBoxCast_24)); }
	inline bool get_orthographicBoxCast_24() const { return ___orthographicBoxCast_24; }
	inline bool* get_address_of_orthographicBoxCast_24() { return &___orthographicBoxCast_24; }
	inline void set_orthographicBoxCast_24(bool value)
	{
		___orthographicBoxCast_24 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___maximumNormalVariance_25)); }
	inline float get_maximumNormalVariance_25() const { return ___maximumNormalVariance_25; }
	inline float* get_address_of_maximumNormalVariance_25() { return &___maximumNormalVariance_25; }
	inline void set_maximumNormalVariance_25(float value)
	{
		___maximumNormalVariance_25 = value;
	}

	inline static int32_t get_offset_of_sphereSize_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___sphereSize_26)); }
	inline float get_sphereSize_26() const { return ___sphereSize_26; }
	inline float* get_address_of_sphereSize_26() { return &___sphereSize_26; }
	inline void set_sphereSize_26(float value)
	{
		___sphereSize_26 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___volumeCastSizeOverride_27)); }
	inline float get_volumeCastSizeOverride_27() const { return ___volumeCastSizeOverride_27; }
	inline float* get_address_of_volumeCastSizeOverride_27() { return &___volumeCastSizeOverride_27; }
	inline void set_volumeCastSizeOverride_27(float value)
	{
		___volumeCastSizeOverride_27 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___useLinkedAltScaleOverride_28)); }
	inline bool get_useLinkedAltScaleOverride_28() const { return ___useLinkedAltScaleOverride_28; }
	inline bool* get_address_of_useLinkedAltScaleOverride_28() { return &___useLinkedAltScaleOverride_28; }
	inline void set_useLinkedAltScaleOverride_28(bool value)
	{
		___useLinkedAltScaleOverride_28 = value;
	}

	inline static int32_t get_offset_of_raycastDirection_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___raycastDirection_29)); }
	inline int32_t get_raycastDirection_29() const { return ___raycastDirection_29; }
	inline int32_t* get_address_of_raycastDirection_29() { return &___raycastDirection_29; }
	inline void set_raycastDirection_29(int32_t value)
	{
		___raycastDirection_29 = value;
	}

	inline static int32_t get_offset_of_orientationMode_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___orientationMode_30)); }
	inline int32_t get_orientationMode_30() const { return ___orientationMode_30; }
	inline int32_t* get_address_of_orientationMode_30() { return &___orientationMode_30; }
	inline void set_orientationMode_30(int32_t value)
	{
		___orientationMode_30 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_31() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___orientationBlend_31)); }
	inline float get_orientationBlend_31() const { return ___orientationBlend_31; }
	inline float* get_address_of_orientationBlend_31() { return &___orientationBlend_31; }
	inline void set_orientationBlend_31(float value)
	{
		___orientationBlend_31 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_32() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___debugEnabled_32)); }
	inline bool get_debugEnabled_32() const { return ___debugEnabled_32; }
	inline bool* get_address_of_debugEnabled_32() { return &___debugEnabled_32; }
	inline void set_debugEnabled_32(bool value)
	{
		___debugEnabled_32 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___U3COnSurfaceU3Ek__BackingField_33)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_33() const { return ___U3COnSurfaceU3Ek__BackingField_33; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_33() { return &___U3COnSurfaceU3Ek__BackingField_33; }
	inline void set_U3COnSurfaceU3Ek__BackingField_33(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_boxCollider_34() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3, ___boxCollider_34)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_34() const { return ___boxCollider_34; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_34() { return &___boxCollider_34; }
	inline void set_boxCollider_34(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_34 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEMAGNETISM_T37A75E1089BCC708028AFC651CACFE62EADBB8E3_H
#ifndef SCATTEROBJECTCOLLECTION_T2932B812F93E9835CF59CD0CCD179DF22A0136F0_H
#define SCATTEROBJECTCOLLECTION_T2932B812F93E9835CF59CD0CCD179DF22A0136F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.ScatterObjectCollection
struct  ScatterObjectCollection_t2932B812F93E9835CF59CD0CCD179DF22A0136F0  : public GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCATTEROBJECTCOLLECTION_T2932B812F93E9835CF59CD0CCD179DF22A0136F0_H
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * m_Items[1];

public:
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * m_Items[1];

public:
	inline Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  m_Items[1];

public:
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_gshared (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_gshared (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_gshared (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, int32_t p0, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m15AE944F3556CD05B000BF7B327058B44D4B1FB5_gshared (Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::Sort(System.Comparison`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_Sort_m323C2301497D0BAFC3256EA3601B5F697F0A008D_gshared (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.ByteEnum>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_mA37A97B81445268412FC4754069FD1AD7ED89B8E_gshared (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, uint8_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.ByteEnum>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_m0F69127464EA2230329E51E650FC4FBAD21960EB_gshared (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.ByteEnum>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m395EA5F248148274CEE1ED1C59FC628330033A4F_gshared (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A  HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<System.Object>(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MixedRealityToolkit_GetService_TisRuntimeObject_m2564C3A532C2EC5828167D6BF646C6A601AA5486_gshared (MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * __this, String_t* p0, bool p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4754C135F7B4AEC713E60DB7CE62741E7B57EB3 (U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m6FEF9F4DAB8BEAB964A806F3CEE387C1F462B4C1 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2EB2B72F9095FF3438D830118D57E32E1CC67195 (int32_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m172D84EDDE0823F53EAB60857C07EA7F85600068 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * AnimationCurve_Linear_m1391DBE6C481643128387302FAB1142D1F13438A (float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Easing::Stop()
extern "C" IL2CPP_METHOD_ATTR void Easing_Stop_m733306E0BDD8F1D9F6B06F94882280CE76FD8403 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7 (float p0, float p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Easing::IsLinear()
extern "C" IL2CPP_METHOD_ATTR bool Easing_IsLinear_m1E30DA79DFA1C76D4B6891747BCAFC5A79431A26 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Easing::GetLinear()
extern "C" IL2CPP_METHOD_ATTR float Easing_GetLinear_m960B662F0F62EB2F8DE46E75E0BDDF5157286BFD (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* p0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * AnimationCurve_EaseInOut_m05634A1E02A101E8FFEF7479ED4CF821270F483C (float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_CellWidth()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_CellHeight()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::get_NodeList()
extern "C" IL2CPP_METHOD_ATTR List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA (BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::get_Count()
inline int32_t List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE *, const RuntimeMethod*))List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::ResolveGridLayout(UnityEngine.Vector3[],System.Single,System.Single,Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_ResolveGridLayout_mB85544BCBE64D0BF06AE2C2A36ED93A31EC76926 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___grid0, float ___offsetX1, float ___offsetY2, int32_t ___order3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_SurfaceType()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_SurfaceType_m75FF289A6938DE0AF9ED5A8C4211478526CBCDD0 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::get_Item(System.Int32)
inline ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1 (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  (*) (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE *, int32_t, const RuntimeMethod*))List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::UpdateNodeFacing(Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___node0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4 (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, int32_t p0, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE *, int32_t, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425 , const RuntimeMethod*))List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_gshared)(__this, p0, p1, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.VectorExtensions::CylindricalMapping(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VectorExtensions_CylindricalMapping_m8AB7E338CF50AA22C733D0A0AA4336B643B0CA98 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.VectorExtensions::SphericalMapping(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VectorExtensions_SphericalMapping_m2AD72F118F19681668486035FFC0A3F8E499C82E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.VectorExtensions::RadialMapping(UnityEngine.Vector3,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VectorExtensions_RadialMapping_mF50AB7F2B671DCAB77A128FC686C4CE8926EDC1B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, float p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Rows()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_Rows_m5FF2E1CBB851CC8585370AF47FA492B2DB02F4B4 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_OrientType()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_OrientType_m813415524BC89A4C6529EC7E152A201927E6FBA7 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Project_m3A2D462C2548AA76EB0BCD3305B1E8588347DB9D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_set_color_mFA6C199DF05FF557AEF662222CA60EC25DF54F28 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_CylinderMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * GridObjectCollection_get_CylinderMesh_mB4D1A64948781E0E447363352C9350AA37FD5A92 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireMesh(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_DrawWireMesh_mCAAFD2D9A13919911A410B61C953FB73E92D16AB (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p3, const RuntimeMethod* method);
// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_SphereMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * GridObjectCollection_get_SphereMesh_m1A1D5A6A84EEE8A9FDF4ED5B727020CFB5285113 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseObjectCollection__ctor_mB4DB96D598D759957AAF2B78F6BF4F3DED7A2BD4 (BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Layout()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_Layout_m96EDF92332EDE459727901EC07E140B64C44E0E1 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Radius()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_Radius_mAC6403FE6DFCC8168FC7D984A1BFEF4A66607470 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.VectorExtensions::ScatterMapping(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VectorExtensions_ScatterMapping_mF028279E3B06B380631CABDC90C11AA11081F611 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * Component_GetComponentInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m92EFF432C642AEB971AAC3333F7A7170A7CC3318 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ScatterObjectCollection::IterateScatterPacking(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ScatterObjectCollection_IterateScatterPacking_mC0DD7B1323B048CA3953B850304039AFBC3D948A (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * ___nodes0, float ___radiusPadding1, const RuntimeMethod* method);
// System.Void System.Comparison`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m15AE944F3556CD05B000BF7B327058B44D4B1FB5 (Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m15AE944F3556CD05B000BF7B327058B44D4B1FB5_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m323C2301497D0BAFC3256EA3601B5F697F0A008D (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * __this, Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE *, Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 *, const RuntimeMethod*))List_1_Sort_m323C2301497D0BAFC3256EA3601B5F697F0A008D_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_mBFCF6C90827FF29E3FA3C2082F8F7F840A09B2FD (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector2_Normalize_m99A2CC6E4CB65C1B9231F898D5B7A12B6D72E722 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC (float* __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection__ctor_mF345FA48BE11FDF6074E2CD7F85AC988E120F0E4 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554 (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m394E7F823ADE56B97E6723B645C9458F1ADF0089 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::get_CurrentScalePercent()
extern "C" IL2CPP_METHOD_ATTR float ConstantViewSize_get_CurrentScalePercent_mAE5DFA7EC91DCE5530F342DC86F72DD5BF70A8F3 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::get_FovScale()
extern "C" IL2CPP_METHOD_ATTR float ConstantViewSize_get_FovScale_mE8AF4BDB5D54BBB4594A6FC62864788FEAF82A21 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
extern "C" IL2CPP_METHOD_ATTR Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  SolverHandler_get_AltScale_mD05895C9187EB7CCAEC6957EB020D1D507B8851A (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_m9C7BF69C97208D6AB4BD4B19A4A8ECDE8705B7BF (Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::set_CurrentDistancePercent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_set_CurrentDistancePercent_m85B9788957BF196998566BC728DFEBDE3D6F9308 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::set_CurrentScalePercent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_set_CurrentScalePercent_m5C20870C52A9F42E68C776F3B1BD21B4A1318267 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m296AE08470ECBC4F823F9F6A8A3F8A2DC639D382 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
extern "C" IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::set_ScaleState(Microsoft.MixedReality.Toolkit.Utilities.ScaleState)
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_set_ScaleState_mF6CB366B4254BE88EDB1532FC60A0401FFB4BC20 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::get_Controller()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SourceStateEventData_get_Controller_m3935B78C6E7B8158323E0D92A3C1016CF59B72BC (SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::.ctor(!0)
inline void Nullable_1__ctor_m823E766F59AF39F4E4F1DB87695B73FA8D181D4B (Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 * __this, uint8_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 *, uint8_t, const RuntimeMethod*))Nullable_1__ctor_mA37A97B81445268412FC4754069FD1AD7ED89B8E_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::GetValueOrDefault()
inline uint8_t Nullable_1_GetValueOrDefault_m0732BB3E14200FEF0204CD4062878683EE759DBD (Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m0F69127464EA2230329E51E650FC4FBAD21960EB_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA695C4BF91D8A19331B9DCF66796F34A2409FADA (Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 *, const RuntimeMethod*))Nullable_1_get_HasValue_m395EA5F248148274CEE1ED1C59FC628330033A4F_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityToolkit_get_InputSystem_m4C368E1DE80A5F4E18A38485ACE4803A27E42772 (const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416 (HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  (*) (HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7 (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *, const RuntimeMethod*))Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992 (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *, const RuntimeMethod*))Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *, const RuntimeMethod*))Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_mD35AE0817971FC6B92E3927AF11080A5BEDE0AEF (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnValidate_mB9A6BB7C5D3806BBFFCBF871BD990B8C0B071A33 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
extern "C" IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_m8246596E8D35C1F8F24329FD7B37F2521ADF7BE2 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * GameObject_AddComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_mCC697F4BBA5EE64613FEC30A0BAC86085CBD6C85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m5F1292416809AE3834FC68DC24F1A3945BFEF5BB (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_m3D831AEAD3353285F4B573911B152C3390E4CB63 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m37637FDAE4188DE06EB2436E8647CDA3E853BDFA (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformTarget(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TransformTarget_m0A263846A82BF5B2B95410974F4A597710C99B69 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnEnable_m2C1DAD96179B3122345E5D8E147F4A0C9906E4E4 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mD6FD850F21EB46CCF6A9BF8254A5A1FD220AD54B (Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m055EE49BB97074834FEA3D3F6C8354AD1C635EB7 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_mE3C982ECF01578B57F46D0A65916DE78633E9918 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m60B09A90AAEF7485126CC9357E93EA25FD9B5D3B (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m8C2A2C11B86BD2288E6BA61F6757B88645402EFB (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m4D5EB23289CA3B0F9C8B1D8DB11F3A901B3D0B91 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m8444E82FF685992F2087C48C65B5B67157EB26E0 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m703152C16912206024090C82BF1EFC998BE51D3F (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleSteppingForWorldOffset()
extern "C" IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleSteppingForWorldOffset_m3887FEC535EC8A5F0894170192B3825D18274CE4 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m2CF2F7B4E2C341A65E4246DF24E91B69FA826795 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mD9D33B4F9768894C571F2687010309EC0E667906 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m997B52F4C3AA3212F8889107B8F4F9EEC16AF0A4 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m27849124AD720D6FCC1A85F188C01A4C4C809E78 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m1E2FAA775A65E165CE8B2BCA553060F71CA1DB1F (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m8EABB403AE403CE2A027A40F7C0DE7492B21D766 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m06E6115A0D2204D51F2907A943EF72568FD268A6 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_mB83F84F6F629D89DD97F8286E661FD39D5FBA465 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m45D5466407FCE1C1650E106E1FF5337D91A1F6DA (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m4847E97B0CE5A56F1CF2E7E339841DB115869AB2 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m26DC00B22EB257FA88954E7B9D22CD12DFE6C878 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * Component_GetComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_m819E150F4FCA28D98BE1B05844AA2531D2455D84 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_mBAD71D12946EC7C7BA673892A4A42BEA058CFB9C (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mF90C707EA1C09937B8AE0A8AB4C9EE7488C884B4 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_mFF21E0575E17088CD8549A71575CCBD776AFCF8E (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m8359301C1549FC5F9C075102882D31C759BE71D0 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m7D7C2320471D6CEA07A631BF5CAE504668E0075E (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m62734F546CD2F0D5A83C91E2F71FEB01DCAA2737 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mB31FEAB6C2B34BED750A1AA44AE2FAD8D6A25245 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::MakeOffsetTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_MakeOffsetTransform_m2AE87D91CE5A2F024829028B9DA3D301F76E891C (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parentTransform0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_mC0A5FCA0B4A8CF29D02EAE7C14314565C9828A52 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m4086995848CC11A39176517C977F1E5EEEE3A135 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>(System.String,System.Boolean)
inline RuntimeObject* MixedRealityToolkit_GetService_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_mF1F5525FE530580E425851294D2F95E17DD48752 (MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * __this, String_t* p0, bool p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 *, String_t*, bool, const RuntimeMethod*))MixedRealityToolkit_GetService_TisRuntimeObject_m2564C3A532C2EC5828167D6BF646C6A601AA5486_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m9CC38B87CAD879D9A42E5362CC28C6A49F0C4BA5 (Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m37181DAE3E31747DAC18D5CC24F2EB2D73F8DBD1 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m8883863C7B8CCDB9B3CA5785CDA82CBA40E6F9F9 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>()
inline SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* Component_GetComponents_TisSolver_t79AE87802ED7C51B02E35D03DF67E057377E1011_mFED5BA4231B190C114EA3BEA24CB3C305CD87A9C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mEA2319825B896746CC9DCF34CFCFF99A9602BF44 (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m45F18855C527B94C7BEB08B582B04DA0DE9DD8B4 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Item(System.Int32)
inline Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * List_1_get_Item_mB96E69621C240E0827568F2007C2FB8A6477FA3F (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * (*) (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Count()
inline int32_t List_1_get_Count_m3C9FCB1273C303CC7E53935904D38EAC8E494A67 (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mEA81D8C8C367753F4F7BF3EC5FF1FD4C8BE4F47E (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___newTrackedTransform0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_m21CED24E43E745174EE1939DAA3797C38E6E33D7 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::set_Handedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_set_Handedness_mDFED4A63D6F9D2AFAC4368132B068ADF1BE5717A (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, uint8_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RequestEnableHandJoint(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_RequestEnableHandJoint_m9D6EB39860A781E95F22F683E3E1A408A9963F35 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_RequiresOffset()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_RequiresOffset_mF3D11F6870E16FD35BBE4523E2E0A8FD6ABCD457 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m7C8FA41412B7720154FB5EFCB468B5E1D2BF7818 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::.ctor()
inline void List_1__ctor_m932D030551FD1CF8EE717D69C9EB18EE91EC129A (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder__ctor_m1826BF754FE127E816A0E612F997916D2BECB853 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_mD7CD2E0E6F9DD5042C75449B8DFA195BF2AEB1A2 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_mBD183548533193F60CD564D1870C898161785A42 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::get_Current()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m109F0BE06195F755F5F4BDD5D16448D49F015BE5 (Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * GameObject_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_mC89D6D0649D82CB969262590D25615C13052FF55 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m84F3A5E0B5E81E8964FB3DE1D0136D04CD25802E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RayStep__ctor_m21DEB0B3953B9DCFD8BE3666BC28050C9954354D (RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B (RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m9984BF80D1666557B6EB152739FC628A325DBC8F (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m9A32EAF452D27FD75D1EE75DA62D45A2554F9E25 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m98B2448E8C8E29B60F3BA436D74EF1344D207397 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  ___rayStep0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,UnityEngine.LayerMask[],UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_mCC39199064A912248B1ACE94E24C15A6309544AC (RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  p0, float p1, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p2, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m63AD3A3A545957F27E4921E210577B394ECD7FB2 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m89F0776340554938DA4A6F12DE2ECD858B6CDA32 (RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m185DA70C60473294CE8198AE1B28213E5442893F (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_mABCD011EFBC5DF659504123A5522143FBBD78E41 (RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  p0, float p1, float p2, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p3, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p4, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_mD64AF55E8794F756B4F628FFC0469CF33A3D90D1 (RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  p3, float p4, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p5, int32_t p6, bool p7, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** p8, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** p9, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** p10, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m4CEE4578BE4A74F21E3B813514A402854BB3DD03 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  p0, float* p1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB8118E026C357D2EE00950DF59C07987E5B43DD9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mB8118E026C357D2EE00950DF59C07987E5B43DD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * L_0 = (U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 *)il2cpp_codegen_object_new(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF4754C135F7B4AEC713E60DB7CE62741E7B57EB3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4754C135F7B4AEC713E60DB7CE62741E7B57EB3 (U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<UpdateCollection>b__15_0(Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode,Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode)
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateCollectionU3Eb__15_0_mD7D8168A6CA53FFCFFFDE1B4BCA94493E9527DE1 (U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * __this, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c10, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// NodeList.Sort((c1, c2) => (c1.Transform.GetSiblingIndex().CompareTo(c2.Transform.GetSiblingIndex())));
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_0 = ___c10;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = L_0.get_Transform_3();
		NullCheck(L_1);
		int32_t L_2 = Transform_GetSiblingIndex_m6FEF9F4DAB8BEAB964A806F3CEE387C1F462B4C1(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_3 = ___c21;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_3.get_Transform_3();
		NullCheck(L_4);
		int32_t L_5 = Transform_GetSiblingIndex_m6FEF9F4DAB8BEAB964A806F3CEE387C1F462B4C1(L_4, /*hidden argument*/NULL);
		int32_t L_6 = Int32_CompareTo_m2EB2B72F9095FF3438D830118D57E32E1CC67195((int32_t*)(&V_0), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<UpdateCollection>b__15_1(Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode,Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode)
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateCollectionU3Eb__15_1_mD18AFC649B1F22C46114E20983D0735C515361C5 (U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * __this, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c10, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c21, const RuntimeMethod* method)
{
	{
		// NodeList.Sort((c1, c2) => (string.CompareOrdinal(c1.Name, c2.Name)));
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_0 = ___c10;
		String_t* L_1 = L_0.get_Name_0();
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_2 = ___c21;
		String_t* L_3 = L_2.get_Name_0();
		int32_t L_4 = String_CompareOrdinal_m172D84EDDE0823F53EAB60857C07EA7F85600068(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<UpdateCollection>b__15_2(Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode,Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode)
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateCollectionU3Eb__15_2_mCF83999D02374377D5E66664E9238F175E663C8E (U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * __this, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c10, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c21, const RuntimeMethod* method)
{
	{
		// NodeList.Sort((c1, c2) => (string.CompareOrdinal(c1.Name, c2.Name)));
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_0 = ___c10;
		String_t* L_1 = L_0.get_Name_0();
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_2 = ___c21;
		String_t* L_3 = L_2.get_Name_0();
		int32_t L_4 = String_CompareOrdinal_m172D84EDDE0823F53EAB60857C07EA7F85600068(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection_<>c::<UpdateCollection>b__15_3(Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode,Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode)
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateCollectionU3Eb__15_3_m6D04FFFFEE9CCBB5A01FEFDF0E2FD69BFDC5246E (U3CU3Ec_t29A86BECB12A25ED7BDF1E7A909F21BD7E625C60 * __this, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c10, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___c21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// NodeList.Sort((c1, c2) => (c1.Transform.GetSiblingIndex().CompareTo(c2.Transform.GetSiblingIndex())));
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_0 = ___c10;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = L_0.get_Transform_3();
		NullCheck(L_1);
		int32_t L_2 = Transform_GetSiblingIndex_m6FEF9F4DAB8BEAB964A806F3CEE387C1F462B4C1(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_3 = ___c21;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_3.get_Transform_3();
		NullCheck(L_4);
		int32_t L_5 = Transform_GetSiblingIndex_m6FEF9F4DAB8BEAB964A806F3CEE387C1F462B4C1(L_4, /*hidden argument*/NULL);
		int32_t L_6 = Int32_CompareTo_m2EB2B72F9095FF3438D830118D57E32E1CC67195((int32_t*)(&V_0), L_5, /*hidden argument*/NULL);
		return L_6;
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Easing::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Easing__ctor_m803E93E5261AC67CBDE762AAD399BF7E8BB86A75 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	{
		// public AnimationCurve Curve = AnimationCurve.Linear(0, 1, 1, 1);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = AnimationCurve_Linear_m1391DBE6C481643128387302FAB1142D1F13438A((0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_Curve_1(L_0);
		// public float LerpTime = 0.5f;
		__this->set_LerpTime_2((0.5f));
		// private float timer = 0.5f;
		__this->set_timer_3((0.5f));
		// public Easing()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Stop();
		Easing_Stop_m733306E0BDD8F1D9F6B06F94882280CE76FD8403(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Easing::OnUpdate()
extern "C" IL2CPP_METHOD_ATTR void Easing_OnUpdate_mA6B09E77C4D71046C7E2C7E0E95115C39E1054F0 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Easing_OnUpdate_mA6B09E77C4D71046C7E2C7E0E95115C39E1054F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timer < LerpTime)
		float L_0 = __this->get_timer_3();
		float L_1 = __this->get_LerpTime_2();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		// timer = Mathf.Min(timer + Time.deltaTime, LerpTime);
		float L_2 = __this->get_timer_3();
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_4 = __this->get_LerpTime_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(((float)il2cpp_codegen_add((float)L_2, (float)L_3)), L_4, /*hidden argument*/NULL);
		__this->set_timer_3(L_5);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Easing::Start()
extern "C" IL2CPP_METHOD_ATTR void Easing_Start_mCD043C274909CE53824E2AD14A4763770F327A50 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	{
		// timer = 0;
		__this->set_timer_3((0.0f));
		// if (!Enabled)
		bool L_0 = __this->get_Enabled_0();
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// timer = LerpTime;
		float L_1 = __this->get_LerpTime_2();
		__this->set_timer_3(L_1);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Easing::IsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Easing_IsPlaying_mD9796731BAE0880DE22C6DC90633AA955A771901 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	{
		// return timer < LerpTime;
		float L_0 = __this->get_timer_3();
		float L_1 = __this->get_LerpTime_2();
		return (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Easing::Stop()
extern "C" IL2CPP_METHOD_ATTR void Easing_Stop_m733306E0BDD8F1D9F6B06F94882280CE76FD8403 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	{
		// timer = LerpTime;
		float L_0 = __this->get_LerpTime_2();
		__this->set_timer_3(L_0);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Easing::GetLinear()
extern "C" IL2CPP_METHOD_ATTR float Easing_GetLinear_m960B662F0F62EB2F8DE46E75E0BDDF5157286BFD (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	{
		// return timer / LerpTime;
		float L_0 = __this->get_timer_3();
		float L_1 = __this->get_LerpTime_2();
		return ((float)((float)L_0/(float)L_1));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Easing::GetCurved()
extern "C" IL2CPP_METHOD_ATTR float Easing_GetCurved_m9D5584ABEA8C9BAFA1413C9AF5489F218118C927 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	{
		// return IsLinear() ? GetLinear() : Curve.Evaluate(GetLinear());
		bool L_0 = Easing_IsLinear_m1E30DA79DFA1C76D4B6891747BCAFC5A79431A26(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = __this->get_Curve_1();
		float L_2 = Easing_GetLinear_m960B662F0F62EB2F8DE46E75E0BDDF5157286BFD(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_3 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		float L_4 = Easing_GetLinear_m960B662F0F62EB2F8DE46E75E0BDDF5157286BFD(__this, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Easing::IsLinear()
extern "C" IL2CPP_METHOD_ATTR bool Easing_IsLinear_m1E30DA79DFA1C76D4B6891747BCAFC5A79431A26 (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, const RuntimeMethod* method)
{
	{
		// if (cachedKeys == null)
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_0 = __this->get_cachedKeys_4();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// cachedKeys = Curve.keys;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = __this->get_Curve_1();
		NullCheck(L_1);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_1, /*hidden argument*/NULL);
		__this->set_cachedKeys_4(L_2);
	}

IL_0019:
	{
		// if (cachedKeys.Length > 1)
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = __this->get_cachedKeys_4();
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0057;
		}
	}
	{
		// return (cachedKeys[0].value == 1 && cachedKeys[1].value == 1);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_4 = __this->get_cachedKeys_4();
		NullCheck(L_4);
		float L_5 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if ((!(((float)L_5) == ((float)(1.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_6 = __this->get_cachedKeys_4();
		NullCheck(L_6);
		float L_7 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		return (bool)((((float)L_7) == ((float)(1.0f)))? 1 : 0);
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Easing::SetCurve(Microsoft.MixedReality.Toolkit.Utilities.Easing_BasicEaseCurves)
extern "C" IL2CPP_METHOD_ATTR void Easing_SetCurve_m2FF160EB0297CE2CE1BDC50BD7C247186A2035DE (Easing_t13E61FF806357D21552C3028585751420EDCD360 * __this, int32_t ___curve0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Easing_SetCurve_m2FF160EB0297CE2CE1BDC50BD7C247186A2035DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * V_0 = NULL;
	{
		// AnimationCurve animation = AnimationCurve.Linear(0, 1, 1, 1);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = AnimationCurve_Linear_m1391DBE6C481643128387302FAB1142D1F13438A((0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		// switch (curve)
		int32_t L_1 = ___curve0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00bb;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0033:
	{
		// animation = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1, 2.5f, 0));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_6), (1.0f), (1.0f), (2.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_7, L_5, /*hidden argument*/NULL);
		V_0 = L_7;
		// break;
		goto IL_00d5;
	}

IL_0077:
	{
		// animation = new AnimationCurve(new Keyframe(0, 0, 0, 2.5f), new Keyframe(1, 1));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_8 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_9 = L_8;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_10), (0.0f), (0.0f), (0.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_10);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_11 = L_9;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_12), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_12);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_13 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_13, L_11, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_00d5;
	}

IL_00bb:
	{
		// animation = AnimationCurve.EaseInOut(0, 0, 1, 1);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = AnimationCurve_EaseInOut_m05634A1E02A101E8FFEF7479ED4CF821270F483C((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_00d5:
	{
		// Curve = animation;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_15 = V_0;
		__this->set_Curve_1(L_15);
		// cachedKeys = Curve.keys;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_16 = __this->get_Curve_1();
		NullCheck(L_16);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_17 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_16, /*hidden argument*/NULL);
		__this->set_cachedKeys_4(L_17);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_SurfaceType()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_SurfaceType_m75FF289A6938DE0AF9ED5A8C4211478526CBCDD0 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return surfaceType; }
		int32_t L_0 = __this->get_surfaceType_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_SurfaceType(Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_SurfaceType_m409F34CAEEAD4D4655F8A62D340FF5395746594F (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { surfaceType = value; }
		int32_t L_0 = ___value0;
		__this->set_surfaceType_8(L_0);
		// set { surfaceType = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_OrientType()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_OrientType_m813415524BC89A4C6529EC7E152A201927E6FBA7 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return orientType; }
		int32_t L_0 = __this->get_orientType_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_OrientType(Microsoft.MixedReality.Toolkit.Utilities.OrientationType)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_OrientType_m2D5C72EFDDC347076A3A8A121A4B875F175D663E (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientType = value; }
		int32_t L_0 = ___value0;
		__this->set_orientType_9(L_0);
		// set { orientType = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Layout()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_Layout_m96EDF92332EDE459727901EC07E140B64C44E0E1 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return layout; }
		int32_t L_0 = __this->get_layout_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Layout(Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_Layout_mC1F6A12B934C62FB23A2FD0FE2A27C301A9FEC17 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { layout = value; }
		int32_t L_0 = ___value0;
		__this->set_layout_10(L_0);
		// set { layout = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Radius()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_Radius_mAC6403FE6DFCC8168FC7D984A1BFEF4A66607470 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return radius; }
		float L_0 = __this->get_radius_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Radius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_Radius_mC81E0E514E40C8ADB5AD8C2A694179E8D22329D0 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { radius = value; }
		float L_0 = ___value0;
		__this->set_radius_11(L_0);
		// set { radius = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_RadialRange()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_RadialRange_m931D65BD00BCF6715D45D7217D566F1D299AA587 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return radialRange; }
		float L_0 = __this->get_radialRange_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_RadialRange(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_RadialRange_m17D739A979C001395D51C5A570A3E53EB17E4C43 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { radialRange = value; }
		float L_0 = ___value0;
		__this->set_radialRange_12(L_0);
		// set { radialRange = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Rows()
extern "C" IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_Rows_m5FF2E1CBB851CC8585370AF47FA492B2DB02F4B4 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return rows; }
		int32_t L_0 = __this->get_rows_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Rows(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_Rows_m59D835BB2B42F605422D2FE97B8306D02F26ACFA (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { rows = value; }
		int32_t L_0 = ___value0;
		__this->set_rows_13(L_0);
		// set { rows = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_CellWidth()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return cellWidth; }
		float L_0 = __this->get_cellWidth_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_CellWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellWidth_m3FB013D09E5B26F7B37098E18B55E6878129CC7D (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { cellWidth = value; }
		float L_0 = ___value0;
		__this->set_cellWidth_14(L_0);
		// set { cellWidth = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_CellHeight()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return cellHeight; }
		float L_0 = __this->get_cellHeight_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_CellHeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellHeight_m2010B0EB3DAFB3587E753C89D99F1F8E930086B3 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { cellHeight = value; }
		float L_0 = ___value0;
		__this->set_cellHeight_15(L_0);
		// set { cellHeight = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Width()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_Width_m4747F0A39278888CDBA6A08631A660FB4D18EC7B (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// public float Width => Columns * CellWidth;
		int32_t L_0 = __this->get_Columns_18();
		float L_1 = GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245(__this, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_multiply((float)(((float)((float)L_0))), (float)L_1));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Height()
extern "C" IL2CPP_METHOD_ATTR float GridObjectCollection_get_Height_m12566193197F15400DE0D2B9D25A174C0F50816A (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// public float Height => rows * CellHeight;
		int32_t L_0 = __this->get_rows_13();
		float L_1 = GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269(__this, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_multiply((float)(((float)((float)L_0))), (float)L_1));
	}
}
// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_SphereMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * GridObjectCollection_get_SphereMesh_m1A1D5A6A84EEE8A9FDF4ED5B727020CFB5285113 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// public Mesh SphereMesh { get; set; }
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_U3CSphereMeshU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_SphereMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_SphereMesh_m42E14CF7B729C156497A43AFB2A533AFF787D646 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method)
{
	{
		// public Mesh SphereMesh { get; set; }
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = ___value0;
		__this->set_U3CSphereMeshU3Ek__BackingField_16(L_0);
		return;
	}
}
// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_CylinderMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * GridObjectCollection_get_CylinderMesh_mB4D1A64948781E0E447363352C9350AA37FD5A92 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// public Mesh CylinderMesh { get; set; }
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_U3CCylinderMeshU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_CylinderMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_CylinderMesh_mA3F0966A74F435D0CEA94EFD1CAEDC52FA1A3409 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method)
{
	{
		// public Mesh CylinderMesh { get; set; }
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = ___value0;
		__this->set_U3CCylinderMeshU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::LayoutChildren()
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_LayoutChildren_m5A1603983042D651824A34FFC19D75800740D532 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridObjectCollection_LayoutChildren_m5A1603983042D651824A34FFC19D75800740D532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  V_8;
	memset(&V_8, 0, sizeof(V_8));
	int32_t V_9 = 0;
	ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  V_10;
	memset(&V_10, 0, sizeof(V_10));
	int32_t V_11 = 0;
	ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  V_12;
	memset(&V_12, 0, sizeof(V_12));
	int32_t V_13 = 0;
	ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  V_14;
	memset(&V_14, 0, sizeof(V_14));
	{
		// var nodeGrid = new Vector3[NodeList.Count];
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_0 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_0, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_2 = L_2;
		// Columns = Mathf.CeilToInt((float)NodeList.Count / rows);
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_3 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_3, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		int32_t L_5 = __this->get_rows_13();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B(((float)((float)(((float)((float)L_4)))/(float)(((float)((float)L_5))))), /*hidden argument*/NULL);
		__this->set_Columns_18(L_6);
		// startOffsetX = (Columns * 0.5f) * CellWidth;
		int32_t L_7 = __this->get_Columns_18();
		float L_8 = GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_7))), (float)(0.5f))), (float)L_8));
		// startOffsetY = (rows * 0.5f) * CellHeight;
		int32_t L_9 = __this->get_rows_13();
		float L_10 = GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269(__this, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_9))), (float)(0.5f))), (float)L_10));
		// HalfCell = new Vector2(CellWidth * 0.5f, CellHeight * 0.5f);
		float L_11 = GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245(__this, /*hidden argument*/NULL);
		float L_12 = GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_13), ((float)il2cpp_codegen_multiply((float)L_11, (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_12, (float)(0.5f))), /*hidden argument*/NULL);
		__this->set_HalfCell_19(L_13);
		// ResolveGridLayout(nodeGrid, startOffsetX, startOffsetY, layout);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = V_2;
		float L_15 = V_0;
		float L_16 = V_1;
		int32_t L_17 = __this->get_layout_10();
		GridObjectCollection_ResolveGridLayout_mB85544BCBE64D0BF06AE2C2A36ED93A31EC76926(__this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		// switch (SurfaceType)
		int32_t L_18 = GridObjectCollection_get_SurfaceType_m75FF289A6938DE0AF9ED5A8C4211478526CBCDD0(__this, /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		switch (L_19)
		{
			case 0:
			{
				goto IL_0103;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0165;
			}
			case 3:
			{
				goto IL_01c7;
			}
		}
	}
	{
		return;
	}

IL_00ac:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		V_7 = 0;
		goto IL_00f3;
	}

IL_00b1:
	{
		// ObjectCollectionNode node = NodeList[i];
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_20 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_7;
		NullCheck(L_20);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_22 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_20, L_21, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		V_8 = L_22;
		// newPos = nodeGrid[i];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_23 = V_2;
		int32_t L_24 = V_7;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_3 = L_26;
		// node.Transform.localPosition = newPos;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_27 = V_8;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = L_27.get_Transform_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_3;
		NullCheck(L_28);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_28, L_29, /*hidden argument*/NULL);
		// UpdateNodeFacing(node);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_30 = V_8;
		GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710(__this, L_30, /*hidden argument*/NULL);
		// NodeList[i] = node;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_31 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_32 = V_7;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_33 = V_8;
		NullCheck(L_31);
		List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4(L_31, L_32, L_33, /*hidden argument*/List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_RuntimeMethod_var);
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_34 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00f3:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_35 = V_7;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_36 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_36, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_00b1;
		}
	}
	{
		// break;
		return;
	}

IL_0103:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		V_9 = 0;
		goto IL_0155;
	}

IL_0108:
	{
		// ObjectCollectionNode node = NodeList[i];
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_38 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_39 = V_9;
		NullCheck(L_38);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_40 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_38, L_39, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		V_10 = L_40;
		// newPos = VectorExtensions.CylindricalMapping(nodeGrid[i], radius);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_41 = V_2;
		int32_t L_42 = V_9;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		float L_45 = __this->get_radius_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = VectorExtensions_CylindricalMapping_m8AB7E338CF50AA22C733D0A0AA4336B643B0CA98(L_44, L_45, /*hidden argument*/NULL);
		V_3 = L_46;
		// node.Transform.localPosition = newPos;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_47 = V_10;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = L_47.get_Transform_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_3;
		NullCheck(L_48);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_48, L_49, /*hidden argument*/NULL);
		// UpdateNodeFacing(node);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_50 = V_10;
		GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710(__this, L_50, /*hidden argument*/NULL);
		// NodeList[i] = node;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_51 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_52 = V_9;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_53 = V_10;
		NullCheck(L_51);
		List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4(L_51, L_52, L_53, /*hidden argument*/List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_RuntimeMethod_var);
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_54 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0155:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_55 = V_9;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_56 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		int32_t L_57 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_56, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_0108;
		}
	}
	{
		// break;
		return;
	}

IL_0165:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		V_11 = 0;
		goto IL_01b7;
	}

IL_016a:
	{
		// ObjectCollectionNode node = NodeList[i];
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_58 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_59 = V_11;
		NullCheck(L_58);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_60 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_58, L_59, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		V_12 = L_60;
		// newPos = VectorExtensions.SphericalMapping(nodeGrid[i], radius);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_61 = V_2;
		int32_t L_62 = V_11;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		float L_65 = __this->get_radius_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = VectorExtensions_SphericalMapping_m2AD72F118F19681668486035FFC0A3F8E499C82E(L_64, L_65, /*hidden argument*/NULL);
		V_3 = L_66;
		// node.Transform.localPosition = newPos;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_67 = V_12;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_68 = L_67.get_Transform_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_3;
		NullCheck(L_68);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_68, L_69, /*hidden argument*/NULL);
		// UpdateNodeFacing(node);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_70 = V_12;
		GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710(__this, L_70, /*hidden argument*/NULL);
		// NodeList[i] = node;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_71 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_72 = V_11;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_73 = V_12;
		NullCheck(L_71);
		List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4(L_71, L_72, L_73, /*hidden argument*/List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_RuntimeMethod_var);
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01b7:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_75 = V_11;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_76 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_76, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_75) < ((int32_t)L_77)))
		{
			goto IL_016a;
		}
	}
	{
		// break;
		return;
	}

IL_01c7:
	{
		// int curColumn = 0;
		V_5 = 0;
		// int curRow = 1;
		V_6 = 1;
		// for (int i = 0; i < NodeList.Count; i++)
		V_13 = 0;
		goto IL_0255;
	}

IL_01d5:
	{
		// ObjectCollectionNode node = NodeList[i];
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_78 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_79 = V_13;
		NullCheck(L_78);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_80 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_78, L_79, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		V_14 = L_80;
		// newPos = VectorExtensions.RadialMapping(nodeGrid[i], radialRange, radius, curRow, rows, curColumn, Columns);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_81 = V_2;
		int32_t L_82 = V_13;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		float L_85 = __this->get_radialRange_12();
		float L_86 = __this->get_radius_11();
		int32_t L_87 = V_6;
		int32_t L_88 = __this->get_rows_13();
		int32_t L_89 = V_5;
		int32_t L_90 = __this->get_Columns_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = VectorExtensions_RadialMapping_mF50AB7F2B671DCAB77A128FC686C4CE8926EDC1B(L_84, L_85, L_86, L_87, L_88, L_89, L_90, /*hidden argument*/NULL);
		V_3 = L_91;
		// if (curColumn == (Columns - 1))
		int32_t L_92 = V_5;
		int32_t L_93 = __this->get_Columns_18();
		if ((!(((uint32_t)L_92) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1))))))
		{
			goto IL_0225;
		}
	}
	{
		// curColumn = 0;
		V_5 = 0;
		// ++curRow;
		int32_t L_94 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		// }
		goto IL_022b;
	}

IL_0225:
	{
		// ++curColumn;
		int32_t L_95 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_022b:
	{
		// node.Transform.localPosition = newPos;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_96 = V_14;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_97 = L_96.get_Transform_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = V_3;
		NullCheck(L_97);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_97, L_98, /*hidden argument*/NULL);
		// UpdateNodeFacing(node);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_99 = V_14;
		GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710(__this, L_99, /*hidden argument*/NULL);
		// NodeList[i] = node;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_100 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_101 = V_13;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_102 = V_14;
		NullCheck(L_100);
		List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4(L_100, L_101, L_102, /*hidden argument*/List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_RuntimeMethod_var);
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_103 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0255:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_104 = V_13;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_105 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_105);
		int32_t L_106 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_105, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_104) < ((int32_t)L_106)))
		{
			goto IL_01d5;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::ResolveGridLayout(UnityEngine.Vector3[],System.Single,System.Single,Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_ResolveGridLayout_mB85544BCBE64D0BF06AE2C2A36ED93A31EC76926 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___grid0, float ___offsetX1, float ___offsetY2, int32_t ___order3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridObjectCollection_ResolveGridLayout_mB85544BCBE64D0BF06AE2C2A36ED93A31EC76926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int cellCounter = 0;
		V_0 = 0;
		// if (order == LayoutOrder.RowThenColumn)
		int32_t L_0 = ___order3;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		// iMax = Rows;
		int32_t L_1 = GridObjectCollection_get_Rows_m5FF2E1CBB851CC8585370AF47FA492B2DB02F4B4(__this, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_1)));
		// jMax = Columns;
		int32_t L_2 = __this->get_Columns_18();
		V_2 = (((float)((float)L_2)));
		// }
		goto IL_0029;
	}

IL_0019:
	{
		// iMax = Columns;
		int32_t L_3 = __this->get_Columns_18();
		V_1 = (((float)((float)L_3)));
		// jMax = Rows;
		int32_t L_4 = GridObjectCollection_get_Rows_m5FF2E1CBB851CC8585370AF47FA492B2DB02F4B4(__this, /*hidden argument*/NULL);
		V_2 = (((float)((float)L_4)));
	}

IL_0029:
	{
		// for (int i = 0; i < iMax; i++)
		V_3 = 0;
		goto IL_00cc;
	}

IL_0030:
	{
		// for (int j = 0; j < jMax; j++)
		V_4 = 0;
		goto IL_00bf;
	}

IL_0038:
	{
		// if (cellCounter < NodeList.Count)
		int32_t L_5 = V_0;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_6 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_6, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_00b5;
		}
	}
	{
		// grid[cellCounter].Set(((i * CellWidth) - offsetX + HalfCell.x) + NodeList[cellCounter].Offset.x,
		//                      (-(j * CellHeight) + offsetY - HalfCell.y) + NodeList[cellCounter].Offset.y,
		//                      0.0f);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = ___grid0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = V_3;
		float L_11 = GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245(__this, /*hidden argument*/NULL);
		float L_12 = ___offsetX1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_13 = __this->get_address_of_HalfCell_19();
		float L_14 = L_13->get_x_0();
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_15 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_17 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_15, L_16, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = L_17.get_Offset_1();
		float L_19 = L_18.get_x_0();
		int32_t L_20 = V_4;
		float L_21 = GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269(__this, /*hidden argument*/NULL);
		float L_22 = ___offsetY2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_23 = __this->get_address_of_HalfCell_19();
		float L_24 = L_23->get_y_1();
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_25 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_27 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_25, L_26, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = L_27.get_Offset_1();
		float L_29 = L_28.get_y_1();
		Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_10))), (float)L_11)), (float)L_12)), (float)L_14)), (float)L_19)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((-((float)il2cpp_codegen_multiply((float)(((float)((float)L_20))), (float)L_21)))), (float)L_22)), (float)L_24)), (float)L_29)), (0.0f), /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// cellCounter++;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		// for (int j = 0; j < jMax; j++)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00bf:
	{
		// for (int j = 0; j < jMax; j++)
		int32_t L_32 = V_4;
		float L_33 = V_2;
		if ((((float)(((float)((float)L_32)))) < ((float)L_33)))
		{
			goto IL_0038;
		}
	}
	{
		// for (int i = 0; i < iMax; i++)
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00cc:
	{
		// for (int i = 0; i < iMax; i++)
		int32_t L_35 = V_3;
		float L_36 = V_1;
		if ((((float)(((float)((float)L_35)))) < ((float)L_36)))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::UpdateNodeFacing(Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// switch (OrientType)
		int32_t L_0 = GridObjectCollection_get_OrientType_m813415524BC89A4C6529EC7E152A201927E6FBA7(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0208;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_006d;
			}
			case 3:
			{
				goto IL_017a;
			}
			case 4:
			{
				goto IL_019b;
			}
			case 5:
			{
				goto IL_01bc;
			}
			case 6:
			{
				goto IL_01dd;
			}
			case 7:
			{
				goto IL_00a4;
			}
			case 8:
			{
				goto IL_010f;
			}
		}
	}
	{
		goto IL_01fe;
	}

IL_0036:
	{
		// node.Transform.rotation = Quaternion.LookRotation(node.Transform.position - transform.position, transform.up);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_2 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = L_2.get_Transform_3();
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_4 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_4.get_Transform_3();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_3, L_12, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_006d:
	{
		// node.Transform.rotation = Quaternion.LookRotation(transform.position - node.Transform.position, transform.up);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_13 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = L_13.get_Transform_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_17 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = L_17.get_Transform_3();
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_19, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_20, L_22, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_14, L_23, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00a4:
	{
		// centerAxis = Vector3.Project(node.Transform.position - transform.position, transform.up);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_24 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = L_24.get_Transform_3();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_26, L_28, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_Project_m3A2D462C2548AA76EB0BCD3305B1E8588347DB9D(L_29, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		// pointOnAxisNearestNode = transform.position + centerAxis;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_34, L_35, /*hidden argument*/NULL);
		V_1 = L_36;
		// node.Transform.rotation = Quaternion.LookRotation(node.Transform.position - pointOnAxisNearestNode, transform.up);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_37 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = L_37.get_Transform_3();
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_39 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = L_39.get_Transform_3();
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_41, L_42, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_43, L_45, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_38, L_46, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_010f:
	{
		// centerAxis = Vector3.Project(node.Transform.position - transform.position, transform.up);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_47 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = L_47.get_Transform_3();
		NullCheck(L_48);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_48, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_49, L_51, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_Project_m3A2D462C2548AA76EB0BCD3305B1E8588347DB9D(L_52, L_54, /*hidden argument*/NULL);
		V_0 = L_55;
		// pointOnAxisNearestNode = transform.position + centerAxis;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_56, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_57, L_58, /*hidden argument*/NULL);
		V_1 = L_59;
		// node.Transform.rotation = Quaternion.LookRotation(pointOnAxisNearestNode - node.Transform.position, transform.up);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_60 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = L_60.get_Transform_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_1;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_63 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = L_63.get_Transform_3();
		NullCheck(L_64);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_64, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_62, L_65, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_67 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_69 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_66, L_68, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_61, L_69, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_017a:
	{
		// node.Transform.forward = transform.rotation * Vector3.forward;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_70 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_71 = L_70.get_Transform_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_72);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_73 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_73, L_74, /*hidden argument*/NULL);
		NullCheck(L_71);
		Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F(L_71, L_75, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_019b:
	{
		// node.Transform.forward = transform.rotation * Vector3.back;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_76 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_77 = L_76.get_Transform_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_78 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_78);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_79 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_78, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_79, L_80, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F(L_77, L_81, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_01bc:
	{
		// node.Transform.forward = transform.rotation * Vector3.up;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_82 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = L_82.get_Transform_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_84);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_85 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_85, L_86, /*hidden argument*/NULL);
		NullCheck(L_83);
		Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F(L_83, L_87, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_01dd:
	{
		// node.Transform.forward = transform.rotation * Vector3.down;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_88 = ___node0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_89 = L_88.get_Transform_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_90 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_91 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_90, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_91, L_92, /*hidden argument*/NULL);
		NullCheck(L_89);
		Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F(L_89, L_93, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_01fe:
	{
		// Debug.LogWarning("OrientationType out of range");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralBE46EBBCE2D34C657657AC4DB28D959908FA7215, /*hidden argument*/NULL);
	}

IL_0208:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::OnDrawGizmosSelected()
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_OnDrawGizmosSelected_mEC179401E69AB9C1011B94077120DF5768A7590F (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridObjectCollection_OnDrawGizmosSelected_mEC179401E69AB9C1011B94077120DF5768A7590F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 scale = (2f * radius) * Vector3.one;
		float L_0 = __this->get_radius_11();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_0)), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// switch (surfaceType)
		int32_t L_3 = __this->get_surfaceType_8();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_005e;
			}
		}
	}
	{
		return;
	}

IL_0031:
	{
		// Gizmos.color = Color.green;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		Gizmos_set_color_mFA6C199DF05FF557AEF662222CA60EC25DF54F28(L_5, /*hidden argument*/NULL);
		// Gizmos.DrawWireMesh(CylinderMesh, transform.position, transform.rotation, scale);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_6 = GridObjectCollection_get_CylinderMesh_mB4D1A64948781E0E447363352C9350AA37FD5A92(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Gizmos_DrawWireMesh_mCAAFD2D9A13919911A410B61C953FB73E92D16AB(L_6, L_8, L_10, L_11, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_005e:
	{
		// Gizmos.color = Color.green;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		Gizmos_set_color_mFA6C199DF05FF557AEF662222CA60EC25DF54F28(L_12, /*hidden argument*/NULL);
		// Gizmos.DrawWireMesh(SphereMesh, transform.position, transform.rotation, scale);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_13 = GridObjectCollection_get_SphereMesh_m1A1D5A6A84EEE8A9FDF4ED5B727020CFB5285113(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		Gizmos_DrawWireMesh_mCAAFD2D9A13919911A410B61C953FB73E92D16AB(L_13, L_15, L_17, L_18, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection__ctor_mF345FA48BE11FDF6074E2CD7F85AC988E120F0E4 (GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * __this, const RuntimeMethod* method)
{
	{
		// private ObjectOrientationSurfaceType surfaceType = ObjectOrientationSurfaceType.Plane;
		__this->set_surfaceType_8(1);
		// private OrientationType orientType = OrientationType.FaceOrigin;
		__this->set_orientType_9(1);
		// private float radius = 2f;
		__this->set_radius_11((2.0f));
		// private float radialRange = 180f;
		__this->set_radialRange_12((180.0f));
		// private int rows = 3;
		__this->set_rows_13(3);
		// private float cellWidth = 0.5f;
		__this->set_cellWidth_14((0.5f));
		// private float cellHeight = 0.5f;
		__this->set_cellHeight_15((0.5f));
		BaseObjectCollection__ctor_mB4DB96D598D759957AAF2B78F6BF4F3DED7A2BD4(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.HeadPositionOffset::Start()
extern "C" IL2CPP_METHOD_ATTR void HeadPositionOffset_Start_m693E19366C7205D96F7D17CF2C412DDCA4F97347 (HeadPositionOffset_t3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadPositionOffset_Start_m693E19366C7205D96F7D17CF2C412DDCA4F97347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = Camera.main.transform.position + HeadOffset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_HeadOffset_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_5, /*hidden argument*/NULL);
		// started = true;
		__this->set_started_5((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.HeadPositionOffset::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void HeadPositionOffset_OnEnable_mABAD8950E285FE6A703C4C088DCC99C67D59E851 (HeadPositionOffset_t3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadPositionOffset_OnEnable_mABAD8950E285FE6A703C4C088DCC99C67D59E851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (started)
		bool L_0 = __this->get_started_5();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// transform.position = Camera.main.transform.position + HeadOffset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_HeadOffset_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_1, L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.HeadPositionOffset::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HeadPositionOffset__ctor_mB9A4E41B46CE874EEEF94B4E5DAFC0DE2A56C4DE (HeadPositionOffset_t3EF4B92B8AF091BBEBB1E02C11B96FF7D1652BD3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 HeadOffset = new Vector3(0, 0, 1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_HeadOffset_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
extern "C" void ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshal_pinvoke(const ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425& unmarshaled, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Transform_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Transform' of type 'ObjectCollectionNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Transform_3Exception, NULL, NULL);
}
extern "C" void ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshal_pinvoke_back(const ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_pinvoke& marshaled, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425& unmarshaled)
{
	Exception_t* ___Transform_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Transform' of type 'ObjectCollectionNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Transform_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
extern "C" void ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshal_pinvoke_cleanup(ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
extern "C" void ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshal_com(const ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425& unmarshaled, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_com& marshaled)
{
	Exception_t* ___Transform_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Transform' of type 'ObjectCollectionNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Transform_3Exception, NULL, NULL);
}
extern "C" void ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshal_com_back(const ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_com& marshaled, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425& unmarshaled)
{
	Exception_t* ___Transform_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Transform' of type 'ObjectCollectionNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Transform_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
extern "C" void ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshal_com_cleanup(ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ScatterObjectCollection::LayoutChildren()
extern "C" IL2CPP_METHOD_ATTR void ScatterObjectCollection_LayoutChildren_m2D5110CFE453F408A95F252F89AC6F79AB475984 (ScatterObjectCollection_t2932B812F93E9835CF59CD0CCD179DF22A0136F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScatterObjectCollection_LayoutChildren_m2D5110CFE453F408A95F252F89AC6F79AB475984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * V_6 = NULL;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		// Vector3[] nodeGrid = new Vector3[NodeList.Count];
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_0 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_0, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_2 = L_2;
		// Columns = Mathf.CeilToInt((float)NodeList.Count / Rows);
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_3 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_3, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		int32_t L_5 = GridObjectCollection_get_Rows_m5FF2E1CBB851CC8585370AF47FA492B2DB02F4B4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B(((float)((float)(((float)((float)L_4)))/(float)(((float)((float)L_5))))), /*hidden argument*/NULL);
		((GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 *)__this)->set_Columns_18(L_6);
		// startOffsetX = (Columns * 0.5f) * CellWidth;
		int32_t L_7 = ((GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 *)__this)->get_Columns_18();
		float L_8 = GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_7))), (float)(0.5f))), (float)L_8));
		// startOffsetY = (Rows * 0.5f) * CellHeight;
		int32_t L_9 = GridObjectCollection_get_Rows_m5FF2E1CBB851CC8585370AF47FA492B2DB02F4B4(__this, /*hidden argument*/NULL);
		float L_10 = GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269(__this, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_9))), (float)(0.5f))), (float)L_10));
		// HalfCell = new Vector2(CellWidth * 0.5f, CellHeight * 0.5f);
		float L_11 = GridObjectCollection_get_CellWidth_mBADA4F8389BA606453C7945E16049DE32DC62245(__this, /*hidden argument*/NULL);
		float L_12 = GridObjectCollection_get_CellHeight_m1C4B4F4536B4B623B001A4420051135CAA61C269(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_13), ((float)il2cpp_codegen_multiply((float)L_11, (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_12, (float)(0.5f))), /*hidden argument*/NULL);
		((GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 *)__this)->set_HalfCell_19(L_13);
		// ResolveGridLayout(nodeGrid, startOffsetX, startOffsetY, Layout);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = V_2;
		float L_15 = V_0;
		float L_16 = V_1;
		int32_t L_17 = GridObjectCollection_get_Layout_m96EDF92332EDE459727901EC07E140B64C44E0E1(__this, /*hidden argument*/NULL);
		GridObjectCollection_ResolveGridLayout_mB85544BCBE64D0BF06AE2C2A36ED93A31EC76926(__this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		// for (int i = 0; i < NodeList.Count; i++)
		V_4 = 0;
		goto IL_0156;
	}

IL_0094:
	{
		// ObjectCollectionNode node = NodeList[i];
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_18 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_4;
		NullCheck(L_18);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_20 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_18, L_19, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		V_5 = L_20;
		// newPos = VectorExtensions.ScatterMapping(nodeGrid[i], Radius);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = V_2;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		float L_25 = GridObjectCollection_get_Radius_mAC6403FE6DFCC8168FC7D984A1BFEF4A66607470(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = VectorExtensions_ScatterMapping_mF028279E3B06B380631CABDC90C11AA11081F611(L_24, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// Collider nodeCollider = NodeList[i].Transform.GetComponentInChildren<Collider>();
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_27 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_28 = V_4;
		NullCheck(L_27);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_29 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_27, L_28, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = L_29.get_Transform_3();
		NullCheck(L_30);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_31 = Component_GetComponentInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m92EFF432C642AEB971AAC3333F7A7170A7CC3318(L_30, /*hidden argument*/Component_GetComponentInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m92EFF432C642AEB971AAC3333F7A7170A7CC3318_RuntimeMethod_var);
		V_6 = L_31;
		// if (nodeCollider != null)
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_32 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_32, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0120;
		}
	}
	{
		// Bounds bounds = nodeCollider.bounds;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_34 = V_6;
		NullCheck(L_34);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_35 = Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A(L_34, /*hidden argument*/NULL);
		V_7 = L_35;
		// node.Radius = Mathf.Max(Mathf.Max(bounds.size.x, bounds.size.y), bounds.size.z) * 0.5f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_7), /*hidden argument*/NULL);
		float L_37 = L_36.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_7), /*hidden argument*/NULL);
		float L_39 = L_38.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_40 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_37, L_39, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_7), /*hidden argument*/NULL);
		float L_42 = L_41.get_z_4();
		float L_43 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_40, L_42, /*hidden argument*/NULL);
		(&V_5)->set_Radius_2(((float)il2cpp_codegen_multiply((float)L_43, (float)(0.5f))));
		// }
		goto IL_012c;
	}

IL_0120:
	{
		// node.Radius = 1f;
		(&V_5)->set_Radius_2((1.0f));
	}

IL_012c:
	{
		// node.Transform.localPosition = newPos;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_44 = V_5;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = L_44.get_Transform_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_3;
		NullCheck(L_45);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_45, L_46, /*hidden argument*/NULL);
		// UpdateNodeFacing(node);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_47 = V_5;
		GridObjectCollection_UpdateNodeFacing_m55DDF31187E367EEB69C643001C42604CD698710(__this, L_47, /*hidden argument*/NULL);
		// NodeList[i] = node;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_48 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		int32_t L_49 = V_4;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_50 = V_5;
		NullCheck(L_48);
		List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4(L_48, L_49, L_50, /*hidden argument*/List_1_set_Item_m9D6937FB23700BACC2C71214A8CED7947E6FA5A4_RuntimeMethod_var);
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_0156:
	{
		// for (int i = 0; i < NodeList.Count; i++)
		int32_t L_52 = V_4;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_53 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_53, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_0094;
		}
	}
	{
		// for (int i = 0; i < 100; i++)
		V_8 = 0;
		goto IL_0184;
	}

IL_016d:
	{
		// IterateScatterPacking(NodeList, Radius);
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_55 = BaseObjectCollection_get_NodeList_mB99A9F8A9DA7B8E3BA450E4A7A27A4A9F22584AA(__this, /*hidden argument*/NULL);
		float L_56 = GridObjectCollection_get_Radius_mAC6403FE6DFCC8168FC7D984A1BFEF4A66607470(__this, /*hidden argument*/NULL);
		ScatterObjectCollection_IterateScatterPacking_mC0DD7B1323B048CA3953B850304039AFBC3D948A(L_55, L_56, /*hidden argument*/NULL);
		// for (int i = 0; i < 100; i++)
		int32_t L_57 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_0184:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_58 = V_8;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)100))))
		{
			goto IL_016d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ScatterObjectCollection::IterateScatterPacking(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ScatterObjectCollection_IterateScatterPacking_mC0DD7B1323B048CA3953B850304039AFBC3D948A (List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * ___nodes0, float ___radiusPadding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScatterObjectCollection_IterateScatterPacking_mC0DD7B1323B048CA3953B850304039AFBC3D948A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// nodes.Sort(ScatterSort);
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_0 = ___nodes0;
		Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 * L_1 = (Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4 *)il2cpp_codegen_object_new(Comparison_1_tD5CF35A150128547802730D4B1D520CB27DDF4B4_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m15AE944F3556CD05B000BF7B327058B44D4B1FB5(L_1, NULL, (intptr_t)((intptr_t)ScatterObjectCollection_ScatterSort_mE65ED6AF152AEF6EECAB4362B1347D824FDDB0E4_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m15AE944F3556CD05B000BF7B327058B44D4B1FB5_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_Sort_m323C2301497D0BAFC3256EA3601B5F697F0A008D(L_0, L_1, /*hidden argument*/List_1_Sort_m323C2301497D0BAFC3256EA3601B5F697F0A008D_RuntimeMethod_var);
		// float radiusPaddingSquared = Mathf.Pow(radiusPadding, 2f);
		float L_2 = ___radiusPadding1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_3 = powf(L_2, (2.0f));
		V_2 = L_3;
		// for (int i = 0; i < nodes.Count - 1; i++)
		V_3 = 0;
		goto IL_0132;
	}

IL_0025:
	{
		// for (int j = i + 1; j < nodes.Count; j++)
		int32_t L_4 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0121;
	}

IL_002f:
	{
		// if (i != j)
		int32_t L_5 = V_3;
		int32_t L_6 = V_4;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_011b;
		}
	}
	{
		// difference = nodes[j].Transform.localPosition - nodes[i].Transform.localPosition;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_7 = ___nodes0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_9 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_7, L_8, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = L_9.get_Transform_3();
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_10, /*hidden argument*/NULL);
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_12 = ___nodes0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_14 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_12, L_13, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = L_14.get_Transform_3();
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_11, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// difference2D.x = difference.x;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		float L_19 = L_18.get_x_2();
		(&V_1)->set_x_0(L_19);
		// difference2D.y = difference.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = L_20.get_y_3();
		(&V_1)->set_y_1(L_21);
		// float combinedRadius = nodes[i].Radius + nodes[j].Radius;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_22 = ___nodes0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_24 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_22, L_23, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		float L_25 = L_24.get_Radius_2();
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_26 = ___nodes0;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_28 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_26, L_27, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		float L_29 = L_28.get_Radius_2();
		V_5 = ((float)il2cpp_codegen_add((float)L_25, (float)L_29));
		// float distance = difference2D.SqrMagnitude() - radiusPaddingSquared;
		float L_30 = Vector2_SqrMagnitude_mBFCF6C90827FF29E3FA3C2082F8F7F840A09B2FD((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), /*hidden argument*/NULL);
		float L_31 = V_2;
		V_6 = ((float)il2cpp_codegen_subtract((float)L_30, (float)L_31));
		// float minSeparation = Mathf.Min(distance, radiusPaddingSquared);
		float L_32 = V_6;
		float L_33 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_34 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(L_32, L_33, /*hidden argument*/NULL);
		V_7 = L_34;
		// distance -= minSeparation;
		float L_35 = V_6;
		float L_36 = V_7;
		V_6 = ((float)il2cpp_codegen_subtract((float)L_35, (float)L_36));
		// if (distance < (Mathf.Pow(combinedRadius, 2)))
		float L_37 = V_6;
		float L_38 = V_5;
		float L_39 = powf(L_38, (2.0f));
		if ((!(((float)L_37) < ((float)L_39))))
		{
			goto IL_011b;
		}
	}
	{
		// difference2D.Normalize();
		Vector2_Normalize_m99A2CC6E4CB65C1B9231F898D5B7A12B6D72E722((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), /*hidden argument*/NULL);
		// difference *= ((combinedRadius - Mathf.Sqrt(distance)) * 0.5f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_0;
		float L_41 = V_5;
		float L_42 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_43 = sqrtf(L_42);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_40, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_43)), (float)(0.5f))), /*hidden argument*/NULL);
		V_0 = L_44;
		// nodes[j].Transform.localPosition += difference;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_45 = ___nodes0;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_47 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_45, L_46, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = L_47.get_Transform_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = L_48;
		NullCheck(L_49);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_49, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_49, L_52, /*hidden argument*/NULL);
		// nodes[i].Transform.localPosition -= difference;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_53 = ___nodes0;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_55 = List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1(L_53, L_54, /*hidden argument*/List_1_get_Item_m3498EB9B46F83CBEEC10163EAEA1212D39DD59B1_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = L_55.get_Transform_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = L_56;
		NullCheck(L_57);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_57, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_58, L_59, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_57, L_60, /*hidden argument*/NULL);
	}

IL_011b:
	{
		// for (int j = i + 1; j < nodes.Count; j++)
		int32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0121:
	{
		// for (int j = i + 1; j < nodes.Count; j++)
		int32_t L_62 = V_4;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_63 = ___nodes0;
		NullCheck(L_63);
		int32_t L_64 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_63, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_002f;
		}
	}
	{
		// for (int i = 0; i < nodes.Count - 1; i++)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0132:
	{
		// for (int i = 0; i < nodes.Count - 1; i++)
		int32_t L_66 = V_3;
		List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * L_67 = ___nodes0;
		NullCheck(L_67);
		int32_t L_68 = List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC(L_67, /*hidden argument*/List_1_get_Count_m44BDF21673377F670C2F02FA770BB76970E437CC_RuntimeMethod_var);
		if ((((int32_t)L_66) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1)))))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ScatterObjectCollection::ScatterSort(Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode,Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode)
extern "C" IL2CPP_METHOD_ATTR int32_t ScatterObjectCollection_ScatterSort_mE65ED6AF152AEF6EECAB4362B1347D824FDDB0E4 (ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___circle10, ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  ___circle21, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// float distance1 = (circle1.Transform.localPosition).sqrMagnitude;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_0 = ___circle10;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = L_0.get_Transform_3();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_3;
		// float distance2 = (circle2.Transform.localPosition).sqrMagnitude;
		ObjectCollectionNode_t826AC33CFBA42D5D51D2DE3106A7B68E250BC425  L_4 = ___circle21;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_4.get_Transform_3();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_7;
		// return distance1.CompareTo(distance2);
		float L_8 = V_1;
		int32_t L_9 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)(&V_0), L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ScatterObjectCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScatterObjectCollection__ctor_m7A8890F55C13313189B24514C8B9B8A5D7CF4040 (ScatterObjectCollection_t2932B812F93E9835CF59CD0CCD179DF22A0136F0 * __this, const RuntimeMethod* method)
{
	{
		GridObjectCollection__ctor_mF345FA48BE11FDF6074E2CD7F85AC988E120F0E4(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.ScaleState Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::get_ScaleState()
extern "C" IL2CPP_METHOD_ATTR int32_t ConstantViewSize_get_ScaleState_mD29CAC794F4323C8C85ECA330F401925E7027055 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method)
{
	{
		// public ScaleState ScaleState { get; private set; } = ScaleState.Static;
		int32_t L_0 = __this->get_U3CScaleStateU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::set_ScaleState(Microsoft.MixedReality.Toolkit.Utilities.ScaleState)
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_set_ScaleState_mF6CB366B4254BE88EDB1532FC60A0401FFB4BC20 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ScaleState ScaleState { get; private set; } = ScaleState.Static;
		int32_t L_0 = ___value0;
		__this->set_U3CScaleStateU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::get_CurrentScalePercent()
extern "C" IL2CPP_METHOD_ATTR float ConstantViewSize_get_CurrentScalePercent_mAE5DFA7EC91DCE5530F342DC86F72DD5BF70A8F3 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentScalePercent { get; private set; } = 1f;
		float L_0 = __this->get_U3CCurrentScalePercentU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::set_CurrentScalePercent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_set_CurrentScalePercent_m5C20870C52A9F42E68C776F3B1BD21B4A1318267 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float CurrentScalePercent { get; private set; } = 1f;
		float L_0 = ___value0;
		__this->set_U3CCurrentScalePercentU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::get_CurrentDistancePercent()
extern "C" IL2CPP_METHOD_ATTR float ConstantViewSize_get_CurrentDistancePercent_mB4AB53DCD03FE83B5997FA682DCA43B890761092 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentDistancePercent { get; private set; } = 1f;
		float L_0 = __this->get_U3CCurrentDistancePercentU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::set_CurrentDistancePercent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_set_CurrentDistancePercent_m85B9788957BF196998566BC728DFEBDE3D6F9308 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float CurrentDistancePercent { get; private set; } = 1f;
		float L_0 = ___value0;
		__this->set_U3CCurrentDistancePercentU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::get_FovScale()
extern "C" IL2CPP_METHOD_ATTR float ConstantViewSize_get_FovScale_mE8AF4BDB5D54BBB4594A6FC62864788FEAF82A21 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConstantViewSize_get_FovScale_mE8AF4BDB5D54BBB4594A6FC62864788FEAF82A21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float cameraFovRadians = (CameraCache.Main.aspect * CameraCache.Main.fieldOfView) * Mathf.Deg2Rad;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6(L_0, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_2, /*hidden argument*/NULL);
		// float sinFov = Mathf.Sin(cameraFovRadians * 0.5f);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)(0.0174532924f))), (float)(0.5f))));
		V_0 = L_4;
		// return 2f * targetViewPercentV * sinFov / objectSize;
		float L_5 = __this->get_targetViewPercentV_17();
		float L_6 = V_0;
		float L_7 = __this->get_objectSize_28();
		return ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_5)), (float)L_6))/(float)L_7));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::Start()
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_Start_m991C3583D06EEC3052488EF77708026BDEB0076D (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConstantViewSize_Start_m991C3583D06EEC3052488EF77708026BDEB0076D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		// if (manualObjectSize > 0)
		float L_0 = __this->get_manualObjectSize_23();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// baseSize = manualObjectSize;
		float L_1 = __this->get_manualObjectSize_23();
		V_0 = L_1;
		// }
		goto IL_00a1;
	}

IL_0019:
	{
		// Vector3 cachedScale = transform.root.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// transform.root.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_7, /*hidden argument*/NULL);
		// var combinedBounds = new Bounds(transform.position, Vector3.zero);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), L_9, L_10, /*hidden argument*/NULL);
		// var renderers = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_11 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var);
		V_3 = L_11;
		// for (var i = 0; i < renderers.Length; i++)
		V_4 = 0;
		goto IL_0078;
	}

IL_0062:
	{
		// combinedBounds.Encapsulate(renderers[i].bounds);
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_16 = Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5(L_15, /*hidden argument*/NULL);
		Bounds_Encapsulate_m394E7F823ADE56B97E6723B645C9458F1ADF0089((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), L_16, /*hidden argument*/NULL);
		// for (var i = 0; i < renderers.Length; i++)
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0078:
	{
		// for (var i = 0; i < renderers.Length; i++)
		int32_t L_18 = V_4;
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0062;
		}
	}
	{
		// baseSize = combinedBounds.extents.magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), /*hidden argument*/NULL);
		V_5 = L_20;
		float L_21 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
		V_0 = L_21;
		// transform.root.localScale = cachedScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		NullCheck(L_23);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// if (baseSize > 0)
		float L_25 = V_0;
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_00b1;
		}
	}
	{
		// objectSize = baseSize;
		float L_26 = V_0;
		__this->set_objectSize_28(L_26);
		// }
		return;
	}

IL_00b1:
	{
		// Debug.LogWarning("ConstantViewSize: Object base size calculate was 0, defaulting to 1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD5F2B42FDCA2897E50838908138E953DF1E2CC8B, /*hidden argument*/NULL);
		// objectSize = 1f;
		__this->set_objectSize_28((1.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize_SolverUpdate_m2531A3107824B2C0152168AE4544C6505A93DDD9 (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConstantViewSize_SolverUpdate_m2531A3107824B2C0152168AE4544C6505A93DDD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		// float lastScalePct = CurrentScalePercent;
		float L_0 = ConstantViewSize_get_CurrentScalePercent_mAE5DFA7EC91DCE5530F342DC86F72DD5BF70A8F3(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00ea;
		}
	}
	{
		// fovScalar = FovScale;
		float L_4 = ConstantViewSize_get_FovScale_mE8AF4BDB5D54BBB4594A6FC62864788FEAF82A21(__this, /*hidden argument*/NULL);
		__this->set_fovScalar_27(L_4);
		// SolverHandler.AltScale.SetGoal(transform.localScale);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_5 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  L_6 = SolverHandler_get_AltScale_mD05895C9187EB7CCAEC6957EB020D1D507B8851A(L_5, /*hidden argument*/NULL);
		V_5 = L_6;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_7, /*hidden argument*/NULL);
		Vector3Smoothed_SetGoal_m9C7BF69C97208D6AB4BD4B19A4A8ECDE8705B7BF((Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6 *)(&V_5), L_8, /*hidden argument*/NULL);
		// Vector3 targetPosition = SolverHandler.TransformTarget.position;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_9 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float distance = Mathf.Clamp(Vector3.Distance(transform.position, targetPosition), minDistance, maxDistance);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_15 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_13, L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_minDistance_18();
		float L_17 = __this->get_maxDistance_19();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// float scale = Mathf.Clamp(fovScalar * Mathf.Pow(distance, ScalePower), minScale, maxScale);
		float L_19 = __this->get_fovScalar_27();
		float L_20 = V_3;
		float L_21 = powf(L_20, (1.0f));
		float L_22 = __this->get_minScale_20();
		float L_23 = __this->get_maxScale_21();
		float L_24 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)), L_22, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// GoalScale = Vector3.one * scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		float L_26 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_25, L_26, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalScale_15(L_27);
		// CurrentDistancePercent = Mathf.InverseLerp(minDistance, maxDistance, distance);
		float L_28 = __this->get_minDistance_18();
		float L_29 = __this->get_maxDistance_19();
		float L_30 = V_3;
		float L_31 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31(L_28, L_29, L_30, /*hidden argument*/NULL);
		ConstantViewSize_set_CurrentDistancePercent_m85B9788957BF196998566BC728DFEBDE3D6F9308(__this, L_31, /*hidden argument*/NULL);
		// CurrentScalePercent = Mathf.InverseLerp(minScale, maxScale, scale);
		float L_32 = __this->get_minScale_20();
		float L_33 = __this->get_maxScale_21();
		float L_34 = V_4;
		float L_35 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31(L_32, L_33, L_34, /*hidden argument*/NULL);
		ConstantViewSize_set_CurrentScalePercent_m5C20870C52A9F42E68C776F3B1BD21B4A1318267(__this, L_35, /*hidden argument*/NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_m296AE08470ECBC4F823F9F6A8A3F8A2DC639D382(__this, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// float scaleDifference = (CurrentScalePercent - lastScalePct) / SolverHandler.DeltaTime;
		float L_36 = ConstantViewSize_get_CurrentScalePercent_mAE5DFA7EC91DCE5530F342DC86F72DD5BF70A8F3(__this, /*hidden argument*/NULL);
		float L_37 = V_0;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_38 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_38);
		float L_39 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_38, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_36, (float)L_37))/(float)L_39));
		// if (scaleDifference > scaleBuffer)
		float L_40 = V_1;
		float L_41 = __this->get_scaleBuffer_22();
		if ((!(((float)L_40) > ((float)L_41))))
		{
			goto IL_0110;
		}
	}
	{
		// ScaleState = ScaleState.Growing;
		ConstantViewSize_set_ScaleState_mF6CB366B4254BE88EDB1532FC60A0401FFB4BC20(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0110:
	{
		// else if (scaleDifference < -scaleBuffer)
		float L_42 = V_1;
		float L_43 = __this->get_scaleBuffer_22();
		if ((!(((float)L_42) < ((float)((-L_43))))))
		{
			goto IL_0122;
		}
	}
	{
		// ScaleState = ScaleState.Shrinking;
		ConstantViewSize_set_ScaleState_mF6CB366B4254BE88EDB1532FC60A0401FFB4BC20(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0122:
	{
		// ScaleState = ScaleState.Static;
		ConstantViewSize_set_ScaleState_mF6CB366B4254BE88EDB1532FC60A0401FFB4BC20(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ConstantViewSize::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConstantViewSize__ctor_m53FE26DAFB1C31B8EA1DBB9833A681CDCB4A792C (ConstantViewSize_tE25B1B9009965C08B8D6B962C7D4723B9B64829C * __this, const RuntimeMethod* method)
{
	{
		// private float targetViewPercentV = 0.5f;
		__this->set_targetViewPercentV_17((0.5f));
		// private float minDistance = 0.5f;
		__this->set_minDistance_18((0.5f));
		// private float maxDistance = 3.5f;
		__this->set_maxDistance_19((3.5f));
		// private float minScale = 0.01f;
		__this->set_minScale_20((0.01f));
		// private float maxScale = 100f;
		__this->set_maxScale_21((100.0f));
		// private float scaleBuffer = 0.01f;
		__this->set_scaleBuffer_22((0.01f));
		// public float CurrentScalePercent { get; private set; } = 1f;
		__this->set_U3CCurrentScalePercentU3Ek__BackingField_25((1.0f));
		// public float CurrentDistancePercent { get; private set; } = 1f;
		__this->set_U3CCurrentDistancePercentU3Ek__BackingField_26((1.0f));
		// private float fovScalar = 1f;
		__this->set_fovScalar_27((1.0f));
		// private float objectSize = 1f;
		__this->set_objectSize_28((1.0f));
		Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::get_Handedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t ControllerFinder_get_Handedness_m3CC7CA1D8AB3141034373253ED7A2D852F75A6E9 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	{
		// get { return handedness; }
		uint8_t L_0 = __this->get_handedness_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::set_Handedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_set_Handedness_mDFED4A63D6F9D2AFAC4368132B068ADF1BE5717A (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// if (handedness != value)
		uint8_t L_0 = __this->get_handedness_4();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// handedness = value;
		uint8_t L_2 = ___value0;
		__this->set_handedness_4(L_2);
		// RefreshControllerTransform();
		VirtActionInvoker0::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform() */, __this);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnEnable_m121B6255DD6B5CA18731F68B8D562600519F3217 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	{
		// RefreshControllerTransform();
		VirtActionInvoker0::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnSourceDetected_mCFA11CBDE6BAC872F3613A228E230D06AB0E15CD (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnSourceDetected_mCFA11CBDE6BAC872F3613A228E230D06AB0E15CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  V_0;
	memset(&V_0, 0, sizeof(V_0));
	uint8_t V_1 = 0;
	Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// if (eventData.Controller?.ControllerHandedness == handedness)
		SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = SourceStateEventData_get_Controller_m3935B78C6E7B8158323E0D92A3C1016CF59B72BC(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 ));
		Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  L_3 = V_2;
		G_B3_0 = L_3;
		goto IL_001f;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		uint8_t L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, G_B2_0);
		Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_m823E766F59AF39F4E4F1DB87695B73FA8D181D4B((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m823E766F59AF39F4E4F1DB87695B73FA8D181D4B_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		uint8_t L_6 = __this->get_handedness_4();
		V_1 = L_6;
		uint8_t L_7 = Nullable_1_GetValueOrDefault_m0732BB3E14200FEF0204CD4062878683EE759DBD((Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m0732BB3E14200FEF0204CD4062878683EE759DBD_RuntimeMethod_var);
		uint8_t L_8 = V_1;
		bool L_9 = Nullable_1_get_HasValue_mA695C4BF91D8A19331B9DCF66796F34A2409FADA((Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mA695C4BF91D8A19331B9DCF66796F34A2409FADA_RuntimeMethod_var);
		if (!((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0054;
		}
	}
	{
		// if (eventData.Controller is IMixedRealityHand)
		SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8 * L_10 = ___eventData0;
		NullCheck(L_10);
		RuntimeObject* L_11 = SourceStateEventData_get_Controller_m3935B78C6E7B8158323E0D92A3C1016CF59B72BC(L_10, /*hidden argument*/NULL);
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_11, IMixedRealityHand_t5D2E2914E93365AF052B9DE664513E720951514C_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		// AddControllerTransform(eventData.Controller);
		SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8 * L_12 = ___eventData0;
		NullCheck(L_12);
		RuntimeObject* L_13 = SourceStateEventData_get_Controller_m3935B78C6E7B8158323E0D92A3C1016CF59B72BC(L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_13);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnSourceLost_mCF4191E8BF05F0D02A3BE105B59FFFADAFEF09A0 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnSourceLost_mCF4191E8BF05F0D02A3BE105B59FFFADAFEF09A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  V_0;
	memset(&V_0, 0, sizeof(V_0));
	uint8_t V_1 = 0;
	Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// if (eventData.Controller?.ControllerHandedness == handedness)
		SourceStateEventData_tC17E9EB097E08CCA954A82FAEAC9D010CF8798F8 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = SourceStateEventData_get_Controller_m3935B78C6E7B8158323E0D92A3C1016CF59B72BC(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 ));
		Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  L_3 = V_2;
		G_B3_0 = L_3;
		goto IL_001f;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		uint8_t L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, G_B2_0);
		Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_m823E766F59AF39F4E4F1DB87695B73FA8D181D4B((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m823E766F59AF39F4E4F1DB87695B73FA8D181D4B_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		uint8_t L_6 = __this->get_handedness_4();
		V_1 = L_6;
		uint8_t L_7 = Nullable_1_GetValueOrDefault_m0732BB3E14200FEF0204CD4062878683EE759DBD((Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m0732BB3E14200FEF0204CD4062878683EE759DBD_RuntimeMethod_var);
		uint8_t L_8 = V_1;
		bool L_9 = Nullable_1_get_HasValue_mA695C4BF91D8A19331B9DCF66796F34A2409FADA((Nullable_1_tBD5BCA98767B0035CE68E24069088BC9242CB231 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mA695C4BF91D8A19331B9DCF66796F34A2409FADA_RuntimeMethod_var);
		if (!((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0041;
		}
	}
	{
		// RemoveControllerTransform();
		VirtActionInvoker0::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform() */, __this);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::TryAndAddControllerTransform()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_TryAndAddControllerTransform_mE17792545F0D536A2F91701128EB2B70993A0B63 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_TryAndAddControllerTransform_mE17792545F0D536A2F91701128EB2B70993A0B63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (MixedRealityToolkit.InputSystem == null)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_InputSystem_m4C368E1DE80A5F4E18A38485ACE4803A27E42772(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// foreach (IMixedRealityController controller in MixedRealityToolkit.InputSystem.DetectedControllers)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = MixedRealityToolkit_get_InputSystem_m4C368E1DE80A5F4E18A38485ACE4803A27E42772(/*hidden argument*/NULL);
		NullCheck(L_1);
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_2 = InterfaceFuncInvoker0< HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  L_3 = HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416(L_2, /*hidden argument*/HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_001a:
		{
			// foreach (IMixedRealityController controller in MixedRealityToolkit.InputSystem.DetectedControllers)
			RuntimeObject* L_4 = Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7((Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7_RuntimeMethod_var);
			V_1 = L_4;
			// if (controller.ControllerHandedness == handedness)
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			uint8_t L_6 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_5);
			uint8_t L_7 = __this->get_handedness_4();
			if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
			{
				goto IL_0039;
			}
		}

IL_0030:
		{
			// AddControllerTransform(controller);
			RuntimeObject* L_8 = V_1;
			VirtActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_8);
			// return;
			IL2CPP_LEAVE(0x52, FINALLY_0044);
		}

IL_0039:
		{
			// foreach (IMixedRealityController controller in MixedRealityToolkit.InputSystem.DetectedControllers)
			bool L_9 = Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992((Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001a;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B((Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_AddControllerTransform_m460890F21C2057D3022AF7069027E1BABB002BDF (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, RuntimeObject* ___newController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_AddControllerTransform_m460890F21C2057D3022AF7069027E1BABB002BDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newController == null ||
		//     newController.Visualizer == null ||
		//     newController.Visualizer.GameObjectProxy == null ||
		//     newController.Visualizer.GameObjectProxy.transform == null)
		RuntimeObject* L_0 = ___newController0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_1 = ___newController0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_3 = ___newController0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_tF11B01C18D3E7D9443AFA3B890520D0F196716C5_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_7 = ___newController0;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_tF11B01C18D3E7D9443AFA3B890520D0F196716C5_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// if (newController.ControllerHandedness == handedness &&
		//     !newController.Visualizer.GameObjectProxy.transform.Equals(ControllerTransform))
		RuntimeObject* L_12 = ___newController0;
		NullCheck(L_12);
		uint8_t L_13 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_12);
		uint8_t L_14 = __this->get_handedness_4();
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007e;
		}
	}
	{
		RuntimeObject* L_15 = ___newController0;
		NullCheck(L_15);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_tF11B01C18D3E7D9443AFA3B890520D0F196716C5_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = __this->get_ControllerTransform_5();
		NullCheck(L_18);
		bool L_20 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_18, L_19);
		if (L_20)
		{
			goto IL_007e;
		}
	}
	{
		// ControllerTransform = newController.Visualizer.GameObjectProxy.transform;
		RuntimeObject* L_21 = ___newController0;
		NullCheck(L_21);
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_tF11B01C18D3E7D9443AFA3B890520D0F196716C5_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		__this->set_ControllerTransform_5(L_24);
		// OnControllerFound();
		VirtActionInvoker0::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerFound() */, __this);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_RemoveControllerTransform_mE963ADDACEC4E04C28DE0CE68E70B287CF49E7F8 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_RemoveControllerTransform_mE963ADDACEC4E04C28DE0CE68E70B287CF49E7F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ControllerTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnControllerLost();
		VirtActionInvoker0::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerLost() */, __this);
		// ControllerTransform = null;
		__this->set_ControllerTransform_5((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_RefreshControllerTransform_m150FC68FF1FB3A1270BD64A2BC3652132F4B6417 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_RefreshControllerTransform_m150FC68FF1FB3A1270BD64A2BC3652132F4B6417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ControllerTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ControllerTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RemoveControllerTransform();
		VirtActionInvoker0::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform() */, __this);
	}

IL_0014:
	{
		// TryAndAddControllerTransform();
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::TryAndAddControllerTransform() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerFound()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnControllerFound_m2A0EE282AF2D6B6FDD335E0A47EBBEF2D1A04841 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void OnControllerFound() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerLost()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnControllerLost_m6A8DD6B07DC4AACBAEF02D5CB28879A3CA9E1CDF (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void OnControllerLost() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder__ctor_m1826BF754FE127E816A0E612F997916D2BECB853 (ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_PartwayOffset()
extern "C" IL2CPP_METHOD_ATTR float InBetween_get_PartwayOffset_m9BEA1D557B58D811391AB4AE0B29A079F11AFD11 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	{
		// get { return partwayOffset; }
		float L_0 = __this->get_partwayOffset_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_PartwayOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_PartwayOffset_mD060F58C746AA1BAA7C67E85DD91A678DF57377C (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_PartwayOffset_mD060F58C746AA1BAA7C67E85DD91A678DF57377C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_partwayOffset_16(L_1);
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_TrackedObjectForSecondTransform()
extern "C" IL2CPP_METHOD_ATTR int32_t InBetween_get_TrackedObjectForSecondTransform_mD37064D1BFE276BFC8B5638A44C21F9C593E38E0 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	{
		// get { return trackedObjectForSecondTransform; }
		int32_t L_0 = __this->get_trackedObjectForSecondTransform_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_TrackedObjectForSecondTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_TrackedObjectForSecondTransform_m3B1AE48A4CFF5D5432D1A1F55489602739767A7A (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_TrackedObjectForSecondTransform_m3B1AE48A4CFF5D5432D1A1F55489602739767A7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedObjectForSecondTransform = value;
		int32_t L_0 = ___value0;
		__this->set_trackedObjectForSecondTransform_17(L_0);
		// if (secondSolverHandler != null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = __this->get_secondSolverHandler_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// secondSolverHandler.TrackedObjectToReference = value;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = __this->get_secondSolverHandler_19();
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		SolverHandler_set_TrackedObjectToReference_mD35AE0817971FC6B92E3927AF11080A5BEDE0AEF(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void InBetween_OnValidate_m6B34D4394A150B4F8791A81357A8DCD5860C41FB (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	{
		// base.OnValidate();
		Solver_OnValidate_mB9A6BB7C5D3806BBFFCBF871BD990B8C0B071A33(__this, /*hidden argument*/NULL);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m8246596E8D35C1F8F24329FD7B37F2521ADF7BE2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::Start()
extern "C" IL2CPP_METHOD_ATTR void InBetween_Start_m44297DF0AB1085FE63EE4F43DC7EA8399408A594 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_Start_m44297DF0AB1085FE63EE4F43DC7EA8399408A594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// secondSolverHandler = gameObject.AddComponent<SolverHandler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = GameObject_AddComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_mCC697F4BBA5EE64613FEC30A0BAC86085CBD6C85(L_0, /*hidden argument*/GameObject_AddComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_mCC697F4BBA5EE64613FEC30A0BAC86085CBD6C85_RuntimeMethod_var);
		__this->set_secondSolverHandler_19(L_1);
		// secondSolverHandler.UpdateSolvers = false;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = __this->get_secondSolverHandler_19();
		NullCheck(L_2);
		SolverHandler_set_UpdateSolvers_m5F1292416809AE3834FC68DC24F1A3945BFEF5BB(L_2, (bool)0, /*hidden argument*/NULL);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m8246596E8D35C1F8F24329FD7B37F2521ADF7BE2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void InBetween_SolverUpdate_mEFB0693A0FA32B45E2B0F27F221FE2FA20DA7114 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_SolverUpdate_mEFB0693A0FA32B45E2B0F27F221FE2FA20DA7114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null && secondSolverHandler != null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = __this->get_secondSolverHandler_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null && secondSolverHandler.TransformTarget != null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_7 = __this->get_secondSolverHandler_19();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// AdjustPositionForOffset(SolverHandler.TransformTarget, secondSolverHandler.TransformTarget);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_10 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_10, /*hidden argument*/NULL);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_12 = __this->get_secondSolverHandler_19();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_12, /*hidden argument*/NULL);
		InBetween_AdjustPositionForOffset_m3D831AEAD3353285F4B573911B152C3390E4CB63(__this, L_11, L_13, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_m3D831AEAD3353285F4B573911B152C3390E4CB63 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_AdjustPositionForOffset_m3D831AEAD3353285F4B573911B152C3390E4CB63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (targetTransform != null && secondTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___targetTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___secondTransform1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// Vector3 centerline = targetTransform.position - secondTransform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___targetTransform0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___secondTransform1;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// GoalPosition = secondTransform.position + (centerline * partwayOffset);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___secondTransform1;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		float L_12 = __this->get_partwayOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_11, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_13, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_14);
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m37637FDAE4188DE06EB2436E8647CDA3E853BDFA(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
extern "C" IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_m8246596E8D35C1F8F24329FD7B37F2521ADF7BE2 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_UpdateSecondSolverHandler_m8246596E8D35C1F8F24329FD7B37F2521ADF7BE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (secondSolverHandler != null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = __this->get_secondSolverHandler_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// if (secondTransformOverride != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_secondTransformOverride_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// secondSolverHandler.TransformTarget = secondTransformOverride;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = __this->get_secondSolverHandler_19();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_secondTransformOverride_18();
		NullCheck(L_4);
		SolverHandler_set_TransformTarget_m0A263846A82BF5B2B95410974F4A597710C99B69(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// secondSolverHandler.TrackedObjectToReference = trackedObjectForSecondTransform;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_6 = __this->get_secondSolverHandler_19();
		int32_t L_7 = __this->get_trackedObjectForSecondTransform_17();
		NullCheck(L_6);
		SolverHandler_set_TrackedObjectToReference_mD35AE0817971FC6B92E3927AF11080A5BEDE0AEF(L_6, L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AttachSecondTransformToNewTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void InBetween_AttachSecondTransformToNewTrackedObject_m577173B8C9576A0218ECE96C0535344AAE1E8C1D (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	{
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m8246596E8D35C1F8F24329FD7B37F2521ADF7BE2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InBetween__ctor_mE1BEEB28C8317348CAB7972F32273AC00426ADC3 (InBetween_t1D97EC9DB2AC2DA255787479C706F604F3D20D06 * __this, const RuntimeMethod* method)
{
	{
		// private float partwayOffset = 0.5f;
		__this->set_partwayOffset_16((0.5f));
		Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mD6FD850F21EB46CCF6A9BF8254A5A1FD220AD54B (Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_get_ReferencePosition_mD6FD850F21EB46CCF6A9BF8254A5A1FD220AD54B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 ReferencePosition => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Momentum_OnEnable_m87F6ECD1221563F487A38C2C96C867F2DC76B2CF (Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_OnEnable_m87F6ECD1221563F487A38C2C96C867F2DC76B2CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Solver_OnEnable_m2C1DAD96179B3122345E5D8E147F4A0C9906E4E4(__this, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_21(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Momentum_SolverUpdate_m8A6C6AF273BA99191BD85BAF1C0CB53228A63A25 (Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SolverUpdate_m8A6C6AF273BA99191BD85BAF1C0CB53228A63A25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		// if (snapZ)
		bool L_0 = __this->get_snapZ_20();
		if (!L_0)
		{
			goto IL_0082;
		}
	}
	{
		// var referencePosition = ReferencePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Momentum_get_ReferencePosition_mD6FD850F21EB46CCF6A9BF8254A5A1FD220AD54B(__this, /*hidden argument*/NULL);
		V_3 = L_1;
		// float goalDepth = (SolverHandler.GoalPosition - referencePosition).magnitude;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SolverHandler_get_GoalPosition_m055EE49BB97074834FEA3D3F6C8354AD1C635EB7(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_4, /*hidden argument*/NULL);
		V_7 = L_5;
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_4 = L_6;
		// Vector3 currentDelta = transform.position - referencePosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		// float currentDeltaMagnitude = currentDelta.magnitude;
		float L_11 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
		V_6 = L_11;
		// if (!Mathf.Approximately(currentDeltaMagnitude, 0))
		float L_12 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_13 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_12, (0.0f), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0082;
		}
	}
	{
		// Vector3 currentDeltaNorm = currentDelta / currentDeltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_5;
		float L_15 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_14, L_15, /*hidden argument*/NULL);
		V_8 = L_16;
		// transform.position += currentDeltaNorm * (goalDepth - currentDeltaMagnitude);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = L_17;
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_8;
		float L_21 = V_4;
		float L_22 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_20, ((float)il2cpp_codegen_subtract((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_19, L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_18, L_24, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// Vector3 delta = SolverHandler.GoalPosition - transform.position;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_25 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = SolverHandler_get_GoalPosition_m055EE49BB97074834FEA3D3F6C8354AD1C635EB7(L_25, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_26, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		// float deltaMagnitude = delta.magnitude;
		float L_30 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_30;
		// if (deltaMagnitude > 0.01f)
		float L_31 = V_1;
		if ((!(((float)L_31) > ((float)(0.01f)))))
		{
			goto IL_00ea;
		}
	}
	{
		// Vector3 deltaNorm = delta / deltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_32, L_33, /*hidden argument*/NULL);
		V_9 = L_34;
		// velocity += deltaNorm * (SolverHandler.DeltaTime * (accelerationRate + springiness * deltaMagnitude));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = __this->get_velocity_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_9;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_37 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		float L_38 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_37, /*hidden argument*/NULL);
		float L_39 = __this->get_accelerationRate_18();
		float L_40 = __this->get_springiness_19();
		float L_41 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_36, ((float)il2cpp_codegen_multiply((float)L_38, (float)((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)))))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_35, L_42, /*hidden argument*/NULL);
		__this->set_velocity_21(L_43);
	}

IL_00ea:
	{
		// float velocityMagnitude = velocity.magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_44 = __this->get_address_of_velocity_21();
		float L_45 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_44, /*hidden argument*/NULL);
		V_2 = L_45;
		// if (!Mathf.Approximately(velocityMagnitude, 0))
		float L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_47 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_46, (0.0f), /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0157;
		}
	}
	{
		// Vector3 velocityNormal = velocity / velocityMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = __this->get_velocity_21();
		float L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_48, L_49, /*hidden argument*/NULL);
		V_10 = L_50;
		// float powFactor = velocityMagnitude > 1f ? Mathf.Pow(velocityMagnitude, resistanceVelocityPower) : velocityMagnitude;
		float L_51 = V_2;
		if ((((float)L_51) > ((float)(1.0f))))
		{
			goto IL_011c;
		}
	}
	{
		float L_52 = V_2;
		G_B9_0 = L_52;
		goto IL_0128;
	}

IL_011c:
	{
		float L_53 = V_2;
		float L_54 = __this->get_resistanceVelocityPower_17();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_55 = powf(L_53, L_54);
		G_B9_0 = L_55;
	}

IL_0128:
	{
		V_11 = G_B9_0;
		// velocity -= velocityNormal * (powFactor * resistance * SolverHandler.DeltaTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = __this->get_velocity_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = V_10;
		float L_58 = V_11;
		float L_59 = __this->get_resistance_16();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_60 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_60);
		float L_61 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_57, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)), (float)L_61)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_56, L_62, /*hidden argument*/NULL);
		__this->set_velocity_21(L_63);
	}

IL_0157:
	{
		// if (velocity.sqrMagnitude < 0.001f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_64 = __this->get_address_of_velocity_21();
		float L_65 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_64, /*hidden argument*/NULL);
		if ((!(((float)L_65) < ((float)(0.001f)))))
		{
			goto IL_0174;
		}
	}
	{
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_21(L_66);
	}

IL_0174:
	{
		// transform.position += velocity * SolverHandler.DeltaTime;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_67 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_68 = L_67;
		NullCheck(L_68);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_68, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = __this->get_velocity_21();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_71 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_71);
		float L_72 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_70, L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_73, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_68, L_74, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Momentum_SnapTo_m08B7D257C034945885AA614D25CA0A4DC40B0EB8 (Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SnapTo_m08B7D257C034945885AA614D25CA0A4DC40B0EB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.SnapTo(position, rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_SnapTo_mE3C982ECF01578B57F46D0A65916DE78633E9918(__this, L_0, L_1, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_21(L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Momentum__ctor_m3406FBC4C444A2A704715EB260525BEBC5AE52C0 (Momentum_t6698497A4E1A66AF49880B0ADEF5369FBBD96B3E * __this, const RuntimeMethod* method)
{
	{
		// private float resistance = 0.99f;
		__this->set_resistance_16((0.99f));
		// private float resistanceVelocityPower = 1.5f;
		__this->set_resistanceVelocityPower_17((1.5f));
		// private float accelerationRate = 10f;
		__this->set_accelerationRate_18((10.0f));
		// private bool snapZ = true;
		__this->set_snapZ_20((bool)1);
		Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_OrientationType()
extern "C" IL2CPP_METHOD_ATTR int32_t Orbital_get_OrientationType_m0D9DCBCB4838D6C431A00ECFAA7BCB9A0C9B9915 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method)
{
	{
		// get { return orientationType; }
		int32_t L_0 = __this->get_orientationType_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_OrientationType(Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_OrientationType_m0E97295DDBF48CB6A6E64D03DE55DB94479023FD (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationType = value; }
		int32_t L_0 = ___value0;
		__this->set_orientationType_16(L_0);
		// set { orientationType = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m8C2A2C11B86BD2288E6BA61F6757B88645402EFB (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method)
{
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_LocalOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_LocalOffset_m1D79217C804834AF5FB762FB939C0838DD79F73B (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { localOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_localOffset_17(L_0);
		// set { localOffset = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m4D5EB23289CA3B0F9C8B1D8DB11F3A901B3D0B91 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method)
{
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_worldOffset_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_WorldOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_WorldOffset_m639E8C45AD090254B941A87D76720664D52613A0 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { worldOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_worldOffset_18(L_0);
		// set { worldOffset = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleSteppingForWorldOffset()
extern "C" IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleSteppingForWorldOffset_m3887FEC535EC8A5F0894170192B3825D18274CE4 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method)
{
	{
		// get { return useAngleSteppingForWorldOffset; }
		bool L_0 = __this->get_useAngleSteppingForWorldOffset_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_UseAngleSteppingForWorldOffset(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_UseAngleSteppingForWorldOffset_mC306205291B2BA0BFB21858756D04119EA3F0EA3 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useAngleSteppingForWorldOffset = value; }
		bool L_0 = ___value0;
		__this->set_useAngleSteppingForWorldOffset_19(L_0);
		// set { useAngleSteppingForWorldOffset = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_TetherAngleSteps()
extern "C" IL2CPP_METHOD_ATTR int32_t Orbital_get_TetherAngleSteps_m20688867CD871D0D5F22A612F18D537E8DCBBCEA (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method)
{
	{
		// get { return tetherAngleSteps; }
		int32_t L_0 = __this->get_tetherAngleSteps_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_TetherAngleSteps(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_TetherAngleSteps_m19D662D53BC9920AFD3C9C329803235E765DDDF6 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_set_TetherAngleSteps_m19D662D53BC9920AFD3C9C329803235E765DDDF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tetherAngleSteps =  Mathf.Clamp(value, 2, 24);
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_0, 2, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_tetherAngleSteps_20(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Orbital_SolverUpdate_mAC55E2246F1858BE11F1C691A6821C0F1CE315FB (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SolverUpdate_mAC55E2246F1858BE11F1C691A6821C0F1CE315FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	{
		// Vector3 desiredPos = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		V_0 = G_B3_0;
		// Quaternion targetRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.Euler(0, 1, 0);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_7 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		goto IL_0064;
	}

IL_0054:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_11 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
	}

IL_0064:
	{
		V_1 = G_B6_0;
		// Quaternion yawOnlyRot = Quaternion.Euler(0, targetRot.eulerAngles.y, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		V_2 = L_16;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(targetRot) * LocalOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Orbital_SnapToTetherAngleSteps_m60B09A90AAEF7485126CC9357E93EA25FD9B5D3B(__this, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Orbital_get_LocalOffset_m8C2A2C11B86BD2288E6BA61F6757B88645402EFB(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(yawOnlyRot) * WorldOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Orbital_SnapToTetherAngleSteps_m60B09A90AAEF7485126CC9357E93EA25FD9B5D3B(__this, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Orbital_get_WorldOffset_m4D5EB23289CA3B0F9C8B1D8DB11F3A901B3D0B91(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// Quaternion desiredRot = CalculateDesiredRotation(desiredPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Orbital_CalculateDesiredRotation_m8444E82FF685992F2087C48C65B5B67157EB26E0(__this, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// GoalPosition = desiredPos;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_31);
		// GoalRotation = desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_3;
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalRotation_14(L_32);
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m37637FDAE4188DE06EB2436E8647CDA3E853BDFA(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m703152C16912206024090C82BF1EFC998BE51D3F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m60B09A90AAEF7485126CC9357E93EA25FD9B5D3B (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SnapToTetherAngleSteps_m60B09A90AAEF7485126CC9357E93EA25FD9B5D3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if (!UseAngleSteppingForWorldOffset || SolverHandler.TransformTarget == null)
		bool L_0 = Orbital_get_UseAngleSteppingForWorldOffset_m3887FEC535EC8A5F0894170192B3825D18274CE4(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		// return rotationToSnap;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotationToSnap0;
		return L_4;
	}

IL_001d:
	{
		// float stepAngle = 360f / tetherAngleSteps;
		int32_t L_5 = __this->get_tetherAngleSteps_20();
		V_0 = ((float)((float)(360.0f)/(float)(((float)((float)L_5)))));
		// int numberOfSteps = Mathf.RoundToInt(SolverHandler.TransformTarget.transform.eulerAngles.y / stepAngle);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_6 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_12 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		V_1 = L_12;
		// float newAngle = stepAngle * numberOfSteps;
		float L_13 = V_0;
		int32_t L_14 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		// return Quaternion.Euler(rotationToSnap.eulerAngles.x, newAngle, rotationToSnap.eulerAngles.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		float L_17 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_16, L_17, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m8444E82FF685992F2087C48C65B5B67157EB26E0 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_CalculateDesiredRotation_m8444E82FF685992F2087C48C65B5B67157EB26E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float G_B5_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B15_0;
	memset(&G_B15_0, 0, sizeof(G_B15_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B19_0;
	memset(&G_B19_0, 0, sizeof(G_B19_0));
	{
		// Quaternion desiredRot = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (orientationType)
		int32_t L_1 = __this->get_orientationType_16();
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_010b;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0138;
	}

IL_0030:
	{
		// float targetYRotation = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.eulerAngles.y : 0.0f;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_005f;
	}

IL_004a:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_6 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		G_B5_0 = L_9;
	}

IL_005f:
	{
		V_2 = G_B5_0;
		// desiredRot = Quaternion.Euler(0f, targetYRotation, 0f);
		float L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_0152;
	}

IL_0076:
	{
		// desiredRot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_0152;
	}

IL_0087:
	{
		// desiredRot = CameraCache.Main.transform.rotation;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_0152;
	}

IL_009c:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(SolverHandler.TransformTarget.position - desiredPos) : Quaternion.identity;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_17 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B11_0 = L_20;
		goto IL_00d1;
	}

IL_00b6:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_21 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
	}

IL_00d1:
	{
		V_0 = G_B11_0;
		// break;
		goto IL_0152;
	}

IL_00d4:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(CameraCache.Main.transform.position - desiredPos) : Quaternion.identity;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_27 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_28, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00ee;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_0108;
	}

IL_00ee:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_31 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_35, /*hidden argument*/NULL);
		G_B15_0 = L_36;
	}

IL_0108:
	{
		V_0 = G_B15_0;
		// break;
		goto IL_0152;
	}

IL_010b:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.identity;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_37 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0125;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B19_0 = L_40;
		goto IL_0135;
	}

IL_0125:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_41 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		G_B19_0 = L_43;
	}

IL_0135:
	{
		V_0 = G_B19_0;
		// break;
		goto IL_0152;
	}

IL_0138:
	{
		// Debug.LogError($"Invalid OrientationType for Orbital Solver on {gameObject.name}");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_44, /*hidden argument*/NULL);
		String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_46, /*hidden argument*/NULL);
	}

IL_0152:
	{
		// if (UseAngleSteppingForWorldOffset)
		bool L_47 = Orbital_get_UseAngleSteppingForWorldOffset_m3887FEC535EC8A5F0894170192B3825D18274CE4(__this, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0162;
		}
	}
	{
		// desiredRot = SnapToTetherAngleSteps(desiredRot);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Orbital_SnapToTetherAngleSteps_m60B09A90AAEF7485126CC9357E93EA25FD9B5D3B(__this, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
	}

IL_0162:
	{
		// return desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = V_0;
		return L_50;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Orbital__ctor_mA3576DD3D4E1B58B2B0E07C1ABBC4A1C91F265E7 (Orbital_tD614902EB47022013E650D5A78562570BD6FDB9B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital__ctor_mA3576DD3D4E1B58B2B0E07C1ABBC4A1C91F265E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 localOffset = new Vector3(0, -1, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_localOffset_17(L_0);
		// private Vector3 worldOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_worldOffset_18(L_1);
		// private int tetherAngleSteps = 6;
		__this->set_tetherAngleSteps_20(6);
		Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_m0DB926026230A8850638F15B13AE39BB4CC3ABCC (Overlap_t6DB2D7D3026C02B914763DA2213A9BC8917D0891 * __this, const RuntimeMethod* method)
{
	{
		// GoalPosition = SolverHandler.TransformTarget.position;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_2);
		// GoalRotation = SolverHandler.TransformTarget.rotation;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalRotation_14(L_5);
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m37637FDAE4188DE06EB2436E8647CDA3E853BDFA(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m703152C16912206024090C82BF1EFC998BE51D3F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Overlap__ctor_mB42FBA83B7912BEEC9D8DE9011E05817F86271E3 (Overlap_t6DB2D7D3026C02B914763DA2213A9BC8917D0891 * __this, const RuntimeMethod* method)
{
	{
		Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_mBD5332045961F3EB3E9C54BCCE229BB4AEE7C32C (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return referenceDirection; }
		int32_t L_0 = __this->get_referenceDirection_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_m7AA8BD250627E5D96C44BBED05285FF9753F300F (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { referenceDirection = value; }
		int32_t L_0 = ___value0;
		__this->set_referenceDirection_16(L_0);
		// set { referenceDirection = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinDistance()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_m064238315FC0AE79FC35A9A66D1E55EB24DBBCD4 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return minDistance; }
		float L_0 = __this->get_minDistance_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_m5ACBF00C3F7FA69B029720C66A26204AD1AA9798 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minDistance = value; }
		float L_0 = ___value0;
		__this->set_minDistance_17(L_0);
		// set { minDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxDistance()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_m2313316D4EE3D2A3CC5B0290613CB3FA29F67CF3 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return maxDistance; }
		float L_0 = __this->get_maxDistance_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_m9A14F0D788C0610CBC33C532005D0B4693E6BAB9 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxDistance = value; }
		float L_0 = ___value0;
		__this->set_maxDistance_18(L_0);
		// set { maxDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinViewDegrees()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_m51AB4C1B4BC53F32E39C602FC8C4425B7283E913 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return minViewDegrees; }
		float L_0 = __this->get_minViewDegrees_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinViewDegrees(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_mC098A14B2C093570ECB17FEC2BA2CDFB4DB18726 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minViewDegrees = value; }
		float L_0 = ___value0;
		__this->set_minViewDegrees_19(L_0);
		// set { minViewDegrees = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxViewDegrees()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_mA2B9D633ED0690867ADC8321DABDBFA135D20575 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return maxViewDegrees; }
		float L_0 = __this->get_maxViewDegrees_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxViewDegrees(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_m5686B6EFBC75AF90A01F53070224A3F1555B66B6 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxViewDegrees = value; }
		float L_0 = ___value0;
		__this->set_maxViewDegrees_20(L_0);
		// set { maxViewDegrees = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_AspectV()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_AspectV_m965358726ED32781AB1CF6C26C0D8C615F11FE75 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return aspectV; }
		float L_0 = __this->get_aspectV_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_AspectV(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_AspectV_m1485A01A79D9D59B6AE6B4F348E69606A8A35529 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { aspectV = value; }
		float L_0 = ___value0;
		__this->set_aspectV_21(L_0);
		// set { aspectV = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreAngleClamp()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m9F92990CDD4BDD525B77FEEE3F7F491606B77DC5 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return ignoreAngleClamp; }
		bool L_0 = __this->get_ignoreAngleClamp_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreAngleClamp(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_mAF320E382ABD67536153E1950EE124EA2D13F7B2 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { ignoreAngleClamp = value; }
		bool L_0 = ___value0;
		__this->set_ignoreAngleClamp_22(L_0);
		// set { ignoreAngleClamp = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreDistanceClamp()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_m538D02631367CA85054F448F025136B4FEBE0305 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return ignoreDistanceClamp; }
		bool L_0 = __this->get_ignoreDistanceClamp_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreDistanceClamp(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_m730CBF58B399F2E28E03AE59C25C84AC58C76209 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { ignoreDistanceClamp = value; }
		bool L_0 = ___value0;
		__this->set_ignoreDistanceClamp_23(L_0);
		// set { ignoreDistanceClamp = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_OrientToReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_mB80CD6E6A34FA2F8E86BB4BCC6AE13A755E632C4 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return orientToReferenceDirection; }
		bool L_0 = __this->get_orientToReferenceDirection_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_OrientToReferenceDirection(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_mE8827192BF7FF131545EB97C57F1282C890BD1CB (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { orientToReferenceDirection = value; }
		bool L_0 = ___value0;
		__this->set_orientToReferenceDirection_24(L_0);
		// set { orientToReferenceDirection = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m1E2FAA775A65E165CE8B2BCA553060F71CA1DB1F (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_SolverReferenceDirection_m1E2FAA775A65E165CE8B2BCA553060F71CA1DB1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m27849124AD720D6FCC1A85F188C01A4C4C809E78 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_UpReference_m27849124AD720D6FCC1A85F188C01A4C4C809E78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->get_referenceDirection_16();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0038;
	}

IL_0028:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_6 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B4_0;
	}

IL_0039:
	{
		// return upReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m8EABB403AE403CE2A027A40F7C0DE7492B21D766 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_ReferencePoint_m8EABB403AE403CE2A027A40F7C0DE7492B21D766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_mCA40052876C71CFD3C9852B843815CE244C8374C (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_SolverUpdate_mCA40052876C71CFD3C9852B843815CE244C8374C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Vector3 goalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m2CF2F7B4E2C341A65E4246DF24E91B69FA826795(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (ignoreAngleClamp)
		bool L_1 = __this->get_ignoreAngleClamp_22();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// if (ignoreDistanceClamp)
		bool L_2 = __this->get_ignoreDistanceClamp_23();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// goalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_0037;
	}

IL_0025:
	{
		// GetDesiredOrientation_DistanceOnly(ref goalPosition);
		RadialView_GetDesiredOrientation_DistanceOnly_mD9D33B4F9768894C571F2687010309EC0E667906(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		// }
		goto IL_0037;
	}

IL_002f:
	{
		// GetDesiredOrientation(ref goalPosition);
		RadialView_GetDesiredOrientation_m997B52F4C3AA3212F8889107B8F4F9EEC16AF0A4(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0037:
	{
		// Vector3 refDirUp = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = RadialView_get_UpReference_m27849124AD720D6FCC1A85F188C01A4C4C809E78(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (orientToReferenceDirection)
		bool L_6 = __this->get_orientToReferenceDirection_24();
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RadialView_get_SolverReferenceDirection_m1E2FAA775A65E165CE8B2BCA553060F71CA1DB1F(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// }
		goto IL_0068;
	}

IL_0055:
	{
		// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RadialView_get_ReferencePoint_m8EABB403AE403CE2A027A40F7C0DE7492B21D766(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0068:
	{
		// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
		int32_t L_15 = __this->get_referenceDirection_16();
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_0087;
		}
	}
	{
		// goalRotation.x = goalRotation.z = 0f;
		float L_16 = (0.0f);
		V_3 = L_16;
		(&V_2)->set_z_2(L_16);
		float L_17 = V_3;
		(&V_2)->set_x_0(L_17);
	}

IL_0087:
	{
		// GoalPosition = goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_18);
		// GoalRotation = goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_2;
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalRotation_14(L_19);
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m37637FDAE4188DE06EB2436E8647CDA3E853BDFA(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m703152C16912206024090C82BF1EFC998BE51D3F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mD9D33B4F9768894C571F2687010309EC0E667906 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_DistanceOnly_mD9D33B4F9768894C571F2687010309EC0E667906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// Vector3 refPoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_ReferencePoint_m8EABB403AE403CE2A027A40F7C0DE7492B21D766(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		// Vector3 elementDelta = elementPoint - refPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// float elementDist = elementDelta.magnitude;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_6 = V_2;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0037;
	}

IL_0030:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		float L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_8, L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0037:
	{
		V_3 = G_B3_0;
		// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
		float L_11 = V_2;
		float L_12 = __this->get_minDistance_17();
		float L_13 = __this->get_maxDistance_18();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// if (!clampedDistance.Equals(elementDist))
		float L_15 = V_2;
		bool L_16 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_4), L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_006a;
		}
	}
	{
		// desiredPos = refPoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_17 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		float L_19 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_21, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_17 = L_22;
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m997B52F4C3AA3212F8889107B8F4F9EEC16AF0A4 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_m997B52F4C3AA3212F8889107B8F4F9EEC16AF0A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// Vector3 direction = SolverReferenceDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_SolverReferenceDirection_m1E2FAA775A65E165CE8B2BCA553060F71CA1DB1F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 upDirection = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RadialView_get_UpReference_m27849124AD720D6FCC1A85F188C01A4C4C809E78(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 referencePoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RadialView_get_ReferencePoint_m8EABB403AE403CE2A027A40F7C0DE7492B21D766(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		// Vector3 elementDelta = elementPoint - referencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		// float elementDist = elementDelta.magnitude;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_7;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_8 = V_4;
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_9;
		goto IL_0048;
	}

IL_0040:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_3;
		float L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_10, L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
	}

IL_0048:
	{
		V_5 = G_B3_0;
		// Vector3 perpendicularDirection = (elementDir - direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		float L_20 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_18, L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		// perpendicularDirection.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		float L_25 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_23, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
		float L_26 = __this->get_aspectV_21();
		float L_27 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_28 = sinf(((float)il2cpp_codegen_multiply((float)L_27, (float)(0.0174532924f))));
		float L_29 = fabsf(L_28);
		float L_30 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_26, (1.0f), L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		// float currentAngle = Vector3.Angle(elementDir, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_31, L_32, /*hidden argument*/NULL);
		// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
		float L_34 = L_33;
		float L_35 = __this->get_minViewDegrees_19();
		float L_36 = V_8;
		float L_37 = __this->get_maxViewDegrees_20();
		float L_38 = V_8;
		float L_39 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_34, ((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		V_9 = L_39;
		// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
		bool L_40 = __this->get_ignoreDistanceClamp_23();
		G_B4_0 = L_34;
		if (L_40)
		{
			G_B5_0 = L_34;
			goto IL_00df;
		}
	}
	{
		float L_41 = V_4;
		float L_42 = __this->get_minDistance_17();
		float L_43 = __this->get_maxDistance_18();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_44 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_41, L_42, L_43, /*hidden argument*/NULL);
		G_B6_0 = L_44;
		G_B6_1 = G_B4_0;
		goto IL_00e1;
	}

IL_00df:
	{
		float L_45 = V_4;
		G_B6_0 = L_45;
		G_B6_1 = G_B5_0;
	}

IL_00e1:
	{
		V_10 = G_B6_0;
		// if (currentAngle != currentAngleClamped)
		float L_46 = V_9;
		if ((((float)G_B6_1) == ((float)L_46)))
		{
			goto IL_0125;
		}
	}
	{
		// float angRad = currentAngleClamped * Mathf.Deg2Rad;
		float L_47 = V_9;
		V_11 = ((float)il2cpp_codegen_multiply((float)L_47, (float)(0.0174532924f)));
		// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_48 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_2;
		float L_50 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_0;
		float L_52 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_53 = cosf(L_52);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_51, L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_6;
		float L_56 = V_11;
		float L_57 = sinf(L_56);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_55, L_57, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_54, L_58, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_50, L_59, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_49, L_60, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_48 = L_61;
		// }
		return;
	}

IL_0125:
	{
		// else if (!clampedDistance.Equals(elementDist))
		float L_62 = V_4;
		bool L_63 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_10), L_62, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0145;
		}
	}
	{
		// desiredPos = referencePoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_64 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = V_2;
		float L_66 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_66, L_67, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_65, L_68, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_64 = L_69;
	}

IL_0145:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RadialView__ctor_mABB92C368916F95CD9610C81A95CA0AEA09A7136 (RadialView_t8F595AE184F6959905B0DEE7DE93C37ADA83B2F0 * __this, const RuntimeMethod* method)
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->set_referenceDirection_16(1);
		// private float minDistance = 1f;
		__this->set_minDistance_17((1.0f));
		// private float maxDistance = 2f;
		__this->set_maxDistance_18((2.0f));
		// private float maxViewDegrees = 30f;
		__this->set_maxViewDegrees_20((30.0f));
		// private float aspectV = 1f;
		__this->set_aspectV_21((1.0f));
		Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m2CF2F7B4E2C341A65E4246DF24E91B69FA826795 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? SolverHandler.GoalPosition : transform.position;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SolverHandler_get_GoalPosition_m055EE49BB97074834FEA3D3F6C8354AD1C635EB7(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_mBAD71D12946EC7C7BA673892A4A42BEA058CFB9C (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// SolverHandler.GoalPosition = value;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		NullCheck(L_1);
		SolverHandler_set_GoalPosition_m06E6115A0D2204D51F2907A943EF72568FD268A6(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// transform.position = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m8359301C1549FC5F9C075102882D31C759BE71D0 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? SolverHandler.GoalRotation : transform.rotation;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = SolverHandler_get_GoalRotation_mB83F84F6F629D89DD97F8286E661FD39D5FBA465(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mF90C707EA1C09937B8AE0A8AB4C9EE7488C884B4 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// SolverHandler.GoalRotation = value;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = __this->get_SolverHandler_12();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___value0;
		NullCheck(L_1);
		SolverHandler_set_GoalRotation_m45D5466407FCE1C1650E106E1FF5337D91A1F6DA(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// transform.rotation = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m7D7C2320471D6CEA07A631BF5CAE504668E0075E (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? SolverHandler.GoalScale : transform.localScale;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SolverHandler_get_GoalScale_m4847E97B0CE5A56F1CF2E7E339841DB115869AB2(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m62734F546CD2F0D5A83C91E2F71FEB01DCAA2737 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// SolverHandler.GoalScale = value;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		NullCheck(L_1);
		SolverHandler_set_GoalScale_m26DC00B22EB257FA88954E7B9D22CD12DFE6C878(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// transform.localScale = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnValidate_mB9A6BB7C5D3806BBFFCBF871BD990B8C0B071A33 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnValidate_mB9A6BB7C5D3806BBFFCBF871BD990B8C0B071A33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler == null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = Component_GetComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_m819E150F4FCA28D98BE1B05844AA2531D2455D84(__this, /*hidden argument*/Component_GetComponent_TisSolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE_m819E150F4FCA28D98BE1B05844AA2531D2455D84_RuntimeMethod_var);
		__this->set_SolverHandler_12(L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Awake()
extern "C" IL2CPP_METHOD_ATTR void Solver_Awake_m3D6C1EA665F89E3EC25E2605F2A1E338ADD436F1 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Awake_m3D6C1EA665F89E3EC25E2605F2A1E338ADD436F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B5_0 = NULL;
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B4_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B6_1 = NULL;
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B, L_3, _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_4, /*hidden argument*/NULL);
		// updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
	}

IL_0037:
	{
		// GoalScale = maintainScale ? transform.localScale : Vector3.one;
		bool L_5 = __this->get_maintainScale_8();
		G_B4_0 = __this;
		if (L_5)
		{
			G_B5_0 = __this;
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0047:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_7, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_GoalScale_15(G_B6_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnEnable_m2C1DAD96179B3122345E5D8E147F4A0C9906E4E4 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnEnable_m2C1DAD96179B3122345E5D8E147F4A0C9906E4E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// SnapGoalTo(SolverHandler.GoalPosition, SolverHandler.GoalRotation);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = __this->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SolverHandler_get_GoalPosition_m055EE49BB97074834FEA3D3F6C8354AD1C635EB7(L_2, /*hidden argument*/NULL);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = SolverHandler_get_GoalRotation_mB83F84F6F629D89DD97F8286E661FD39D5FBA465(L_4, /*hidden argument*/NULL);
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_3, L_5);
	}

IL_002a:
	{
		// currentLifetime = 0;
		__this->set_currentLifetime_11((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
extern "C" IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m94B79AD1D53E45914F13E364FC9C7BD21D1E40C9 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->get_currentLifetime_11();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_1 = __this->get_SolverHandler_12();
		NullCheck(L_1);
		float L_2 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_1, /*hidden argument*/NULL);
		__this->set_currentLifetime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->get_lifetime_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = __this->get_currentLifetime_11();
		float L_5 = __this->get_lifetime_10();
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003b:
	{
		// SolverUpdate();
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_mE3C982ECF01578B57F46D0A65916DE78633E9918 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Solver_set_WorkingPosition_mBAD71D12946EC7C7BA673892A4A42BEA058CFB9C(__this, L_2, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation1;
		Solver_set_WorkingRotation_mF90C707EA1C09937B8AE0A8AB4C9EE7488C884B4(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_mDC438D4EAA6559B7160B645E50E6276DDDB51FBA (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		__this->set_GoalPosition_13(L_0);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		__this->set_GoalRotation_14(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_AddOffset_m673ABC8FE3531B9DF2E39DB31F31D85511241D23 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_AddOffset_m673ABC8FE3531B9DF2E39DB31F31D85511241D23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalPosition += offset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_GoalPosition_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		__this->set_GoalPosition_13(L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_2;
	memset(&G_B3_2, 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___source0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_mFF21E0575E17088CD8549A71575CCBD776AFCF8E (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_mFF21E0575E17088CD8549A71575CCBD776AFCF8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_2;
	memset(&G_B3_2, 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___source0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateTransformToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_m05C1301B61A4916D131504AB01C99D1C44224F95 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// if (smoothing)
		bool L_0 = __this->get_smoothing_9();
		if (!L_0)
		{
			goto IL_00ae;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Quaternion rot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 scale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_GoalPosition_13();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_9 = __this->get_SolverHandler_12();
		NullCheck(L_9);
		float L_10 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B(L_7, L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = __this->get_GoalRotation_14();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_15 = __this->get_SolverHandler_12();
		NullCheck(L_15);
		float L_16 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Solver_SmoothTo_mFF21E0575E17088CD8549A71575CCBD776AFCF8E(L_13, L_14, L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = __this->get_GoalScale_15();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_21 = __this->get_SolverHandler_12();
		NullCheck(L_21);
		float L_22 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B(L_19, L_20, L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// transform.position = pos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_0;
		NullCheck(L_25);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_25, L_26, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_1;
		NullCheck(L_27);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_27, L_28, /*hidden argument*/NULL);
		// transform.localScale = scale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_2;
		NullCheck(L_29);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_29, L_30, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ae:
	{
		// transform.position = GoalPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = __this->get_GoalPosition_13();
		NullCheck(L_31);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_31, L_32, /*hidden argument*/NULL);
		// transform.rotation = GoalRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = __this->get_GoalRotation_14();
		NullCheck(L_33);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_33, L_34, /*hidden argument*/NULL);
		// transform.localScale = GoalScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = __this->get_GoalScale_15();
		NullCheck(L_35);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_mE09E17A248BD7387E01FD58CC37228275C234CA9 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	{
		// if (smoothing)
		bool L_0 = __this->get_smoothing_9();
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		// WorkingPosition = SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_WorkingPosition_m2CF2F7B4E2C341A65E4246DF24E91B69FA826795(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_GoalPosition_13();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		float L_4 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B(L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		Solver_set_WorkingPosition_mBAD71D12946EC7C7BA673892A4A42BEA058CFB9C(__this, L_6, /*hidden argument*/NULL);
		// WorkingRotation = SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_get_WorkingRotation_m8359301C1549FC5F9C075102882D31C759BE71D0(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = __this->get_GoalRotation_14();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_9 = __this->get_SolverHandler_12();
		NullCheck(L_9);
		float L_10 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Solver_SmoothTo_mFF21E0575E17088CD8549A71575CCBD776AFCF8E(L_7, L_8, L_10, L_11, /*hidden argument*/NULL);
		Solver_set_WorkingRotation_mF90C707EA1C09937B8AE0A8AB4C9EE7488C884B4(__this, L_12, /*hidden argument*/NULL);
		// WorkingScale = SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Solver_get_WorkingScale_m7D7C2320471D6CEA07A631BF5CAE504668E0075E(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_GoalScale_15();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_15 = __this->get_SolverHandler_12();
		NullCheck(L_15);
		float L_16 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B(L_13, L_14, L_16, L_17, /*hidden argument*/NULL);
		Solver_set_WorkingScale_m62734F546CD2F0D5A83C91E2F71FEB01DCAA2737(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0081:
	{
		// WorkingPosition = GoalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = __this->get_GoalPosition_13();
		Solver_set_WorkingPosition_mBAD71D12946EC7C7BA673892A4A42BEA058CFB9C(__this, L_19, /*hidden argument*/NULL);
		// WorkingRotation = GoalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = __this->get_GoalRotation_14();
		Solver_set_WorkingRotation_mF90C707EA1C09937B8AE0A8AB4C9EE7488C884B4(__this, L_20, /*hidden argument*/NULL);
		// WorkingScale = GoalScale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_GoalScale_15();
		Solver_set_WorkingScale_m62734F546CD2F0D5A83C91E2F71FEB01DCAA2737(__this, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m37637FDAE4188DE06EB2436E8647CDA3E853BDFA (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B2_0 = NULL;
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_GoalPosition_13();
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingPosition_m2CF2F7B4E2C341A65E4246DF24E91B69FA826795(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_GoalPosition_13();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_mBAD71D12946EC7C7BA673892A4A42BEA058CFB9C(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m703152C16912206024090C82BF1EFC998BE51D3F (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B2_0 = NULL;
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_GoalRotation_14();
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Solver_get_WorkingRotation_m8359301C1549FC5F9C075102882D31C759BE71D0(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = __this->get_GoalRotation_14();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_SmoothTo_mFF21E0575E17088CD8549A71575CCBD776AFCF8E(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_mF90C707EA1C09937B8AE0A8AB4C9EE7488C884B4(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m296AE08470ECBC4F823F9F6A8A3F8A2DC639D382 (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B2_0 = NULL;
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_GoalScale_15();
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingScale_m7D7C2320471D6CEA07A631BF5CAE504668E0075E(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_GoalScale_15();
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_mDBC2AACB45EA990710DD5EC1D882D6C32BF6597B(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_m62734F546CD2F0D5A83C91E2F71FEB01DCAA2737(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC (Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * __this, const RuntimeMethod* method)
{
	{
		// private float moveLerpTime = 0.1f;
		__this->set_moveLerpTime_5((0.1f));
		// private float rotateLerpTime = 0.1f;
		__this->set_rotateLerpTime_6((0.1f));
		// private bool maintainScale = true;
		__this->set_maintainScale_8((bool)1);
		// private bool smoothing = true;
		__this->set_smoothing_9((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_m21CED24E43E745174EE1939DAA3797C38E6E33D7 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// get { return trackedObjectToReference; }
		int32_t L_0 = __this->get_trackedObjectToReference_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_mD35AE0817971FC6B92E3927AF11080A5BEDE0AEF (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedObjectToReference != value)
		int32_t L_0 = __this->get_trackedObjectToReference_6();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// trackedObjectToReference = value;
		int32_t L_2 = ___value0;
		__this->set_trackedObjectToReference_6(L_2);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mB31FEAB6C2B34BED750A1AA44AE2FAD8D6A25245(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_mF05877ED4572D99A7971BF00B9DD23AADEB17126 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// get { return trackedHandJoint; }
		int32_t L_0 = __this->get_trackedHandJoint_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_mC8DABC4AE5D943136502E583E700EFCBBC93F4AA (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// trackedHandJoint = value;
		int32_t L_0 = ___value0;
		__this->set_trackedHandJoint_7(L_0);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mB31FEAB6C2B34BED750A1AA44AE2FAD8D6A25245(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_mC0A5FCA0B4A8CF29D02EAE7C14314565C9828A52 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// get { return additionalOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_mE22F11E0CE4E562B1F553880C949AF07B3519B89 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// additionalOffset = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_additionalOffset_8(L_0);
		// transformTarget = MakeOffsetTransform(transformTarget);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_transformTarget_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_MakeOffsetTransform_m2AE87D91CE5A2F024829028B9DA3D301F76E891C(__this, L_1, /*hidden argument*/NULL);
		__this->set_transformTarget_10(L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m4086995848CC11A39176517C977F1E5EEEE3A135 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// get { return additionalRotation; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_m101A56F4FA03E8097C26A3F0D7DB2E883B4740F9 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// additionalRotation = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_additionalRotation_9(L_0);
		// transformTarget = MakeOffsetTransform(transformTarget);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_transformTarget_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_MakeOffsetTransform_m2AE87D91CE5A2F024829028B9DA3D301F76E891C(__this, L_1, /*hidden argument*/NULL);
		__this->set_transformTarget_10(L_2);
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// get { return transformTarget; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_transformTarget_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformTarget(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TransformTarget_m0A263846A82BF5B2B95410974F4A597710C99B69 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// set { transformTarget = value; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_transformTarget_10(L_0);
		// set { transformTarget = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m45F18855C527B94C7BEB08B582B04DA0DE9DD8B4 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// get { return updateSolvers; }
		bool L_0 = __this->get_updateSolvers_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m5F1292416809AE3834FC68DC24F1A3945BFEF5BB (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { updateSolvers = value; }
		bool L_0 = ___value0;
		__this->set_updateSolvers_11(L_0);
		// set { updateSolvers = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m055EE49BB97074834FEA3D3F6C8354AD1C635EB7 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m06E6115A0D2204D51F2907A943EF72568FD268A6 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_12(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_mB83F84F6F629D89DD97F8286E661FD39D5FBA465 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m45D5466407FCE1C1650E106E1FF5337D91A1F6DA (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m4847E97B0CE5A56F1CF2E7E339841DB115869AB2 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m26DC00B22EB257FA88954E7B9D22CD12DFE6C878 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_14(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
extern "C" IL2CPP_METHOD_ATTR Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  SolverHandler_get_AltScale_mD05895C9187EB7CCAEC6957EB020D1D507B8851A (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m37181DAE3E31747DAC18D5CC24F2EB2D73F8DBD1 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
extern "C" IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mD1BE654F6B6727288FCDBE16E232E66C02258F82 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m8883863C7B8CCDB9B3CA5785CDA82CBA40E6F9F9 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_RequiresOffset()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_RequiresOffset_mF3D11F6870E16FD35BBE4523E2E0A8FD6ABCD457 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// private bool RequiresOffset => AdditionalOffset.sqrMagnitude != 0 || AdditionalRotation.sqrMagnitude != 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = SolverHandler_get_AdditionalOffset_mC0A5FCA0B4A8CF29D02EAE7C14314565C9828A52(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SolverHandler_get_AdditionalRotation_m4086995848CC11A39176517C977F1E5EEEE3A135(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		return (bool)((((int32_t)((((float)L_3) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m7C8FA41412B7720154FB5EFCB468B5E1D2BF7818 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_HandJointService_m7C8FA41412B7720154FB5EFCB468B5E1D2BF7818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// private IMixedRealityHandJointService HandJointService => handJointService ?? (handJointService = MixedRealityToolkit.Instance.GetService<IMixedRealityHandJointService>());
		RuntimeObject* L_0 = __this->get_handJointService_20();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var);
		MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * L_2 = MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD(/*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = MixedRealityToolkit_GetService_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_mF1F5525FE530580E425851294D2F95E17DD48752(L_2, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_mF1F5525FE530580E425851294D2F95E17DD48752_RuntimeMethod_var);
		RuntimeObject* L_4 = L_3;
		V_0 = L_4;
		__this->set_handJointService_20(L_4);
		RuntimeObject* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_001f:
	{
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Awake_m8B7CBDCA167BEFB6680A80CC761CA2A6B9AB5F17 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Awake_m8B7CBDCA167BEFB6680A80CC761CA2A6B9AB5F17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalScale = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		SolverHandler_set_GoalScale_m26DC00B22EB257FA88954E7B9D22CD12DFE6C878(__this, L_0, /*hidden argument*/NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3Smoothed__ctor_m9CC38B87CAD879D9A42E5362CC28C6A49F0C4BA5((&L_2), L_1, (0.1f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m37181DAE3E31747DAC18D5CC24F2EB2D73F8DBD1(__this, L_2, /*hidden argument*/NULL);
		// DeltaTime = Time.deltaTime;
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		SolverHandler_set_DeltaTime_m8883863C7B8CCDB9B3CA5785CDA82CBA40E6F9F9(__this, L_3, /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_18(L_4);
		// solvers.AddRange(GetComponents<Solver>());
		List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * L_5 = __this->get_solvers_17();
		SolverU5BU5D_t84FEBDC050683CBEB56E18C17678445B5BAB1D44* L_6 = Component_GetComponents_TisSolver_t79AE87802ED7C51B02E35D03DF67E057377E1011_mFED5BA4231B190C114EA3BEA24CB3C305CD87A9C(__this, /*hidden argument*/Component_GetComponents_TisSolver_t79AE87802ED7C51B02E35D03DF67E057377E1011_mFED5BA4231B190C114EA3BEA24CB3C305CD87A9C_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_AddRange_mEA2319825B896746CC9DCF34CFCFF99A9602BF44(L_5, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1_AddRange_mEA2319825B896746CC9DCF34CFCFF99A9602BF44_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Start_m64EB3EE35B8F90451B41365235AE9BBDD43FA33C (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Start_m64EB3EE35B8F90451B41365235AE9BBDD43FA33C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!transformTarget)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_transformTarget_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// AttachToNewTrackedObject();
		VirtActionInvoker0::Invoke(14 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Update_mF0F0E9E9AF91A5E3B2B933D8B59D42A4939B25A0 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_0 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_1 = __this->get_lastUpdateTime_18();
		SolverHandler_set_DeltaTime_m8883863C7B8CCDB9B3CA5785CDA82CBA40E6F9F9(__this, ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_18(L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_mA20098F7C1CEB2ADE2C2AD58114A5CCD3F514A51 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_LateUpdate_mA20098F7C1CEB2ADE2C2AD58114A5CCD3F514A51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * V_1 = NULL;
	{
		// if (UpdateSolvers)
		bool L_0 = SolverHandler_get_UpdateSolvers_m45F18855C527B94C7BEB08B582B04DA0DE9DD8B4(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// for (int i = 0; i < solvers.Count; ++i)
		V_0 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		// Solver solver = solvers[i];
		List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * L_1 = __this->get_solvers_17();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * L_3 = List_1_get_Item_mB96E69621C240E0827568F2007C2FB8A6477FA3F(L_1, L_2, /*hidden argument*/List_1_get_Item_mB96E69621C240E0827568F2007C2FB8A6477FA3F_RuntimeMethod_var);
		V_1 = L_3;
		// if (solver.enabled)
		Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// solver.SolverUpdate();
		Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, L_6);
	}

IL_0027:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002b:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_8 = V_0;
		List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * L_9 = __this->get_solvers_17();
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m3C9FCB1273C303CC7E53935904D38EAC8E494A67(L_9, /*hidden argument*/List_1_get_Count_m3C9FCB1273C303CC7E53935904D38EAC8E494A67_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000c;
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_mA3C8BF206612C6051068B0DBECE8F9AD01AD173C (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnControllerFound()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_OnControllerFound_m94531DDA6C093DF2EC65ACAB04FBFAC6E548AE40 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_OnControllerFound_m94531DDA6C093DF2EC65ACAB04FBFAC6E548AE40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!transformTarget)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_transformTarget_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// TrackTransform(ControllerTransform);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ((ControllerFinder_t0351D20EBEEBB7E2C3774BA905C7BAEF3D491E3F *)__this)->get_ControllerTransform_5();
		SolverHandler_TrackTransform_mEA81D8C8C367753F4F7BF3EC5FF1FD4C8BE4F47E(__this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnControllerLost()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_OnControllerLost_m0B69BE8D00AEDC6B3E1B8D66334F94E8E6B137FE (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mB31FEAB6C2B34BED750A1AA44AE2FAD8D6A25245 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtActionInvoker0::Invoke(14 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_mBFD32DAB4CCD97B2E692DA9563EA2AC873B52066 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_DetachFromCurrentTrackedObject_mBFD32DAB4CCD97B2E692DA9563EA2AC873B52066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transformTarget = null;
		__this->set_transformTarget_10((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL);
		// if (transformWithOffset != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_transformWithOffset_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Destroy(transformWithOffset);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_transformWithOffset_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// transformWithOffset = null;
		__this->set_transformWithOffset_19((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_m741A5A64DDE08DFF1473475E2DB06292A2492649 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (TrackedObjectToReference)
		int32_t L_0 = SolverHandler_get_TrackedObjectToReference_m21CED24E43E745174EE1939DAA3797C38E6E33D7(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_005f;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// Handedness = Handedness.None;
		ControllerFinder_set_Handedness_mDFED4A63D6F9D2AFAC4368132B068ADF1BE5717A(__this, 0, /*hidden argument*/NULL);
		// TrackTransform(CameraCache.Main.transform);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		SolverHandler_TrackTransform_mEA81D8C8C367753F4F7BF3EC5FF1FD4C8BE4F47E(__this, L_3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003a:
	{
		// Handedness = Handedness.Left;
		ControllerFinder_set_Handedness_mDFED4A63D6F9D2AFAC4368132B068ADF1BE5717A(__this, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0042:
	{
		// Handedness = Handedness.Right;
		ControllerFinder_set_Handedness_mDFED4A63D6F9D2AFAC4368132B068ADF1BE5717A(__this, 2, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004a:
	{
		// Handedness = Handedness.None;
		ControllerFinder_set_Handedness_mDFED4A63D6F9D2AFAC4368132B068ADF1BE5717A(__this, 0, /*hidden argument*/NULL);
		// TrackTransform(RequestEnableHandJoint(Handedness.Left));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_RequestEnableHandJoint_m9D6EB39860A781E95F22F683E3E1A408A9963F35(__this, 1, /*hidden argument*/NULL);
		SolverHandler_TrackTransform_mEA81D8C8C367753F4F7BF3EC5FF1FD4C8BE4F47E(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_005f:
	{
		// Handedness = Handedness.None;
		ControllerFinder_set_Handedness_mDFED4A63D6F9D2AFAC4368132B068ADF1BE5717A(__this, 0, /*hidden argument*/NULL);
		// TrackTransform(RequestEnableHandJoint(Handedness.Right));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_RequestEnableHandJoint_m9D6EB39860A781E95F22F683E3E1A408A9963F35(__this, 2, /*hidden argument*/NULL);
		SolverHandler_TrackTransform_mEA81D8C8C367753F4F7BF3EC5FF1FD4C8BE4F47E(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mEA81D8C8C367753F4F7BF3EC5FF1FD4C8BE4F47E (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___newTrackedTransform0, const RuntimeMethod* method)
{
	SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * G_B2_0 = NULL;
	SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * G_B1_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B3_0 = NULL;
	SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * G_B3_1 = NULL;
	{
		// transformTarget = RequiresOffset ? MakeOffsetTransform(newTrackedTransform) : newTrackedTransform;
		bool L_0 = SolverHandler_get_RequiresOffset_mF3D11F6870E16FD35BBE4523E2E0A8FD6ABCD457(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___newTrackedTransform0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_000c:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___newTrackedTransform0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = SolverHandler_MakeOffsetTransform_m2AE87D91CE5A2F024829028B9DA3D301F76E891C(__this, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_transformTarget_10(G_B3_0);
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RequestEnableHandJoint(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_RequestEnableHandJoint_m9D6EB39860A781E95F22F683E3E1A408A9963F35 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_RequestEnableHandJoint_m9D6EB39860A781E95F22F683E3E1A408A9963F35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return HandJointService?.RequestJointTransform(trackedHandJoint, handedness);
		RuntimeObject* L_0 = SolverHandler_get_HandJointService_m7C8FA41412B7720154FB5EFCB468B5E1D2BF7818(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
	}

IL_000c:
	{
		int32_t L_2 = __this->get_trackedHandJoint_7();
		uint8_t L_3 = ___handedness0;
		NullCheck(G_B2_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
		return L_4;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::MakeOffsetTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_MakeOffsetTransform_m2AE87D91CE5A2F024829028B9DA3D301F76E891C (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parentTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_MakeOffsetTransform_m2AE87D91CE5A2F024829028B9DA3D301F76E891C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (transformWithOffset == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_transformWithOffset_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// transformWithOffset = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_2, /*hidden argument*/NULL);
		__this->set_transformWithOffset_19(L_2);
		// transformWithOffset.transform.parent = parentTransform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_transformWithOffset_19();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___parentTransform0;
		NullCheck(L_4);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// transformWithOffset.transform.localPosition = Vector3.Scale(AdditionalOffset, transformWithOffset.transform.localScale);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_transformWithOffset_19();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = SolverHandler_get_AdditionalOffset_mC0A5FCA0B4A8CF29D02EAE7C14314565C9828A52(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_transformWithOffset_19();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_7, L_12, /*hidden argument*/NULL);
		// transformWithOffset.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_transformWithOffset_19();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = SolverHandler_get_AdditionalRotation_m4086995848CC11A39176517C977F1E5EEEE3A135(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_14, L_16, /*hidden argument*/NULL);
		// transformWithOffset.name = string.Format("{0} on {1} with offset {2}, {3}", gameObject.name, TrackedObjectToReference.ToString(), AdditionalOffset, AdditionalRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_transformWithOffset_19();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_19;
		int32_t L_23 = SolverHandler_get_TrackedObjectToReference_m21CED24E43E745174EE1939DAA3797C38E6E33D7(__this, /*hidden argument*/NULL);
		V_0 = L_23;
		RuntimeObject * L_24 = Box(TrackedObjectType_tD9B3AD7CFF77DA9C8E5C17D3B17981BC948F66AC_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		V_0 = *(int32_t*)UnBox(L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = SolverHandler_get_AdditionalOffset_mC0A5FCA0B4A8CF29D02EAE7C14314565C9828A52(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = L_27;
		RuntimeObject * L_29 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_29);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = L_26;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = SolverHandler_get_AdditionalRotation_m4086995848CC11A39176517C977F1E5EEEE3A135(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = L_31;
		RuntimeObject * L_33 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		String_t* L_34 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral876EFE77BBB1116A9EB37236F7EBA6789027A9F6, L_30, /*hidden argument*/NULL);
		NullCheck(L_17);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_17, L_34, /*hidden argument*/NULL);
		// return transformWithOffset.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = __this->get_transformWithOffset_19();
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_35, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler__ctor_m48D3680D579A137035102B51F873915C580D8007 (SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler__ctor_m48D3680D579A137035102B51F873915C580D8007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TrackedHandJoint trackedHandJoint = TrackedHandJoint.Palm;
		__this->set_trackedHandJoint_7(2);
		// private bool updateSolvers = true;
		__this->set_updateSolvers_11((bool)1);
		// protected readonly List<Solver> solvers = new List<Solver>();
		List_1_t03B34F7709599434AEB744E8135E739798FC6B4F * L_0 = (List_1_t03B34F7709599434AEB744E8135E739798FC6B4F *)il2cpp_codegen_object_new(List_1_t03B34F7709599434AEB744E8135E739798FC6B4F_il2cpp_TypeInfo_var);
		List_1__ctor_m932D030551FD1CF8EE717D69C9EB18EE91EC129A(L_0, /*hidden argument*/List_1__ctor_m932D030551FD1CF8EE717D69C9EB18EE91EC129A_RuntimeMethod_var);
		__this->set_solvers_17(L_0);
		ControllerFinder__ctor_m1826BF754FE127E816A0E612F997916D2BECB853(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OnSurface()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m0D6138B884E76410AE025404D4F07FD9BF23EC56 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_33();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m63AD3A3A545957F27E4921E210577B394ECD7FB2 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_33(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_mD7CD2E0E6F9DD5042C75449B8DFA195BF2AEB1A2 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastOrigin_mD7CD2E0E6F9DD5042C75449B8DFA195BF2AEB1A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_0 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_mBD183548533193F60CD564D1870C898161785A42 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastEndPoint_mBD183548533193F60CD564D1870C898161785A42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		SurfaceMagnetism_get_RaycastOrigin_mD7CD2E0E6F9DD5042C75449B8DFA195BF2AEB1A2(__this, /*hidden argument*/NULL);
		// Vector3 endPoint = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (raycastDirection)
		int32_t L_1 = __this->get_raycastDirection_29();
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_006a;
	}

IL_0028:
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_3 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_6 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// break;
		goto IL_006a;
	}

IL_0050:
	{
		// endPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_006a;
	}

IL_005e:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_12 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = SolverHandler_get_GoalPosition_m055EE49BB97074834FEA3D3F6C8354AD1C635EB7(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_006a:
	{
		// return endPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		return L_14;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastDirection_m6D485097AE52AE4DEB900393379C85EB8A3CDD84 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastDirection_m6D485097AE52AE4DEB900393379C85EB8A3CDD84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Vector3 direction = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (raycastDirection == RaycastDirectionEnum.CameraFacing)
		int32_t L_1 = __this->get_raycastDirection_29();
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_5 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_mDCD4E12FB2CA66DE59FD9BAAA0B928F4FD503A4E(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// }
		goto IL_004e;
	}

IL_0034:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = SurfaceMagnetism_get_RaycastEndPoint_mBD183548533193F60CD564D1870C898161785A42(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = SurfaceMagnetism_get_RaycastOrigin_mD7CD2E0E6F9DD5042C75449B8DFA195BF2AEB1A2(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_004e:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		return L_12;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m185DA70C60473294CE8198AE1B28213E5442893F (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_28();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_27();
		return L_1;
	}

IL_000f:
	{
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_2 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6  L_3 = SolverHandler_get_AltScale_mD05895C9187EB7CCAEC6957EB020D1D507B8851A(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3Smoothed_get_Current_m109F0BE06195F755F5F4BDD5D16448D49F015BE5((Vector3Smoothed_tF6A4C81C95F58D5620F05043EF2DECB78FC988C6 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_OnValidate_mEC131FA49F4B71FF74F2BC2EABD5963774402F2F (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_OnValidate_mEC131FA49F4B71FF74F2BC2EABD5963774402F2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnValidate();
		Solver_OnValidate_mB9A6BB7C5D3806BBFFCBF871BD990B8C0B071A33(__this, /*hidden argument*/NULL);
		// if (raycastMode == SceneQueryType.BoxRaycast)
		int32_t L_0 = __this->get_raycastMode_22();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		// boxCollider = gameObject.GetComponent<BoxCollider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_2 = GameObject_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_mC89D6D0649D82CB969262590D25615C13052FF55(L_1, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_mC89D6D0649D82CB969262590D25615C13052FF55_RuntimeMethod_var);
		__this->set_boxCollider_34(L_2);
		// if (boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_3 = __this->get_boxCollider_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError($"Box raycast mode requires a BoxCollider, but none was found on {name}! Please add one.");
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral337DC22AD1BCD14C4699A0C75B3F0C5B196A21EA, L_5, _stringLiteral02793D7F946903A7127623EBFA011A4C42E41FFC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_6, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::Start()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_Start_m05A084A84756A5462C94A59D7635CF1B765840F8 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_Start_m05A084A84756A5462C94A59D7635CF1B765840F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (raycastMode == SceneQueryType.BoxRaycast && boxCollider == null)
		int32_t L_0 = __this->get_raycastMode_22();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0057;
		}
	}
	{
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_1 = __this->get_boxCollider_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// boxCollider = gameObject.GetComponent<BoxCollider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_4 = GameObject_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_mC89D6D0649D82CB969262590D25615C13052FF55(L_3, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_mC89D6D0649D82CB969262590D25615C13052FF55_RuntimeMethod_var);
		__this->set_boxCollider_34(L_4);
		// if (boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_5 = __this->get_boxCollider_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.LogError($"Box raycast mode requires a BoxCollider, but none was found on {name}! Defaulting to Simple raycast mode.");
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral337DC22AD1BCD14C4699A0C75B3F0C5B196A21EA, L_7, _stringLiteral9BD8A27C841628004562B3CF4F16D6E590E106C3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_8, /*hidden argument*/NULL);
		// raycastMode = SceneQueryType.SimpleRaycast;
		__this->set_raycastMode_22(0);
	}

IL_0057:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Vector3 newDirection = -surfaceNormal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___surfaceNormal1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (IsNormalVertical(newDirection))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		bool L_3 = SurfaceMagnetism_IsNormalVertical_m84F3A5E0B5E81E8964FB3DE1D0136D04CD25802E(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// newDirection = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___direction0;
		V_0 = L_4;
	}

IL_0011:
	{
		// newDirection.y = 0;
		(&V_0)->set_y_3((0.0f));
		// var surfaceRot = Quaternion.LookRotation(newDirection, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// switch (orientationMode)
		int32_t L_8 = __this->get_orientationMode_30();
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0048:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_10 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = SolverHandler_get_GoalRotation_mB83F84F6F629D89DD97F8286E661FD39D5FBA465(L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0054:
	{
		// return surfaceRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_1;
		return L_12;
	}

IL_0056:
	{
		// return Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___surfaceNormal1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0067:
	{
		// return Quaternion.Slerp(SolverHandler.GoalRotation, surfaceRot, orientationBlend);
		SolverHandler_tB266A703760FDE8F574DAB22078E58FBD4F181FE * L_17 = ((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = SolverHandler_get_GoalRotation_mB83F84F6F629D89DD97F8286E661FD39D5FBA465(L_17, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_1;
		float L_20 = __this->get_orientationBlend_31();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_007f:
	{
		// return Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		return L_22;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m84F3A5E0B5E81E8964FB3DE1D0136D04CD25802E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_IsNormalVertical_m84F3A5E0B5E81E8964FB3DE1D0136D04CD25802E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.01f)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_mCF647DEEA98D9343307977F1AA5DF0B3770DE21E (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SolverUpdate_mCF647DEEA98D9343307977F1AA5DF0B3770DE21E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// GoalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m2CF2F7B4E2C341A65E4246DF24E91B69FA826795(__this, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_0);
		// GoalRotation = WorkingRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_WorkingRotation_m8359301C1549FC5F9C075102882D31C759BE71D0(__this, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalRotation_14(L_1);
		// var rayStep = new RayStep(RaycastOrigin, RaycastEndPoint);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SurfaceMagnetism_get_RaycastOrigin_mD7CD2E0E6F9DD5042C75449B8DFA195BF2AEB1A2(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SurfaceMagnetism_get_RaycastEndPoint_mBD183548533193F60CD564D1870C898161785A42(__this, /*hidden argument*/NULL);
		RayStep__ctor_m21DEB0B3953B9DCFD8BE3666BC28050C9954354D((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&V_0), L_2, L_3, /*hidden argument*/NULL);
		// if (rayStep.Direction == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_6 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// return;
		return;
	}

IL_003f:
	{
		// switch (raycastMode)
		int32_t L_7 = __this->get_raycastMode_22();
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (L_8)
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_005a:
	{
		// SimpleRaycastStepUpdate(rayStep);
		RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  L_9 = V_0;
		SurfaceMagnetism_SimpleRaycastStepUpdate_m9984BF80D1666557B6EB152739FC628A325DBC8F(__this, L_9, /*hidden argument*/NULL);
		// break;
		goto IL_0073;
	}

IL_0063:
	{
		// BoxRaycastStepUpdate(rayStep);
		RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  L_10 = V_0;
		SurfaceMagnetism_BoxRaycastStepUpdate_m9A32EAF452D27FD75D1EE75DA62D45A2554F9E25(__this, L_10, /*hidden argument*/NULL);
		// break;
		goto IL_0073;
	}

IL_006c:
	{
		// SphereRaycastStepUpdate(rayStep);
		RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  L_11 = V_0;
		SurfaceMagnetism_SphereRaycastStepUpdate_m98B2448E8C8E29B60F3BA436D74EF1344D207397(__this, L_11, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m37637FDAE4188DE06EB2436E8647CDA3E853BDFA(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m703152C16912206024090C82BF1EFC998BE51D3F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m9984BF80D1666557B6EB152739FC628A325DBC8F (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SimpleRaycastStepUpdate_m9984BF80D1666557B6EB152739FC628A325DBC8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// isHit = MixedRealityRaycaster.RaycastSimplePhysicsStep(rayStep, maxDistance, magneticSurfaces, out result);
		RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  L_0 = ___rayStep0;
		float L_1 = __this->get_maxDistance_18();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_2 = __this->get_magneticSurfaces_17();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t6A866535743148643BB004E077F92EE4B44D731F_il2cpp_TypeInfo_var);
		bool L_3 = MixedRealityRaycaster_RaycastSimplePhysicsStep_mCC39199064A912248B1ACE94E24C15A6309544AC(L_0, L_1, L_2, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		// OnSurface = isHit;
		bool L_4 = V_0;
		SurfaceMagnetism_set_OnSurface_m63AD3A3A545957F27E4921E210577B394ECD7FB2(__this, L_4, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RayStep_get_Origin_m89F0776340554938DA4A6F12DE2ECD858B6CDA32((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// float length = hitDelta.magnitude;
		float L_8 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		// if (length < closeDistance)
		float L_9 = __this->get_closeDistance_19();
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0064;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closeDistance;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RayStep_get_Origin_m89F0776340554938DA4A6F12DE2ECD858B6CDA32((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		float L_12 = __this->get_closeDistance_19();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_11, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_13, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_14, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// if (isHit)
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_00bc;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_17 = __this->get_surfaceNormalOffset_20();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_17, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_16, L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_surfaceRayOffset_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_23, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_24);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51(__this, L_25, L_26, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalRotation_14(L_27);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m98B2448E8C8E29B60F3BA436D74EF1344D207397 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SphereRaycastStepUpdate_m98B2448E8C8E29B60F3BA436D74EF1344D207397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float G_B3_0 = 0.0f;
	{
		// float scaleOverride = ScaleOverride;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m185DA70C60473294CE8198AE1B28213E5442893F(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		// float size = scaleOverride > 0 ? scaleOverride : transform.lossyScale.x * sphereSize;
		float L_1 = V_2;
		if ((((float)L_1) > ((float)(0.0f))))
		{
			goto IL_0028;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_sphereSize_26();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
		goto IL_0029;
	}

IL_0028:
	{
		float L_6 = V_2;
		G_B3_0 = L_6;
	}

IL_0029:
	{
		V_3 = G_B3_0;
		// isHit = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxDistance, magneticSurfaces, out result);
		RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  L_7 = ___rayStep0;
		float L_8 = V_3;
		float L_9 = __this->get_maxDistance_18();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_10 = __this->get_magneticSurfaces_17();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t6A866535743148643BB004E077F92EE4B44D731F_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_mABCD011EFBC5DF659504123A5522143FBBD78E41(L_7, L_8, L_9, L_10, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		// OnSurface = isHit;
		bool L_12 = V_0;
		SurfaceMagnetism_set_OnSurface_m63AD3A3A545957F27E4921E210577B394ECD7FB2(__this, L_12, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RayStep_get_Origin_m89F0776340554938DA4A6F12DE2ECD858B6CDA32((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		// float length = hitDelta.magnitude;
		float L_16 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		// if (length < closeDistance)
		float L_17 = __this->get_closeDistance_19();
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0090;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closeDistance;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = RayStep_get_Origin_m89F0776340554938DA4A6F12DE2ECD858B6CDA32((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		float L_20 = __this->get_closeDistance_19();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_21, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_22, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// if (isHit)
		bool L_23 = V_0;
		if (!L_23)
		{
			goto IL_00e8;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_25 = __this->get_surfaceNormalOffset_20();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_27, /*hidden argument*/NULL);
		float L_29 = __this->get_surfaceRayOffset_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_29, L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_28, L_31, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_32);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51(__this, L_33, L_34, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalRotation_14(L_35);
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m9A32EAF452D27FD75D1EE75DA62D45A2554F9E25 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_BoxRaycastStepUpdate_m9A32EAF452D27FD75D1EE75DA62D45A2554F9E25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_6 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_7 = NULL;
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	{
		// Vector3 scale = transform.lossyScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// float scaleOverride = ScaleOverride;
		float L_2 = SurfaceMagnetism_get_ScaleOverride_m185DA70C60473294CE8198AE1B28213E5442893F(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (scaleOverride > 0)
		float L_3 = V_1;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// scale = scale.normalized * scaleOverride;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		float L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0029:
	{
		// Quaternion orientation = orientationMode == OrientModeEnum.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_7 = __this->get_orientationMode_30();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51(__this, L_8, L_9, /*hidden argument*/NULL);
		G_B5_0 = L_10;
		goto IL_0056;
	}

IL_0045:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_11, L_12, /*hidden argument*/NULL);
		G_B5_0 = L_13;
	}

IL_0056:
	{
		V_2 = G_B5_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_17 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// if (boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_18 = __this->get_boxCollider_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// boxCollider = GetComponent<BoxCollider>();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_20 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		__this->set_boxCollider_34(L_20);
	}

IL_007e:
	{
		// Vector3 extents = boxCollider.size;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_21 = __this->get_boxCollider_34();
		NullCheck(L_21);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, out positions, out normals, out hits))
		RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B  L_23 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_4;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_27 = V_3;
		float L_28 = __this->get_maxDistance_18();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_29 = __this->get_magneticSurfaces_17();
		int32_t L_30 = __this->get_boxRaysPerEdge_23();
		bool L_31 = __this->get_orthographicBoxCast_24();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t6A866535743148643BB004E077F92EE4B44D731F_il2cpp_TypeInfo_var);
		bool L_32 = MixedRealityRaycaster_RaycastBoxPhysicsStep_mD64AF55E8794F756B4F628FFC0469CF33A3D90D1(L_23, L_24, L_26, L_27, L_28, L_29, L_30, L_31, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_5), (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_6), (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040**)(&V_7), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_022a;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions, normals, hits, boxCollider.size.x, maximumNormalVariance, false, orientationMode == OrientModeEnum.None, out plane, out distance);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = RayStep_get_Origin_m89F0776340554938DA4A6F12DE2ECD858B6CDA32((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_35 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_36 = V_6;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_37 = V_7;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_38 = __this->get_boxCollider_34();
		NullCheck(L_38);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_x_2();
		float L_41 = __this->get_maximumNormalVariance_25();
		int32_t L_42 = __this->get_orientationMode_30();
		SurfaceMagnetism_FindPlacementPlane_m4CEE4578BE4A74F21E3B813514A402854BB3DD03(__this, L_33, L_34, L_35, L_36, L_37, L_40, L_41, (bool)0, (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0), (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), (float*)(&V_9), /*hidden argument*/NULL);
		// float verticalCorrectionOffset = 0;
		V_10 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		bool L_44 = SurfaceMagnetism_IsNormalVertical_m84F3A5E0B5E81E8964FB3DE1D0136D04CD25802E(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0182;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		float L_46 = L_45.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_47 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_46, (0.0f), /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0182;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_4;
		float L_49 = L_48.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_50), (0.0f), ((float)il2cpp_codegen_multiply((float)L_49, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_3), L_50, /*hidden argument*/NULL);
		V_13 = L_51;
		float L_52 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_13), /*hidden argument*/NULL);
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		float L_55 = L_54.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_53, L_55, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_52, L_56, /*hidden argument*/NULL);
		V_12 = L_57;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_58 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_12), /*hidden argument*/NULL);
		V_10 = ((-L_58));
	}

IL_0182:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_4;
		float L_60 = L_59.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61;
		memset(&L_61, 0, sizeof(L_61));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_61), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_60, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_3), L_61, /*hidden argument*/NULL);
		V_13 = L_62;
		float L_63 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_13), /*hidden argument*/NULL);
		V_11 = L_63;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closeDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = RayStep_get_Origin_m89F0776340554938DA4A6F12DE2ECD858B6CDA32((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		float L_66 = __this->get_closeDistance_19();
		float L_67 = V_9;
		float L_68 = __this->get_surfaceRayOffset_21();
		float L_69 = V_11;
		float L_70 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_71 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_66, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_67, (float)L_68)), (float)L_69)), (float)L_70)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_65, L_71, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_64, L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		float L_75 = V_11;
		float L_76 = __this->get_surfaceNormalOffset_20();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_77 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_74, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_75)), (float)L_76)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_73, L_77, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalPosition_13(L_78);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = RayStep_get_Direction_m3215B863CDBA199001CD5526EE68F13DD51B317B((RayStep_t8941E7B4377DF525FFDB64F2734B74B5CEBA1C1B *)(&___rayStep0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_81 = SurfaceMagnetism_CalculateMagnetismOrientation_m17CDE003B291914F2ADED460D67708C261336A51(__this, L_79, L_80, /*hidden argument*/NULL);
		((Solver_t79AE87802ED7C51B02E35D03DF67E057377E1011 *)__this)->set_GoalRotation_14(L_81);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_m63AD3A3A545957F27E4921E210577B394ECD7FB2(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_022a:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_m63AD3A3A545957F27E4921E210577B394ECD7FB2(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.PlaneU26,System.SingleU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m4CEE4578BE4A74F21E3B813514A402854BB3DD03 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_FindPlacementPlane_m4CEE4578BE4A74F21E3B813514A402854BB3DD03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_11;
	memset(&V_11, 0, sizeof(V_11));
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_15;
	memset(&V_15, 0, sizeof(V_15));
	int32_t V_16 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_17;
	memset(&V_17, 0, sizeof(V_17));
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	float V_20 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_21;
	memset(&V_21, 0, sizeof(V_21));
	float V_22 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B48_0;
	memset(&G_B48_0, 0, sizeof(G_B48_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B47_0;
	memset(&G_B47_0, 0, sizeof(G_B47_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B49_0;
	memset(&G_B49_0, 0, sizeof(G_B49_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B49_1;
	memset(&G_B49_1, 0, sizeof(G_B49_1));
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		// Vector3 originalDirection = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->set_y_3((0.0f));
		// direction = direction.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_3;
	}

IL_001f:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_4 = ___closestDistance10;
		*((float*)L_4) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPoint = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_5;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_12 = 0;
		goto IL_0090;
	}

IL_003e:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_6 = ___hits4;
		int32_t L_7 = V_12;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = ___positions2;
		int32_t L_12 = V_12;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		float L_17 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_10, L_16, /*hidden argument*/NULL);
		V_13 = L_17;
		// if (distance < closestDistance)
		float L_18 = V_13;
		float* L_19 = ___closestDistance10;
		float L_20 = *((float*)L_19);
		if ((!(((float)L_18) < ((float)L_20))))
		{
			goto IL_006a;
		}
	}
	{
		// closestPoint = hitIndex;
		int32_t L_21 = V_12;
		V_3 = L_21;
		// closestDistance = distance;
		float* L_22 = ___closestDistance10;
		float L_23 = V_13;
		*((float*)L_22) = (float)L_23;
	}

IL_006a:
	{
		// if (distance > farthestDistance)
		float L_24 = V_13;
		float L_25 = V_4;
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_0074;
		}
	}
	{
		// farthestDistance = distance;
		float L_26 = V_13;
		V_4 = L_26;
	}

IL_0074:
	{
		// averageNormal += normals[hitIndex];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = ___normals3;
		int32_t L_29 = V_12;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		// ++numHits;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008a:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_34 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0090:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_35 = V_12;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_003e;
		}
	}
	{
		// averageNormal /= numHits;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_5;
		int32_t L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_37, (((float)((float)L_38))), /*hidden argument*/NULL);
		V_5 = L_39;
		// float variance = 0;
		V_6 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_14 = 0;
		goto IL_00d7;
	}

IL_00ac:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_40 = ___hits4;
		int32_t L_41 = V_14;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		uint8_t L_43 = (uint8_t)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if (!L_43)
		{
			goto IL_00d1;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_44 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_45 = ___normals3;
		int32_t L_46 = V_14;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_48, L_49, /*hidden argument*/NULL);
		V_15 = L_50;
		float L_51 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_15), /*hidden argument*/NULL);
		V_6 = ((float)il2cpp_codegen_add((float)L_44, (float)L_51));
	}

IL_00d1:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_52 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00d7:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_53 = V_14;
		int32_t L_54 = V_0;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00ac;
		}
	}
	{
		// variance /= numHits;
		float L_55 = V_6;
		int32_t L_56 = V_2;
		V_6 = ((float)((float)L_55/(float)(((float)((float)L_56)))));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_57 = V_6;
		float L_58 = ___maxNormalVariance6;
		if ((((float)L_57) > ((float)L_58)))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_59 = V_2;
		int32_t L_60 = V_0;
		if ((!(((float)(((float)((float)L_59)))) < ((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_60))), (float)(0.25f)))))))
		{
			goto IL_010f;
		}
	}

IL_00f5:
	{
		// plane = new Plane(-direction, positions[closestPoint]);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_61 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_62, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_64 = ___positions2;
		int32_t L_65 = V_3;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_68;
		memset(&L_68, 0, sizeof(L_68));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_68), L_63, L_67, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_61 = L_68;
		// return;
		return;
	}

IL_010f:
	{
		// var lowAngle = float.PositiveInfinity;
		V_7 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_8 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_9 = (-1);
		// int highIndex = -1;
		V_10 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_16 = 0;
		goto IL_0194;
	}

IL_0128:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPoint)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_69 = ___hits4;
		int32_t L_70 = V_16;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint8_t L_72 = (uint8_t)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if (!L_72)
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_73 = V_16;
		int32_t L_74 = V_3;
		if ((((int32_t)L_73) == ((int32_t)L_74)))
		{
			goto IL_018e;
		}
	}
	{
		// Vector3 difference = positions[hitIndex] - positions[closestPoint];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_75 = ___positions2;
		int32_t L_76 = V_16;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_79 = ___positions2;
		int32_t L_80 = V_3;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_78, L_82, /*hidden argument*/NULL);
		V_17 = L_83;
		// if (constrainVertical)
		bool L_84 = ___constrainVertical7;
		if (!L_84)
		{
			goto IL_016f;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_17)->set_y_3((0.0f));
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_17), /*hidden argument*/NULL);
		// if (difference == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_87 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_85, L_86, /*hidden argument*/NULL);
		if (L_87)
		{
			goto IL_018e;
		}
	}

IL_016f:
	{
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_17), /*hidden argument*/NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_90 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_88, L_89, /*hidden argument*/NULL);
		V_18 = L_90;
		// if (angle < lowAngle)
		float L_91 = V_18;
		float L_92 = V_7;
		if ((!(((float)L_91) < ((float)L_92))))
		{
			goto IL_018e;
		}
	}
	{
		// lowAngle = angle;
		float L_93 = V_18;
		V_7 = L_93;
		// lowIndex = hitIndex;
		int32_t L_94 = V_16;
		V_9 = L_94;
	}

IL_018e:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_95 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_0194:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_96 = V_16;
		int32_t L_97 = V_0;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0128;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_98 = ___constrainVertical7;
		if (L_98)
		{
			goto IL_0275;
		}
	}
	{
		int32_t L_99 = V_9;
		if ((((int32_t)L_99) == ((int32_t)(-1))))
		{
			goto IL_0275;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_19 = 0;
		goto IL_026d;
	}

IL_01b0:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPoint || hitIndex == lowIndex)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_100 = ___hits4;
		int32_t L_101 = V_19;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint8_t L_103 = (uint8_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		if (!L_103)
		{
			goto IL_0267;
		}
	}
	{
		int32_t L_104 = V_19;
		int32_t L_105 = V_3;
		if ((((int32_t)L_104) == ((int32_t)L_105)))
		{
			goto IL_0267;
		}
	}
	{
		int32_t L_106 = V_19;
		int32_t L_107 = V_9;
		if ((((int32_t)L_106) == ((int32_t)L_107)))
		{
			goto IL_0267;
		}
	}
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - positions[closestPoint]).normalized, (positions[lowIndex] - positions[closestPoint]).normalized));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_108 = ___positions2;
		int32_t L_109 = V_19;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_112 = ___positions2;
		int32_t L_113 = V_3;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_116 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_111, L_115, /*hidden argument*/NULL);
		V_15 = L_116;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_15), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_118 = ___positions2;
		int32_t L_119 = V_9;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_122 = ___positions2;
		int32_t L_123 = V_3;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_121, L_125, /*hidden argument*/NULL);
		V_15 = L_126;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_15), /*hidden argument*/NULL);
		float L_128 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_117, L_127, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_129 = fabsf(L_128);
		// if (dot > MaxDot)
		if ((((float)L_129) > ((float)(0.97f))))
		{
			goto IL_0267;
		}
	}
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - positions[closestPoint], positions[hitIndex] - positions[closestPoint]).normalized));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_130 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_131 = ___positions2;
		int32_t L_132 = V_9;
		NullCheck(L_131);
		int32_t L_133 = L_132;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_135 = ___positions2;
		int32_t L_136 = V_3;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_134, L_138, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_140 = ___positions2;
		int32_t L_141 = V_19;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_144 = ___positions2;
		int32_t L_145 = V_3;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_148 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_143, L_147, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_149 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_139, L_148, /*hidden argument*/NULL);
		V_15 = L_149;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_15), /*hidden argument*/NULL);
		float L_151 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_130, L_150, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_152 = fabsf(L_151);
		V_20 = L_152;
		// if (nextAngle > highAngle)
		float L_153 = V_20;
		float L_154 = V_8;
		if ((!(((float)L_153) > ((float)L_154))))
		{
			goto IL_0267;
		}
	}
	{
		// highAngle = nextAngle;
		float L_155 = V_20;
		V_8 = L_155;
		// highIndex = hitIndex;
		int32_t L_156 = V_19;
		V_10 = L_156;
	}

IL_0267:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_157 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)1));
	}

IL_026d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_158 = V_19;
		int32_t L_159 = V_0;
		if ((((int32_t)L_158) < ((int32_t)L_159)))
		{
			goto IL_01b0;
		}
	}

IL_0275:
	{
		// if (lowIndex != -1)
		int32_t L_160 = V_9;
		if ((((int32_t)L_160) == ((int32_t)(-1))))
		{
			goto IL_0374;
		}
	}
	{
		// if (debugEnabled)
		bool L_161 = __this->get_debugEnabled_32();
		if (!L_161)
		{
			goto IL_029e;
		}
	}
	{
		// Debug.DrawLine(positions[closestPoint], positions[lowIndex], Color.red);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_162 = ___positions2;
		int32_t L_163 = V_3;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_166 = ___positions2;
		int32_t L_167 = V_9;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_170 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_165, L_169, L_170, /*hidden argument*/NULL);
	}

IL_029e:
	{
		// if (highIndex != -1)
		int32_t L_171 = V_10;
		if ((((int32_t)L_171) == ((int32_t)(-1))))
		{
			goto IL_02fe;
		}
	}
	{
		// if (debugEnabled)
		bool L_172 = __this->get_debugEnabled_32();
		if (!L_172)
		{
			goto IL_02c4;
		}
	}
	{
		// Debug.DrawLine(positions[closestPoint], positions[highIndex], Color.green);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_173 = ___positions2;
		int32_t L_174 = V_3;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_177 = ___positions2;
		int32_t L_178 = V_10;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_181 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_176, L_180, L_181, /*hidden argument*/NULL);
	}

IL_02c4:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - positions[closestPoint], positions[highIndex] - positions[closestPoint]).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_182 = ___positions2;
		int32_t L_183 = V_9;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_186 = ___positions2;
		int32_t L_187 = V_3;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_190 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_185, L_189, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_191 = ___positions2;
		int32_t L_192 = V_10;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_195 = ___positions2;
		int32_t L_196 = V_3;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_199 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_194, L_198, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_200 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_190, L_199, /*hidden argument*/NULL);
		V_15 = L_200;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_201 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_15), /*hidden argument*/NULL);
		V_11 = L_201;
		// }
		goto IL_034b;
	}

IL_02fe:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - positions[closestPoint], direction);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_202 = ___positions2;
		int32_t L_203 = V_9;
		NullCheck(L_202);
		int32_t L_204 = L_203;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_205 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_206 = ___positions2;
		int32_t L_207 = V_3;
		NullCheck(L_206);
		int32_t L_208 = L_207;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_210 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_205, L_209, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_211 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_212 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_210, L_211, /*hidden argument*/NULL);
		V_21 = L_212;
		// placementNormal = Vector3.Cross(positions[lowIndex] - positions[closestPoint], constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_213 = ___positions2;
		int32_t L_214 = V_9;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_217 = ___positions2;
		int32_t L_218 = V_3;
		NullCheck(L_217);
		int32_t L_219 = L_218;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_220 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_221 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_216, L_220, /*hidden argument*/NULL);
		bool L_222 = ___constrainVertical7;
		G_B47_0 = L_221;
		if (L_222)
		{
			G_B48_0 = L_221;
			goto IL_0336;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_223 = V_21;
		G_B49_0 = L_223;
		G_B49_1 = G_B47_0;
		goto IL_033b;
	}

IL_0336:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_224 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B49_0 = L_224;
		G_B49_1 = G_B48_0;
	}

IL_033b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_225 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(G_B49_1, G_B49_0, /*hidden argument*/NULL);
		V_15 = L_225;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_226 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_15), /*hidden argument*/NULL);
		V_11 = L_226;
	}

IL_034b:
	{
		// if (debugEnabled)
		bool L_227 = __this->get_debugEnabled_32();
		if (!L_227)
		{
			goto IL_0381;
		}
	}
	{
		// Debug.DrawLine(positions[closestPoint], positions[closestPoint] + placementNormal, Color.blue);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_228 = ___positions2;
		int32_t L_229 = V_3;
		NullCheck(L_228);
		int32_t L_230 = L_229;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_231 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_232 = ___positions2;
		int32_t L_233 = V_3;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_236 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_237 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_235, L_236, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_238 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_231, L_237, L_238, /*hidden argument*/NULL);
		// }
		goto IL_0381;
	}

IL_0374:
	{
		// placementNormal = direction * -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_239 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_240 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_239, (-1.0f), /*hidden argument*/NULL);
		V_11 = L_240;
	}

IL_0381:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_241 = V_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_242 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_243 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_241, L_242, /*hidden argument*/NULL);
		if ((!(((float)L_243) > ((float)(0.0f)))))
		{
			goto IL_039e;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_244 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_245 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_244, (-1.0f), /*hidden argument*/NULL);
		V_11 = L_245;
	}

IL_039e:
	{
		// plane = new Plane(placementNormal, positions[closestPoint]);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_246 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_247 = V_11;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_248 = ___positions2;
		int32_t L_249 = V_3;
		NullCheck(L_248);
		int32_t L_250 = L_249;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_251 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_252;
		memset(&L_252, 0, sizeof(L_252));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_252), L_247, L_251, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_246 = L_252;
		// if (debugEnabled)
		bool L_253 = __this->get_debugEnabled_32();
		if (!L_253)
		{
			goto IL_03ce;
		}
	}
	{
		// Debug.DrawRay(positions[closestPoint], placementNormal, Color.cyan);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_254 = ___positions2;
		int32_t L_255 = V_3;
		NullCheck(L_254);
		int32_t L_256 = L_255;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_258 = V_11;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_259 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_257, L_258, L_259, /*hidden argument*/NULL);
	}

IL_03ce:
	{
		// if (!useClosestDistance && closestPoint >= 0)
		bool L_260 = ___useClosestDistance8;
		if (L_260)
		{
			goto IL_0419;
		}
	}
	{
		int32_t L_261 = V_3;
		if ((((int32_t)L_261) < ((int32_t)0)))
		{
			goto IL_0419;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_262 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_263 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_264 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_265;
		memset(&L_265, 0, sizeof(L_265));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_265), L_263, L_264, /*hidden argument*/NULL);
		bool L_266 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_262, L_265, (float*)(&V_22), /*hidden argument*/NULL);
		if (L_266)
		{
			goto IL_03f6;
		}
	}
	{
		bool L_267 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_22), (0.0f), /*hidden argument*/NULL);
		if (L_267)
		{
			goto IL_040f;
		}
	}

IL_03f6:
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_268 = ___closestDistance10;
		float L_269 = V_22;
		float* L_270 = ___closestDistance10;
		float L_271 = *((float*)L_270);
		float L_272 = V_4;
		float L_273 = ___assetWidth5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_274 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_269, L_271, ((float)il2cpp_codegen_add((float)L_272, (float)((float)il2cpp_codegen_multiply((float)L_273, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_268) = (float)L_274;
		// }
		return;
	}

IL_040f:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F, /*hidden argument*/NULL);
	}

IL_0419:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_mED034D35A9BDCC63FC7AF2D88AFF11226183A1F3 (SurfaceMagnetism_t37A75E1089BCC708028AFC651CACFE62EADBB8E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism__ctor_mED034D35A9BDCC63FC7AF2D88AFF11226183A1F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_17(L_1);
		// private float maxDistance = 3.0f;
		__this->set_maxDistance_18((3.0f));
		// private float closeDistance = 0.5f;
		__this->set_closeDistance_19((0.5f));
		// private float surfaceNormalOffset = 0.5f;
		__this->set_surfaceNormalOffset_20((0.5f));
		// private int boxRaysPerEdge = 3;
		__this->set_boxRaysPerEdge_23(3);
		// private float maximumNormalVariance = 0.5f;
		__this->set_maximumNormalVariance_25((0.5f));
		// private float sphereSize = 1.0f;
		__this->set_sphereSize_26((1.0f));
		// private RaycastDirectionEnum raycastDirection = RaycastDirectionEnum.ToLinkedPosition;
		__this->set_raycastDirection_29(2);
		// private OrientModeEnum orientationMode = OrientModeEnum.Vertical;
		__this->set_orientationMode_30(1);
		// private float orientationBlend = 0.65f;
		__this->set_orientationBlend_31((0.65f));
		Solver__ctor_m45C1467BE22F4DD1541D08434DD5A046F1099CAC(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::ConfigureGrid(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_ConfigureGrid_m5BEF6A6301238D961AA971CB01462DAF362E7BF2 (TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5 * __this, int32_t ___columns0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tileSize1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___gutters2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___layouDirection3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition4, bool ___centered5, const RuntimeMethod* method)
{
	{
		// Columns = columns;
		int32_t L_0 = ___columns0;
		__this->set_Columns_4(L_0);
		// TileSize = tileSize;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___tileSize1;
		__this->set_TileSize_5(L_1);
		// Gutters = gutters;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___gutters2;
		__this->set_Gutters_6(L_2);
		// LayoutDireciton = layouDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___layouDirection3;
		__this->set_LayoutDireciton_7(L_3);
		// StartPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___startPosition4;
		__this->set_StartPosition_8(L_4);
		// Centered = centered;
		bool L_5 = ___centered5;
		__this->set_Centered_9(L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_OnValidate_mD13DB9761D1101712D56AB192506BACBDD7D896E (TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Start()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_Start_m6E54B5FC27ED9A8A4F2E08067CB7A558FDF3AF20 (TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TileGridObjectCollection_GetListPosition_m816B8467F9F7B22F190AA7038539374FE5F50955 (TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_GetListPosition_m816B8467F9F7B22F190AA7038539374FE5F50955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// int column = index % Columns;
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_Columns_4();
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		// int row = Columns > 0 ? Mathf.FloorToInt(index / Columns) : index;
		int32_t L_2 = __this->get_Columns_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___index0;
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0015:
	{
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		// Vector3 size = Vector3.Scale(TileSize + Gutters, LayoutDireciton);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Gutters_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float xPos = size.x * column;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		int32_t L_14 = V_0;
		// float yPos = size.y * row;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = L_15.get_y_3();
		int32_t L_17 = V_1;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(((float)((float)L_17)))));
		// float zPos = DepthCalculatedBy == GridDivisions.Rows ? size.z * row : size.z * column;
		int32_t L_18 = __this->get_DepthCalculatedBy_10();
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		if (!L_18)
		{
			G_B5_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
			goto IL_0067;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_z_4();
		int32_t L_21 = V_0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21)))));
		G_B6_1 = G_B4_0;
		goto IL_0070;
	}

IL_0067:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		int32_t L_24 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)L_24)))));
		G_B6_1 = G_B5_0;
	}

IL_0070:
	{
		V_4 = G_B6_0;
		// return new Vector3(xPos, yPos, zPos);
		float L_25 = V_3;
		float L_26 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_27), G_B6_1, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Update()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_Update_mA13B511BD3E489008189A9AAF6A8302102856C64 (TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_Update_mA13B511BD3E489008189A9AAF6A8302102856C64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if ((Application.isPlaying || !OnlyInEditMode) || editorUpdated)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->get_OnlyInEditMode_11();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = __this->get_editorUpdated_13();
		if (!L_2)
		{
			goto IL_00e9;
		}
	}

IL_001a:
	{
		// int childCount = transform.childCount;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (Centered)
		bool L_5 = __this->get_Centered_9();
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// offSet = GetListPosition(Mathf.CeilToInt(childCount / Columns) * Columns - 1) * -0.5f + Vector3.Scale(TileSize, LayoutDireciton) * -0.5f;
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_8 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B((((float)((float)((int32_t)((int32_t)L_6/(int32_t)L_7))))), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_Columns_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_12, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_15, /*hidden argument*/NULL);
		__this->set_offSet_12(L_16);
		// }
		goto IL_0088;
	}

IL_007d:
	{
		// offSet = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offSet_12(L_17);
	}

IL_0088:
	{
		// for (int i = 0; i < childCount; i++)
		V_1 = 0;
		goto IL_00de;
	}

IL_008c:
	{
		// Transform item = transform.GetChild(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_18, L_19, /*hidden argument*/NULL);
		// item.localPosition = StartPosition + offSet + (Vector3.Scale(TileSize, LayoutDireciton) * 0.5f) + GetListPosition(i);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_StartPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_offSet_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_20, L_31, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00de:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_008c;
		}
	}
	{
		// editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection__ctor_mD7944138C1E4B4EA241F07A3AD652BEF37816C31 (TileGridObjectCollection_t833AB0F588F859C5C5CEADA2E015C5FF9C1281E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection__ctor_mD7944138C1E4B4EA241F07A3AD652BEF37816C31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected int Columns = 4;
		__this->set_Columns_4(4);
		// protected Vector3 TileSize = new Vector3(0.1f, 0.1f, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->set_TileSize_5(L_0);
		// protected Vector3 Gutters = new Vector3(0.005f, 0.005f, 0.005f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.005f), (0.005f), (0.005f), /*hidden argument*/NULL);
		__this->set_Gutters_6(L_1);
		// protected Vector3 LayoutDireciton = new Vector3(1, -1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_LayoutDireciton_7(L_2);
		// protected Vector3 StartPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_StartPosition_8(L_3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
