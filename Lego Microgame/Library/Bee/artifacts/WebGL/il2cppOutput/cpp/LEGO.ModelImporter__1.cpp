#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<LEGOModelImporter.Brick>
struct Action_1_t3E4524F9D7269113278FC7EB0E9C457629AF3AA4;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>
struct ICollection_1_t84FCA900CDD8DAD5EFFBD5C2362F72E7527537B4;
// System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>
struct IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Collider>
struct IEqualityComparer_1_t8B0F38FEDBDCD41E8338626B9114DF3410322BAD;
// System.Collections.Generic.IEqualityComparer`1<LEGOModelImporter.ConnectionField>
struct IEqualityComparer_1_t0C00CCF24972C8BC9A1D6D8E4519477189D19057;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,LEGOModelImporter.ModelGroupImportSettings>
struct KeyCollection_t2392A6C3702A20A64D51C91868A0AAFAD7383E0B;
// System.Collections.Generic.List`1<LEGOModelImporter.AxleField>
struct List_1_tC9924F5024C31DD0FC3CE714C62A120C394CB1DD;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>
struct List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655;
// System.Collections.Generic.List`1<LEGOModelImporter.FixedField>
struct List_1_t6F5CE8E49BC9CAECC5B8DF4A6E587DFBBA4D8988;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<LEGOModelImporter.Knob>
struct List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B;
// System.Collections.Generic.List`1<LEGOModelImporter.ModelGroupImportSettings>
struct List_1_tC5D5F26009698ED876F76FC1B50FEF7D9782E18D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<LEGOModelImporter.Part>
struct List_1_t5779719009EB22C5B814366C8B9BBC1EC43C2EB2;
// System.Collections.Generic.List`1<LEGOModelImporter.PlanarField>
struct List_1_t988DA20938C1965AA77BA17FEFA3565F60D6A8B4;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523;
// System.Collections.Generic.List`1<LEGOModelImporter.Tube>
struct List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// LEGOModelImporter.SerializableDictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>
struct SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4;
// LEGOModelImporter.SerializableDictionary`2<System.Int32,System.Object>
struct SerializableDictionary_2_t28519D929757DB42DFF6ECC007F7155F5F234C57;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LEGOModelImporter.ModelGroupImportSettings>
struct ValueCollection_t97BCB512B83D9BAEA4F76B1493B9C15BFD44486A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,LEGOModelImporter.ModelGroupImportSettings>[]
struct EntryU5BU5D_tEB8D90693C435B197F1603F36081A34B47E32F47;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Collider>[]
struct SlotU5BU5D_tFD1ED8602EB3B39B776AC7E6675E844223612CFB;
// System.Collections.Generic.HashSet`1/Slot<LEGOModelImporter.ConnectionField>[]
struct SlotU5BU5D_tB817BBCB8F50B4C6F5DE1B8DB8CB87BE4B061525;
// LEGOModelImporter.Brick[]
struct BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// LEGOModelImporter.CullingCameraConfig[]
struct CullingCameraConfigU5BU5D_tB88F895A41FBDAB7DAAD608A827F4FA1998423FF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// LEGOModelImporter.Knob[]
struct KnobU5BU5D_t6D270625A69FD2C392D78041966E95A53BA0CA89;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// LEGOModelImporter.PlanarFeature[]
struct PlanarFeatureU5BU5D_t2D22CAADB0CA38872C603FF4368F4D9EE6B8D601;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// LEGOModelImporter.Tube[]
struct TubeU5BU5D_t8AE1BB690E5913B4999B6E922E3C986009F70F65;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// LEGOModelImporter.BrickBuildingUtility/ConnectionResult[]
struct ConnectionResultU5BU5D_t447A28DD1D14FC69EF73E20B8969758947075907;
// LEGOModelImporter.Connection/ConnectionInteraction[]
struct ConnectionInteractionU5BU5D_t595D84905525D5A43CDF549BA8AC9BD493A6526C;
// LEGOModelImporter.PlanarField/ConnectionTuple[]
struct ConnectionTupleU5BU5D_t0B914CA85B1A848803CED588BCE14CA6107557FD;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// LEGOModelImporter.Brick
struct Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// LEGOModelImporter.Colliders
struct Colliders_tC03FE9574DD945AA497FAC45CCC16D0B0088D07F;
// LEGOModelImporter.CommonPart
struct CommonPart_t4FF2648223D44016514E21293324068120B56A0F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// LEGOModelImporter.ConnectionField
struct ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC;
// LEGOModelImporter.Connectivity
struct Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5;
// LEGOModelImporter.CullingCameraConfig
struct CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236;
// LEGOModelImporter.DictionaryIntToModelGroupImportSettings
struct DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// LEGOModelImporter.Knob
struct Knob_t062FAD1F124E65EF619DF55AA307ADE779E40656;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// LEGOModelImporter.Model
struct Model_t343B56AE78459BF0D1FB5005506939FCE1E4EDF7;
// LEGOModelImporter.ModelGroup
struct ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80;
// LEGOModelImporter.ModelGroupImportSettings
struct ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// LEGOModelImporter.Part
struct Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262;
// LEGOModelImporter.PlanarFeature
struct PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428;
// LEGOModelImporter.PlanarField
struct PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// LEGOModelImporter.Tube
struct Tube_t36DFA03A28C1856FC8B03EBBFAECE5C6C001BBEF;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// LEGOModelImporter.MathUtils/Cone
struct Cone_t49D84D1163E2780B9D99C2BBC820DD93D4D8852F;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t84FCA900CDD8DAD5EFFBD5C2362F72E7527537B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouldingColour_t7F68C829162CF0FEA0F304448076FD97BB4C7BF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisPart_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_m9C324CF37B043FB375956E2605E99BF0AA82AD3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisBrick_t9D6B2342854C18DE1F8922553F10DD8392E01B50_m6D610E8C1AFF52763FAC5F068B05485B577B96E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2E1BCE0886AD98672E79E03B1DFBCC33E831052C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBD42DEFE29F7E2A4999087FA06B446A7D8B913CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD167EBC48FC34F9EBD7CBA04984EE690323B40CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD434DF7C6AE02F45F424CB0EB0BA8F955F226687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m10F66F13C7B3FA8C93CAAF4A0D26B9695EB8F9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4841B29B378B7C62806ADCA7AB6874C83880B346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m8F91FD4088E131696D75A31DF6A17F7204B07C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mEEC525C8B84ED95D0F8FC4BB677A53CFF2117D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD2808C0A1FC4A9BC48EDB86348A1FDBDE7F33C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m89F467FC26C66F1CAF93048FEE207878C88EB4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m151931C418DB149F0C520A1928DB548BCC8351D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB953A5564F4FB9C6BE19B87233EFF4A2336F1D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD54BCAB5586D5422F58ECB2A1FCDB90978B75495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_m27422B8E38F22568F502398F30020444826DA346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_m6F1F6E101CA951D17C6B77E01B067B0B1E1EC57F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_m7EE4D544E631B655EB57DF1203C4C0F63760FFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_0_0_0_var;

struct BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct PlanarFeatureU5BU5D_t2D22CAADB0CA38872C603FF4368F4D9EE6B8D601;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>
struct Dictionary_2_t259E01DACBFCA6022D2FC23623D0F999820A01A2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEB8D90693C435B197F1603F36081A34B47E32F47* ____entries_1;
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
	KeyCollection_t2392A6C3702A20A64D51C91868A0AAFAD7383E0B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t97BCB512B83D9BAEA4F76B1493B9C15BFD44486A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tFD1ED8602EB3B39B776AC7E6675E844223612CFB* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField>
struct HashSet_1_t51D41CB16954F200FBF7F492D58A461EA53886D1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB817BBCB8F50B4C6F5DE1B8DB8CB87BE4B061525* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>
struct List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CullingCameraConfigU5BU5D_tB88F895A41FBDAB7DAAD608A827F4FA1998423FF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LEGOModelImporter.Knob>
struct List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KnobU5BU5D_t6D270625A69FD2C392D78041966E95A53BA0CA89* ____items_1;
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

// System.Collections.Generic.List`1<LEGOModelImporter.Tube>
struct List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TubeU5BU5D_t8AE1BB690E5913B4999B6E922E3C986009F70F65* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8F3F4729AE008E0E622F1CC7E21661507C850EEB  : public RuntimeObject
{
};

// LEGOModelImporter.BrickBuildingUtility
struct BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A  : public RuntimeObject
{
};

