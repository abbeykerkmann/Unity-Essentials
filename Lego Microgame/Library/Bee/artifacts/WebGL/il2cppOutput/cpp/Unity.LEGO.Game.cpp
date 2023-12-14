#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<Unity.LEGO.Game.GameEvent>
struct Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B;
// System.Action`1<Unity.LEGO.Game.GameOverEvent>
struct Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25;
// System.Action`1<Unity.LEGO.Game.IObjective>
struct Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>
struct Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.LEGO.Game.ObjectiveAdded>
struct Action_1_t40E58381F48C7591FC62FF720068927866078FCC;
// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7;
// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>
struct Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Unity.LEGO.Game.Variable>
struct IEnumerable_1_tF7458B9E3D43E791CC6F460ABBCB7F71AC28B1D0;
// System.Collections.Generic.IEqualityComparer`1<System.Delegate>
struct IEqualityComparer_1_t3375297CFAE54310DF749A7AEE85CAD2EDF0BD3C;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<Unity.LEGO.Game.Variable>
struct IEqualityComparer_1_tF748F7FF7814801820645C7D861F095E0D4CD55D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct KeyCollection_t78701A4DA098C21D95B49F476A24DB6109F92E18;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct KeyCollection_tAD264AA4DC018C900FF7D8863A1A4436D3CAA5CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LEGO.Game.Variable,System.Int32>
struct KeyCollection_t21712EE77075AF11123E565B23E8896332290AAF;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>
struct List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>
struct List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// System.Predicate`1<Unity.LEGO.Game.IObjective>
struct Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct ValueCollection_t9DC8B0EFC9384528ECD40046A878CA32FD88A5DC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct ValueCollection_t56464B1DD477B41A1D4C8A56F22D3BA82A33D4CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.LEGO.Game.Variable,System.Int32>
struct ValueCollection_t47C96743F5671A7198E1CCA696D015E2C2DC6B4A;
// System.Collections.Generic.Dictionary`2/Entry<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>[]
struct EntryU5BU5D_tB930A055A111787EC111876384D4CB168B8FA83A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>[]
struct EntryU5BU5D_tE0260EC325B5A892098C2C12E6E4E2B1F3BD3EE8;
// System.Collections.Generic.Dictionary`2/Entry<Unity.LEGO.Game.Variable,System.Int32>[]
struct EntryU5BU5D_t0928B5C74D23840315506D26E181503E2CFF0207;
// Cinemachine.CinemachineOrbitalTransposer[]
struct CinemachineOrbitalTransposerU5BU5D_tFB9047628E48134B27783E21772FA8EAD7CA791F;
// Cinemachine.CinemachineVirtualCamera[]
struct CinemachineVirtualCameraU5BU5D_tC79623529FA0FC8916013356D0E0CB81EC16CFE7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Unity.LEGO.Game.IObjective[]
struct IObjectiveU5BU5D_t5D2A6C6AEEA8437D071DDB039660053F30884DD2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.LEGO.Game.Variable[]
struct VariableU5BU5D_t65883C1EECBA08DF1B04303F84814E5670F7C448;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// Cinemachine.CinemachineFreeLook/Orbit[]
struct OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Cinemachine.CinemachineBlend
struct CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E;
// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A;
// Unity.LEGO.Game.Condition
struct Condition_t86CD1CD29867BE04D2C4209AC2B171260F7D49C0;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.LEGO.Game.GameEvent
struct GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3;
// Unity.LEGO.Game.GameFlowManager
struct GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.LEGO.Game.GameOverEvent
struct GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Unity.LEGO.Game.IObjective
struct IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596;
// Unity.LEGO.Game.InputManager
struct InputManager_t2E87FBD618B38459C454BD9412465CF9BD398768;
// Unity.LEGO.Game.LookSensitivityUpdateEvent
struct LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.LEGO.Game.ObjectiveAdded
struct ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90;
// Unity.LEGO.Game.ObjectiveManager
struct ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90;
// Unity.LEGO.Game.OptionsMenuEvent
struct OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Unity.LEGO.Game.Variable
struct Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E;
// Unity.LEGO.Game.VariableAdded
struct VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// Cinemachine.AxisState/IInputAxisProvider
struct IInputAxisProvider_tABB3BFF96A8D4C6D50FA42166CCF7AAF18F959E7;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineFreeLook/CreateRigDelegate
struct CreateRigDelegate_tD6770756AD0D0BCB403556417C56015FBFB8343B;
// Cinemachine.CinemachineFreeLook/DestroyRigDelegate
struct DestroyRigDelegate_t28E835CF0AF2A9C3FE1C77889839F4B7A6D761B6;
// Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20
struct U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD;
// Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24
struct U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81;
// Unity.LEGO.Game.ObjectiveManager/<>c
struct U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t40E58381F48C7591FC62FF720068927866078FCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral130DEAA16B60191B0C01B858BD3A42CFAB92E651;
IL2CPP_EXTERN_C String_t* _stringLiteral9379DD12FD88E583CE1A7A833443D561376FB07B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1AA2387EE710A45D5A5A0928EE825C909430D34;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m830E8E653AC12377AFE71073408B00520DF7968D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mDFC3F6E823601BFC480533C15B483146AFFB0EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4E55FC40B96DA480110BF90E0BCE7B9601CF18D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F4744042B9FE2A7661DEBF8C0E9D7BF7CBD19F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDF8322CFD96BE1EEAB299A3F8789DC824EF3997D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEE315C12A707BF1B9967D8A52C765CF50C76623B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m849FBA24BD9B5E011A8A3062EF5AB07BCBCF1EFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m615129C485448B633F85221FFD33A480AD3AB506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m46204420129D264C2CC1DCE62231CEBB66D6A530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C46818C5940E48B48F54C19E0EFBA01844004CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m16441B641EC300A7FD6B9C157643E52A7466CF79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAA1104FE6093E643D12E6994CD0D3A1862398C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01FFB8682527A055EF25296B7863CC6739ECC3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m90CA7E338F0B23D91C16AF85F5DA5AD423A676DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_AddListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_m5AD76F137D3E4AAD669EE91CB731EB47F9EEA7B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_AddListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mEEAA2269BC3CEBDD7F2DD5BE72AF84C950CFD420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_AddListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m9071812C334E5855F7B4F1E4E0E807CE8B550E81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_RemoveListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_mEB349C9711B27BAC41B048AAC20D584AEC079DBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_RemoveListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mB8259411AABABCFF65D93D031E9FC1A8227354C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_RemoveListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m08B7959A89839ABC05E6CFCE4ADFC0A8E53CF24F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameFlowManager_OnGameOver_mD34D6B71144E05DC22B882F69C60EEBE6F1E23B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_OnLookSensitivityUpdate_mFF410FB896DD63106C50B9A4932E41B88D4F36F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD8E74E1F07C276A1DD21A0326B99DFE190A3F224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Exists_m0CC74479D9E0DA609C4DDD52F80FCB86F6902034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1E315871FD063515A03902DF6B87090664A72C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m48FBAD7CC29B2670E0890E8DDE64F6891F52579B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m493CABD6CA35EE1C96F3885C350F1651489169AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD11669E815907408B115A82246E00892C219015F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectiveManager_OnObjectiveAdded_m3196EAA52A4B98D4E1871C085EE279283EE075CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectiveManager_OnProgress_m352270248BF07B090361A93F8A66EC9AFC338BD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_Reset_m568D78E29E5E7B6912426AD008BF0F37387744F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateGameStatusU3Eb__7_0_mBE450CC70E27A5A94725AAFC4128484A40025A7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_Reset_mD7B172EF4DD2E5E946664EA6E07C6786788BC3EF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t86358A005A480A42071012A5E5EADC4D51050027 
{
};

// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB930A055A111787EC111876384D4CB168B8FA83A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t78701A4DA098C21D95B49F476A24DB6109F92E18* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9DC8B0EFC9384528ECD40046A878CA32FD88A5DC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE0260EC325B5A892098C2C12E6E4E2B1F3BD3EE8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAD264AA4DC018C900FF7D8863A1A4436D3CAA5CD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t56464B1DD477B41A1D4C8A56F22D3BA82A33D4CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>
struct Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0928B5C74D23840315506D26E181503E2CFF0207* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t21712EE77075AF11123E565B23E8896332290AAF* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t47C96743F5671A7198E1CCA696D015E2C2DC6B4A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LEGO.Game.Variable,System.Int32>
struct KeyCollection_t21712EE77075AF11123E565B23E8896332290AAF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* ____dictionary_0;
};

// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>
struct List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IObjectiveU5BU5D_t5D2A6C6AEEA8437D071DDB039660053F30884DD2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>
struct List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VariableU5BU5D_t65883C1EECBA08DF1B04303F84814E5670F7C448* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Unity.LEGO.Game.Condition
struct Condition_t86CD1CD29867BE04D2C4209AC2B171260F7D49C0  : public RuntimeObject
{
	// Unity.LEGO.Game.Variable Unity.LEGO.Game.Condition::Variable
	Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___Variable_0;
	// Unity.LEGO.Game.Condition/ComparisonType Unity.LEGO.Game.Condition::Type
	int32_t ___Type_1;
	// System.Int32 Unity.LEGO.Game.Condition::Value
	int32_t ___Value_2;
};

// Unity.LEGO.Game.EventManager
struct EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C  : public RuntimeObject
{
};

// Unity.LEGO.Game.Events
struct Events_t377FF24A65867894B56872A9BB36604B20A4AE6B  : public RuntimeObject
{
};

// Unity.LEGO.Game.GameEvent
struct GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Unity.LEGO.Game.VariableManager
struct VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1  : public RuntimeObject
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

// Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20
struct U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD  : public RuntimeObject
{
	// System.Int32 Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Unity.LEGO.Game.GameFlowManager Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::<>4__this
	GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* ___U3CU3E4__this_2;
};

// Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24
struct U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81  : public RuntimeObject
{
	// System.Int32 Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Unity.LEGO.Game.GameFlowManager Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<>4__this
	GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* ___U3CU3E4__this_2;
	// System.Single Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<zoomFactor>5__2
	float ___U3CzoomFactorU3E5__2_3;
	// System.Single Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<middleRigZoomFactor>5__3
	float ___U3CmiddleRigZoomFactorU3E5__3_4;
};