// LEGOModelImporter.Connection
struct Connection_tE43A0481EBB4A8F4635B8429BC9C6F658C232605  : public RuntimeObject
{
	// LEGOModelImporter.ConnectionField LEGOModelImporter.Connection::field
	ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* ___field_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// LEGOModelImporter.ModelGroupImportSettings
struct ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9  : public RuntimeObject
{
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::colliders
	bool ___colliders_0;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::connectivity
	bool ___connectivity_1;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::isStatic
	bool ___isStatic_2;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::lightmapped
	bool ___lightmapped_3;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::randomizeRotation
	bool ___randomizeRotation_4;
	// System.Int32 LEGOModelImporter.ModelGroupImportSettings::lod
	int32_t ___lod_5;
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

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>
struct Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>
struct Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
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

// LEGOModelImporter.SerializableDictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>
struct SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4  : public Dictionary_2_t259E01DACBFCA6022D2FC23623D0F999820A01A2
{
	// System.Collections.Generic.List`1<TKey> LEGOModelImporter.SerializableDictionary`2::keys
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___keys_14;
	// System.Collections.Generic.List`1<TValue> LEGOModelImporter.SerializableDictionary`2::values
	List_1_tC5D5F26009698ED876F76FC1B50FEF7D9782E18D* ___values_15;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// LEGOModelImporter.PlanarFeature
struct PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428  : public Connection_tE43A0481EBB4A8F4635B8429BC9C6F658C232605
{
	// LEGOModelImporter.PlanarFeature/PlanarConnectionType LEGOModelImporter.PlanarFeature::connectionType
	int32_t ___connectionType_3;
	// System.Int32 LEGOModelImporter.PlanarFeature::quadrants
	int32_t ___quadrants_4;
	// System.Int32 LEGOModelImporter.PlanarFeature::index
	int32_t ___index_5;
	// LEGOModelImporter.PlanarFeature/Flags LEGOModelImporter.PlanarFeature::flags
	int32_t ___flags_6;
	// LEGOModelImporter.Knob LEGOModelImporter.PlanarFeature::knob
	Knob_t062FAD1F124E65EF619DF55AA307ADE779E40656* ___knob_7;
	// System.Collections.Generic.List`1<LEGOModelImporter.Tube> LEGOModelImporter.PlanarFeature::tubes
	List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822* ___tubes_8;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1936
struct __StaticArrayInitTypeSizeU3D1936_t8412E78BE01F07AE1266C9CA3642FFA53278A7D1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1936_t8412E78BE01F07AE1266C9CA3642FFA53278A7D1__padding[1936];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7396
struct __StaticArrayInitTypeSizeU3D7396_t272A157AE7EA88AB681895F30544D7701048DB74 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D7396_t272A157AE7EA88AB681895F30544D7701048DB74__padding[7396];
	};
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// LEGOModelImporter.CullingCameraConfig
struct CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236  : public RuntimeObject
{
	// System.Boolean LEGOModelImporter.CullingCameraConfig::foldout
	bool ___foldout_0;
	// System.String LEGOModelImporter.CullingCameraConfig::name
	String_t* ___name_1;
	// System.Boolean LEGOModelImporter.CullingCameraConfig::perspective
	bool ___perspective_2;
	// UnityEngine.Vector3 LEGOModelImporter.CullingCameraConfig::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion LEGOModelImporter.CullingCameraConfig::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// System.Single LEGOModelImporter.CullingCameraConfig::size
	float ___size_5;
	// System.Single LEGOModelImporter.CullingCameraConfig::fov
	float ___fov_6;
	// System.Single LEGOModelImporter.CullingCameraConfig::maxRange
	float ___maxRange_7;
	// System.Single LEGOModelImporter.CullingCameraConfig::minRange
	float ___minRange_8;
	// System.Single LEGOModelImporter.CullingCameraConfig::aspect
	float ___aspect_9;
};

// LEGOModelImporter.DictionaryIntToModelGroupImportSettings
struct DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A  : public SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4
{
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

// LEGOModelImporter.MathUtils/Cone
struct Cone_t49D84D1163E2780B9D99C2BBC820DD93D4D8852F  : public RuntimeObject
{
	// UnityEngine.Vector3 LEGOModelImporter.MathUtils/Cone::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_0;
	// UnityEngine.Vector3 LEGOModelImporter.MathUtils/Cone::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_1;
	// System.Single LEGOModelImporter.MathUtils/Cone::angle
	float ___angle_2;
	// System.Single LEGOModelImporter.MathUtils/Cone::cosAngle
	float ___cosAngle_3;
	// System.Single LEGOModelImporter.MathUtils/Cone::sinAngle
	float ___sinAngle_4;
	// System.Single LEGOModelImporter.MathUtils/Cone::invSinAngle
	float ___invSinAngle_5;
	// System.Single LEGOModelImporter.MathUtils/Cone::cosAngleSqr
	float ___cosAngleSqr_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// LEGOModelImporter.Brick
struct Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LEGOModelImporter.Brick::designID
	int32_t ___designID_4;
	// System.String LEGOModelImporter.Brick::uuid
	String_t* ___uuid_5;
	// System.Collections.Generic.List`1<LEGOModelImporter.Part> LEGOModelImporter.Brick::parts
	List_1_t5779719009EB22C5B814366C8B9BBC1EC43C2EB2* ___parts_6;
	// UnityEngine.Bounds LEGOModelImporter.Brick::totalBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___totalBounds_7;
	// System.Boolean LEGOModelImporter.Brick::colliding
	bool ___colliding_8;
};

// LEGOModelImporter.Colliders
struct Colliders_tC03FE9574DD945AA497FAC45CCC16D0B0088D07F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LEGOModelImporter.Colliders::version
	int32_t ___version_4;
	// System.Collections.Generic.List`1<UnityEngine.Collider> LEGOModelImporter.Colliders::colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders_5;
	// LEGOModelImporter.Part LEGOModelImporter.Colliders::part
	Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* ___part_6;
};

// LEGOModelImporter.CommonPart
struct CommonPart_t4FF2648223D44016514E21293324068120B56A0F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LEGOModelImporter.Part LEGOModelImporter.CommonPart::part
	Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* ___part_4;
};

// LEGOModelImporter.ConnectionField
struct ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LEGOModelImporter.Connectivity LEGOModelImporter.ConnectionField::connectivity
	Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* ___connectivity_4;
	// LEGOModelImporter.ConnectionField/FieldKind LEGOModelImporter.ConnectionField::kind
	int32_t ___kind_5;
};

// LEGOModelImporter.Connectivity
struct Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LEGOModelImporter.Connectivity::version
	int32_t ___version_4;
	// LEGOModelImporter.Part LEGOModelImporter.Connectivity::part
	Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* ___part_5;
	// UnityEngine.Bounds LEGOModelImporter.Connectivity::extents
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___extents_6;
	// System.Collections.Generic.List`1<LEGOModelImporter.PlanarField> LEGOModelImporter.Connectivity::planarFields
	List_1_t988DA20938C1965AA77BA17FEFA3565F60D6A8B4* ___planarFields_7;
	// System.Collections.Generic.List`1<LEGOModelImporter.AxleField> LEGOModelImporter.Connectivity::axleFields
	List_1_tC9924F5024C31DD0FC3CE714C62A120C394CB1DD* ___axleFields_8;
	// System.Collections.Generic.List`1<LEGOModelImporter.FixedField> LEGOModelImporter.Connectivity::fixedFields
	List_1_t6F5CE8E49BC9CAECC5B8DF4A6E587DFBBA4D8988* ___fixedFields_9;
};

// LEGOModelImporter.Model
struct Model_t343B56AE78459BF0D1FB5005506939FCE1E4EDF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LEGOModelImporter.Model::absoluteFilePath
	String_t* ___absoluteFilePath_4;
	// System.String LEGOModelImporter.Model::relativeFilePath
	String_t* ___relativeFilePath_5;
	// LEGOModelImporter.Model/Pivot LEGOModelImporter.Model::pivot
	int32_t ___pivot_6;
	// System.Boolean LEGOModelImporter.Model::autoGenerated
	bool ___autoGenerated_7;
	// LEGOModelImporter.DictionaryIntToModelGroupImportSettings LEGOModelImporter.Model::importSettings
	DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A* ___importSettings_8;
};

// LEGOModelImporter.ModelGroup
struct ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LEGOModelImporter.ModelGroup::groupName
	String_t* ___groupName_5;
	// System.String LEGOModelImporter.ModelGroup::parentName
	String_t* ___parentName_6;
	// System.Int32 LEGOModelImporter.ModelGroup::number
	int32_t ___number_7;
	// LEGOModelImporter.ModelGroupImportSettings LEGOModelImporter.ModelGroup::importSettings
	ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* ___importSettings_8;
	// LEGOModelImporter.ModelGroup/ViewBasedOptimizations LEGOModelImporter.ModelGroup::viewBasedOptimizations
	int32_t ___viewBasedOptimizations_9;
	// System.Boolean LEGOModelImporter.ModelGroup::randomizeNormals
	bool ___randomizeNormals_10;
	// System.Boolean LEGOModelImporter.ModelGroup::processed
	bool ___processed_11;
	// System.String LEGOModelImporter.ModelGroup::absoluteFilePath
	String_t* ___absoluteFilePath_12;
	// System.String LEGOModelImporter.ModelGroup::relativeFilePath
	String_t* ___relativeFilePath_13;
	// System.Boolean LEGOModelImporter.ModelGroup::autoGenerated
	bool ___autoGenerated_14;
	// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig> LEGOModelImporter.ModelGroup::views
	List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655* ___views_15;
};

// LEGOModelImporter.Part
struct Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LEGOModelImporter.Part::designID
	int32_t ___designID_4;
	// System.Boolean LEGOModelImporter.Part::legacy
	bool ___legacy_5;
	// LEGOModelImporter.Connectivity LEGOModelImporter.Part::connectivity
	Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* ___connectivity_6;
	// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.Part::materialIDs
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___materialIDs_7;
	// LEGOModelImporter.Colliders LEGOModelImporter.Part::colliders
	Colliders_tC03FE9574DD945AA497FAC45CCC16D0B0088D07F* ___colliders_8;
	// LEGOModelImporter.Brick LEGOModelImporter.Part::brick
	Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* ___brick_9;
	// System.Collections.Generic.List`1<LEGOModelImporter.Knob> LEGOModelImporter.Part::knobs
	List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B* ___knobs_10;
	// System.Collections.Generic.List`1<LEGOModelImporter.Tube> LEGOModelImporter.Part::tubes
	List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822* ___tubes_11;
};

// LEGOModelImporter.PlanarField
struct PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544  : public ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC
{
	// LEGOModelImporter.PlanarFeature[] LEGOModelImporter.PlanarField::connections
	PlanarFeatureU5BU5D_t2D22CAADB0CA38872C603FF4368F4D9EE6B8D601* ___connections_6;
	// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.PlanarField::connected
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___connected_7;
	// System.Int32 LEGOModelImporter.PlanarField::connectableConnections
	int32_t ___connectableConnections_8;
	// LEGOModelImporter.PlanarField/ConnectionTuple[] LEGOModelImporter.PlanarField::connectedTo
	ConnectionTupleU5BU5D_t0B914CA85B1A848803CED588BCE14CA6107557FD* ___connectedTo_9;
	// UnityEngine.Vector2Int LEGOModelImporter.PlanarField::gridSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___gridSize_10;
};

// LEGOModelImporter.Tube
struct Tube_t36DFA03A28C1856FC8B03EBBFAECE5C6C001BBEF  : public CommonPart_t4FF2648223D44016514E21293324068120B56A0F
{
	// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.Tube::connections
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___connections_5;
	// LEGOModelImporter.PlanarField LEGOModelImporter.Tube::field
	PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544* ___field_6;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Collider>

// System.Collections.Generic.HashSet`1<UnityEngine.Collider>

// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField>

// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField>

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>

// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>
struct List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CullingCameraConfigU5BU5D_tB88F895A41FBDAB7DAAD608A827F4FA1998423FF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<LEGOModelImporter.Knob>
struct List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KnobU5BU5D_t6D270625A69FD2C392D78041966E95A53BA0CA89* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LEGOModelImporter.Knob>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<LEGOModelImporter.Tube>
struct List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TubeU5BU5D_t8AE1BB690E5913B4999B6E922E3C986009F70F65* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LEGOModelImporter.Tube>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8F3F4729AE008E0E622F1CC7E21661507C850EEB_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1936 <PrivateImplementationDetails>::0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26
	__StaticArrayInitTypeSizeU3D1936_t8412E78BE01F07AE1266C9CA3642FFA53278A7D1 ___0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7396 <PrivateImplementationDetails>::AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076
	__StaticArrayInitTypeSizeU3D7396_t272A157AE7EA88AB681895F30544D7701048DB74 ___AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1;
};

// <PrivateImplementationDetails>

// LEGOModelImporter.BrickBuildingUtility
struct BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_StaticFields
{
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ignoreMask
	int32_t ___ignoreMask_0;
	// UnityEngine.Matrix4x4 LEGOModelImporter.BrickBuildingUtility::LU_5_OFFSET
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___LU_5_OFFSET_1;
	// UnityEngine.Collider[] LEGOModelImporter.BrickBuildingUtility::colliderBuffer
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___colliderBuffer_2;
	// UnityEngine.RaycastHit[] LEGOModelImporter.BrickBuildingUtility::raycastBuffer
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___raycastBuffer_3;
	// System.String LEGOModelImporter.BrickBuildingUtility::ConnectivityConnectorLayerName
	String_t* ___ConnectivityConnectorLayerName_4;
	// System.String LEGOModelImporter.BrickBuildingUtility::ConnectivityReceptorLayerName
	String_t* ___ConnectivityReceptorLayerName_5;
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ConnectivityConnectorMask
	int32_t ___ConnectivityConnectorMask_6;
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ConnectivityReceptorMask
	int32_t ___ConnectivityReceptorMask_7;
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ConnectivityMask
	int32_t ___ConnectivityMask_8;
	// UnityEngine.Vector2[] LEGOModelImporter.BrickBuildingUtility::connectionFieldOffsets
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___connectionFieldOffsets_18;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> LEGOModelImporter.BrickBuildingUtility::oldPositions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___oldPositions_19;
	// System.Collections.Generic.List`1<UnityEngine.Quaternion> LEGOModelImporter.BrickBuildingUtility::oldRotations
	List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* ___oldRotations_20;
	// LEGOModelImporter.BrickBuildingUtility/ConnectionResult[] LEGOModelImporter.BrickBuildingUtility::candidates
	ConnectionResultU5BU5D_t447A28DD1D14FC69EF73E20B8969758947075907* ___candidates_21;
};

// LEGOModelImporter.BrickBuildingUtility

// LEGOModelImporter.Connection

// LEGOModelImporter.Connection

// LEGOModelImporter.ModelGroupImportSettings

// LEGOModelImporter.ModelGroupImportSettings

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>

// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>

// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// LEGOModelImporter.SerializableDictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>

// LEGOModelImporter.SerializableDictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.PhysicsScene

// UnityEngine.PhysicsScene

// LEGOModelImporter.PlanarFeature
struct PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_StaticFields
{
	// LEGOModelImporter.PlanarFeature/Flags LEGOModelImporter.PlanarFeature::flagsCoveringKnob
	int32_t ___flagsCoveringKnob_1;
	// LEGOModelImporter.PlanarFeature/Flags LEGOModelImporter.PlanarFeature::flagsCoveringTube
	int32_t ___flagsCoveringTube_2;
	// LEGOModelImporter.Connection/ConnectionInteraction[] LEGOModelImporter.PlanarFeature::connectivityMatrix
	ConnectionInteractionU5BU5D_t595D84905525D5A43CDF549BA8AC9BD493A6526C* ___connectivityMatrix_11;
};

// LEGOModelImporter.PlanarFeature

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1936

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1936

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7396

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7396

// LEGOModelImporter.CullingCameraConfig

// LEGOModelImporter.CullingCameraConfig

// LEGOModelImporter.DictionaryIntToModelGroupImportSettings

// LEGOModelImporter.DictionaryIntToModelGroupImportSettings

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// LEGOModelImporter.MathUtils/Cone

// LEGOModelImporter.MathUtils/Cone

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

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

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SphereCollider

// UnityEngine.SphereCollider

// LEGOModelImporter.Brick
struct Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50_StaticFields
{
	// System.Action`1<LEGOModelImporter.Brick> LEGOModelImporter.Brick::onEnable
	Action_1_t3E4524F9D7269113278FC7EB0E9C457629AF3AA4* ___onEnable_9;
	// System.Action`1<LEGOModelImporter.Brick> LEGOModelImporter.Brick::onParentChange
	Action_1_t3E4524F9D7269113278FC7EB0E9C457629AF3AA4* ___onParentChange_10;
};

// LEGOModelImporter.Brick

// LEGOModelImporter.Colliders

// LEGOModelImporter.Colliders

// LEGOModelImporter.CommonPart

// LEGOModelImporter.CommonPart

// LEGOModelImporter.ConnectionField

// LEGOModelImporter.ConnectionField

// LEGOModelImporter.Connectivity

// LEGOModelImporter.Connectivity

// LEGOModelImporter.Model

// LEGOModelImporter.Model

// LEGOModelImporter.ModelGroup
struct ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80_StaticFields
{
	// LEGOModelImporter.ModelGroup/ViewBasedOptimizations LEGOModelImporter.ModelGroup::ViewBasedGeometryRemovalOptimizations
	int32_t ___ViewBasedGeometryRemovalOptimizations_4;
};

// LEGOModelImporter.ModelGroup

// LEGOModelImporter.Part
struct Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_StaticFields
{
	// System.Single LEGOModelImporter.Part::collisionEpsilon
	float ___collisionEpsilon_12;
};

// LEGOModelImporter.Part

// LEGOModelImporter.PlanarField

// LEGOModelImporter.PlanarField

// LEGOModelImporter.Tube

// LEGOModelImporter.Tube
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// LEGOModelImporter.Brick[]
struct BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60  : public RuntimeArray
{
	ALIGN_FIELD (8) Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* m_Items[1];

	inline Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LEGOModelImporter.PlanarFeature[]
struct PlanarFeatureU5BU5D_t2D22CAADB0CA38872C603FF4368F4D9EE6B8D601  : public RuntimeArray
{
	ALIGN_FIELD (8) PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* m_Items[1];