// Unity.LEGO.Game.ObjectiveManager/<>c
struct U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>
struct Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>
struct Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Unity.LEGO.Game.GameOverEvent
struct GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33  : public GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3
{
	// System.Boolean Unity.LEGO.Game.GameOverEvent::Win
	bool ___Win_0;
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

// Unity.LEGO.Game.LookSensitivityUpdateEvent
struct LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411  : public GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3
{
	// System.Single Unity.LEGO.Game.LookSensitivityUpdateEvent::Value
	float ___Value_0;
};

// Unity.LEGO.Game.ObjectiveAdded
struct ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90  : public GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3
{
	// Unity.LEGO.Game.IObjective Unity.LEGO.Game.ObjectiveAdded::Objective
	RuntimeObject* ___Objective_0;
};

// Unity.LEGO.Game.OptionsMenuEvent
struct OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188  : public GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3
{
	// System.Boolean Unity.LEGO.Game.OptionsMenuEvent::Active
	bool ___Active_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Unity.LEGO.Game.VariableAdded
struct VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D  : public GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3
{
	// Unity.LEGO.Game.Variable Unity.LEGO.Game.VariableAdded::Variable
	Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___Variable_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// Cinemachine.AxisState/Recentering
struct Recentering_tB00B86249E96CFC65822315C710253B1E02459EF 
{
	// System.Boolean Cinemachine.AxisState/Recentering::m_enabled
	bool ___m_enabled_0;
	// System.Single Cinemachine.AxisState/Recentering::m_WaitTime
	float ___m_WaitTime_1;
	// System.Single Cinemachine.AxisState/Recentering::m_RecenteringTime
	float ___m_RecenteringTime_2;
	// System.Single Cinemachine.AxisState/Recentering::mLastAxisInputTime
	float ___mLastAxisInputTime_3;
	// System.Single Cinemachine.AxisState/Recentering::mRecenteringVelocity
	float ___mRecenteringVelocity_4;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyHeadingDefinition
	int32_t ___m_LegacyHeadingDefinition_5;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyVelocityFilterStrength
	int32_t ___m_LegacyVelocityFilterStrength_6;
};
// Native definition for P/Invoke marshalling of Cinemachine.AxisState/Recentering
struct Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_pinvoke
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};
// Native definition for COM marshalling of Cinemachine.AxisState/Recentering
struct Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_com
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.CinemachineFreeLook/Orbit
struct Orbit_tFB7313130D10593990AD5CA9C685500758DB866D 
{
	// System.Single Cinemachine.CinemachineFreeLook/Orbit::m_Height
	float ___m_Height_0;
	// System.Single Cinemachine.CinemachineFreeLook/Orbit::m_Radius
	float ___m_Radius_1;
};

// Cinemachine.CinemachineOrbitalTransposer/Heading
struct Heading_t2A3E10FE1156F914633F9E348691BC649C373B6E 
{
	// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition Cinemachine.CinemachineOrbitalTransposer/Heading::m_Definition
	int32_t ___m_Definition_0;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading::m_VelocityFilterStrength
	int32_t ___m_VelocityFilterStrength_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Heading::m_Bias
	float ___m_Bias_2;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};

// Cinemachine.AxisState
struct AxisState_t6996FE8143104E02683986C908C18B0F62595736 
{
	// System.Single Cinemachine.AxisState::Value
	float ___Value_0;
	// Cinemachine.AxisState/SpeedMode Cinemachine.AxisState::m_SpeedMode
	int32_t ___m_SpeedMode_1;
	// System.Single Cinemachine.AxisState::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single Cinemachine.AxisState::m_AccelTime
	float ___m_AccelTime_3;
	// System.Single Cinemachine.AxisState::m_DecelTime
	float ___m_DecelTime_4;
	// System.String Cinemachine.AxisState::m_InputAxisName
	String_t* ___m_InputAxisName_5;
	// System.Single Cinemachine.AxisState::m_InputAxisValue
	float ___m_InputAxisValue_6;
	// System.Boolean Cinemachine.AxisState::m_InvertInput
	bool ___m_InvertInput_7;
	// System.Single Cinemachine.AxisState::m_MinValue
	float ___m_MinValue_8;
	// System.Single Cinemachine.AxisState::m_MaxValue
	float ___m_MaxValue_9;
	// System.Boolean Cinemachine.AxisState::m_Wrap
	bool ___m_Wrap_10;
	// Cinemachine.AxisState/Recentering Cinemachine.AxisState::m_Recentering
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF ___m_Recentering_11;
	// System.Single Cinemachine.AxisState::m_CurrentSpeed
	float ___m_CurrentSpeed_12;
	// System.Single Cinemachine.AxisState::m_LastUpdateTime
	float ___m_LastUpdateTime_13;
	// System.Int32 Cinemachine.AxisState::m_LastUpdateFrame
	int32_t ___m_LastUpdateFrame_14;
	// Cinemachine.AxisState/IInputAxisProvider Cinemachine.AxisState::m_InputAxisProvider
	RuntimeObject* ___m_InputAxisProvider_16;
	// System.Int32 Cinemachine.AxisState::m_InputAxisIndex
	int32_t ___m_InputAxisIndex_17;
	// System.Boolean Cinemachine.AxisState::<ValueRangeLocked>k__BackingField
	bool ___U3CValueRangeLockedU3Ek__BackingField_18;
	// System.Boolean Cinemachine.AxisState::<HasRecentering>k__BackingField
	bool ___U3CHasRecenteringU3Ek__BackingField_19;
};
// Native definition for P/Invoke marshalling of Cinemachine.AxisState
struct AxisState_t6996FE8143104E02683986C908C18B0F62595736_marshaled_pinvoke
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	char* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_pinvoke ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
};
// Native definition for COM marshalling of Cinemachine.AxisState
struct AxisState_t6996FE8143104E02683986C908C18B0F62595736_marshaled_com
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	Il2CppChar* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_com ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
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
	intptr_t ___method_ptr_0;
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

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<Unity.LEGO.Game.GameEvent>
struct Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LEGO.Game.GameOverEvent>
struct Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LEGO.Game.IObjective>
struct Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>
struct Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LEGO.Game.ObjectiveAdded>
struct Action_1_t40E58381F48C7591FC62FF720068927866078FCC  : public MulticastDelegate_t
{
};

// System.Predicate`1<Unity.LEGO.Game.IObjective>
struct Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.LEGO.Game.Variable
struct Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Unity.LEGO.Game.Variable::Name
	String_t* ___Name_4;
	// System.Int32 Unity.LEGO.Game.Variable::InitialValue
	int32_t ___InitialValue_5;
	// System.Boolean Unity.LEGO.Game.Variable::UseUI
	bool ___UseUI_6;
	// UnityEngine.GameObject Unity.LEGO.Game.Variable::UI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI_7;
	// System.Action`1<System.Int32> Unity.LEGO.Game.Variable::OnUpdate
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnUpdate_8;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// Unity.LEGO.Game.GameFlowManager
struct GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Unity.LEGO.Game.GameFlowManager::m_WinScene
	String_t* ___m_WinScene_4;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_WinSceneDelay
	float ___m_WinSceneDelay_5;
	// System.String Unity.LEGO.Game.GameFlowManager::m_LoseScene
	String_t* ___m_LoseScene_6;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_LoseSceneDelay
	float ___m_LoseSceneDelay_7;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_StartGameLockedControllerTimer
	float ___m_StartGameLockedControllerTimer_8;
	// System.Boolean Unity.LEGO.Game.GameFlowManager::<GameIsEnding>k__BackingField
	bool ___U3CGameIsEndingU3Ek__BackingField_10;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_GameOverSceneTime
	float ___m_GameOverSceneTime_11;
	// System.String Unity.LEGO.Game.GameFlowManager::m_GameOverSceneToLoad
	String_t* ___m_GameOverSceneToLoad_12;
	// Cinemachine.CinemachineFreeLook Unity.LEGO.Game.GameFlowManager::m_FreeLookCamera
	CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* ___m_FreeLookCamera_13;
	// System.String Unity.LEGO.Game.GameFlowManager::m_ControllerAxisXName
	String_t* ___m_ControllerAxisXName_14;
	// System.String Unity.LEGO.Game.GameFlowManager::m_ControllerAxisYName
	String_t* ___m_ControllerAxisYName_15;
};

// Unity.LEGO.Game.InputManager
struct InputManager_t2E87FBD618B38459C454BD9412465CF9BD398768  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Unity.LEGO.Game.InputManager::m_VerticalLookMinSensitivity
	float ___m_VerticalLookMinSensitivity_4;
	// System.Single Unity.LEGO.Game.InputManager::m_VerticalLookSensitivityStep
	float ___m_VerticalLookSensitivityStep_5;
	// System.Single Unity.LEGO.Game.InputManager::m_HorizontalLookMinimumSensitivity
	float ___m_HorizontalLookMinimumSensitivity_6;
	// System.Single Unity.LEGO.Game.InputManager::m_HorizontalLookSensitivityStep
	float ___m_HorizontalLookSensitivityStep_7;
	// Cinemachine.CinemachineFreeLook Unity.LEGO.Game.InputManager::m_FreeLookCamera
	CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* ___m_FreeLookCamera_8;
};

// Unity.LEGO.Game.ObjectiveManager
struct ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective> Unity.LEGO.Game.ObjectiveManager::m_Objectives
	List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* ___m_Objectives_4;
	// System.Boolean Unity.LEGO.Game.ObjectiveManager::m_UpdateStatus
	bool ___m_UpdateStatus_5;
	// System.Boolean Unity.LEGO.Game.ObjectiveManager::m_Won
	bool ___m_Won_6;
	// System.Boolean Unity.LEGO.Game.ObjectiveManager::m_Lost
	bool ___m_Lost_7;
};

// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_LookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt_28;
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow_29;
	// System.Boolean Cinemachine.CinemachineFreeLook::m_CommonLens
	bool ___m_CommonLens_30;
	// Cinemachine.LensSettings Cinemachine.CinemachineFreeLook::m_Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens_31;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineFreeLook::m_Transitions
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions_32;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineFreeLook::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_33;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_YAxis
	AxisState_t6996FE8143104E02683986C908C18B0F62595736 ___m_YAxis_34;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_YAxisRecentering
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF ___m_YAxisRecentering_35;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_XAxis
	AxisState_t6996FE8143104E02683986C908C18B0F62595736 ___m_XAxis_36;
	// Cinemachine.CinemachineOrbitalTransposer/Heading Cinemachine.CinemachineFreeLook::m_Heading
	Heading_t2A3E10FE1156F914633F9E348691BC649C373B6E ___m_Heading_37;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_RecenterToTargetHeading
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF ___m_RecenterToTargetHeading_38;
	// Cinemachine.CinemachineTransposer/BindingMode Cinemachine.CinemachineFreeLook::m_BindingMode
	int32_t ___m_BindingMode_39;
	// System.Single Cinemachine.CinemachineFreeLook::m_SplineCurvature
	float ___m_SplineCurvature_40;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_Orbits
	OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28* ___m_Orbits_41;
	// System.Single Cinemachine.CinemachineFreeLook::m_LegacyHeadingBias
	float ___m_LegacyHeadingBias_42;
	// System.Boolean Cinemachine.CinemachineFreeLook::mUseLegacyRigDefinitions
	bool ___mUseLegacyRigDefinitions_43;
	// System.Boolean Cinemachine.CinemachineFreeLook::mIsDestroyed
	bool ___mIsDestroyed_44;
	// Cinemachine.CameraState Cinemachine.CinemachineFreeLook::m_State
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State_45;
	// Cinemachine.CinemachineVirtualCamera[] Cinemachine.CinemachineFreeLook::m_Rigs
	CinemachineVirtualCameraU5BU5D_tC79623529FA0FC8916013356D0E0CB81EC16CFE7* ___m_Rigs_46;
	// Cinemachine.CinemachineOrbitalTransposer[] Cinemachine.CinemachineFreeLook::mOrbitals
	CinemachineOrbitalTransposerU5BU5D_tFB9047628E48134B27783E21772FA8EAD7CA791F* ___mOrbitals_47;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendA
	CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E* ___mBlendA_48;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendB
	CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E* ___mBlendB_49;
	// System.Single Cinemachine.CinemachineFreeLook::m_CachedXAxisHeading
	float ___m_CachedXAxisHeading_52;
	// System.Single Cinemachine.CinemachineFreeLook::m_LastHeadingUpdateFrame
	float ___m_LastHeadingUpdateFrame_53;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_CachedOrbits
	OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28* ___m_CachedOrbits_54;
	// System.Single Cinemachine.CinemachineFreeLook::m_CachedTension
	float ___m_CachedTension_55;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedKnots
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_CachedKnots_56;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl1
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_CachedCtrl1_57;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl2
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_CachedCtrl2_58;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>

// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>

// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>

// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LEGO.Game.Variable,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LEGO.Game.Variable,System.Int32>

// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>
struct List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IObjectiveU5BU5D_t5D2A6C6AEEA8437D071DDB039660053F30884DD2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>
struct List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VariableU5BU5D_t65883C1EECBA08DF1B04303F84814E5670F7C448* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>

// Unity.LEGO.Game.Condition

// Unity.LEGO.Game.Condition

// Unity.LEGO.Game.EventManager
struct EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>> Unity.LEGO.Game.EventManager::s_Events
	Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7* ___s_Events_0;
	// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>> Unity.LEGO.Game.EventManager::s_EventLookups
	Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94* ___s_EventLookups_1;
};

// Unity.LEGO.Game.EventManager

// Unity.LEGO.Game.Events
struct Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields
{
	// Unity.LEGO.Game.OptionsMenuEvent Unity.LEGO.Game.Events::OptionsMenuEvent
	OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188* ___OptionsMenuEvent_0;
	// Unity.LEGO.Game.ObjectiveAdded Unity.LEGO.Game.Events::ObjectiveAddedEvent
	ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90* ___ObjectiveAddedEvent_1;
	// Unity.LEGO.Game.VariableAdded Unity.LEGO.Game.Events::VariableAddedEvent
	VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* ___VariableAddedEvent_2;
	// Unity.LEGO.Game.GameOverEvent Unity.LEGO.Game.Events::GameOverEvent
	GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* ___GameOverEvent_3;
	// Unity.LEGO.Game.LookSensitivityUpdateEvent Unity.LEGO.Game.Events::LookSensitivityUpdateEvent
	LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411* ___LookSensitivityUpdateEvent_4;
};

// Unity.LEGO.Game.Events

// Unity.LEGO.Game.GameEvent

// Unity.LEGO.Game.GameEvent

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Unity.LEGO.Game.VariableManager
struct VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32> Unity.LEGO.Game.VariableManager::s_RegisteredVariables
	Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* ___s_RegisteredVariables_1;
};

// Unity.LEGO.Game.VariableManager

// Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20

// Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20

// Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24

// Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24

// Unity.LEGO.Game.ObjectiveManager/<>c
struct U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_StaticFields
{
	// Unity.LEGO.Game.ObjectiveManager/<>c Unity.LEGO.Game.ObjectiveManager/<>c::<>9
	U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319* ___U3CU3E9_0;
	// System.Predicate`1<Unity.LEGO.Game.IObjective> Unity.LEGO.Game.ObjectiveManager/<>c::<>9__7_0
	Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* ___U3CU3E9__7_0_1;
};

// Unity.LEGO.Game.ObjectiveManager/<>c

// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>

// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>

// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Unity.LEGO.Game.GameOverEvent

// Unity.LEGO.Game.GameOverEvent

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Unity.LEGO.Game.LookSensitivityUpdateEvent

// Unity.LEGO.Game.LookSensitivityUpdateEvent

// Unity.LEGO.Game.ObjectiveAdded

// Unity.LEGO.Game.ObjectiveAdded

// Unity.LEGO.Game.OptionsMenuEvent

// Unity.LEGO.Game.OptionsMenuEvent

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// Unity.LEGO.Game.VariableAdded

// Unity.LEGO.Game.VariableAdded

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// Cinemachine.CinemachineFreeLook/Orbit

// Cinemachine.CinemachineFreeLook/Orbit

// Cinemachine.AxisState

// Cinemachine.AxisState

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<Unity.LEGO.Game.GameEvent>

// System.Action`1<Unity.LEGO.Game.GameEvent>

// System.Action`1<Unity.LEGO.Game.GameOverEvent>

// System.Action`1<Unity.LEGO.Game.GameOverEvent>

// System.Action`1<Unity.LEGO.Game.IObjective>

// System.Action`1<Unity.LEGO.Game.IObjective>

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>

// System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<Unity.LEGO.Game.ObjectiveAdded>

// System.Action`1<Unity.LEGO.Game.ObjectiveAdded>

// System.Predicate`1<Unity.LEGO.Game.IObjective>

// System.Predicate`1<Unity.LEGO.Game.IObjective>

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// Unity.LEGO.Game.Variable

// Unity.LEGO.Game.Variable

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Cinemachine.CinemachineVirtualCameraBase

// Cinemachine.CinemachineVirtualCameraBase

// Unity.LEGO.Game.GameFlowManager
struct GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_StaticFields
{
	// System.String Unity.LEGO.Game.GameFlowManager::<PreviousScene>k__BackingField
	String_t* ___U3CPreviousSceneU3Ek__BackingField_9;
};

// Unity.LEGO.Game.GameFlowManager

// Unity.LEGO.Game.InputManager

// Unity.LEGO.Game.InputManager

// Unity.LEGO.Game.ObjectiveManager

// Unity.LEGO.Game.ObjectiveManager

// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_StaticFields
{
	// Cinemachine.CinemachineFreeLook/CreateRigDelegate Cinemachine.CinemachineFreeLook::CreateRigOverride
	CreateRigDelegate_tD6770756AD0D0BCB403556417C56015FBFB8343B* ___CreateRigOverride_50;
	// Cinemachine.CinemachineFreeLook/DestroyRigDelegate Cinemachine.CinemachineFreeLook::DestroyRigOverride
	DestroyRigDelegate_t28E835CF0AF2A9C3FE1C77889839F4B7A6D761B6* ___DestroyRigOverride_51;
};

// Cinemachine.CinemachineFreeLook
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Cinemachine.CinemachineFreeLook/Orbit[]
struct OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28  : public RuntimeArray
{
	ALIGN_FIELD (8) Orbit_tFB7313130D10593990AD5CA9C685500758DB866D m_Items[1];