	inline PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void LEGOModelImporter.SerializableDictionary`2<System.Int32,System.Object>::.ctor(LEGOModelImporter.SerializableDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2__ctor_m9B611CDA89151674B19181835AA2EC7CDA184BD8_gshared (SerializableDictionary_2_t28519D929757DB42DFF6ECC007F7155F5F234C57* __this, SerializableDictionary_2_t28519D929757DB42DFF6ECC007F7155F5F234C57* ___0_otherDictionary, const RuntimeMethod* method) ;
// System.Void LEGOModelImporter.SerializableDictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2__ctor_mA03F49A27C884962E5DF25358D2224963F44AEB2_gshared (SerializableDictionary_2_t28519D929757DB42DFF6ECC007F7155F5F234C57* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void LEGOModelImporter.SerializableDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2__ctor_m6C04FE45AE6095C4B9570A56EC7FAE2023BB26FE_gshared (SerializableDictionary_2_t28519D929757DB42DFF6ECC007F7155F5F234C57* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<LEGOModelImporter.Brick>()
inline BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* Component_GetComponentsInChildren_TisBrick_t9D6B2342854C18DE1F8922553F10DD8392E01B50_m6D610E8C1AFF52763FAC5F068B05485B577B96E4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void LEGOModelImporter.Brick::DisconnectInverse(System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Brick_DisconnectInverse_mBAAA376955C1CF0B344614F45BD7C7E1063CA6F8 (Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* __this, RuntimeObject* ___0_bricksToKeep, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>::GetEnumerator()
inline Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84 List_1_GetEnumerator_m89F467FC26C66F1CAF93048FEE207878C88EB4A1 (List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84 (*) (List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>::Dispose()
inline void Enumerator_Dispose_mBD42DEFE29F7E2A4999087FA06B446A7D8B913CE (Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>::get_Current()
inline CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* Enumerator_get_Current_m4841B29B378B7C62806ADCA7AB6874C83880B346_inline (Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84* __this, const RuntimeMethod* method)
{
	return ((  CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* (*) (Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawFrustum(UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawFrustum_m28C6ACBA916E64DC2C95ED561AE0B63E6534BE31 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_fov, float ___2_maxRange, float ___3_minRange, float ___4_aspect, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>::MoveNext()
inline bool Enumerator_MoveNext_mD167EBC48FC34F9EBD7CBA04984EE690323B40CC (Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>::.ctor()
inline void List_1__ctor_mD54BCAB5586D5422F58ECB2A1FCDB90978B75495 (List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Collider>::.ctor()
inline void HashSet_1__ctor_mD2808C0A1FC4A9BC48EDB86348A1FDBDE7F33C11 (HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.PhysicsScene UnityEngine.PhysicsSceneExtensions::GetPhysicsScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE PhysicsSceneExtensions_GetPhysicsScene_mC7D6FE0FA798195A3BA3B3BA6D41F4D947D037AD (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// UnityEngine.Quaternion LEGOModelImporter.MathUtils::MatrixToQuaternion(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MathUtils_MatrixToQuaternion_m4C6D936C5B40EFFEF817FF1F2051B1EEB39A409B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_mat, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Int32 LEGOModelImporter.BrickBuildingUtility::get_IgnoreMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BrickBuildingUtility_get_IgnoreMask_m54B209AF72E95428C41971C972E9CA26CC351632_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PhysicsScene::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsScene_OverlapBox_mF98FE9D367F5938A0E23C60684BED711EB69CA03 (PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_results, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_orientation, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PhysicsScene::OverlapSphere(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsScene_OverlapSphere_m0E853FB04ECE662CFA9FF522D8A4E9CE04903D01 (PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_results, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<LEGOModelImporter.Part>()
inline Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* Component_GetComponentInParent_TisPart_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_m9C324CF37B043FB375956E2605E99BF0AA82AD3C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Collider>::Add(T)
inline bool HashSet_1_Add_m8F91FD4088E131696D75A31DF6A17F7204B07C37 (HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.Collider>::GetEnumerator()
inline Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D HashSet_1_GetEnumerator_mEEC525C8B84ED95D0F8FC4BB677A53CFF2117D00 (HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D (*) (HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>::Dispose()
inline void Enumerator_Dispose_m2E1BCE0886AD98672E79E03B1DFBCC33E831052C (Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>::get_Current()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Enumerator_get_Current_m10F66F13C7B3FA8C93CAAF4A0D26B9695EB8F9B9_inline (Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>::MoveNext()
inline bool Enumerator_MoveNext_mD434DF7C6AE02F45F424CB0EB0BA8F955F226687 (Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.Connectivity::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Connectivity_GetEnumerator_mC84352D293F3741316ACBC8990B699A0192A8D3A (Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LEGOModelImporter.Knob>::.ctor()
inline void List_1__ctor_mB953A5564F4FB9C6BE19B87233EFF4A2336F1D86 (List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LEGOModelImporter.Tube>::.ctor()
inline void List_1__ctor_m151931C418DB149F0C520A1928DB548BCC8351D0 (List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void LEGOModelImporter.SerializableDictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>::.ctor(LEGOModelImporter.SerializableDictionary`2<TKey,TValue>)
inline void SerializableDictionary_2__ctor_m27422B8E38F22568F502398F30020444826DA346 (SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4* __this, SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4* ___0_otherDictionary, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4*, SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4*, const RuntimeMethod*))SerializableDictionary_2__ctor_m9B611CDA89151674B19181835AA2EC7CDA184BD8_gshared)(__this, ___0_otherDictionary, method);
}
// System.Void LEGOModelImporter.SerializableDictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>::.ctor(System.Int32)
inline void SerializableDictionary_2__ctor_m6F1F6E101CA951D17C6B77E01B067B0B1E1EC57F (SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4*, int32_t, const RuntimeMethod*))SerializableDictionary_2__ctor_mA03F49A27C884962E5DF25358D2224963F44AEB2_gshared)(__this, ___0_capacity, method);
}
// System.Void LEGOModelImporter.SerializableDictionary`2<System.Int32,LEGOModelImporter.ModelGroupImportSettings>::.ctor()
inline void SerializableDictionary_2__ctor_m7EE4D544E631B655EB57DF1203C4C0F63760FFA2 (SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tA09E86DE866059402DCF95A2BE633CF1911B69C4*, const RuntimeMethod*))SerializableDictionary_2__ctor_m6C04FE45AE6095C4B9570A56EC7FAE2023BB26FE_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// System.Boolean LEGOModelImporter.PlanarFeature::IsRelevantForTube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_IsRelevantForTube_m5BEB447D7EEE8B243CB66CFBF2BA77445D91DB9F (PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* __this, const RuntimeMethod* method) ;
// System.Boolean LEGOModelImporter.PlanarFeature::HasConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_HasConnection_m0B3AFE33EC5A77DDB15B76EA4C56666BC1EED5B4 (PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* __this, const RuntimeMethod* method) ;
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarField::GetConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* PlanarField_GetConnection_m702C092C7FCB7490C4A89B73CE886F0A372600D2 (PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean LEGOMaterials.MouldingColour::IsAnyTransparent(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouldingColour_IsAnyTransparent_m96DAD00633A8C0CCC8542FB81FFFD6A657908BF2 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_ids, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// System.Void LEGOModelImporter.CommonPart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonPart__ctor_m2C89BBDF207D636D57239FF6544B9820C922FDBD (CommonPart_t4FF2648223D44016514E21293324068120B56A0F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LEGOModelImporter.MathUtils/Cone::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cone__ctor_m2C9C0449B50C7FA9031CD593EA336D7DD6FB69B5 (Cone_t49D84D1163E2780B9D99C2BBC820DD93D4D8852F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_angle, const RuntimeMethod* method) 
{
	{
		// internal Cone(Vector3 origin, Vector3 direction, float angle)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.origin = origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_origin;
		__this->___origin_0 = L_0;
		// this.direction = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_direction;
		__this->___direction_1 = L_1;
		// this.angle = angle;
		float L_2 = ___2_angle;
		__this->___angle_2 = L_2;
		// cosAngle = Mathf.Cos(angle);
		float L_3 = ___2_angle;
		float L_4;
		L_4 = cosf(L_3);
		__this->___cosAngle_3 = L_4;
		// sinAngle = Mathf.Sin(angle);
		float L_5 = ___2_angle;
		float L_6;
		L_6 = sinf(L_5);
		__this->___sinAngle_4 = L_6;
		// invSinAngle = 1.0f / sinAngle;
		float L_7 = __this->___sinAngle_4;
		__this->___invSinAngle_5 = ((float)((1.0f)/L_7));
		// cosAngleSqr = cosAngle * cosAngle;
		float L_8 = __this->___cosAngle_3;
		float L_9 = __this->___cosAngle_3;
		__this->___cosAngleSqr_6 = ((float)il2cpp_codegen_multiply(L_8, L_9));
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
// System.Void LEGOModelImporter.Model::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model__ctor_mFBB43049298AA2C84CD4611B0B4800BEA9C6B18E (Model_t343B56AE78459BF0D1FB5005506939FCE1E4EDF7* __this, const RuntimeMethod* method) 
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
// System.Void LEGOModelImporter.ModelGroup::DisconnectGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroup_DisconnectGroup_m56D4EE53946B18FC0511010FE3CA82FB03A89BF8 (ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisBrick_t9D6B2342854C18DE1F8922553F10DD8392E01B50_m6D610E8C1AFF52763FAC5F068B05485B577B96E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* V_0 = NULL;
	BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var bricksInGroup = GetComponentsInChildren<Brick>();
		BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* L_0;
		L_0 = Component_GetComponentsInChildren_TisBrick_t9D6B2342854C18DE1F8922553F10DD8392E01B50_m6D610E8C1AFF52763FAC5F068B05485B577B96E4(__this, Component_GetComponentsInChildren_TisBrick_t9D6B2342854C18DE1F8922553F10DD8392E01B50_m6D610E8C1AFF52763FAC5F068B05485B577B96E4_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var brick in bricksInGroup)
		BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* L_1 = V_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_001a;
	}

IL_000d:
	{
		// foreach (var brick in bricksInGroup)
		BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// brick.DisconnectInverse(bricksInGroup);
		BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* L_6 = V_0;
		Brick_DisconnectInverse_mBAAA376955C1CF0B344614F45BD7C7E1063CA6F8(L_5, (RuntimeObject*)L_6, NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001a:
	{
		// foreach (var brick in bricksInGroup)
		int32_t L_8 = V_2;
		BrickU5BU5D_tA09D40B6725D990F875462DF276F497F57980D60* L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ModelGroup::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroup_OnDrawGizmosSelected_m7B7B4D0EE0FE2952770A41624CF59E48ACCE5FEA (ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBD42DEFE29F7E2A4999087FA06B446A7D8B913CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD167EBC48FC34F9EBD7CBA04984EE690323B40CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4841B29B378B7C62806ADCA7AB6874C83880B346_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m89F467FC26C66F1CAF93048FEE207878C88EB4A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84 V_1;
	memset((&V_1), 0, sizeof(V_1));
	CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!processed && viewBasedOptimizations != 0)
		bool L_0 = __this->___processed_11;
		if (L_0)
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_1 = __this->___viewBasedOptimizations_9;
		if (!L_1)
		{
			goto IL_00fc;
		}
	}
	{
		// Gizmos.color = Color.cyan;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_2, NULL);
		// int index = 0;
		V_0 = 0;
		// foreach (var view in views)
		List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655* L_3 = __this->___views_15;
		Enumerator_t1686F4EC8DE316903C56A3267A6C58C5B09B0E84 L_4;
		L_4 = List_1_GetEnumerator_m89F467FC26C66F1CAF93048FEE207878C88EB4A1(L_3, List_1_GetEnumerator_m89F467FC26C66F1CAF93048FEE207878C88EB4A1_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ee:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mBD42DEFE29F7E2A4999087FA06B446A7D8B913CE((&V_1), Enumerator_Dispose_mBD42DEFE29F7E2A4999087FA06B446A7D8B913CE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e0_1;
			}

IL_0033_1:
			{
				// foreach (var view in views)
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_5;
				L_5 = Enumerator_get_Current_m4841B29B378B7C62806ADCA7AB6874C83880B346_inline((&V_1), Enumerator_get_Current_m4841B29B378B7C62806ADCA7AB6874C83880B346_RuntimeMethod_var);
				V_2 = L_5;
				// Gizmos.matrix = Matrix4x4.TRS(view.position, view.rotation, Vector3.one);
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_6 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___position_3;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_8 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8->___rotation_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
				L_10 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
				L_11 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_7, L_9, L_10, NULL);
				Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_11, NULL);
				// if (view.perspective)
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_12 = V_2;
				bool L_13 = L_12->___perspective_2;
				if (!L_13)
				{
					goto IL_0082_1;
				}
			}
			{
				// Gizmos.DrawFrustum(Vector3.zero, view.fov, view.maxRange, view.minRange, view.aspect);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_15 = V_2;
				float L_16 = L_15->___fov_6;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_17 = V_2;
				float L_18 = L_17->___maxRange_7;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_19 = V_2;
				float L_20 = L_19->___minRange_8;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_21 = V_2;
				float L_22 = L_21->___aspect_9;
				Gizmos_DrawFrustum_m28C6ACBA916E64DC2C95ED561AE0B63E6534BE31(L_14, L_16, L_18, L_20, L_22, NULL);
				goto IL_00dc_1;
			}

IL_0082_1:
			{
				// var center = Vector3.forward * (view.minRange + view.maxRange) * 0.5f;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_24 = V_2;
				float L_25 = L_24->___minRange_8;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_26 = V_2;
				float L_27 = L_26->___maxRange_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
				L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, ((float)il2cpp_codegen_add(L_25, L_27)), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
				L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, (0.5f), NULL);
				// var size = new Vector3(view.size * 2.0f * view.aspect, view.size * 2.0f, view.maxRange - view.minRange);
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_30 = V_2;
				float L_31 = L_30->___size_5;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_32 = V_2;
				float L_33 = L_32->___aspect_9;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_34 = V_2;
				float L_35 = L_34->___size_5;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_36 = V_2;
				float L_37 = L_36->___maxRange_7;
				CullingCameraConfig_tED63E679BB9491DF029D26E9C333C29AB96F1236* L_38 = V_2;
				float L_39 = L_38->___minRange_8;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_31, (2.0f))), L_33)), ((float)il2cpp_codegen_multiply(L_35, (2.0f))), ((float)il2cpp_codegen_subtract(L_37, L_39)), NULL);
				// Gizmos.DrawWireCube(center, size);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_3;
				Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_29, L_40, NULL);
			}

IL_00dc_1:
			{
				// index++;
				int32_t L_41 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
			}

IL_00e0_1:
			{
				// foreach (var view in views)
				bool L_42;
				L_42 = Enumerator_MoveNext_mD167EBC48FC34F9EBD7CBA04984EE690323B40CC((&V_1), Enumerator_MoveNext_mD167EBC48FC34F9EBD7CBA04984EE690323B40CC_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_00fc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ModelGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroup__ctor_m10521999066D78D37E0C5A67D746C0D64EBF5301 (ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD54BCAB5586D5422F58ECB2A1FCDB90978B75495_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<CullingCameraConfig> views = new List<CullingCameraConfig>();
		List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655* L_0 = (List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655*)il2cpp_codegen_object_new(List_1_t53E0CBD49C9521DC6037A0090E71BD8C9276E655_il2cpp_TypeInfo_var);
		List_1__ctor_mD54BCAB5586D5422F58ECB2A1FCDB90978B75495(L_0, List_1__ctor_mD54BCAB5586D5422F58ECB2A1FCDB90978B75495_RuntimeMethod_var);
		__this->___views_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___views_15), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LEGOModelImporter.ModelGroup::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroup__cctor_m0D25014614C0C100A8C41E6CCBE89258D0AE971E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ViewBasedOptimizations ViewBasedGeometryRemovalOptimizations = ViewBasedOptimizations.RemoveInvisibleInsides | ViewBasedOptimizations.RemoveInvisibleOutsides | ViewBasedOptimizations.BackfaceCulling;
		((ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80_StaticFields*)il2cpp_codegen_static_fields_for(ModelGroup_tD86154182668ADC6C25E9924849C63FE38143F80_il2cpp_TypeInfo_var))->___ViewBasedGeometryRemovalOptimizations_4 = 7;
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
// System.Void LEGOModelImporter.ModelGroupImportSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroupImportSettings__ctor_mBEC44705E0707071BCD865C116BD634574410CA1 (ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* __this, const RuntimeMethod* method) 
{
	{
		// public bool colliders = true;
		__this->___colliders_0 = (bool)1;
		// public bool connectivity = true;
		__this->___connectivity_1 = (bool)1;
		// public bool randomizeRotation = true;
		__this->___randomizeRotation_4 = (bool)1;
		// public ModelGroupImportSettings()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ModelGroupImportSettings::.ctor(LEGOModelImporter.ModelGroupImportSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroupImportSettings__ctor_mD72A676AA02AF412A5C1D6564A79FC9D1D20AE39 (ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* __this, ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* ___0_importSettings, const RuntimeMethod* method) 
{
	{
		// public bool colliders = true;
		__this->___colliders_0 = (bool)1;
		// public bool connectivity = true;
		__this->___connectivity_1 = (bool)1;
		// public bool randomizeRotation = true;
		__this->___randomizeRotation_4 = (bool)1;
		// public ModelGroupImportSettings(ModelGroupImportSettings importSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// colliders = importSettings.colliders;
		ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* L_0 = ___0_importSettings;
		bool L_1 = L_0->___colliders_0;
		__this->___colliders_0 = L_1;
		// connectivity = importSettings.connectivity;
		ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* L_2 = ___0_importSettings;
		bool L_3 = L_2->___connectivity_1;
		__this->___connectivity_1 = L_3;
		// isStatic = importSettings.isStatic;
		ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* L_4 = ___0_importSettings;
		bool L_5 = L_4->___isStatic_2;
		__this->___isStatic_2 = L_5;
		// lightmapped = importSettings.lightmapped;
		ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* L_6 = ___0_importSettings;
		bool L_7 = L_6->___lightmapped_3;
		__this->___lightmapped_3 = L_7;
		// randomizeRotation = importSettings.randomizeRotation;
		ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* L_8 = ___0_importSettings;
		bool L_9 = L_8->___randomizeRotation_4;
		__this->___randomizeRotation_4 = L_9;
		// lod = importSettings.lod;
		ModelGroupImportSettings_tD4B65BA4A89C051465702AE4D9A65FD7C2A58DE9* L_10 = ___0_importSettings;
		int32_t L_11 = L_10->___lod_5;
		__this->___lod_5 = L_11;
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
// System.Boolean LEGOModelImporter.Part::IsColliding(LEGOModelImporter.Part,UnityEngine.Matrix4x4,UnityEngine.Collider[],System.Int32&,System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Part_IsColliding_m11B55C0D7D05A71C1C58F0BF78C1B9ACC16C0095 (Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* ___0_part, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_localToWorld, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_colliders, int32_t* ___3_hits, RuntimeObject* ___4_ignoredBricks, bool ___5_earlyOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPart_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_m9C324CF37B043FB375956E2605E99BF0AA82AD3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2E1BCE0886AD98672E79E03B1DFBCC33E831052C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD434DF7C6AE02F45F424CB0EB0BA8F955F226687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m10F66F13C7B3FA8C93CAAF4A0D26B9695EB8F9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8F91FD4088E131696D75A31DF6A17F7204B07C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mEEC525C8B84ED95D0F8FC4BB677A53CFF2117D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mD2808C0A1FC4A9BC48EDB86348A1FDBDE7F33C11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t84FCA900CDD8DAD5EFFBD5C2362F72E7527537B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* V_3 = NULL;
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_7 = NULL;
	Type_t* V_8 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_12;
	memset((&V_12), 0, sizeof(V_12));
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_13 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* V_15 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* V_18 = NULL;
	int32_t V_19 = 0;
	Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D V_20;
	memset((&V_20), 0, sizeof(V_20));
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_21 = NULL;
	{
		// var partObjectToLocal = Matrix4x4.TRS(part.transform.localPosition, part.transform.localRotation, part.transform.localScale);
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_0 = ___0_part;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_3 = ___0_part;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_6 = ___0_part;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_2, L_5, L_8, NULL);
		V_0 = L_9;
		// var partToWorld = localToWorld * partObjectToLocal;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___1_localToWorld;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_10, L_11, NULL);
		V_1 = L_12;
		// hits = 0;
		int32_t* L_13 = ___3_hits;
		*((int32_t*)L_13) = (int32_t)0;
		// bool colliding = false;
		V_2 = (bool)0;
		// var outputBuffer = new HashSet<Collider>();
		HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* L_14 = (HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B*)il2cpp_codegen_object_new(HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mD2808C0A1FC4A9BC48EDB86348A1FDBDE7F33C11(L_14, HashSet_1__ctor_mD2808C0A1FC4A9BC48EDB86348A1FDBDE7F33C11_RuntimeMethod_var);
		V_3 = L_14;
		// PhysicsScene physicsScene = part.gameObject.scene.GetPhysicsScene();
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_15 = ___0_part;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_17;
		L_17 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_16, NULL);
		PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE L_18;
		L_18 = PhysicsSceneExtensions_GetPhysicsScene_mC7D6FE0FA798195A3BA3B3BA6D41F4D947D037AD(L_17, NULL);
		V_4 = L_18;
		// if(!part.colliders)
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_19 = ___0_part;
		Colliders_tC03FE9574DD945AA497FAC45CCC16D0B0088D07F* L_20 = L_19->___colliders_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		if (L_21)
		{
			goto IL_005b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_005b:
	{
		// for(int c = 0; c < part.colliders.colliders.Count; c++)
		V_6 = 0;
		goto IL_01e6;
	}

IL_0063:
	{
		// Collider collider = part.colliders.colliders[c];
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_22 = ___0_part;
		Colliders_tC03FE9574DD945AA497FAC45CCC16D0B0088D07F* L_23 = L_22->___colliders_8;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_24 = L_23->___colliders_5;
		int32_t L_25 = V_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_26;
		L_26 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_24, L_25, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		V_7 = L_26;
		// System.Type colliderType = collider.GetType();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_27 = V_7;
		Type_t* L_28;
		L_28 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_27, NULL);
		V_8 = L_28;
		// var colliderObjectToLocal = Matrix4x4.TRS(collider.transform.localPosition, collider.transform.localRotation, collider.transform.localScale);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_29 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_30, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_32 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_33, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_35 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_36, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_38;
		L_38 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_31, L_34, L_37, NULL);
		V_9 = L_38;
		// var colliderToWorld = partToWorld * colliderObjectToLocal;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_40 = V_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_41;
		L_41 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_39, L_40, NULL);
		V_10 = L_41;
		// var currentHits = 0;
		V_11 = 0;
		// if (colliderType == typeof(BoxCollider))
		Type_t* L_42 = V_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		bool L_45;
		L_45 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_42, L_44, NULL);
		if (!L_45)
		{
			goto IL_0128;
		}
	}
	{
		// var rotation = MathUtils.MatrixToQuaternion(colliderToWorld);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46 = V_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = MathUtils_MatrixToQuaternion_m4C6D936C5B40EFFEF817FF1F2051B1EEB39A409B(L_46, NULL);
		V_12 = L_47;
		// BoxCollider boxCollider = (BoxCollider)collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_48 = V_7;
		V_13 = ((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)CastclassClass((RuntimeObject*)L_48, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var));
		// var center = colliderToWorld.MultiplyPoint(boxCollider.center);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_49 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_10), L_50, NULL);
		V_14 = L_51;
		// currentHits = physicsScene.OverlapBox(center, (boxCollider.size / 2.0f) - Vector3.one * collisionEpsilon, colliders, rotation, BrickBuildingUtility.IgnoreMask, QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_14;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_53 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_54, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var);
		float L_57 = ((Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_StaticFields*)il2cpp_codegen_static_fields_for(Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var))->___collisionEpsilon_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_56, L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_55, L_58, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_60 = ___2_colliders;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61 = V_12;
		il2cpp_codegen_runtime_class_init_inline(BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = BrickBuildingUtility_get_IgnoreMask_m54B209AF72E95428C41971C972E9CA26CC351632_inline(NULL);
		int32_t L_63;
		L_63 = PhysicsScene_OverlapBox_mF98FE9D367F5938A0E23C60684BED711EB69CA03((&V_4), L_52, L_59, L_60, L_61, L_62, 1, NULL);
		V_11 = L_63;
		goto IL_0173;
	}

IL_0128:
	{
		// else if (colliderType == typeof(SphereCollider))
		Type_t* L_64 = V_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_0173;
		}
	}
	{
		// SphereCollider sphereCollider = (SphereCollider)collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_68 = V_7;
		V_15 = ((SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)CastclassClass((RuntimeObject*)L_68, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var));
		// var center = colliderToWorld.MultiplyPoint(sphereCollider.center);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_69 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_10), L_70, NULL);
		V_16 = L_71;
		// currentHits = physicsScene.OverlapSphere(center, sphereCollider.radius - collisionEpsilon, colliders, BrickBuildingUtility.IgnoreMask, QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_16;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_73 = V_15;
		float L_74;
		L_74 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_73, NULL);
		il2cpp_codegen_runtime_class_init_inline(Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var);
		float L_75 = ((Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_StaticFields*)il2cpp_codegen_static_fields_for(Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var))->___collisionEpsilon_12;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_76 = ___2_colliders;
		il2cpp_codegen_runtime_class_init_inline(BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_il2cpp_TypeInfo_var);
		int32_t L_77;
		L_77 = BrickBuildingUtility_get_IgnoreMask_m54B209AF72E95428C41971C972E9CA26CC351632_inline(NULL);
		int32_t L_78;
		L_78 = PhysicsScene_OverlapSphere_m0E853FB04ECE662CFA9FF522D8A4E9CE04903D01((&V_4), L_72, ((float)il2cpp_codegen_subtract(L_74, L_75)), L_76, L_77, 1, NULL);
		V_11 = L_78;
	}

IL_0173:
	{
		// if (currentHits > 0)
		int32_t L_79 = V_11;
		if ((((int32_t)L_79) <= ((int32_t)0)))
		{
			goto IL_01e0;
		}
	}
	{
		// for (int i = 0; i < currentHits; i++)
		V_17 = 0;
		goto IL_01da;
	}

IL_017d:
	{
		// Collider overlap = colliders[i];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_80 = ___2_colliders;
		int32_t L_81 = V_17;
		int32_t L_82 = L_81;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_83 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		// Part overlapPart = overlap.GetComponentInParent<Part>();
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_84;
		L_84 = Component_GetComponentInParent_TisPart_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_m9C324CF37B043FB375956E2605E99BF0AA82AD3C(L_83, Component_GetComponentInParent_TisPart_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_m9C324CF37B043FB375956E2605E99BF0AA82AD3C_RuntimeMethod_var);
		V_18 = L_84;
		// if (overlapPart != null)
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_85 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_85, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_86)
		{
			goto IL_01d4;
		}
	}
	{
		// if (part == overlapPart)
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_87 = ___0_part;
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_88 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_89;
		L_89 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_87, L_88, NULL);
		if (L_89)
		{
			goto IL_01d4;
		}
	}
	{
		// if (ignoredBricks != null)
		RuntimeObject* L_90 = ___4_ignoredBricks;
		if (!L_90)
		{
			goto IL_01b0;
		}
	}
	{
		// if (ignoredBricks.Contains(overlapPart.brick))
		RuntimeObject* L_91 = ___4_ignoredBricks;
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_92 = V_18;
		Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* L_93 = L_92->___brick_9;
		bool L_94;
		L_94 = InterfaceFuncInvoker1< bool, Brick_t9D6B2342854C18DE1F8922553F10DD8392E01B50* >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>::Contains(T) */, ICollection_1_t84FCA900CDD8DAD5EFFBD5C2362F72E7527537B4_il2cpp_TypeInfo_var, L_91, L_93);
		if (L_94)
		{
			goto IL_01d4;
		}
	}