	inline Orbit_tFB7313130D10593990AD5CA9C685500758DB866D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Orbit_tFB7313130D10593990AD5CA9C685500758DB866D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Orbit_tFB7313130D10593990AD5CA9C685500758DB866D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Orbit_tFB7313130D10593990AD5CA9C685500758DB866D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Orbit_tFB7313130D10593990AD5CA9C685500758DB866D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Orbit_tFB7313130D10593990AD5CA9C685500758DB866D value)
	{
		m_Items[index] = value;
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.EventManager::AddListener<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_AddListener_TisRuntimeObject_m9207356714EC7804449BA78EA76EA80A88963B5E_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_evt, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_RemoveListener_TisRuntimeObject_m460B01F06D9DB5C90E76906F9243460AC66B2410_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_evt, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Exists(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mE124D5A8B431C8B9B4C77EA23AD8B4C543829643_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.OptionsMenuEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsMenuEvent__ctor_mC0A7A2CDE99FF1A7311C79E47DF2950644C60299 (OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.ObjectiveAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveAdded__ctor_m3FEFDC9E68384252E59A02FAA273A6ED8B0C37AC (ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.VariableAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAdded__ctor_mB1FB43681504A71879F61905BC0AC7E282463B35 (VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.GameOverEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverEvent__ctor_mD5BA847FB9258FF27D83B13BB3FB1F82A3335EF2 (GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.LookSensitivityUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookSensitivityUpdateEvent__ctor_m60AE26FB84A456A7098CCD80152DC3750C959227 (LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_m1B61CD0B43EE2C725BD7869E9097AC587E3B479F (GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4E55FC40B96DA480110BF90E0BCE7B9601CF18D4 (Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7* __this, Type_t* ___0_key, Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7*, Type_t*, Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Action`1<Unity.LEGO.Game.GameEvent>::Invoke(T)
inline void Action_1_Invoke_mF5649C150D506494DAAEAD26BF9DAE6799B19671_inline (Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B* __this, GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B*, GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>::Clear()
inline void Dictionary_2_Clear_mDFC3F6E823601BFC480533C15B483146AFFB0EA8 (Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>::Clear()
inline void Dictionary_2_Clear_m830E8E653AC12377AFE71073408B00520DF7968D (Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>::.ctor()
inline void Dictionary_2__ctor_m3F4744042B9FE2A7661DEBF8C0E9D7BF7CBD19F2 (Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>::.ctor()
inline void Dictionary_2__ctor_mDF8322CFD96BE1EEAB299A3F8789DC824EF3997D (Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Action`1<Unity.LEGO.Game.GameOverEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFF0A38EBDD4F11851168370A7710BB2B22313A8C (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Unity.LEGO.Game.EventManager::AddListener<Unity.LEGO.Game.GameOverEvent>(System.Action`1<T>)
inline void EventManager_AddListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_m5AD76F137D3E4AAD669EE91CB731EB47F9EEA7B6 (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25* ___0_evt, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25*, const RuntimeMethod*))EventManager_AddListener_TisRuntimeObject_m9207356714EC7804449BA78EA76EA80A88963B5E_gshared)(___0_evt, method);
}
// T UnityEngine.Object::FindObjectOfType<Cinemachine.CinemachineFreeLook>()
inline CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3 (const RuntimeMethod* method)
{
	return ((  CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::StartGameLockLookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_StartGameLockLookRotation_m4AEAAF7D8C0261333A729FA153893ECDE262EDE7 (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.VariableManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_Reset_mFBF3F6BAA541983B86E5E09D3353FD17DB53328A (const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20__ctor_m0C29AB397F90B2951B57090AEFF6BA1DD34D1FEF (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean Unity.LEGO.Game.GameFlowManager::get_GameIsEnding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameFlowManager_get_GameIsEnding_m2263498FC5492CD22450A985D2CBFCCC9529A363_inline (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.GameFlowManager::set_PreviousScene(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_PreviousScene_mB3ECDFCE746483439FB49BD2D8E72C41704AF6FA_inline (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.GameFlowManager::set_GameIsEnding(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_GameIsEnding_m81FCE77E4B2B6B7E9A309003398E3E6AD0B03330_inline (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::ZoomInOnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_ZoomInOnPlayer_mD4085F049F96D3BBFF3D01F22E37BBE3F5CE203C (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<Unity.LEGO.Game.GameOverEvent>(System.Action`1<T>)
inline void EventManager_RemoveListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_mEB349C9711B27BAC41B048AAC20D584AEC079DBA (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25* ___0_evt, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25*, const RuntimeMethod*))EventManager_RemoveListener_TisRuntimeObject_m460B01F06D9DB5C90E76906F9243460AC66B2410_gshared)(___0_evt, method);
}
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24__ctor_m6596D3B641BDC82410DBE8C15E1B8FEAA2906222 (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6122A99124F53CF4C204C8CAAFE5E8E8A06D38DE (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Unity.LEGO.Game.EventManager::AddListener<Unity.LEGO.Game.LookSensitivityUpdateEvent>(System.Action`1<T>)
inline void EventManager_AddListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mEEAA2269BC3CEBDD7F2DD5BE72AF84C950CFD420 (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9* ___0_evt, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9*, const RuntimeMethod*))EventManager_AddListener_TisRuntimeObject_m9207356714EC7804449BA78EA76EA80A88963B5E_gshared)(___0_evt, method);
}
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<Unity.LEGO.Game.LookSensitivityUpdateEvent>(System.Action`1<T>)
inline void EventManager_RemoveListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mB8259411AABABCFF65D93D031E9FC1A8227354C7 (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9* ___0_evt, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9*, const RuntimeMethod*))EventManager_RemoveListener_TisRuntimeObject_m460B01F06D9DB5C90E76906F9243460AC66B2410_gshared)(___0_evt, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::.ctor()
inline void List_1__ctor_mD11669E815907408B115A82246E00892C219015F (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Action`1<Unity.LEGO.Game.ObjectiveAdded>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6B062F7E4717CCF131BAE713E6017DB192D126BD (Action_1_t40E58381F48C7591FC62FF720068927866078FCC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t40E58381F48C7591FC62FF720068927866078FCC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Unity.LEGO.Game.EventManager::AddListener<Unity.LEGO.Game.ObjectiveAdded>(System.Action`1<T>)
inline void EventManager_AddListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m9071812C334E5855F7B4F1E4E0E807CE8B550E81 (Action_1_t40E58381F48C7591FC62FF720068927866078FCC* ___0_evt, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t40E58381F48C7591FC62FF720068927866078FCC*, const RuntimeMethod*))EventManager_AddListener_TisRuntimeObject_m9207356714EC7804449BA78EA76EA80A88963B5E_gshared)(___0_evt, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::Add(T)
inline void List_1_Add_mD8E74E1F07C276A1DD21A0326B99DFE190A3F224_inline (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Action`1<Unity.LEGO.Game.IObjective>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD71D26EEB9F2B7F4D9041F059D204734E7547835 (Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.LEGO.Game.IObjective>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m1C0C6C42D54CE72B06735832C2C4C3F31C5CB1C4 (Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::Exists(System.Predicate`1<T>)
inline bool List_1_Exists_m0CC74479D9E0DA609C4DDD52F80FCB86F6902034 (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* __this, Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* ___0_match, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9*, Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D*, const RuntimeMethod*))List_1_Exists_mE124D5A8B431C8B9B4C77EA23AD8B4C543829643_gshared)(__this, ___0_match, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::GetEnumerator()
inline Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27 List_1_GetEnumerator_m48FBAD7CC29B2670E0890E8DDE64F6891F52579B (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27 (*) (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>::Dispose()
inline void Enumerator_Dispose_m46204420129D264C2CC1DCE62231CEBB66D6A530 (Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m01FFB8682527A055EF25296B7863CC6739ECC3A6_inline (Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>::MoveNext()
inline bool Enumerator_MoveNext_m16441B641EC300A7FD6B9C157643E52A7466CF79 (Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Unity.LEGO.Game.EventManager::Broadcast(Unity.LEGO.Game.GameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Broadcast_m912D1D3B71A0B23606EC81BD32E1914933CCCC60 (GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3* ___0_evt, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.ObjectiveManager::UpdateGameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_UpdateGameStatus_m38C3114A1C4A091F085EC1C22FCF4F4F8D3E05DE (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, const RuntimeMethod* method) ;
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<Unity.LEGO.Game.ObjectiveAdded>(System.Action`1<T>)
inline void EventManager_RemoveListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m08B7959A89839ABC05E6CFCE4ADFC0A8E53CF24F (Action_1_t40E58381F48C7591FC62FF720068927866078FCC* ___0_evt, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t40E58381F48C7591FC62FF720068927866078FCC*, const RuntimeMethod*))EventManager_RemoveListener_TisRuntimeObject_m460B01F06D9DB5C90E76906F9243460AC66B2410_gshared)(___0_evt, method);
}
// System.Void Unity.LEGO.Game.ObjectiveManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC36274E49245412F678B320513B1E95795F68F4E (U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090 (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* __this, Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6*, Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41 (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* __this, Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6*, Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::get_Keys()
inline KeyCollection_t21712EE77075AF11123E565B23E8896332290AAF* Dictionary_2_get_Keys_m615129C485448B633F85221FFD33A480AD3AB506 (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t21712EE77075AF11123E565B23E8896332290AAF* (*) (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6*, const RuntimeMethod*))Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m493CABD6CA35EE1C96F3885C350F1651489169AF (List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>::GetEnumerator()
inline Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D List_1_GetEnumerator_m1E315871FD063515A03902DF6B87090664A72C82 (List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D (*) (List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>::Dispose()
inline void Enumerator_Dispose_m6C46818C5940E48B48F54C19E0EFBA01844004CC (Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>::get_Current()
inline Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* Enumerator_get_Current_m90CA7E338F0B23D91C16AF85F5DA5AD423A676DA_inline (Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D* __this, const RuntimeMethod* method)
{
	return ((  Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* (*) (Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>::MoveNext()
inline bool Enumerator_MoveNext_mFAA1104FE6093E643D12E6994CD0D3A1862398C7 (Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m849FBA24BD9B5E011A8A3062EF5AB07BCBCF1EFA (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* __this, Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6*, Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___0_key, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mEE315C12A707BF1B9967D8A52C765CF50C76623B (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void Unity.LEGO.Game.Condition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition__ctor_mE55455A0B97EF1A03948AE2100BF336E2717CF6D (Condition_t86CD1CD29867BE04D2C4209AC2B171260F7D49C0* __this, const RuntimeMethod* method) 
{
	{
		// public int Value = 1;
		__this->___Value_2 = 1;
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
// System.Void Unity.LEGO.Game.Events::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Events__cctor_mA721BD23904C8686EF85A357525ACDA4575E5EF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OptionsMenuEvent OptionsMenuEvent = new OptionsMenuEvent();
		OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188* L_0 = (OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188*)il2cpp_codegen_object_new(OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188_il2cpp_TypeInfo_var);
		OptionsMenuEvent__ctor_mC0A7A2CDE99FF1A7311C79E47DF2950644C60299(L_0, NULL);
		((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___OptionsMenuEvent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___OptionsMenuEvent_0), (void*)L_0);
		// public static ObjectiveAdded ObjectiveAddedEvent = new ObjectiveAdded();
		ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90* L_1 = (ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90*)il2cpp_codegen_object_new(ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_il2cpp_TypeInfo_var);
		ObjectiveAdded__ctor_m3FEFDC9E68384252E59A02FAA273A6ED8B0C37AC(L_1, NULL);
		((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___ObjectiveAddedEvent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___ObjectiveAddedEvent_1), (void*)L_1);
		// public static VariableAdded VariableAddedEvent = new VariableAdded();
		VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* L_2 = (VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D*)il2cpp_codegen_object_new(VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D_il2cpp_TypeInfo_var);
		VariableAdded__ctor_mB1FB43681504A71879F61905BC0AC7E282463B35(L_2, NULL);
		((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___VariableAddedEvent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___VariableAddedEvent_2), (void*)L_2);
		// public static GameOverEvent GameOverEvent = new GameOverEvent();
		GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* L_3 = (GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33*)il2cpp_codegen_object_new(GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_il2cpp_TypeInfo_var);
		GameOverEvent__ctor_mD5BA847FB9258FF27D83B13BB3FB1F82A3335EF2(L_3, NULL);
		((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___GameOverEvent_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___GameOverEvent_3), (void*)L_3);
		// public static LookSensitivityUpdateEvent LookSensitivityUpdateEvent = new LookSensitivityUpdateEvent();
		LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411* L_4 = (LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411*)il2cpp_codegen_object_new(LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_il2cpp_TypeInfo_var);
		LookSensitivityUpdateEvent__ctor_m60AE26FB84A456A7098CCD80152DC3750C959227(L_4, NULL);
		((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___LookSensitivityUpdateEvent_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___LookSensitivityUpdateEvent_4), (void*)L_4);
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
// System.Void Unity.LEGO.Game.OptionsMenuEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsMenuEvent__ctor_mC0A7A2CDE99FF1A7311C79E47DF2950644C60299 (OptionsMenuEvent_t7194563182A209E9DACAFD2D2FB9EC852137A188* __this, const RuntimeMethod* method) 
{
	{
		GameEvent__ctor_m1B61CD0B43EE2C725BD7869E9097AC587E3B479F(__this, NULL);
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
// System.Void Unity.LEGO.Game.ObjectiveAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveAdded__ctor_m3FEFDC9E68384252E59A02FAA273A6ED8B0C37AC (ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90* __this, const RuntimeMethod* method) 
{
	{
		GameEvent__ctor_m1B61CD0B43EE2C725BD7869E9097AC587E3B479F(__this, NULL);
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
// System.Void Unity.LEGO.Game.VariableAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAdded__ctor_mB1FB43681504A71879F61905BC0AC7E282463B35 (VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* __this, const RuntimeMethod* method) 
{
	{
		GameEvent__ctor_m1B61CD0B43EE2C725BD7869E9097AC587E3B479F(__this, NULL);
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
// System.Void Unity.LEGO.Game.GameOverEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverEvent__ctor_mD5BA847FB9258FF27D83B13BB3FB1F82A3335EF2 (GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* __this, const RuntimeMethod* method) 
{
	{
		GameEvent__ctor_m1B61CD0B43EE2C725BD7869E9097AC587E3B479F(__this, NULL);
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
// System.Void Unity.LEGO.Game.LookSensitivityUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookSensitivityUpdateEvent__ctor_m60AE26FB84A456A7098CCD80152DC3750C959227 (LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411* __this, const RuntimeMethod* method) 
{
	{
		GameEvent__ctor_m1B61CD0B43EE2C725BD7869E9097AC587E3B479F(__this, NULL);
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
// System.Void Unity.LEGO.Game.GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_m1B61CD0B43EE2C725BD7869E9097AC587E3B479F (GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LEGO.Game.EventManager::Broadcast(Unity.LEGO.Game.GameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Broadcast_m912D1D3B71A0B23606EC81BD32E1914933CCCC60 (GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4E55FC40B96DA480110BF90E0BCE7B9601CF18D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B* V_0 = NULL;
	{
		// if (s_Events.TryGetValue(evt.GetType(), out var action))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7* L_0 = ((EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var))->___s_Events_0;
		GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3* L_1 = ___0_evt;
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m4E55FC40B96DA480110BF90E0BCE7B9601CF18D4(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m4E55FC40B96DA480110BF90E0BCE7B9601CF18D4_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// action.Invoke(evt);
		Action_1_t2EE4AAE9690599FCDF98E7BA9682D90515D00D0B* L_4 = V_0;
		GameEvent_tADE2A52CB6F3098337732CF4E19BC71CA85511B3* L_5 = ___0_evt;
		Action_1_Invoke_mF5649C150D506494DAAEAD26BF9DAE6799B19671_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.EventManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Clear_m8A9332F411290B57E8809C23524FD2B386F6A8D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m830E8E653AC12377AFE71073408B00520DF7968D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mDFC3F6E823601BFC480533C15B483146AFFB0EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Events.Clear();
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7* L_0 = ((EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var))->___s_Events_0;
		Dictionary_2_Clear_mDFC3F6E823601BFC480533C15B483146AFFB0EA8(L_0, Dictionary_2_Clear_mDFC3F6E823601BFC480533C15B483146AFFB0EA8_RuntimeMethod_var);
		// s_EventLookups.Clear();
		Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94* L_1 = ((EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var))->___s_EventLookups_1;
		Dictionary_2_Clear_m830E8E653AC12377AFE71073408B00520DF7968D(L_1, Dictionary_2_Clear_m830E8E653AC12377AFE71073408B00520DF7968D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.EventManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager__cctor_m8CC02D56B7E39A20FE5762F6156AD901D8D5D64F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F4744042B9FE2A7661DEBF8C0E9D7BF7CBD19F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDF8322CFD96BE1EEAB299A3F8789DC824EF3997D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<Type, Action<GameEvent>> s_Events = new Dictionary<Type, Action<GameEvent>>();
		Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7* L_0 = (Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7*)il2cpp_codegen_object_new(Dictionary_2_t4533E99B8DAA78AB757452E59CEC7B4DFFBE7AB7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3F4744042B9FE2A7661DEBF8C0E9D7BF7CBD19F2(L_0, Dictionary_2__ctor_m3F4744042B9FE2A7661DEBF8C0E9D7BF7CBD19F2_RuntimeMethod_var);
		((EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var))->___s_Events_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var))->___s_Events_0), (void*)L_0);
		// static readonly Dictionary<Delegate, Action<GameEvent>> s_EventLookups = new Dictionary<Delegate, Action<GameEvent>>();
		Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94* L_1 = (Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94*)il2cpp_codegen_object_new(Dictionary_2_tB18BA11C0BD1FAAB89A45C95FDC3AD7A77251C94_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDF8322CFD96BE1EEAB299A3F8789DC824EF3997D(L_1, Dictionary_2__ctor_mDF8322CFD96BE1EEAB299A3F8789DC824EF3997D_RuntimeMethod_var);
		((EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var))->___s_EventLookups_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var))->___s_EventLookups_1), (void*)L_1);
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
// System.String Unity.LEGO.Game.GameFlowManager::get_PreviousScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameFlowManager_get_PreviousScene_m7D3D0A1705F9732A60332D9225666CA6B80A2A4E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PreviousScene { get; private set; }
		String_t* L_0 = ((GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var))->___U3CPreviousSceneU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::set_PreviousScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_set_PreviousScene_mB3ECDFCE746483439FB49BD2D8E72C41704AF6FA (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PreviousScene { get; private set; }
		String_t* L_0 = ___0_value;
		((GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var))->___U3CPreviousSceneU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var))->___U3CPreviousSceneU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.LEGO.Game.GameFlowManager::get_GameIsEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameFlowManager_get_GameIsEnding_m2263498FC5492CD22450A985D2CBFCCC9529A363 (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = __this->___U3CGameIsEndingU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::set_GameIsEnding(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_set_GameIsEnding_m81FCE77E4B2B6B7E9A309003398E3E6AD0B03330 (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CGameIsEndingU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_Awake_mC0A1BE0F07F734B36EC31AD0F4883EC0D3286B1D (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_AddListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_m5AD76F137D3E4AAD669EE91CB731EB47F9EEA7B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_OnGameOver_mD34D6B71144E05DC22B882F69C60EEBE6F1E23B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.AddListener<GameOverEvent>(OnGameOver);
		Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25* L_0 = (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25*)il2cpp_codegen_object_new(Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25_il2cpp_TypeInfo_var);
		Action_1__ctor_mFF0A38EBDD4F11851168370A7710BB2B22313A8C(L_0, __this, (intptr_t)((void*)GameFlowManager_OnGameOver_mD34D6B71144E05DC22B882F69C60EEBE6F1E23B8_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_AddListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_m5AD76F137D3E4AAD669EE91CB731EB47F9EEA7B6(L_0, EventManager_AddListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_m5AD76F137D3E4AAD669EE91CB731EB47F9EEA7B6_RuntimeMethod_var);
		// m_FreeLookCamera = FindObjectOfType<CinemachineFreeLook>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_1;
		L_1 = Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3(Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3_RuntimeMethod_var);
		__this->___m_FreeLookCamera_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreeLookCamera_13), (void*)L_1);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Camera.main.depthTextureMode = DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_2, 1, NULL);
		// if (m_FreeLookCamera)
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_3 = __this->___m_FreeLookCamera_13;
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0090;
		}
	}
	{
		// m_ControllerAxisXName = m_FreeLookCamera.m_XAxis.m_InputAxisName;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_5 = __this->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_6 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_5->___m_XAxis_36);
		String_t* L_7 = L_6->___m_InputAxisName_5;
		__this->___m_ControllerAxisXName_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ControllerAxisXName_14), (void*)L_7);
		// m_ControllerAxisYName = m_FreeLookCamera.m_YAxis.m_InputAxisName;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_8 = __this->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_9 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_8->___m_YAxis_34);
		String_t* L_10 = L_9->___m_InputAxisName_5;
		__this->___m_ControllerAxisYName_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ControllerAxisYName_15), (void*)L_10);
		// m_FreeLookCamera.m_XAxis.m_InputAxisName = "";
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_11 = __this->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_12 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_11->___m_XAxis_36);
		L_12->___m_InputAxisName_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___m_InputAxisName_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// m_FreeLookCamera.m_YAxis.m_InputAxisName = "";
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_13 = __this->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_14 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_13->___m_YAxis_34);
		L_14->___m_InputAxisName_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___m_InputAxisName_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_Start_m28D07E4526AD1F1A636172C3B8E5974420B76F2A (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(StartGameLockLookRotation());
		RuntimeObject* L_0;
		L_0 = GameFlowManager_StartGameLockLookRotation_m4AEAAF7D8C0261333A729FA153893ECDE262EDE7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// VariableManager.Reset();
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		VariableManager_Reset_mFBF3F6BAA541983B86E5E09D3353FD17DB53328A(NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::StartGameLockLookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_StartGameLockLookRotation_m4AEAAF7D8C0261333A729FA153893ECDE262EDE7 (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* L_0 = (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD*)il2cpp_codegen_object_new(U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD_il2cpp_TypeInfo_var);
		U3CStartGameLockLookRotationU3Ed__20__ctor_m0C29AB397F90B2951B57090AEFF6BA1DD34D1FEF(L_0, 0, NULL);
		U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_Update_mBFED3D0DAB85E9370D0CC16A0304477EAB847F64 (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (GameIsEnding)
		bool L_0;
		L_0 = GameFlowManager_get_GameIsEnding_m2263498FC5492CD22450A985D2CBFCCC9529A363_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (Time.time >= m_GameOverSceneTime)
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___m_GameOverSceneTime_11;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0038;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// PreviousScene = SceneManager.GetActiveScene().name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		GameFlowManager_set_PreviousScene_mB3ECDFCE746483439FB49BD2D8E72C41704AF6FA_inline(L_4, NULL);
		// SceneManager.LoadScene(m_GameOverSceneToLoad);
		String_t* L_5 = __this->___m_GameOverSceneToLoad_12;
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_5, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::OnGameOver(Unity.LEGO.Game.GameOverEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_OnGameOver_mD34D6B71144E05DC22B882F69C60EEBE6F1E23B8 (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameIsEnding)
		bool L_0;
		L_0 = GameFlowManager_get_GameIsEnding_m2263498FC5492CD22450A985D2CBFCCC9529A363_inline(__this, NULL);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		// GameIsEnding = true;
		GameFlowManager_set_GameIsEnding_m81FCE77E4B2B6B7E9A309003398E3E6AD0B03330_inline(__this, (bool)1, NULL);
		// if (evt.Win)
		GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* L_1 = ___0_evt;
		bool L_2 = L_1->___Win_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// m_GameOverSceneToLoad = m_WinScene;
		String_t* L_3 = __this->___m_WinScene_4;
		__this->___m_GameOverSceneToLoad_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameOverSceneToLoad_12), (void*)L_3);
		// m_GameOverSceneTime = Time.time + m_WinSceneDelay;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_5 = __this->___m_WinSceneDelay_5;
		__this->___m_GameOverSceneTime_11 = ((float)il2cpp_codegen_add(L_4, L_5));
		// StartCoroutine(ZoomInOnPlayer());
		RuntimeObject* L_6;
		L_6 = GameFlowManager_ZoomInOnPlayer_mD4085F049F96D3BBFF3D01F22E37BBE3F5CE203C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		return;
	}

IL_0043:
	{
		// m_GameOverSceneToLoad = m_LoseScene;
		String_t* L_8 = __this->___m_LoseScene_6;
		__this->___m_GameOverSceneToLoad_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameOverSceneToLoad_12), (void*)L_8);
		// m_GameOverSceneTime = Time.time + m_LoseSceneDelay;
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_10 = __this->___m_LoseSceneDelay_7;
		__this->___m_GameOverSceneTime_11 = ((float)il2cpp_codegen_add(L_9, L_10));
		// if (m_FreeLookCamera)
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_11 = __this->___m_FreeLookCamera_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		// m_FreeLookCamera.Follow = null;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_13 = __this->___m_FreeLookCamera_13;
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_13, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_OnDestroy_m1AE75D664D8E52CD5DFCF163F47749A4993D7A75 (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_RemoveListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_mEB349C9711B27BAC41B048AAC20D584AEC079DBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_OnGameOver_mD34D6B71144E05DC22B882F69C60EEBE6F1E23B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveListener<GameOverEvent>(OnGameOver);
		Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25* L_0 = (Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25*)il2cpp_codegen_object_new(Action_1_tD15A142EED738A5D17A11FCF9EE277658ABCDE25_il2cpp_TypeInfo_var);
		Action_1__ctor_mFF0A38EBDD4F11851168370A7710BB2B22313A8C(L_0, __this, (intptr_t)((void*)GameFlowManager_OnGameOver_mD34D6B71144E05DC22B882F69C60EEBE6F1E23B8_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_RemoveListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_mEB349C9711B27BAC41B048AAC20D584AEC079DBA(L_0, EventManager_RemoveListener_TisGameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33_mEB349C9711B27BAC41B048AAC20D584AEC079DBA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::ZoomInOnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_ZoomInOnPlayer_mD4085F049F96D3BBFF3D01F22E37BBE3F5CE203C (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* L_0 = (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81*)il2cpp_codegen_object_new(U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81_il2cpp_TypeInfo_var);
		U3CZoomInOnPlayerU3Ed__24__ctor_m6596D3B641BDC82410DBE8C15E1B8FEAA2906222(L_0, 0, NULL);
		U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager__ctor_m4BA3C6FD2C59AC7DFFC537A0E5BA0A80316854AB (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130DEAA16B60191B0C01B858BD3A42CFAB92E651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9379DD12FD88E583CE1A7A833443D561376FB07B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string m_WinScene = "Menu Win";
		__this->___m_WinScene_4 = _stringLiteral130DEAA16B60191B0C01B858BD3A42CFAB92E651;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WinScene_4), (void*)_stringLiteral130DEAA16B60191B0C01B858BD3A42CFAB92E651);
		// float m_WinSceneDelay = 5.0f;
		__this->___m_WinSceneDelay_5 = (5.0f);
		// string m_LoseScene = "Menu Lose";
		__this->___m_LoseScene_6 = _stringLiteral9379DD12FD88E583CE1A7A833443D561376FB07B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoseScene_6), (void*)_stringLiteral9379DD12FD88E583CE1A7A833443D561376FB07B);
		// float m_LoseSceneDelay = 3.0f;
		__this->___m_LoseSceneDelay_7 = (3.0f);
		// float m_StartGameLockedControllerTimer = 0.3f;
		__this->___m_StartGameLockedControllerTimer_8 = (0.300000012f);
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
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20__ctor_m0C29AB397F90B2951B57090AEFF6BA1DD34D1FEF (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20_System_IDisposable_Dispose_mC54DD01EEE4403EAF77EE55856B0A7BD51EEF625 (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGameLockLookRotationU3Ed__20_MoveNext_m597839F8793DCA8C8BC7445C040FD5C4F4880FF1 (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_008c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0093;
	}

IL_0020:
	{
		// m_StartGameLockedControllerTimer -= Time.deltaTime;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_4 = V_1;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_5 = V_1;
		float L_6 = L_5->___m_StartGameLockedControllerTimer_8;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_4->___m_StartGameLockedControllerTimer_8 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// if (m_StartGameLockedControllerTimer < 0.0f)
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_8 = V_1;
		float L_9 = L_8->___m_StartGameLockedControllerTimer_8;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// if (m_FreeLookCamera)
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_10 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_11 = L_10->___m_FreeLookCamera_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// m_FreeLookCamera.m_XAxis.m_InputAxisName = m_ControllerAxisXName;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_13 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_14 = L_13->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_15 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_14->___m_XAxis_36);
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_16 = V_1;
		String_t* L_17 = L_16->___m_ControllerAxisXName_14;
		L_15->___m_InputAxisName_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___m_InputAxisName_5), (void*)L_17);
		// m_FreeLookCamera.m_YAxis.m_InputAxisName = m_ControllerAxisYName;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_18 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_19 = L_18->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_20 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_19->___m_YAxis_34);
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_21 = V_1;
		String_t* L_22 = L_21->___m_ControllerAxisYName_15;
		L_20->___m_InputAxisName_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___m_InputAxisName_5), (void*)L_22);
	}

IL_0078:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_23 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_23, NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0093:
	{
		// while (m_StartGameLockedControllerTimer > 0.0f)
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_24 = V_1;
		float L_25 = L_24->___m_StartGameLockedControllerTimer_8;
		if ((((float)L_25) > ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameLockLookRotationU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA89DA63A19CE93C9A295F5908FB49A271D625EC2 (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_Reset_m568D78E29E5E7B6912426AD008BF0F37387744F3 (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_Reset_m568D78E29E5E7B6912426AD008BF0F37387744F3_RuntimeMethod_var)));
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_get_Current_mCDFD66D21D7428B5E4A34C538915D9466979B22C (U3CStartGameLockLookRotationU3Ed__20_t004A375CFF04127468B522A817EA7117B58DE3CD* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24__ctor_m6596D3B641BDC82410DBE8C15E1B8FEAA2906222 (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24_System_IDisposable_Dispose_mEA62CB40115F969F0DDE286D05E267EB862C6D8D (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CZoomInOnPlayerU3Ed__24_MoveNext_m6F357AED21C5F46EC37B05EE85290037EF85B965 (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0135;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (m_FreeLookCamera)
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_4 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_5 = L_4->___m_FreeLookCamera_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_014c;
		}
	}
	{
		// m_FreeLookCamera.m_XAxis.m_InputAxisValue = 0.0f;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_7 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_8 = L_7->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_9 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_8->___m_XAxis_36);
		L_9->___m_InputAxisValue_6 = (0.0f);
		// m_FreeLookCamera.m_YAxis.m_InputAxisValue = 0.0f;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_10 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_11 = L_10->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_12 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_11->___m_YAxis_34);
		L_12->___m_InputAxisValue_6 = (0.0f);
		// m_FreeLookCamera.m_XAxis.m_InputAxisName = "";
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_13 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_14 = L_13->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_15 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_14->___m_XAxis_36);
		L_15->___m_InputAxisName_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___m_InputAxisName_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// m_FreeLookCamera.m_YAxis.m_InputAxisName = "";
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_16 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_17 = L_16->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_18 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_17->___m_YAxis_34);
		L_18->___m_InputAxisName_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___m_InputAxisName_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// var zoomFactor = 1.0f;
		__this->___U3CzoomFactorU3E5__2_3 = (1.0f);
		// float middleRigZoomFactor = m_FreeLookCamera.m_Orbits[1].m_Radius;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_19 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_20 = L_19->___m_FreeLookCamera_13;
		OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28* L_21 = L_20->___m_Orbits_41;
		float L_22 = ((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___m_Radius_1;
		__this->___U3CmiddleRigZoomFactorU3E5__3_4 = L_22;
		goto IL_013c;
	}

IL_00b1:
	{
		// m_FreeLookCamera.m_YAxis.Value = Mathf.Lerp(m_FreeLookCamera.m_YAxis.Value, 0.6f, 3.0f * Time.deltaTime);    // Ensure the vertical axis reset to a reasonable value (0.6 is the default prefab value) with a simple lerp
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_23 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_24 = L_23->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_25 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_24->___m_YAxis_34);
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_26 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_27 = L_26->___m_FreeLookCamera_13;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_28 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_27->___m_YAxis_34);
		float L_29 = L_28->___Value_0;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_31;
		L_31 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_29, (0.600000024f), ((float)il2cpp_codegen_multiply((3.0f), L_30)), NULL);
		L_25->___Value_0 = L_31;
		// zoomFactor -= 0.1f * Time.deltaTime;
		float L_32 = __this->___U3CzoomFactorU3E5__2_3;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CzoomFactorU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_32, ((float)il2cpp_codegen_multiply((0.100000001f), L_33))));
		// m_FreeLookCamera.m_Orbits[1].m_Radius = middleRigZoomFactor * zoomFactor;
		GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* L_34 = V_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_35 = L_34->___m_FreeLookCamera_13;
		OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28* L_36 = L_35->___m_Orbits_41;
		float L_37 = __this->___U3CmiddleRigZoomFactorU3E5__3_4;
		float L_38 = __this->___U3CzoomFactorU3E5__2_3;
		((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___m_Radius_1 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_39 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_39, NULL);
		__this->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0135:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_013c:
	{
		// while (zoomFactor > 0.3f)
		float L_40 = __this->___U3CzoomFactorU3E5__2_3;
		if ((((float)L_40) > ((float)(0.300000012f))))
		{
			goto IL_00b1;
		}
	}

IL_014c:
	{
		// }
		return (bool)0;
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CZoomInOnPlayerU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB51D253094BDEA96B5123ECBC71C92D680662BA2 (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_Reset_mD7B172EF4DD2E5E946664EA6E07C6786788BC3EF (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_Reset_mD7B172EF4DD2E5E946664EA6E07C6786788BC3EF_RuntimeMethod_var)));
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_get_Current_m291532B91612F80BAD0AD140169619C54BC7300B (U3CZoomInOnPlayerU3Ed__24_t1409676089E30B26B070908F0825108D5BDD6C81* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LEGO.Game.InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_mFC1607009CD0EB856E8BE36CB09CD1B2F6BBAFD9 (InputManager_t2E87FBD618B38459C454BD9412465CF9BD398768* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_AddListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mEEAA2269BC3CEBDD7F2DD5BE72AF84C950CFD420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_OnLookSensitivityUpdate_mFF410FB896DD63106C50B9A4932E41B88D4F36F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FreeLookCamera = FindObjectOfType<CinemachineFreeLook>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_0;
		L_0 = Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3(Object_FindObjectOfType_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m22AB75DD2BD1C55FE8ED4BFC8D759DB16F2B2DE3_RuntimeMethod_var);
		__this->___m_FreeLookCamera_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreeLookCamera_8), (void*)L_0);
		// EventManager.AddListener<LookSensitivityUpdateEvent>(OnLookSensitivityUpdate);
		Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9* L_1 = (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9*)il2cpp_codegen_object_new(Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9_il2cpp_TypeInfo_var);
		Action_1__ctor_m6122A99124F53CF4C204C8CAAFE5E8E8A06D38DE(L_1, __this, (intptr_t)((void*)InputManager_OnLookSensitivityUpdate_mFF410FB896DD63106C50B9A4932E41B88D4F36F1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_AddListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mEEAA2269BC3CEBDD7F2DD5BE72AF84C950CFD420(L_1, EventManager_AddListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mEEAA2269BC3CEBDD7F2DD5BE72AF84C950CFD420_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.InputManager::OnLookSensitivityUpdate(Unity.LEGO.Game.LookSensitivityUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnLookSensitivityUpdate_mFF410FB896DD63106C50B9A4932E41B88D4F36F1 (InputManager_t2E87FBD618B38459C454BD9412465CF9BD398768* __this, LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_FreeLookCamera)
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_0 = __this->___m_FreeLookCamera_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		// m_FreeLookCamera.m_XAxis.m_MaxSpeed = m_HorizontalLookMinimumSensitivity + (m_HorizontalLookSensitivityStep * evt.Value);
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_2 = __this->___m_FreeLookCamera_8;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_3 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_2->___m_XAxis_36);
		float L_4 = __this->___m_HorizontalLookMinimumSensitivity_6;
		float L_5 = __this->___m_HorizontalLookSensitivityStep_7;
		LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411* L_6 = ___0_evt;
		float L_7 = L_6->___Value_0;
		L_3->___m_MaxSpeed_2 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, L_7))));
		// m_FreeLookCamera.m_YAxis.m_MaxSpeed = m_VerticalLookMinSensitivity + (m_VerticalLookSensitivityStep * evt.Value);
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_8 = __this->___m_FreeLookCamera_8;
		AxisState_t6996FE8143104E02683986C908C18B0F62595736* L_9 = (AxisState_t6996FE8143104E02683986C908C18B0F62595736*)(&L_8->___m_YAxis_34);
		float L_10 = __this->___m_VerticalLookMinSensitivity_4;
		float L_11 = __this->___m_VerticalLookSensitivityStep_5;
		LookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411* L_12 = ___0_evt;
		float L_13 = L_12->___Value_0;
		L_9->___m_MaxSpeed_2 = ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_11, L_13))));
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.InputManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnDestroy_m7331FD3AA18E6F77CE0D0A9383F1746B97DB6A6A (InputManager_t2E87FBD618B38459C454BD9412465CF9BD398768* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_RemoveListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mB8259411AABABCFF65D93D031E9FC1A8227354C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_OnLookSensitivityUpdate_mFF410FB896DD63106C50B9A4932E41B88D4F36F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveListener<LookSensitivityUpdateEvent>(OnLookSensitivityUpdate);
		Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9* L_0 = (Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9*)il2cpp_codegen_object_new(Action_1_t71B9EAAD1C67440F73F9056D3C7AFC7F39E807F9_il2cpp_TypeInfo_var);
		Action_1__ctor_m6122A99124F53CF4C204C8CAAFE5E8E8A06D38DE(L_0, __this, (intptr_t)((void*)InputManager_OnLookSensitivityUpdate_mFF410FB896DD63106C50B9A4932E41B88D4F36F1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_RemoveListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mB8259411AABABCFF65D93D031E9FC1A8227354C7(L_0, EventManager_RemoveListener_TisLookSensitivityUpdateEvent_t53AEC700FED0173B25BC3718CD127B7A2D3A8411_mB8259411AABABCFF65D93D031E9FC1A8227354C7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m4D90FBBFD5ED18491A597DFE88C38797A753DE43 (InputManager_t2E87FBD618B38459C454BD9412465CF9BD398768* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float m_VerticalLookMinSensitivity = 0.5f;
		__this->___m_VerticalLookMinSensitivity_4 = (0.5f);
		// [SerializeField, Range(0.25f, 1.0f)] float m_VerticalLookSensitivityStep = 0.25f;
		__this->___m_VerticalLookSensitivityStep_5 = (0.25f);
		// [SerializeField] float m_HorizontalLookMinimumSensitivity = 50.0f;
		__this->___m_HorizontalLookMinimumSensitivity_6 = (50.0f);
		// [SerializeField, Range(10.0f, 100.0f)] float m_HorizontalLookSensitivityStep = 50.0f;
		__this->___m_HorizontalLookSensitivityStep_7 = (50.0f);
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
// System.Void Unity.LEGO.Game.ObjectiveManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_Awake_m711B6EB0890B4C8345F76C6110E048D10DC993C9 (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t40E58381F48C7591FC62FF720068927866078FCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_AddListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m9071812C334E5855F7B4F1E4E0E807CE8B550E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD11669E815907408B115A82246E00892C219015F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveManager_OnObjectiveAdded_m3196EAA52A4B98D4E1871C085EE279283EE075CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Objectives = new List<IObjective>();
		List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* L_0 = (List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9*)il2cpp_codegen_object_new(List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9_il2cpp_TypeInfo_var);
		List_1__ctor_mD11669E815907408B115A82246E00892C219015F(L_0, List_1__ctor_mD11669E815907408B115A82246E00892C219015F_RuntimeMethod_var);
		__this->___m_Objectives_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Objectives_4), (void*)L_0);
		// EventManager.AddListener<ObjectiveAdded>(OnObjectiveAdded);
		Action_1_t40E58381F48C7591FC62FF720068927866078FCC* L_1 = (Action_1_t40E58381F48C7591FC62FF720068927866078FCC*)il2cpp_codegen_object_new(Action_1_t40E58381F48C7591FC62FF720068927866078FCC_il2cpp_TypeInfo_var);
		Action_1__ctor_m6B062F7E4717CCF131BAE713E6017DB192D126BD(L_1, __this, (intptr_t)((void*)ObjectiveManager_OnObjectiveAdded_m3196EAA52A4B98D4E1871C085EE279283EE075CE_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_AddListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m9071812C334E5855F7B4F1E4E0E807CE8B550E81(L_1, EventManager_AddListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m9071812C334E5855F7B4F1E4E0E807CE8B550E81_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::OnObjectiveAdded(Unity.LEGO.Game.ObjectiveAdded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_OnObjectiveAdded_m3196EAA52A4B98D4E1871C085EE279283EE075CE (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD8E74E1F07C276A1DD21A0326B99DFE190A3F224_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveManager_OnProgress_m352270248BF07B090361A93F8A66EC9AFC338BD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Objectives.Add(evt.Objective);
		List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* L_0 = __this->___m_Objectives_4;
		ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90* L_1 = ___0_evt;
		RuntimeObject* L_2 = L_1->___Objective_0;
		List_1_Add_mD8E74E1F07C276A1DD21A0326B99DFE190A3F224_inline(L_0, L_2, List_1_Add_mD8E74E1F07C276A1DD21A0326B99DFE190A3F224_RuntimeMethod_var);
		// evt.Objective.OnProgress += OnProgress;
		ObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90* L_3 = ___0_evt;
		RuntimeObject* L_4 = L_3->___Objective_0;
		RuntimeObject* L_5 = L_4;
		Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A* L_6;
		L_6 = InterfaceFuncInvoker0< Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A* >::Invoke(6 /* System.Action`1<Unity.LEGO.Game.IObjective> Unity.LEGO.Game.IObjective::get_OnProgress() */, IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var, L_5);
		Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A* L_7 = (Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A*)il2cpp_codegen_object_new(Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A_il2cpp_TypeInfo_var);
		Action_1__ctor_mD71D26EEB9F2B7F4D9041F059D204734E7547835(L_7, __this, (intptr_t)((void*)ObjectiveManager_OnProgress_m352270248BF07B090361A93F8A66EC9AFC338BD0_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_6, L_7, NULL);
		InterfaceActionInvoker1< Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A* >::Invoke(7 /* System.Void Unity.LEGO.Game.IObjective::set_OnProgress(System.Action`1<Unity.LEGO.Game.IObjective>) */, IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var, L_5, ((Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A*)Castclass((RuntimeObject*)L_8, Action_1_tAF7A00056B5451EF280643B4CB697930B0D58B5A_il2cpp_TypeInfo_var)));
		// m_UpdateStatus = true;
		__this->___m_UpdateStatus_5 = (bool)1;
		// m_Won = false;
		__this->___m_Won_6 = (bool)0;
		// m_Lost = false;
		__this->___m_Lost_7 = (bool)0;
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::OnProgress(Unity.LEGO.Game.IObjective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_OnProgress_m352270248BF07B090361A93F8A66EC9AFC338BD0 (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, RuntimeObject* ___0__, const RuntimeMethod* method) 
{
	{
		// m_UpdateStatus = true;
		__this->___m_UpdateStatus_5 = (bool)1;
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::UpdateGameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_UpdateGameStatus_m38C3114A1C4A091F085EC1C22FCF4F4F8D3E05DE (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m46204420129D264C2CC1DCE62231CEBB66D6A530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m16441B641EC300A7FD6B9C157643E52A7466CF79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01FFB8682527A055EF25296B7863CC6739ECC3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Exists_m0CC74479D9E0DA609C4DDD52F80FCB86F6902034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m48FBAD7CC29B2670E0890E8DDE64F6891F52579B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateGameStatusU3Eb__7_0_mBE450CC70E27A5A94725AAFC4128484A40025A7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* G_B2_0 = NULL;
	List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* G_B2_1 = NULL;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B2_2 = NULL;
	Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* G_B1_0 = NULL;
	List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* G_B1_1 = NULL;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B1_2 = NULL;
	bool G_B6_0 = false;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B6_1 = NULL;
	bool G_B5_0 = false;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	bool G_B7_1 = false;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B7_2 = NULL;
	bool G_B9_0 = false;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B9_1 = NULL;
	bool G_B8_0 = false;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	bool G_B10_1 = false;
	ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* G_B10_2 = NULL;
	{
		// m_Won = m_Objectives.Exists(objective => !objective.m_Lose);
		List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* L_0 = __this->___m_Objectives_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var);
		Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* L_1 = ((U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var);
		U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319* L_3 = ((U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* L_4 = (Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D*)il2cpp_codegen_object_new(Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1C0C6C42D54CE72B06735832C2C4C3F31C5CB1C4(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CUpdateGameStatusU3Eb__7_0_mBE450CC70E27A5A94725AAFC4128484A40025A7A_RuntimeMethod_var), NULL);
		Predicate_1_t171C494410F99E9A491E654AFC1BEA71374BF34D* L_5 = L_4;
		((U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		bool L_6;
		L_6 = List_1_Exists_m0CC74479D9E0DA609C4DDD52F80FCB86F6902034(G_B2_1, G_B2_0, List_1_Exists_m0CC74479D9E0DA609C4DDD52F80FCB86F6902034_RuntimeMethod_var);
		G_B2_2->___m_Won_6 = L_6;
		// foreach (IObjective objective in m_Objectives)
		List_1_tD1FA7DA399792C91D2A4B1DABB36C444B9F00DB9* L_7 = __this->___m_Objectives_4;
		Enumerator_tB07BF4CF69C35A15B7A366F13E915A46879EDA27 L_8;
		L_8 = List_1_GetEnumerator_m48FBAD7CC29B2670E0890E8DDE64F6891F52579B(L_7, List_1_GetEnumerator_m48FBAD7CC29B2670E0890E8DDE64F6891F52579B_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m46204420129D264C2CC1DCE62231CEBB66D6A530((&V_0), Enumerator_Dispose_m46204420129D264C2CC1DCE62231CEBB66D6A530_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0082_1;
			}

IL_003e_1:
			{
				// foreach (IObjective objective in m_Objectives)
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_m01FFB8682527A055EF25296B7863CC6739ECC3A6_inline((&V_0), Enumerator_get_Current_m01FFB8682527A055EF25296B7863CC6739ECC3A6_RuntimeMethod_var);
				V_1 = L_9;
				// m_Won &= (objective.IsCompleted || objective.m_Lose);
				bool L_10 = __this->___m_Won_6;
				RuntimeObject* L_11 = V_1;
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.LEGO.Game.IObjective::get_IsCompleted() */, IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var, L_11);
				G_B5_0 = L_10;
				G_B5_1 = __this;
				if (L_12)
				{
					G_B6_0 = L_10;
					G_B6_1 = __this;
					goto IL_005d_1;
				}
			}
			{
				RuntimeObject* L_13 = V_1;
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.LEGO.Game.IObjective::get_m_Lose() */, IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var, L_13);
				G_B7_0 = ((int32_t)(L_14));
				G_B7_1 = G_B5_0;
				G_B7_2 = G_B5_1;
				goto IL_005e_1;
			}

IL_005d_1:
			{
				G_B7_0 = 1;
				G_B7_1 = G_B6_0;
				G_B7_2 = G_B6_1;
			}

IL_005e_1:
			{
				G_B7_2->___m_Won_6 = (bool)((int32_t)((int32_t)G_B7_1&G_B7_0));
				// m_Lost |= (objective.IsCompleted && objective.m_Lose);
				bool L_15 = __this->___m_Lost_7;
				RuntimeObject* L_16 = V_1;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.LEGO.Game.IObjective::get_IsCompleted() */, IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var, L_16);
				G_B8_0 = L_15;
				G_B8_1 = __this;
				if (!L_17)
				{
					G_B9_0 = L_15;
					G_B9_1 = __this;
					goto IL_007b_1;
				}
			}
			{
				RuntimeObject* L_18 = V_1;
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.LEGO.Game.IObjective::get_m_Lose() */, IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var, L_18);
				G_B10_0 = ((int32_t)(L_19));
				G_B10_1 = G_B8_0;
				G_B10_2 = G_B8_1;
				goto IL_007c_1;
			}

IL_007b_1:
			{
				G_B10_0 = 0;
				G_B10_1 = G_B9_0;
				G_B10_2 = G_B9_1;
			}

IL_007c_1:
			{
				G_B10_2->___m_Lost_7 = (bool)((int32_t)((int32_t)G_B10_1|G_B10_0));
			}

IL_0082_1:
			{
				// foreach (IObjective objective in m_Objectives)
				bool L_20;
				L_20 = Enumerator_MoveNext_m16441B641EC300A7FD6B9C157643E52A7466CF79((&V_0), Enumerator_MoveNext_m16441B641EC300A7FD6B9C157643E52A7466CF79_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// m_UpdateStatus = false;
		__this->___m_UpdateStatus_5 = (bool)0;
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_Update_mEF90C3EC4705B4CCC405A068977388CD4FDE950B (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* G_B4_0 = NULL;
	GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* G_B5_1 = NULL;
	{
		// if (m_Won || m_Lost)
		bool L_0 = __this->___m_Won_6;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_Lost_7;
		if (!L_1)
		{
			goto IL_003e;
		}
	}

IL_0010:
	{
		// Events.GameOverEvent.Win = m_Won || !m_Lost;
		il2cpp_codegen_runtime_class_init_inline(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
		GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* L_2 = ((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___GameOverEvent_3;
		bool L_3 = __this->___m_Won_6;
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0028;
		}
	}
	{
		bool L_4 = __this->___m_Lost_7;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0029:
	{
		G_B5_1->___Win_0 = (bool)G_B5_0;
		// EventManager.Broadcast(Events.GameOverEvent);
		il2cpp_codegen_runtime_class_init_inline(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
		GameOverEvent_t715D5FE240E602B2DF16B2AC47605C61711F9E33* L_5 = ((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___GameOverEvent_3;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_Broadcast_m912D1D3B71A0B23606EC81BD32E1914933CCCC60(L_5, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_003e:
	{
		// if (m_UpdateStatus)
		bool L_6 = __this->___m_UpdateStatus_5;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// UpdateGameStatus();
		ObjectiveManager_UpdateGameStatus_m38C3114A1C4A091F085EC1C22FCF4F4F8D3E05DE(__this, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_OnDestroy_m5E46AD773B0E31BDF125190E00105954FE8984E1 (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t40E58381F48C7591FC62FF720068927866078FCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_RemoveListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m08B7959A89839ABC05E6CFCE4ADFC0A8E53CF24F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveManager_OnObjectiveAdded_m3196EAA52A4B98D4E1871C085EE279283EE075CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveListener<ObjectiveAdded>(OnObjectiveAdded);
		Action_1_t40E58381F48C7591FC62FF720068927866078FCC* L_0 = (Action_1_t40E58381F48C7591FC62FF720068927866078FCC*)il2cpp_codegen_object_new(Action_1_t40E58381F48C7591FC62FF720068927866078FCC_il2cpp_TypeInfo_var);
		Action_1__ctor_m6B062F7E4717CCF131BAE713E6017DB192D126BD(L_0, __this, (intptr_t)((void*)ObjectiveManager_OnObjectiveAdded_m3196EAA52A4B98D4E1871C085EE279283EE075CE_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_RemoveListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m08B7959A89839ABC05E6CFCE4ADFC0A8E53CF24F(L_0, EventManager_RemoveListener_TisObjectiveAdded_t48B4EF2F3CF132C18CBB3273206706423A91CC90_m08B7959A89839ABC05E6CFCE4ADFC0A8E53CF24F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager__ctor_mFA5524989ED47CB3795AEF0760B78821D4F12AB8 (ObjectiveManager_tDF9A11B047D9482964B988EC493D2E9204B50D90* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LEGO.Game.ObjectiveManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m18D159C0C5C9F0AF067A07146D6C572E63611CDD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319* L_0 = (U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319*)il2cpp_codegen_object_new(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC36274E49245412F678B320513B1E95795F68F4E(L_0, NULL);
		((U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC36274E49245412F678B320513B1E95795F68F4E (U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.LEGO.Game.ObjectiveManager/<>c::<UpdateGameStatus>b__7_0(Unity.LEGO.Game.IObjective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateGameStatusU3Eb__7_0_mBE450CC70E27A5A94725AAFC4128484A40025A7A (U3CU3Ec_t68E8AC93413622653DE0A2C970C6BEBCA78AC319* __this, RuntimeObject* ___0_objective, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Won = m_Objectives.Exists(objective => !objective.m_Lose);
		RuntimeObject* L_0 = ___0_objective;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.LEGO.Game.IObjective::get_m_Lose() */, IObjective_t59719DEC3BDC6348815994198F7CC185F87B2596_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void Unity.LEGO.Game.VariableManager::RegisterVariable(Unity.LEGO.Game.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_RegisterVariable_mD471D2BC519D46F7BBA69741BD3FE8231F4D2D41 (Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___0_variable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (variable && !s_RegisteredVariables.ContainsKey(variable))
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_0 = ___0_variable;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_2 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_3 = ___0_variable;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090(L_2, L_3, Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		// s_RegisteredVariables[variable] = variable.InitialValue;
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_5 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_6 = ___0_variable;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_7 = ___0_variable;
		int32_t L_8 = L_7->___InitialValue_5;
		Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41(L_5, L_6, L_8, Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41_RuntimeMethod_var);
		// VariableAdded evt = Events.VariableAddedEvent;
		il2cpp_codegen_runtime_class_init_inline(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
		VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* L_9 = ((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___VariableAddedEvent_2;
		// evt.Variable = variable;
		VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* L_10 = L_9;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_11 = ___0_variable;
		L_10->___Variable_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___Variable_0), (void*)L_11);
		// EventManager.Broadcast(evt);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		EventManager_Broadcast_m912D1D3B71A0B23606EC81BD32E1914933CCCC60(L_10, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean Unity.LEGO.Game.VariableManager::IsVariableRegistered(Unity.LEGO.Game.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableManager_IsVariableRegistered_mE6A116C51ACDA146F87EA9129C7B4F479CE489DC (Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___0_variable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return variable && s_RegisteredVariables.ContainsKey(variable);
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_0 = ___0_variable;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_2 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_3 = ___0_variable;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090(L_2, L_3, Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Unity.LEGO.Game.VariableManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_Reset_mFBF3F6BAA541983B86E5E09D3353FD17DB53328A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m615129C485448B633F85221FFD33A480AD3AB506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C46818C5940E48B48F54C19E0EFBA01844004CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAA1104FE6093E643D12E6994CD0D3A1862398C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m90CA7E338F0B23D91C16AF85F5DA5AD423A676DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1E315871FD063515A03902DF6B87090664A72C82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m493CABD6CA35EE1C96F3885C350F1651489169AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* V_1 = NULL;
	{
		// var variables = new List<Variable>(s_RegisteredVariables.Keys);
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_0 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		KeyCollection_t21712EE77075AF11123E565B23E8896332290AAF* L_1;
		L_1 = Dictionary_2_get_Keys_m615129C485448B633F85221FFD33A480AD3AB506(L_0, Dictionary_2_get_Keys_m615129C485448B633F85221FFD33A480AD3AB506_RuntimeMethod_var);
		List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0* L_2 = (List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0*)il2cpp_codegen_object_new(List_1_t6D3E1B19249660AA42DCB26BE5F912097A6071A0_il2cpp_TypeInfo_var);
		List_1__ctor_m493CABD6CA35EE1C96F3885C350F1651489169AF(L_2, L_1, List_1__ctor_m493CABD6CA35EE1C96F3885C350F1651489169AF_RuntimeMethod_var);
		// foreach (var variable in variables)
		Enumerator_t832C7EF14B604F6FC36F7514C0F3994F6E70594D L_3;
		L_3 = List_1_GetEnumerator_m1E315871FD063515A03902DF6B87090664A72C82(L_2, List_1_GetEnumerator_m1E315871FD063515A03902DF6B87090664A72C82_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C46818C5940E48B48F54C19E0EFBA01844004CC((&V_0), Enumerator_Dispose_m6C46818C5940E48B48F54C19E0EFBA01844004CC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_0017_1:
			{
				// foreach (var variable in variables)
				Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_4;
				L_4 = Enumerator_get_Current_m90CA7E338F0B23D91C16AF85F5DA5AD423A676DA_inline((&V_0), Enumerator_get_Current_m90CA7E338F0B23D91C16AF85F5DA5AD423A676DA_RuntimeMethod_var);
				V_1 = L_4;
				// s_RegisteredVariables[variable] = variable.InitialValue;
				il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
				Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_5 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
				Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_6 = V_1;
				Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_7 = V_1;
				int32_t L_8 = L_7->___InitialValue_5;
				Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41(L_5, L_6, L_8, Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41_RuntimeMethod_var);
				// VariableAdded evt = Events.VariableAddedEvent;
				il2cpp_codegen_runtime_class_init_inline(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var);
				VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* L_9 = ((Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_StaticFields*)il2cpp_codegen_static_fields_for(Events_t377FF24A65867894B56872A9BB36604B20A4AE6B_il2cpp_TypeInfo_var))->___VariableAddedEvent_2;
				// evt.Variable = variable;
				VariableAdded_t640AE2560BB38D2ECC3A39E2388AA30E8B1C693D* L_10 = L_9;
				Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_11 = V_1;
				L_10->___Variable_0 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&L_10->___Variable_0), (void*)L_11);
				// EventManager.Broadcast(evt);
				il2cpp_codegen_runtime_class_init_inline(EventManager_t43025FED57CAF7B2AAAC8DBDD29D698A6478B88C_il2cpp_TypeInfo_var);
				EventManager_Broadcast_m912D1D3B71A0B23606EC81BD32E1914933CCCC60(L_10, NULL);
			}

IL_0041_1:
			{
				// foreach (var variable in variables)
				bool L_12;
				L_12 = Enumerator_MoveNext_mFAA1104FE6093E643D12E6994CD0D3A1862398C7((&V_0), Enumerator_MoveNext_mFAA1104FE6093E643D12E6994CD0D3A1862398C7_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Int32 Unity.LEGO.Game.VariableManager::GetValue(Unity.LEGO.Game.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VariableManager_GetValue_mEA5E12D7B95541C963215EF13E93293448D822E4 (Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___0_variable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m849FBA24BD9B5E011A8A3062EF5AB07BCBCF1EFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (variable && s_RegisteredVariables.ContainsKey(variable))
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_0 = ___0_variable;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_2 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_3 = ___0_variable;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090(L_2, L_3, Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return s_RegisteredVariables[variable];
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_5 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_6 = ___0_variable;
		int32_t L_7;
		L_7 = Dictionary_2_get_Item_m849FBA24BD9B5E011A8A3062EF5AB07BCBCF1EFA(L_5, L_6, Dictionary_2_get_Item_m849FBA24BD9B5E011A8A3062EF5AB07BCBCF1EFA_RuntimeMethod_var);
		return L_7;
	}

IL_0021:
	{
		// return 0;
		return 0;
	}
}
// System.Void Unity.LEGO.Game.VariableManager::SetValue(Unity.LEGO.Game.Variable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_SetValue_m885B134112A47A72AB6C34963ED515EFBFAF03AB (Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* ___0_variable, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B4_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B3_0 = NULL;
	{
		// if (variable && s_RegisteredVariables.ContainsKey(variable))
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_0 = ___0_variable;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_2 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_3 = ___0_variable;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090(L_2, L_3, Dictionary_2_ContainsKey_mAFC0A8A3DACC793D2FC6C4D2819A895D2F85D090_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// s_RegisteredVariables[variable] = value;
		il2cpp_codegen_runtime_class_init_inline(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_5 = ((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1;
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_6 = ___0_variable;
		int32_t L_7 = ___1_value;
		Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41(L_5, L_6, L_7, Dictionary_2_set_Item_m2139A6682DA246161274A7DA846A9EAA1D627C41_RuntimeMethod_var);
		// variable.OnUpdate?.Invoke(value);
		Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* L_8 = ___0_variable;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = L_8->___OnUpdate_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		int32_t L_11 = ___1_value;
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B4_0, L_11, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.VariableManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager__cctor_mA1F4C5D51F914F5D1BA8BF32EBB40D6AA034F2EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEE315C12A707BF1B9967D8A52C765CF50C76623B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<Variable, int> s_RegisteredVariables = new Dictionary<Variable, int>();
		Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6* L_0 = (Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6*)il2cpp_codegen_object_new(Dictionary_2_t0FAA447859DEAA70DF2843CB498F21B425505BA6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEE315C12A707BF1B9967D8A52C765CF50C76623B(L_0, Dictionary_2__ctor_mEE315C12A707BF1B9967D8A52C765CF50C76623B_RuntimeMethod_var);
		((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t9069CC9351FE49C24762F5E42A88E22A6B6827D1_il2cpp_TypeInfo_var))->___s_RegisteredVariables_1), (void*)L_0);
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
// System.Void Unity.LEGO.Game.Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variable__ctor_m78CEA92C1D4DCF1AF73AE1CF4B1143DEE362F807 (Variable_tE226E14E7A689ED2D193B4B40EDA94DECEB3957E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1AA2387EE710A45D5A5A0928EE825C909430D34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name = "Variable";
		__this->___Name_4 = _stringLiteralB1AA2387EE710A45D5A5A0928EE825C909430D34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_4), (void*)_stringLiteralB1AA2387EE710A45D5A5A0928EE825C909430D34);
		// public bool UseUI = true;
		__this->___UseUI_6 = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameFlowManager_get_GameIsEnding_m2263498FC5492CD22450A985D2CBFCCC9529A363_inline (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, const RuntimeMethod* method) 
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = __this->___U3CGameIsEndingU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_PreviousScene_mB3ECDFCE746483439FB49BD2D8E72C41704AF6FA_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PreviousScene { get; private set; }
		String_t* L_0 = ___0_value;
		((GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var))->___U3CPreviousSceneU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264_il2cpp_TypeInfo_var))->___U3CPreviousSceneU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_GameIsEnding_m81FCE77E4B2B6B7E9A309003398E3E6AD0B03330_inline (GameFlowManager_tD6BE578F424D37FE7C2897BD8722E544A597C264* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CGameIsEndingU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