IL_01b0:
	{
		// colliding = true;
		V_2 = (bool)1;
		// for(var j = 0; j < currentHits; j++)
		V_19 = 0;
		goto IL_01c8;
	}

IL_01b7:
	{
		// outputBuffer.Add(colliders[j]);
		HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* L_95 = V_3;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_96 = ___2_colliders;
		int32_t L_97 = V_19;
		int32_t L_98 = L_97;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		bool L_100;
		L_100 = HashSet_1_Add_m8F91FD4088E131696D75A31DF6A17F7204B07C37(L_95, L_99, HashSet_1_Add_m8F91FD4088E131696D75A31DF6A17F7204B07C37_RuntimeMethod_var);
		// for(var j = 0; j < currentHits; j++)
		int32_t L_101 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01c8:
	{
		// for(var j = 0; j < currentHits; j++)
		int32_t L_102 = V_19;
		int32_t L_103 = V_11;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01b7;
		}
	}
	{
		// if(earlyOut)
		bool L_104 = ___5_earlyOut;
		if (!L_104)
		{
			goto IL_01d4;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_01d4:
	{
		// for (int i = 0; i < currentHits; i++)
		int32_t L_105 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_01da:
	{
		// for (int i = 0; i < currentHits; i++)
		int32_t L_106 = V_17;
		int32_t L_107 = V_11;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_017d;
		}
	}

IL_01e0:
	{
		// for(int c = 0; c < part.colliders.colliders.Count; c++)
		int32_t L_108 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_01e6:
	{
		// for(int c = 0; c < part.colliders.colliders.Count; c++)
		int32_t L_109 = V_6;
		Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_110 = ___0_part;
		Colliders_tC03FE9574DD945AA497FAC45CCC16D0B0088D07F* L_111 = L_110->___colliders_8;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_112 = L_111->___colliders_5;
		int32_t L_113;
		L_113 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_112, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_109) < ((int32_t)L_113)))
		{
			goto IL_0063;
		}
	}
	{
		// var k = 0;
		V_5 = 0;
		// foreach(var collider in outputBuffer)
		HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* L_114 = V_3;
		Enumerator_t5E62D883610A9174D8971F153A9D3DB97CED7B3D L_115;
		L_115 = HashSet_1_GetEnumerator_mEEC525C8B84ED95D0F8FC4BB677A53CFF2117D00(L_114, HashSet_1_GetEnumerator_mEEC525C8B84ED95D0F8FC4BB677A53CFF2117D00_RuntimeMethod_var);
		V_20 = L_115;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0229:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2E1BCE0886AD98672E79E03B1DFBCC33E831052C((&V_20), Enumerator_Dispose_m2E1BCE0886AD98672E79E03B1DFBCC33E831052C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_021e_1;
			}

IL_020a_1:
			{
				// foreach(var collider in outputBuffer)
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_116;
				L_116 = Enumerator_get_Current_m10F66F13C7B3FA8C93CAAF4A0D26B9695EB8F9B9_inline((&V_20), Enumerator_get_Current_m10F66F13C7B3FA8C93CAAF4A0D26B9695EB8F9B9_RuntimeMethod_var);
				V_21 = L_116;
				// colliders[k++] = collider;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_117 = ___2_colliders;
				int32_t L_118 = V_5;
				int32_t L_119 = L_118;
				V_5 = ((int32_t)il2cpp_codegen_add(L_119, 1));
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_120 = V_21;
				ArrayElementTypeCheck (L_117, L_120);
				(L_117)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119), (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_120);
			}

IL_021e_1:
			{
				// foreach(var collider in outputBuffer)
				bool L_121;
				L_121 = Enumerator_MoveNext_mD434DF7C6AE02F45F424CB0EB0BA8F955F226687((&V_20), Enumerator_MoveNext_mD434DF7C6AE02F45F424CB0EB0BA8F955F226687_RuntimeMethod_var);
				if (L_121)
				{
					goto IL_020a_1;
				}
			}
			{
				goto IL_0237;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0237:
	{
		// hits = k;
		int32_t* L_122 = ___3_hits;
		int32_t L_123 = V_5;
		*((int32_t*)L_122) = (int32_t)L_123;
		// return colliding;
		bool L_124 = V_2;
		return L_124;
	}
}
// System.Void LEGOModelImporter.Part::DisconnectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part_DisconnectAll_m1AFC793DC2576392857227D9544A6F63F0101F39 (Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if(!connectivity)
		Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* L_0 = __this->___connectivity_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach(var field in connectivity)
		Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* L_2 = __this->___connectivity_6;
		RuntimeObject* L_3;
		L_3 = Connectivity_GetEnumerator_mC84352D293F3741316ACBC8990B699A0192A8D3A(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_001c_1:
			{
				// foreach(var field in connectivity)
				RuntimeObject* L_6 = V_0;
				ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* L_7;
				L_7 = InterfaceFuncInvoker0< ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>::get_Current() */, IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6_il2cpp_TypeInfo_var, L_6);
				// field.DisconnectAll();
				HashSet_1_t51D41CB16954F200FBF7F492D58A461EA53886D1* L_8;
				L_8 = VirtualFuncInvoker0< HashSet_1_t51D41CB16954F200FBF7F492D58A461EA53886D1* >::Invoke(5 /* System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.ConnectionField::DisconnectAll() */, L_7);
			}

IL_0028_1:
			{
				// foreach(var field in connectivity)
				RuntimeObject* L_9 = V_0;
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.Part::DisconnectAllInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part_DisconnectAllInvalid_m8901F74A02E72B151C232B43CFB807E98709F194 (Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if(!connectivity)
		Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* L_0 = __this->___connectivity_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var field in connectivity)
		Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* L_2 = __this->___connectivity_6;
		RuntimeObject* L_3;
		L_3 = Connectivity_GetEnumerator_mC84352D293F3741316ACBC8990B699A0192A8D3A(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_001c_1:
			{
				// foreach (var field in connectivity)
				RuntimeObject* L_6 = V_0;
				ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* L_7;
				L_7 = InterfaceFuncInvoker0< ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>::get_Current() */, IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6_il2cpp_TypeInfo_var, L_6);
				// field.DisconnectAllInvalid();
				HashSet_1_t51D41CB16954F200FBF7F492D58A461EA53886D1* L_8;
				L_8 = VirtualFuncInvoker0< HashSet_1_t51D41CB16954F200FBF7F492D58A461EA53886D1* >::Invoke(6 /* System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.ConnectionField::DisconnectAllInvalid() */, L_7);
			}

IL_0028_1:
			{
				// foreach (var field in connectivity)
				RuntimeObject* L_9 = V_0;
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.Part::DisconnectInverse(System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part_DisconnectInverse_m8AE196F546D1788EAE377FAED320BCE77231C010 (Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* __this, RuntimeObject* ___0_bricksToKeep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if(!connectivity)
		Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* L_0 = __this->___connectivity_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var field in connectivity)
		Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* L_2 = __this->___connectivity_6;
		RuntimeObject* L_3;
		L_3 = Connectivity_GetEnumerator_mC84352D293F3741316ACBC8990B699A0192A8D3A(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_001c_1:
			{
				// foreach (var field in connectivity)
				RuntimeObject* L_6 = V_0;
				ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* L_7;
				L_7 = InterfaceFuncInvoker0< ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>::get_Current() */, IEnumerator_1_tD0144AD383D3AC3D930455A6919B77EA48E635C6_il2cpp_TypeInfo_var, L_6);
				// field.DisconnectInverse(bricksToKeep);
				RuntimeObject* L_8 = ___0_bricksToKeep;
				HashSet_1_t51D41CB16954F200FBF7F492D58A461EA53886D1* L_9;
				L_9 = VirtualFuncInvoker1< HashSet_1_t51D41CB16954F200FBF7F492D58A461EA53886D1*, RuntimeObject* >::Invoke(7 /* System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.ConnectionField::DisconnectInverse(System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>) */, L_7, L_8);
			}

IL_0029_1:
			{
				// foreach (var field in connectivity)
				RuntimeObject* L_10 = V_0;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.Part::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part__ctor_mC659FE34EA98B08F4A2028F9E1205A2CD3002984 (Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m151931C418DB149F0C520A1928DB548BCC8351D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB953A5564F4FB9C6BE19B87233EFF4A2336F1D86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> materialIDs = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___materialIDs_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materialIDs_7), (void*)L_0);
		// public List<Knob> knobs = new List<Knob>();
		List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B* L_1 = (List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B*)il2cpp_codegen_object_new(List_1_t6EFA94877FFAC8C7BF363F9D8B994B7A1A88338B_il2cpp_TypeInfo_var);
		List_1__ctor_mB953A5564F4FB9C6BE19B87233EFF4A2336F1D86(L_1, List_1__ctor_mB953A5564F4FB9C6BE19B87233EFF4A2336F1D86_RuntimeMethod_var);
		__this->___knobs_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___knobs_10), (void*)L_1);
		// public List<Tube> tubes = new List<Tube>();
		List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822* L_2 = (List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822*)il2cpp_codegen_object_new(List_1_t94944EF7394450F3F98A48E2EC8EA3A4EDC25822_il2cpp_TypeInfo_var);
		List_1__ctor_m151931C418DB149F0C520A1928DB548BCC8351D0(L_2, List_1__ctor_m151931C418DB149F0C520A1928DB548BCC8351D0_RuntimeMethod_var);
		__this->___tubes_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tubes_11), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LEGOModelImporter.Part::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part__cctor_m3CF825C2B8DB9D9B453F6774BF32382085BCBC18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly float collisionEpsilon = 0.02f;
		((Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_StaticFields*)il2cpp_codegen_static_fields_for(Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262_il2cpp_TypeInfo_var))->___collisionEpsilon_12 = (0.0199999996f);
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
// System.Void LEGOModelImporter.DictionaryIntToModelGroupImportSettings::.ctor(LEGOModelImporter.DictionaryIntToModelGroupImportSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryIntToModelGroupImportSettings__ctor_mF441C899598911E41E0B3BE34B4AED9732A84C5E (DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A* __this, DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A* ___0_dictionary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_m27422B8E38F22568F502398F30020444826DA346_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DictionaryIntToModelGroupImportSettings(DictionaryIntToModelGroupImportSettings dictionary) : base(dictionary)
		DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A* L_0 = ___0_dictionary;
		SerializableDictionary_2__ctor_m27422B8E38F22568F502398F30020444826DA346(__this, L_0, SerializableDictionary_2__ctor_m27422B8E38F22568F502398F30020444826DA346_RuntimeMethod_var);
		// {}
		return;
	}
}
// System.Void LEGOModelImporter.DictionaryIntToModelGroupImportSettings::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryIntToModelGroupImportSettings__ctor_m93F5F1C6C2058A4B582A2D9EDD4493FB7432BD6E (DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_m6F1F6E101CA951D17C6B77E01B067B0B1E1EC57F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DictionaryIntToModelGroupImportSettings(int capacity) : base(capacity)
		int32_t L_0 = ___0_capacity;
		SerializableDictionary_2__ctor_m6F1F6E101CA951D17C6B77E01B067B0B1E1EC57F(__this, L_0, SerializableDictionary_2__ctor_m6F1F6E101CA951D17C6B77E01B067B0B1E1EC57F_RuntimeMethod_var);
		// {}
		return;
	}
}
// System.Void LEGOModelImporter.DictionaryIntToModelGroupImportSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryIntToModelGroupImportSettings__ctor_mDFD875490A2A1965BE9E66436DD8B5E4E8855F56 (DictionaryIntToModelGroupImportSettings_tF1BCBD9EAF40531CC4A0EED825E839234522E79A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_m7EE4D544E631B655EB57DF1203C4C0F63760FFA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DictionaryIntToModelGroupImportSettings() : base()
		SerializableDictionary_2__ctor_m7EE4D544E631B655EB57DF1203C4C0F63760FFA2(__this, SerializableDictionary_2__ctor_m7EE4D544E631B655EB57DF1203C4C0F63760FFA2_RuntimeMethod_var);
		// {}
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
// System.Boolean LEGOModelImporter.Tube::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tube_IsVisible_m45AE6BA2288F950D14A1B48D4A785D741427249F (Tube_t36DFA03A28C1856FC8B03EBBFAECE5C6C001BBEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouldingColour_t7F68C829162CF0FEA0F304448076FD97BB4C7BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* V_2 = NULL;
	PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	{
		// if(!field || field.connections == null) return true;
		PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544* L_0 = __this->___field_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544* L_2 = __this->___field_6;
		PlanarFeatureU5BU5D_t2D22CAADB0CA38872C603FF4368F4D9EE6B8D601* L_3 = L_2->___connections_6;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		// if(!field || field.connections == null) return true;
		return (bool)1;
	}

IL_001c:
	{
		// foreach (var connectionIndex in connections)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = __this->___connections_5;
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_5;
		L_5 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_4, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cd:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_0), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bf_1;
			}

IL_002d_1:
			{
				// foreach (var connectionIndex in connections)
				int32_t L_6;
				L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_0), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_1 = L_6;
				// var connection = field.connections[connectionIndex];
				PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544* L_7 = __this->___field_6;
				PlanarFeatureU5BU5D_t2D22CAADB0CA38872C603FF4368F4D9EE6B8D601* L_8 = L_7->___connections_6;
				int32_t L_9 = V_1;
				int32_t L_10 = L_9;
				PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
				V_2 = L_11;
				// if (connection.IsRelevantForTube())
				PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* L_12 = V_2;
				bool L_13;
				L_13 = PlanarFeature_IsRelevantForTube_m5BEB447D7EEE8B243CB66CFBF2BA77445D91DB9F(L_12, NULL);
				if (!L_13)
				{
					goto IL_00bf_1;
				}
			}
			{
				// if(!connection.HasConnection())
				PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* L_14 = V_2;
				bool L_15;
				L_15 = PlanarFeature_HasConnection_m0B3AFE33EC5A77DDB15B76EA4C56666BC1EED5B4(L_14, NULL);
				if (L_15)
				{
					goto IL_005b_1;
				}
			}
			{
				// return true;
				V_4 = (bool)1;
				goto IL_00dd;
			}

IL_005b_1:
			{
				// var connectedTo = field.GetConnection(connectionIndex);
				PlanarField_t3D48BA05714F9511A9AF08CA400945B402322544* L_16 = __this->___field_6;
				int32_t L_17 = V_1;
				PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* L_18;
				L_18 = PlanarField_GetConnection_m702C092C7FCB7490C4A89B73CE886F0A372600D2(L_16, L_17, NULL);
				V_3 = L_18;
				// var notCovering = (connection.flags & PlanarFeature.flagsCoveringTube) == 0 || (connectedTo.flags & PlanarFeature.flagsCoveringTube) == 0;
				PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* L_19 = V_2;
				int32_t L_20 = L_19->___flags_6;
				il2cpp_codegen_runtime_class_init_inline(PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_il2cpp_TypeInfo_var);
				int32_t L_21 = ((PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_il2cpp_TypeInfo_var))->___flagsCoveringTube_2;
				if (!((int32_t)((int32_t)L_20&(int32_t)L_21)))
				{
					goto IL_0087_1;
				}
			}
			{
				PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* L_22 = V_3;
				int32_t L_23 = L_22->___flags_6;
				il2cpp_codegen_runtime_class_init_inline(PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_il2cpp_TypeInfo_var);
				int32_t L_24 = ((PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428_il2cpp_TypeInfo_var))->___flagsCoveringTube_2;
				G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_23&(int32_t)L_24))) == ((int32_t)0))? 1 : 0);
				goto IL_0088_1;
			}

IL_0087_1:
			{
				G_B11_0 = 1;
			}

IL_0088_1:
			{
				// notCovering |= MouldingColour.IsAnyTransparent(part.materialIDs) || MouldingColour.IsAnyTransparent(connectedTo.field.connectivity.part.materialIDs);
				Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_25 = ((CommonPart_t4FF2648223D44016514E21293324068120B56A0F*)__this)->___part_4;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = L_25->___materialIDs_7;
				il2cpp_codegen_runtime_class_init_inline(MouldingColour_t7F68C829162CF0FEA0F304448076FD97BB4C7BF8_il2cpp_TypeInfo_var);
				bool L_27;
				L_27 = MouldingColour_IsAnyTransparent_m96DAD00633A8C0CCC8542FB81FFFD6A657908BF2(L_26, NULL);
				G_B12_0 = G_B11_0;
				if (L_27)
				{
					G_B13_0 = G_B11_0;
					goto IL_00b6_1;
				}
			}
			{
				PlanarFeature_t1478FE7D89E8AF1ECE1927AB42736A8B3832F428* L_28 = V_3;
				ConnectionField_t141AFF868648F9B53641C3C632665049B15248CC* L_29 = ((Connection_tE43A0481EBB4A8F4635B8429BC9C6F658C232605*)L_28)->___field_0;
				Connectivity_t70DFFDB392AE6D38BD4C677E88A7F395241E56D5* L_30 = L_29->___connectivity_4;
				Part_t434A485D9F5EF10AB6F8707265E8D9EE26B17262* L_31 = L_30->___part_5;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32 = L_31->___materialIDs_7;
				il2cpp_codegen_runtime_class_init_inline(MouldingColour_t7F68C829162CF0FEA0F304448076FD97BB4C7BF8_il2cpp_TypeInfo_var);
				bool L_33;
				L_33 = MouldingColour_IsAnyTransparent_m96DAD00633A8C0CCC8542FB81FFFD6A657908BF2(L_32, NULL);
				G_B14_0 = ((int32_t)(L_33));
				G_B14_1 = G_B12_0;
				goto IL_00b7_1;
			}

IL_00b6_1:
			{
				G_B14_0 = 1;
				G_B14_1 = G_B13_0;
			}

IL_00b7_1:
			{
				// if (notCovering)
				if (!((int32_t)(G_B14_1|G_B14_0)))
				{
					goto IL_00bf_1;
				}
			}
			{
				// return true;
				V_4 = (bool)1;
				goto IL_00dd;
			}

IL_00bf_1:
			{
				// foreach (var connectionIndex in connections)
				bool L_34;
				L_34 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_0), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_00db;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00db:
	{
		// return false;
		return (bool)0;
	}

IL_00dd:
	{
		// }
		bool L_35 = V_4;
		return L_35;
	}
}
// System.Void LEGOModelImporter.Tube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tube__ctor_m05330BF2B37976329EEF3D88DF7FEC1BAAB3D774 (Tube_t36DFA03A28C1856FC8B03EBBFAECE5C6C001BBEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> connections = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___connections_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connections_5), (void*)L_0);
		CommonPart__ctor_m2C89BBDF207D636D57239FF6544B9820C922FDBD(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BrickBuildingUtility_get_IgnoreMask_m54B209AF72E95428C41971C972E9CA26CC351632_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static int IgnoreMask => ignoreMask;
		il2cpp_codegen_runtime_class_init_inline(BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_StaticFields*)il2cpp_codegen_static_fields_for(BrickBuildingUtility_t57CBDE92E367BBC8BF5E044D0E852989F32EC97A_il2cpp_TypeInfo_var))->___ignoreMask_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
