#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Collections.Generic.IList`1<UnityEngine.Vector3>
struct IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291;
// System.Collections.Generic.List`1<Zinnia.Action.BooleanAction>
struct List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer/EventData>
struct UnityEvent_1_t960FB627ECBF083B5B6146B40180F6F446F73CDD;
// Zinnia.Data.Operation.Extraction.ValueExtractor`4<UnityEngine.GameObject,UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent,UnityEngine.GameObject>
struct ValueExtractor_4_tD585AADBEE679BD188DFF34FB0DD933020887D71;
// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Object,System.Object,System.Object,System.Object>
struct ValueExtractor_4_tDD6B19805DB83071DDA24BDBEA5A8816558A70F3;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E;
// Zinnia.Cast.Operation.Conversion.CastConverter
struct CastConverter_t85A6CECAD98BF44078491A050173FAB2829CCEA3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor
struct ComponentGameObjectExtractor_tBFBE3C66CA977B26B90688F2B3766D4521B39F54;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Zinnia.Tracking.Follow.Modifier.FollowModifier
struct FollowModifier_t111E49B41E912C888D8800476CE48AB0D8A69C94;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Zinnia.Data.Collection.List.GameObjectObservableList
struct GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593;
// Zinnia.Process.Component.GameObjectSourceTargetProcessor
struct GameObjectSourceTargetProcessor_t61E5575207AE6D27D96AFF2E431F9DAA564B6130;
// Zinnia.Rule.IRule
struct IRule_tC3ED39D02923BF6A11BB6B263590EBEC55361E23;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Zinnia.Tracking.Follow.ObjectFollower
struct ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100;
// Zinnia.Pointer.ObjectPointer
struct ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Zinnia.Cast.PhysicsCast
struct PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD;
// Tilia.Indicators.ObjectPointers.PointerConfigurator
struct PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6;
// Zinnia.Pointer.PointerElement
struct PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378;
// Tilia.Indicators.ObjectPointers.PointerFacade
struct PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D;
// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor
struct PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9;
// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor
struct PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6;
// Zinnia.Cast.PointsCast
struct PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0;
// Zinnia.Rule.RuleContainer
struct RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34;
// System.String
struct String_t;
// Zinnia.Data.Type.SurfaceData
struct SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Zinnia.Data.Type.TransformData
struct TransformData_t8B704F7BFD1E390A9CA280DDACE5F006ADFDE3F7;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zinnia.Action.Action/BooleanUnityEvent
struct BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8;
// Zinnia.Action.BooleanAction/UnityEvent
struct UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776;
// Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent
struct UnityEvent_t1244C914767D701EEC009855AFBBA1B58C8683C1;
// Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent
struct UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE;
// Zinnia.Process.Component.GameObjectSourceTargetProcessor/GameObjectUnityEvent
struct GameObjectUnityEvent_tE1600BE0BD1B3575F7F3CE98AA23C6671BDE54ED;
// Zinnia.Pointer.ObjectPointer/EventData
struct EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52;
// Zinnia.Pointer.ObjectPointer/PointsRendererUnityEvent
struct PointsRendererUnityEvent_t7D5DE6AA1CE986C0C04096E9D7A153992169E366;
// Zinnia.Pointer.ObjectPointer/UnityEvent
struct UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4;
// Zinnia.Cast.PointsCast/EventData
struct EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E;
// Zinnia.Cast.PointsCast/UnityEvent
struct UnityEvent_t2E9021F2BABD2D225802E84D5E74B5F97B72ACEA;
// Zinnia.Visual.PointsRenderer/PointsData
struct PointsData_t28BD6810B788ED2E8D2408F918DEF5D8144B6327;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mE2C1FCB03E909F333FE3590D4421A12E01936BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumExtensions_GetByIndex_TisSelectionType_tA92619EF34428F7BEFCFACDAD88465AB010B3740_m207BF3D0542815C69094F9316782EFA670C1B5D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObjectExtensions_TryGetComponent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mD0DD21774DCF1465C1F71D15D0DF935C131590FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureActivationActionU3Eb__35_0_mB7066DBCF389855A58AA302A47C402A0EFCF9382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureFollowSourcesU3Eb__33_0_m1DDDD1B719CE76297A6CF21DB532ABEB7CEA86D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_0_m61CDCBBB65368BC3608FE086A048B2CB64B0DA4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_1_m1597918F27F65215D4A1C522889FF6BF09C0390D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3C42362CA669C75A830780322401883411126100 
{
};

// Zinnia.Utility.InterfaceContainer
struct InterfaceContainer_t0536B380ACEFC77E0848553773A089162C539CF2  : public RuntimeObject
{
	// UnityEngine.Object Zinnia.Utility.InterfaceContainer::field
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___field_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Zinnia.Data.Type.HeapAllocationFreeReadOnlyList`1<UnityEngine.Vector3>
struct HeapAllocationFreeReadOnlyList_1_t459759022370DA0A5F5D70B2C5EEE0036B55AC62 
{
	// System.Collections.Generic.IList`1<T> Zinnia.Data.Type.HeapAllocationFreeReadOnlyList`1::list
	RuntimeObject* ___list_0;
	// System.Int32 Zinnia.Data.Type.HeapAllocationFreeReadOnlyList`1::start
	int32_t ___start_1;
	// System.Int32 Zinnia.Data.Type.HeapAllocationFreeReadOnlyList`1::count
	int32_t ___count_2;
};

// Zinnia.Utility.InterfaceContainer`1<Zinnia.Rule.IRule>
struct InterfaceContainer_1_t287BBF5794F696861BEA2DA354BAB8C6EB59F3BE  : public InterfaceContainer_t0536B380ACEFC77E0848553773A089162C539CF2
{
	// TInterface Zinnia.Utility.InterfaceContainer`1::_interface
	RuntimeObject* ____interface_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer/EventData>
struct UnityEvent_1_t960FB627ECBF083B5B6146B40180F6F446F73CDD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.Nullable`1<UnityEngine.Quaternion>
struct Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Zinnia.Rule.RuleContainer
struct RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34  : public InterfaceContainer_1_t287BBF5794F696861BEA2DA354BAB8C6EB59F3BE
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Zinnia.Pointer.ObjectPointer/UnityEvent
struct UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4  : public UnityEvent_1_t960FB627ECBF083B5B6146B40180F6F446F73CDD
{
};

// System.Nullable`1<UnityEngine.RaycastHit>
struct Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___value_1;
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

// Zinnia.Data.Type.TransformData
struct TransformData_t8B704F7BFD1E390A9CA280DDACE5F006ADFDE3F7  : public RuntimeObject
{
	// UnityEngine.Transform Zinnia.Data.Type.TransformData::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// System.Boolean Zinnia.Data.Type.TransformData::useLocalValues
	bool ___useLocalValues_1;
	// System.Nullable`1<UnityEngine.Vector3> Zinnia.Data.Type.TransformData::positionOverride
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___positionOverride_2;
	// System.Nullable`1<UnityEngine.Quaternion> Zinnia.Data.Type.TransformData::rotationOverride
	Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 ___rotationOverride_3;
	// System.Nullable`1<UnityEngine.Vector3> Zinnia.Data.Type.TransformData::scaleOverride
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___scaleOverride_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Zinnia.Data.Type.SurfaceData
struct SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587  : public TransformData_t8B704F7BFD1E390A9CA280DDACE5F006ADFDE3F7
{
	// UnityEngine.Vector3 Zinnia.Data.Type.SurfaceData::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_5;
	// UnityEngine.Vector3 Zinnia.Data.Type.SurfaceData::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_6;
	// UnityEngine.Vector3 Zinnia.Data.Type.SurfaceData::<PositionalOffset>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionalOffsetU3Ek__BackingField_7;
	// UnityEngine.RaycastHit Zinnia.Data.Type.SurfaceData::collisionData
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___collisionData_8;
	// UnityEngine.RaycastHit Zinnia.Data.Type.SurfaceData::<PreviousCollisionData>k__BackingField
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___U3CPreviousCollisionDataU3Ek__BackingField_9;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Zinnia.Cast.PointsCast/EventData
struct EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.RaycastHit> Zinnia.Cast.PointsCast/EventData::hitData
	Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 ___hitData_0;
	// System.Boolean Zinnia.Cast.PointsCast/EventData::isValid
	bool ___isValid_1;
	// Zinnia.Data.Type.HeapAllocationFreeReadOnlyList`1<UnityEngine.Vector3> Zinnia.Cast.PointsCast/EventData::<Points>k__BackingField
	HeapAllocationFreeReadOnlyList_1_t459759022370DA0A5F5D70B2C5EEE0036B55AC62 ___U3CPointsU3Ek__BackingField_2;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Zinnia.Pointer.ObjectPointer/EventData
struct EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52  : public SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587
{
	// System.Boolean Zinnia.Pointer.ObjectPointer/EventData::isCurrentlyActive
	bool ___isCurrentlyActive_10;
	// System.Boolean Zinnia.Pointer.ObjectPointer/EventData::isCurrentlyHovering
	bool ___isCurrentlyHovering_11;
	// System.Single Zinnia.Pointer.ObjectPointer/EventData::currentHoverDuration
	float ___currentHoverDuration_12;
	// Zinnia.Cast.PointsCast/EventData Zinnia.Pointer.ObjectPointer/EventData::currentPointsCastData
	EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* ___currentPointsCastData_13;
};

// Zinnia.Process.Component.SourceTargetProcessor`3<UnityEngine.GameObject,UnityEngine.GameObject,Zinnia.Process.Component.GameObjectSourceTargetProcessor/GameObjectUnityEvent>
struct SourceTargetProcessor_3_tC09DF583897899AF099C64F24B2AA6EE9180857D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TEvent Zinnia.Process.Component.SourceTargetProcessor`3::ActiveSourceChanging
	GameObjectUnityEvent_tE1600BE0BD1B3575F7F3CE98AA23C6671BDE54ED* ___ActiveSourceChanging_4;
	// System.Boolean Zinnia.Process.Component.SourceTargetProcessor`3::ceaseAfterFirstSourceProcessed
	bool ___ceaseAfterFirstSourceProcessed_5;
	// TSource Zinnia.Process.Component.SourceTargetProcessor`3::<ActiveSource>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CActiveSourceU3Ek__BackingField_6;
};

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<UnityEngine.GameObject,UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent,UnityEngine.GameObject>
struct ValueExtractor_4_tD585AADBEE679BD188DFF34FB0DD933020887D71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Extracted
	UnityEvent_t1244C914767D701EEC009855AFBBA1B58C8683C1* ___Extracted_4;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Failed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Failed_5;
	// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::source
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___source_6;
	// TResultElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::<Result>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CResultU3Ek__BackingField_7;
};

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Object,System.Object,System.Object,System.Object>
struct ValueExtractor_4_tDD6B19805DB83071DDA24BDBEA5A8816558A70F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Extracted
	RuntimeObject* ___Extracted_4;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Failed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Failed_5;
	// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::source
	RuntimeObject* ___source_6;
	// TResultElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_7;
};

// Zinnia.Action.Action
struct Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.Action/BooleanUnityEvent Zinnia.Action.Action::ActivationStateChanged
	BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8* ___ActivationStateChanged_4;
	// System.Boolean Zinnia.Action.Action::isActivated
	bool ___isActivated_5;
};

// Zinnia.Pointer.ObjectPointer
struct ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::origin
	PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ___origin_4;
	// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::repeatedSegment
	PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ___repeatedSegment_5;
	// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::destination
	PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ___destination_6;
	// System.Boolean Zinnia.Pointer.ObjectPointer::enableDestinationOnNoCollision
	bool ___enableDestinationOnNoCollision_7;
	// UnityEngine.GameObject Zinnia.Pointer.ObjectPointer::eventDataOriginTransformOverride
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___eventDataOriginTransformOverride_8;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Activated
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Activated_9;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Deactivated
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Deactivated_10;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Entered
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Entered_11;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Exited
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Exited_12;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Hovering
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Hovering_13;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Selected
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Selected_14;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Appeared
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Appeared_15;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Zinnia.Pointer.ObjectPointer::Disappeared
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Disappeared_16;
	// Zinnia.Pointer.ObjectPointer/PointsRendererUnityEvent Zinnia.Pointer.ObjectPointer::RenderDataChanged
	PointsRendererUnityEvent_t7D5DE6AA1CE986C0C04096E9D7A153992169E366* ___RenderDataChanged_17;
	// System.Boolean Zinnia.Pointer.ObjectPointer::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_18;
	// System.Boolean Zinnia.Pointer.ObjectPointer::<IsHovering>k__BackingField
	bool ___U3CIsHoveringU3Ek__BackingField_19;
	// System.Single Zinnia.Pointer.ObjectPointer::<HoverDuration>k__BackingField
	float ___U3CHoverDurationU3Ek__BackingField_20;
	// Zinnia.Pointer.ObjectPointer/EventData Zinnia.Pointer.ObjectPointer::<SelectedTarget>k__BackingField
	EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___U3CSelectedTargetU3Ek__BackingField_21;
	// Zinnia.Cast.PointsCast/EventData Zinnia.Pointer.ObjectPointer::activePointsCastData
	EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* ___activePointsCastData_22;
	// Zinnia.Cast.PointsCast/EventData Zinnia.Pointer.ObjectPointer::previousPointsCastData
	EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* ___previousPointsCastData_23;
	// System.Nullable`1<System.Boolean> Zinnia.Pointer.ObjectPointer::wasPreviouslyVisible
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___wasPreviouslyVisible_24;
	// Zinnia.Pointer.ObjectPointer/EventData Zinnia.Pointer.ObjectPointer::eventData
	EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___eventData_25;
	// Zinnia.Visual.PointsRenderer/PointsData Zinnia.Pointer.ObjectPointer::pointsData
	PointsData_t28BD6810B788ED2E8D2408F918DEF5D8144B6327* ___pointsData_26;
};

// Zinnia.Data.Collection.List.ObservableList
struct ObservableList_t7D8CDC3A1F1D6A6438AA207B1C99EC5E984DAFC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Zinnia.Cast.PhysicsCast
struct PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask Zinnia.Cast.PhysicsCast::layersToIgnore
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layersToIgnore_4;
	// UnityEngine.QueryTriggerInteraction Zinnia.Cast.PhysicsCast::triggerInteraction
	int32_t ___triggerInteraction_5;
	// Zinnia.Cast.Operation.Conversion.CastConverter Zinnia.Cast.PhysicsCast::convertTo
	CastConverter_t85A6CECAD98BF44078491A050173FAB2829CCEA3* ___convertTo_6;
};

// Tilia.Indicators.ObjectPointers.PointerConfigurator
struct PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Tilia.Indicators.ObjectPointers.PointerFacade Tilia.Indicators.ObjectPointers.PointerConfigurator::facade
	PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* ___facade_4;
	// Zinnia.Pointer.ObjectPointer Tilia.Indicators.ObjectPointers.PointerConfigurator::objectPointer
	ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* ___objectPointer_5;
	// Zinnia.Tracking.Follow.ObjectFollower Tilia.Indicators.ObjectPointers.PointerConfigurator::objectFollow
	ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* ___objectFollow_6;
	// Zinnia.Cast.PointsCast Tilia.Indicators.ObjectPointers.PointerConfigurator::caster
	PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* ___caster_7;
	// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::activationAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___activationAction_8;
	// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::selectOnActivatedAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___selectOnActivatedAction_9;
	// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::selectOnDeactivatedAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___selectOnDeactivatedAction_10;
};

// Zinnia.Pointer.PointerElement
struct PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::validElementContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___validElementContainer_4;
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::validMeshContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___validMeshContainer_5;
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::invalidElementContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___invalidElementContainer_6;
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::invalidMeshContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___invalidMeshContainer_7;
	// Zinnia.Pointer.PointerElement/Visibility Zinnia.Pointer.PointerElement::elementVisibility
	int32_t ___elementVisibility_8;
	// UnityEngine.Events.UnityEvent Zinnia.Pointer.PointerElement::VisibilityChanged
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___VisibilityChanged_9;
	// System.Boolean Zinnia.Pointer.PointerElement::<IsVisible>k__BackingField
	bool ___U3CIsVisibleU3Ek__BackingField_10;
};

// Tilia.Indicators.ObjectPointers.PointerFacade
struct PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Tilia.Indicators.ObjectPointers.PointerFacade::followSource
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followSource_4;
	// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerFacade::activationAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___activationAction_5;
	// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerFacade::selectionAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___selectionAction_6;
	// Tilia.Indicators.ObjectPointers.PointerFacade/SelectionType Tilia.Indicators.ObjectPointers.PointerFacade::selectionMethod
	int32_t ___selectionMethod_7;
	// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::hoverValidity
	RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___hoverValidity_8;
	// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::targetValidity
	RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___targetValidity_9;
	// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::targetPointValidity
	RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___targetPointValidity_10;
	// Zinnia.Cast.PhysicsCast Tilia.Indicators.ObjectPointers.PointerFacade::raycastRules
	PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* ___raycastRules_11;
	// System.Single Tilia.Indicators.ObjectPointers.PointerFacade::cursorLockThreshold
	float ___cursorLockThreshold_12;
	// System.Single Tilia.Indicators.ObjectPointers.PointerFacade::transitionDuration
	float ___transitionDuration_13;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Tilia.Indicators.ObjectPointers.PointerFacade::Activated
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Activated_14;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Tilia.Indicators.ObjectPointers.PointerFacade::Deactivated
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Deactivated_15;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Tilia.Indicators.ObjectPointers.PointerFacade::Entered
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Entered_16;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Tilia.Indicators.ObjectPointers.PointerFacade::Exited
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Exited_17;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Tilia.Indicators.ObjectPointers.PointerFacade::HoverChanged
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___HoverChanged_18;
	// Zinnia.Pointer.ObjectPointer/UnityEvent Tilia.Indicators.ObjectPointers.PointerFacade::Selected
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* ___Selected_19;
	// Tilia.Indicators.ObjectPointers.PointerConfigurator Tilia.Indicators.ObjectPointers.PointerFacade::configuration
	PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* ___configuration_20;
};

// Zinnia.Cast.PointsCast
struct PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Zinnia.Cast.PointsCast::origin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___origin_4;
	// Zinnia.Cast.PhysicsCast Zinnia.Cast.PointsCast::physicsCast
	PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* ___physicsCast_5;
	// Zinnia.Rule.RuleContainer Zinnia.Cast.PointsCast::targetValidity
	RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___targetValidity_6;
	// Zinnia.Rule.RuleContainer Zinnia.Cast.PointsCast::targetPointValidity
	RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___targetPointValidity_7;
	// System.Single Zinnia.Cast.PointsCast::cursorLockThreshold
	float ___cursorLockThreshold_8;
	// System.Single Zinnia.Cast.PointsCast::transitionDuration
	float ___transitionDuration_9;
	// System.Nullable`1<UnityEngine.Vector3> Zinnia.Cast.PointsCast::<DestinationPointOverride>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CDestinationPointOverrideU3Ek__BackingField_10;
	// Zinnia.Cast.PointsCast/UnityEvent Zinnia.Cast.PointsCast::ResultsChanged
	UnityEvent_t2E9021F2BABD2D225802E84D5E74B5F97B72ACEA* ___ResultsChanged_11;
	// System.Nullable`1<UnityEngine.RaycastHit> Zinnia.Cast.PointsCast::targetHit
	Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 ___targetHit_12;
	// System.Boolean Zinnia.Cast.PointsCast::<IsTargetHitValid>k__BackingField
	bool ___U3CIsTargetHitValidU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Zinnia.Cast.PointsCast::points
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points_14;
	// Zinnia.Cast.PointsCast/EventData Zinnia.Cast.PointsCast::eventData
	EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* ___eventData_15;
	// System.Nullable`1<UnityEngine.Vector3> Zinnia.Cast.PointsCast::trackedOriginForward
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___trackedOriginForward_16;
	// UnityEngine.Vector3 Zinnia.Cast.PointsCast::outVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___outVelocity_17;
};

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>
struct Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	bool ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	bool ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	bool ___value_13;
};

// Zinnia.Data.Operation.Extraction.GameObjectExtractor`2<UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent>
struct GameObjectExtractor_2_tAF2D384BEE33D1C4F544556E03A9E360E5C11198  : public ValueExtractor_4_tD585AADBEE679BD188DFF34FB0DD933020887D71
{
};

// Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>
struct ObservableList_2_t7102A5803FBFDB0BBE6A3E965C9195957218A6DA  : public ObservableList_t7D8CDC3A1F1D6A6438AA207B1C99EC5E984DAFC2
{
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Obtained
	UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE* ___Obtained_4;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Found
	UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE* ___Found_5;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::NotFound
	UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE* ___NotFound_6;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Collection.List.ObservableList`2::IsEmpty
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___IsEmpty_7;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Collection.List.ObservableList`2::IsPopulated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___IsPopulated_8;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Populated
	UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE* ___Populated_9;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Added
	UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE* ___Added_10;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Removed
	UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE* ___Removed_11;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Emptied
	UnityEvent_t6FF2AF1FF461F6F2865FA39C8AE008D4786F4BBE* ___Emptied_12;
	// System.Int32 Zinnia.Data.Collection.List.ObservableList`2::currentIndex
	int32_t ___currentIndex_13;
	// System.Boolean Zinnia.Data.Collection.List.ObservableList`2::wasStartCalled
	bool ___wasStartCalled_14;
};

// Zinnia.Process.Component.GameObjectSourceTargetProcessor
struct GameObjectSourceTargetProcessor_t61E5575207AE6D27D96AFF2E431F9DAA564B6130  : public SourceTargetProcessor_3_tC09DF583897899AF099C64F24B2AA6EE9180857D
{
	// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Process.Component.GameObjectSourceTargetProcessor::sources
	GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* ___sources_7;
	// Zinnia.Rule.RuleContainer Zinnia.Process.Component.GameObjectSourceTargetProcessor::sourceValidity
	RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___sourceValidity_8;
	// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Process.Component.GameObjectSourceTargetProcessor::targets
	GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* ___targets_9;
	// Zinnia.Rule.RuleContainer Zinnia.Process.Component.GameObjectSourceTargetProcessor::targetValidity
	RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___targetValidity_10;
};

// Zinnia.Data.Collection.List.DefaultObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>
struct DefaultObservableList_2_t5CE770F79A17F13DD4A330C7713E1FEA79149705  : public ObservableList_2_t7102A5803FBFDB0BBE6A3E965C9195957218A6DA
{
	// System.Collections.Generic.List`1<TElement> Zinnia.Data.Collection.List.DefaultObservableList`2::elements
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___elements_15;
};

// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E  : public Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344
{
};

// Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor
struct ComponentGameObjectExtractor_tBFBE3C66CA977B26B90688F2B3766D4521B39F54  : public GameObjectExtractor_2_tAF2D384BEE33D1C4F544556E03A9E360E5C11198
{
};

// Zinnia.Tracking.Follow.ObjectFollower
struct ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100  : public GameObjectSourceTargetProcessor_t61E5575207AE6D27D96AFF2E431F9DAA564B6130
{
	// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Tracking.Follow.ObjectFollower::targetOffsets
	GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* ___targetOffsets_11;
	// Zinnia.Tracking.Follow.Modifier.FollowModifier Zinnia.Tracking.Follow.ObjectFollower::followModifier
	FollowModifier_t111E49B41E912C888D8800476CE48AB0D8A69C94* ___followModifier_12;
	// UnityEngine.Events.UnityEvent Zinnia.Tracking.Follow.ObjectFollower::Preprocessed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Preprocessed_13;
	// UnityEngine.Events.UnityEvent Zinnia.Tracking.Follow.ObjectFollower::Processed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Processed_14;
};

// Zinnia.Data.Collection.List.GameObjectObservableList
struct GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593  : public DefaultObservableList_2_t5CE770F79A17F13DD4A330C7713E1FEA79149705
{
};

// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor
struct PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9  : public ComponentGameObjectExtractor_tBFBE3C66CA977B26B90688F2B3766D4521B39F54
{
	// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor/PointerComponentType Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor::pointerComponent
	int32_t ___pointerComponent_8;
};

// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor
struct PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6  : public ComponentGameObjectExtractor_tBFBE3C66CA977B26B90688F2B3766D4521B39F54
{
};

// <Module>

// <Module>

// UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer/EventData>

// UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer/EventData>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// Zinnia.Rule.RuleContainer

// Zinnia.Rule.RuleContainer

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Zinnia.Pointer.ObjectPointer/UnityEvent

// Zinnia.Pointer.ObjectPointer/UnityEvent

// System.Nullable`1<UnityEngine.RaycastHit>

// System.Nullable`1<UnityEngine.RaycastHit>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Zinnia.Data.Type.TransformData

// Zinnia.Data.Type.TransformData

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

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Zinnia.Data.Type.SurfaceData

// Zinnia.Data.Type.SurfaceData

// UnityEngine.Transform

// UnityEngine.Transform

// Zinnia.Cast.PointsCast/EventData

// Zinnia.Cast.PointsCast/EventData

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Zinnia.Pointer.ObjectPointer/EventData

// Zinnia.Pointer.ObjectPointer/EventData

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<UnityEngine.GameObject,UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent,UnityEngine.GameObject>

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<UnityEngine.GameObject,UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent,UnityEngine.GameObject>

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Object,System.Object,System.Object,System.Object>

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Object,System.Object,System.Object,System.Object>

// Zinnia.Action.Action

// Zinnia.Action.Action

// Zinnia.Pointer.ObjectPointer

// Zinnia.Pointer.ObjectPointer

// Zinnia.Cast.PhysicsCast
struct PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD_StaticFields
{
	// UnityEngine.RaycastHit[] Zinnia.Cast.PhysicsCast::Hits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___Hits_7;
	// UnityEngine.Collider[] Zinnia.Cast.PhysicsCast::Colliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___Colliders_8;
};

// Zinnia.Cast.PhysicsCast

// Tilia.Indicators.ObjectPointers.PointerConfigurator

// Tilia.Indicators.ObjectPointers.PointerConfigurator

// Zinnia.Pointer.PointerElement

// Zinnia.Pointer.PointerElement

// Tilia.Indicators.ObjectPointers.PointerFacade

// Tilia.Indicators.ObjectPointers.PointerFacade

// Zinnia.Cast.PointsCast

// Zinnia.Cast.PointsCast

// Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>

// Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>

// Zinnia.Process.Component.GameObjectSourceTargetProcessor

// Zinnia.Process.Component.GameObjectSourceTargetProcessor

// Zinnia.Action.BooleanAction

// Zinnia.Action.BooleanAction

// Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor

// Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor

// Zinnia.Tracking.Follow.ObjectFollower

// Zinnia.Tracking.Follow.ObjectFollower

// Zinnia.Data.Collection.List.GameObjectObservableList

// Zinnia.Data.Collection.List.GameObjectObservableList

// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor

// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor

// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor

// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.RaycastHit>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_gshared_inline (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.RaycastHit>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_gshared (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method) ;
// T Zinnia.Extension.EnumExtensions::GetByIndex<System.Int32Enum>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumExtensions_GetByIndex_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEE9CB314C50C3F95F216CBD75410DE4A2836605C_gshared (int32_t ___0_index, const RuntimeMethod* method) ;
// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Object,System.Object,System.Object,System.Object>::get_Source()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExtractor_4_get_Source_m3DAE709BFDE553B6880A520B7EF419C1BE9896AF_gshared_inline (ValueExtractor_4_tDD6B19805DB83071DDA24BDBEA5A8816558A70F3* __this, const RuntimeMethod* method) ;
// T Zinnia.Extension.GameObjectExtensions::TryGetComponent<System.Object>(UnityEngine.GameObject,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObjectExtensions_TryGetComponent_TisRuntimeObject_m0F533BE6666B37AE22E28E9386956109A92054BB_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, bool ___1_searchDescendants, bool ___2_searchAncestors, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Object,System.Object,System.Object,System.Object>::set_Source(TSourceElement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExtractor_4_set_Source_m306D10499249BEAE7C2F86A99B5372D6605B061D_gshared_inline (ValueExtractor_4_tDD6B19805DB83071DDA24BDBEA5A8816558A70F3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// Zinnia.Cast.PointsCast Tilia.Indicators.ObjectPointers.PointerConfigurator::get_Caster()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) ;
// Tilia.Indicators.ObjectPointers.PointerFacade Tilia.Indicators.ObjectPointers.PointerConfigurator::get_Facade()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) ;
// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::get_TargetValidity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_TargetValidity_m691B8BF2D744160D10782E42C49DB33886AFC3ED_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Cast.PointsCast::set_TargetValidity(Zinnia.Rule.RuleContainer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_TargetValidity_mB8CA185C582A3AC112D4F20FCD00BA6DE7EDD373_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) ;
// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::get_TargetPointValidity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_TargetPointValidity_m801455B19ED4E18269785E82B4BB629F6E597354_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Cast.PointsCast::set_TargetPointValidity(Zinnia.Rule.RuleContainer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_TargetPointValidity_mF1A3F1657AC2F65CAF071962273891EDFD1F0315_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) ;
// Zinnia.Cast.PhysicsCast Tilia.Indicators.ObjectPointers.PointerFacade::get_RaycastRules()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* PointerFacade_get_RaycastRules_m97F95ACF99BA2A8746F4AD02AD2A65EEB1D69CCB_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Cast.PointsCast::set_PhysicsCast(Zinnia.Cast.PhysicsCast)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_PhysicsCast_mE06CEACDEA2FDB116F948C3E87DEBF4A36FF32A4_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* ___0_value, const RuntimeMethod* method) ;
// System.Single Tilia.Indicators.ObjectPointers.PointerFacade::get_CursorLockThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerFacade_get_CursorLockThreshold_mE0188061DD0B5FB8915D15A6D2F2A5909D42776D_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Cast.PointsCast::set_CursorLockThreshold(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_CursorLockThreshold_mC309585B57FB8926111162D58B851C6167B75EAC_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Tilia.Indicators.ObjectPointers.PointerFacade::get_TransitionDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerFacade_get_TransitionDuration_m01EDD4215E0A4822685B7A6C442852737577ECCA_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Cast.PointsCast::set_TransitionDuration(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_TransitionDuration_mECDFF8455DC116A8AA5CDDCCA7209C976295319D_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, float ___0_value, const RuntimeMethod* method) ;
// Zinnia.Tracking.Follow.ObjectFollower Tilia.Indicators.ObjectPointers.PointerConfigurator::get_ObjectFollow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* PointerConfigurator_get_ObjectFollow_m88F219D5277A19FBCBD809A72C459792F2A92712_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Process.Component.GameObjectSourceTargetProcessor::get_Sources()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* GameObjectSourceTargetProcessor_get_Sources_mBA76D2CAAED402B7EAA3D42470243955F4BF8B4F_inline (GameObjectSourceTargetProcessor_t61E5575207AE6D27D96AFF2E431F9DAA564B6130* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Zinnia.Extension.BehaviourExtensions::RunWhenActiveAndEnabled(UnityEngine.Behaviour,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___0_behaviour, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::get_SelectOnActivatedAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::get_SelectOnDeactivatedAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::get_ActivationAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// Tilia.Indicators.ObjectPointers.PointerFacade/SelectionType Tilia.Indicators.ObjectPointers.PointerFacade::get_SelectionMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerFacade_get_SelectionMethod_m8601985237A88C3EEE0A42BFCAD10855ACD0B63A_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer/EventData>::Invoke(T0)
inline void UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8 (UnityEvent_1_t960FB627ECBF083B5B6146B40180F6F446F73CDD* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t960FB627ECBF083B5B6146B40180F6F446F73CDD*, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// UnityEngine.GameObject Tilia.Indicators.ObjectPointers.PointerFacade::get_FollowSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerFacade_get_FollowSource_m15B3A9A809765604324FE70DA03F77EBD41A0CB6_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerFacade::get_ActivationAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerFacade_get_ActivationAction_mB72F5F5297205488E0D451C7D44FC79C4C4D3B23_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerFacade::get_SelectionAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerFacade_get_SelectionAction_mDAD4B18F400453D2A148C03D1EB5EED9F36AB676_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// Zinnia.Cast.PointsCast/EventData Zinnia.Pointer.ObjectPointer/EventData::get_CurrentPointsCastData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* EventData_get_CurrentPointsCastData_m602996CD399E9C22139F42AAA5442F0F847F1072_inline (EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* __this, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.RaycastHit> Zinnia.Cast.PointsCast/EventData::get_HitData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 EventData_get_HitData_m1B705209A7F4F8C8C6B73312E76300ECF950FDA0_inline (EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.RaycastHit>::get_HasValue()
inline bool Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_inline (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326*, const RuntimeMethod*))Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.RaycastHit>::get_Value()
inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method)
{
	return ((  RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 (*) (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326*, const RuntimeMethod*))Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::get_HoverValidity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_HoverValidity_mE0FFA9F1DF74B8A81C9778EF66E95BF60C23A33F_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// System.Boolean Zinnia.Extension.RuleContainerExtensions::Accepts(Zinnia.Rule.RuleContainer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuleContainerExtensions_Accepts_m872DBFDD3794E0DFDD441CE6F3FCBF9690F92464 (RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_container, RuntimeObject* ___1_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Zinnia.Extension.BehaviourExtensions::IsMemberChangeAllowed(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___0_behaviour, const RuntimeMethod* method) ;
// System.Boolean Zinnia.Extension.BehaviourExtensions::IsValidState(UnityEngine.Behaviour,Zinnia.Extension.BehaviourExtensions/GameObjectActivity,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___0_behaviour, int32_t ___1_gameObjectActivity, bool ___2_behaviourNeedsToBeEnabled, const RuntimeMethod* method) ;
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_FollowSource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_FollowSource_m5A26C4B4AC9022B22CC40C6577DBD829A03FCD50 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_ActivationAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_ActivationAction_m23F8BF1348EC84C2E30BDC860E405B25A8214BCA (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___0_value, const RuntimeMethod* method) ;
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_SelectionAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_SelectionAction_m6099EBF69C694F25725398C51ADE08254BBBD201 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___0_value, const RuntimeMethod* method) ;
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_TargetValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_TargetValidity_m67B428F65DCAB2C697DC835E1C723E6A4EF224C6 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) ;
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_TargetPointValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_TargetPointValidity_m083BC27F396FA2ECC9E778A77AD504667E402110 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) ;
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_RaycastRules(Zinnia.Cast.PhysicsCast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_RaycastRules_m188027F19EE81127B8D8DB04ED61BD9370D37B2C (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* ___0_value, const RuntimeMethod* method) ;
// T Zinnia.Extension.EnumExtensions::GetByIndex<Tilia.Indicators.ObjectPointers.PointerFacade/SelectionType>(System.Int32)
inline int32_t EnumExtensions_GetByIndex_TisSelectionType_tA92619EF34428F7BEFCFACDAD88465AB010B3740_m207BF3D0542815C69094F9316782EFA670C1B5D3 (int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))EnumExtensions_GetByIndex_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEE9CB314C50C3F95F216CBD75410DE4A2836605C_gshared)(___0_index, method);
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_SelectionMethod(Tilia.Indicators.ObjectPointers.PointerFacade/SelectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_SelectionMethod_mC90B72D74C48B891A112EE946251E03DCE83FD1C (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// Tilia.Indicators.ObjectPointers.PointerConfigurator Tilia.Indicators.ObjectPointers.PointerFacade::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) ;
// Zinnia.Pointer.ObjectPointer Tilia.Indicators.ObjectPointers.PointerConfigurator::get_ObjectPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Pointer.ObjectPointer/UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m4388E844ACF6275001423620B2F9D3B5960BAFD3 (UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* __this, const RuntimeMethod* method) ;
// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4<UnityEngine.GameObject,UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent,UnityEngine.GameObject>::get_Source()
inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_inline (ValueExtractor_4_tD585AADBEE679BD188DFF34FB0DD933020887D71* __this, const RuntimeMethod* method)
{
	return ((  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* (*) (ValueExtractor_4_tD585AADBEE679BD188DFF34FB0DD933020887D71*, const RuntimeMethod*))ValueExtractor_4_get_Source_m3DAE709BFDE553B6880A520B7EF419C1BE9896AF_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor/PointerComponentType Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor::get_PointerComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerFacadeComponentGameObjectExtractor_get_PointerComponent_m6AD3459D49CB15A716E36F03051622B40BE66673_inline (PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9* __this, const RuntimeMethod* method) ;
// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ObjectPointer_get_Origin_m6053BA9EFC914CA7BB19488CE2BA793DE633AD06_inline (ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* __this, const RuntimeMethod* method) ;
// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::get_RepeatedSegment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ObjectPointer_get_RepeatedSegment_m7D6571A88AFEDF0E3DDB0CF2076DF2B628F73575_inline (ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* __this, const RuntimeMethod* method) ;
// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::get_Destination()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ObjectPointer_get_Destination_m0A0BA685659D09FEBC040CBABDF5FABB6FBC683B_inline (ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* __this, const RuntimeMethod* method) ;
// T Zinnia.Extension.GameObjectExtensions::TryGetComponent<Tilia.Indicators.ObjectPointers.PointerFacade>(UnityEngine.GameObject,System.Boolean,System.Boolean)
inline PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* GameObjectExtensions_TryGetComponent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mD0DD21774DCF1465C1F71D15D0DF935C131590FD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, bool ___1_searchDescendants, bool ___2_searchAncestors, const RuntimeMethod* method)
{
	return ((  PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, bool, const RuntimeMethod*))GameObjectExtensions_TryGetComponent_TisRuntimeObject_m0F533BE6666B37AE22E28E9386956109A92054BB_gshared)(___0_gameObject, ___1_searchDescendants, ___2_searchAncestors, method);
}
// System.Void Zinnia.Data.Operation.Extraction.ValueExtractor`4<UnityEngine.GameObject,UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent,UnityEngine.GameObject>::set_Source(TSourceElement)
inline void ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_inline (ValueExtractor_4_tD585AADBEE679BD188DFF34FB0DD933020887D71* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ValueExtractor_4_tD585AADBEE679BD188DFF34FB0DD933020887D71*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))ValueExtractor_4_set_Source_m306D10499249BEAE7C2F86A99B5372D6605B061D_gshared_inline)(__this, ___0_value, method);
}
// System.Void Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentGameObjectExtractor__ctor_mC3BAA239BE9C02D6818EF7B1ACC5B37912189F6F (ComponentGameObjectExtractor_tBFBE3C66CA977B26B90688F2B3766D4521B39F54* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Zinnia.Data.Type.TransformData::get_Transform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TransformData_get_Transform_m1844E8B5E08EBB513C58DFFA492C4A4F912B1D8D_inline (TransformData_t8B704F7BFD1E390A9CA280DDACE5F006ADFDE3F7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Tilia.Indicators.ObjectPointers.PointerFacade>()
inline PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* Component_GetComponentInParent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mE2C1FCB03E909F333FE3590D4421A12E01936BF6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// UnityEngine.GameObject Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor::ExtractValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ComponentGameObjectExtractor_ExtractValue_m0D212FD14EAC60AF68F63998C4EF1F2C067A9B9D (ComponentGameObjectExtractor_tBFBE3C66CA977B26B90688F2B3766D4521B39F54* __this, const RuntimeMethod* method) ;
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
// Tilia.Indicators.ObjectPointers.PointerFacade Tilia.Indicators.ObjectPointers.PointerConfigurator::get_Facade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return facade;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_0 = __this->___facade_4;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::set_Facade(Tilia.Indicators.ObjectPointers.PointerFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_Facade_mEE569356A6CF90B7C71934B6426151C087CCBD4D (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* ___0_value, const RuntimeMethod* method) 
{
	{
		// facade = value;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_0 = ___0_value;
		__this->___facade_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___facade_4), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Pointer.ObjectPointer Tilia.Indicators.ObjectPointers.PointerConfigurator::get_ObjectPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return objectPointer;
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_0 = __this->___objectPointer_5;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::set_ObjectPointer(Zinnia.Pointer.ObjectPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_ObjectPointer_mE3AD42B8372484DAF7B2FD64E5C2837D36C866CE (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* ___0_value, const RuntimeMethod* method) 
{
	{
		// objectPointer = value;
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_0 = ___0_value;
		__this->___objectPointer_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectPointer_5), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Tracking.Follow.ObjectFollower Tilia.Indicators.ObjectPointers.PointerConfigurator::get_ObjectFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* PointerConfigurator_get_ObjectFollow_m88F219D5277A19FBCBD809A72C459792F2A92712 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return objectFollow;
		ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* L_0 = __this->___objectFollow_6;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::set_ObjectFollow(Zinnia.Tracking.Follow.ObjectFollower)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_ObjectFollow_m8112B86017126DD884DC70EEF99FE74CEDFCD038 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* ___0_value, const RuntimeMethod* method) 
{
	{
		// objectFollow = value;
		ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* L_0 = ___0_value;
		__this->___objectFollow_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectFollow_6), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Cast.PointsCast Tilia.Indicators.ObjectPointers.PointerConfigurator::get_Caster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return caster;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0 = __this->___caster_7;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::set_Caster(Zinnia.Cast.PointsCast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_Caster_mE73B4858F23AF27879F8BD8CCC6BD4321693C894 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* ___0_value, const RuntimeMethod* method) 
{
	{
		// caster = value;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0 = ___0_value;
		__this->___caster_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caster_7), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::get_ActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return activationAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___activationAction_8;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::set_ActivationAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_ActivationAction_m6CA09F4FF5F479585877D44B47C9A10C3809759D (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___0_value, const RuntimeMethod* method) 
{
	{
		// activationAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___0_value;
		__this->___activationAction_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activationAction_8), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::get_SelectOnActivatedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return selectOnActivatedAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___selectOnActivatedAction_9;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::set_SelectOnActivatedAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_SelectOnActivatedAction_mC2D5B22003A2B1BFB83D151BE50B877AB4C25A72 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___0_value, const RuntimeMethod* method) 
{
	{
		// selectOnActivatedAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___0_value;
		__this->___selectOnActivatedAction_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectOnActivatedAction_9), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerConfigurator::get_SelectOnDeactivatedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return selectOnDeactivatedAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___selectOnDeactivatedAction_10;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::set_SelectOnDeactivatedAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_SelectOnDeactivatedAction_mA20052F5F6A51A3BAAEC4EA09A30E3D98BFCE94E (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___0_value, const RuntimeMethod* method) 
{
	{
		// selectOnDeactivatedAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___0_value;
		__this->___selectOnDeactivatedAction_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectOnDeactivatedAction_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTargetValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureTargetValidity_m11F57AFD527AD698B32AA969A569653D05A79CC1 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// Caster.TargetValidity = Facade.TargetValidity;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0;
		L_0 = PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_2;
		L_2 = PointerFacade_get_TargetValidity_m691B8BF2D744160D10782E42C49DB33886AFC3ED_inline(L_1, NULL);
		NullCheck(L_0);
		PointsCast_set_TargetValidity_mB8CA185C582A3AC112D4F20FCD00BA6DE7EDD373_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTargetPointValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureTargetPointValidity_m3A9E97A658AA568A25CBF77ACEE5B50FA690F093 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// Caster.TargetPointValidity = Facade.TargetPointValidity;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0;
		L_0 = PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_2;
		L_2 = PointerFacade_get_TargetPointValidity_m801455B19ED4E18269785E82B4BB629F6E597354_inline(L_1, NULL);
		NullCheck(L_0);
		PointsCast_set_TargetPointValidity_mF1A3F1657AC2F65CAF071962273891EDFD1F0315_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureRaycastRules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureRaycastRules_m1AB88D98D74A5C55FA80322A77B0FAE3ECA886FE (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// Caster.PhysicsCast = Facade.RaycastRules;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0;
		L_0 = PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* L_2;
		L_2 = PointerFacade_get_RaycastRules_m97F95ACF99BA2A8746F4AD02AD2A65EEB1D69CCB_inline(L_1, NULL);
		NullCheck(L_0);
		PointsCast_set_PhysicsCast_mE06CEACDEA2FDB116F948C3E87DEBF4A36FF32A4_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureCursorLockThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureCursorLockThreshold_m00197C7EC1E736BD019016E15ADF09CAA6D9AC1C (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// Caster.CursorLockThreshold = Facade.CursorLockThreshold;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0;
		L_0 = PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = PointerFacade_get_CursorLockThreshold_mE0188061DD0B5FB8915D15A6D2F2A5909D42776D_inline(L_1, NULL);
		NullCheck(L_0);
		PointsCast_set_CursorLockThreshold_mC309585B57FB8926111162D58B851C6167B75EAC_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTransitionDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureTransitionDuration_m9B24067E1E233DA23E5E05168461D8DC2B0E1F32 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// Caster.TransitionDuration = Facade.TransitionDuration;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0;
		L_0 = PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = PointerFacade_get_TransitionDuration_m01EDD4215E0A4822685B7A6C442852737577ECCA_inline(L_1, NULL);
		NullCheck(L_0);
		PointsCast_set_TransitionDuration_mECDFF8455DC116A8AA5CDDCCA7209C976295319D_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureFollowSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureFollowSources_m4A84C57179A0503C3C29BAC2A0120402C7800898 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerConfigurator_U3CConfigureFollowSourcesU3Eb__33_0_m1DDDD1B719CE76297A6CF21DB532ABEB7CEA86D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectFollow.Sources.RunWhenActiveAndEnabled(() => SetFollowSource());
		ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* L_0;
		L_0 = PointerConfigurator_get_ObjectFollow_m88F219D5277A19FBCBD809A72C459792F2A92712_inline(__this, NULL);
		NullCheck(L_0);
		GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* L_1;
		L_1 = GameObjectSourceTargetProcessor_get_Sources_mBA76D2CAAED402B7EAA3D42470243955F4BF8B4F_inline(L_0, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)PointerConfigurator_U3CConfigureFollowSourcesU3Eb__33_0_m1DDDD1B719CE76297A6CF21DB532ABEB7CEA86D1_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureSelectionAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureSelectionAction_mF4FA50BD4A0E43D096E7599F1B3B6FA257B799EB (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_0_m61CDCBBB65368BC3608FE086A048B2CB64B0DA4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_1_m1597918F27F65215D4A1C522889FF6BF09C0390D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SelectOnActivatedAction.RunWhenActiveAndEnabled(() => SetSelectionOnActivatedAction());
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0;
		L_0 = PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_0_m61CDCBBB65368BC3608FE086A048B2CB64B0DA4B_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_0, L_1, NULL);
		// SelectOnDeactivatedAction.RunWhenActiveAndEnabled(() => SetSelectionOnDeactivatedAction());
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2;
		L_2 = PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_1_m1597918F27F65215D4A1C522889FF6BF09C0390D_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureActivationAction_mA44B1F3E9ABD1E42F9766AE0BFFF02A9D05817B9 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerConfigurator_U3CConfigureActivationActionU3Eb__35_0_mB7066DBCF389855A58AA302A47C402A0EFCF9382_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivationAction.RunWhenActiveAndEnabled(() => SetActivationAction());
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0;
		L_0 = PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)PointerConfigurator_U3CConfigureActivationActionU3Eb__35_0_mB7066DBCF389855A58AA302A47C402A0EFCF9382_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureSelectionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureSelectionType_mFC0B00E743F7CEA785C181F83D8DE76F6CE55F6E (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ActivationAction.gameObject.SetActive(false);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0;
		L_0 = PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31_inline(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// switch (Facade.SelectionMethod)
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_2;
		L_2 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PointerFacade_get_SelectionMethod_m8601985237A88C3EEE0A42BFCAD10855ACD0B63A_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		goto IL_006c;
	}

IL_0026:
	{
		// SelectOnActivatedAction.gameObject.SetActive(true);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_6;
		L_6 = PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E_inline(__this, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// SelectOnDeactivatedAction.gameObject.SetActive(false);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_8;
		L_8 = PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306_inline(__this, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// break;
		goto IL_006c;
	}

IL_004a:
	{
		// SelectOnActivatedAction.gameObject.SetActive(false);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_10;
		L_10 = PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E_inline(__this, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// SelectOnDeactivatedAction.gameObject.SetActive(true);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_12;
		L_12 = PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306_inline(__this, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
	}

IL_006c:
	{
		// ConfigureSelectionAction();
		VirtualActionInvoker0::Invoke(10 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureSelectionAction() */, __this);
		// ConfigureActivationAction();
		VirtualActionInvoker0::Invoke(11 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureActivationAction() */, __this);
		// ActivationAction.gameObject.SetActive(true);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_14;
		L_14 = PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31_inline(__this, NULL);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::EmitActivated(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitActivated_mBE488E63FD7D5832A3CBF876FA77DFD9DFA8184E (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B2_0 = NULL;
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B1_0 = NULL;
	{
		// Facade.Activated?.Invoke(eventData);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_0;
		L_0 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_0);
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_1 = L_0->___Activated_14;
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_3 = ___0_eventData;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8(G_B2_0, L_3, UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::EmitDeactivated(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitDeactivated_mA7FB466EBCAF67CDBA2D61BD98782A58ADDA7743 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B2_0 = NULL;
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B1_0 = NULL;
	{
		// Facade.Deactivated?.Invoke(eventData);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_0;
		L_0 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_0);
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_1 = L_0->___Deactivated_15;
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_3 = ___0_eventData;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8(G_B2_0, L_3, UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::EmitEntered(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitEntered_m1B5C27E8B712D3C7EADBCB8CC02302BDA96063F6 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B4_0 = NULL;
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B3_0 = NULL;
	{
		// if (!IsValidHover(eventData))
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_0 = ___0_eventData;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* >::Invoke(24 /* System.Boolean Tilia.Indicators.ObjectPointers.PointerConfigurator::IsValidHover(Zinnia.Pointer.ObjectPointer/EventData) */, __this, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Facade.Entered?.Invoke(eventData);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_2;
		L_2 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_2);
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_3 = L_2->___Entered_16;
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_5 = ___0_eventData;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8(G_B4_0, L_5, UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::EmitExited(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitExited_mB81A8D5C56E0D28A21E11C2847666CEA4576FA91 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B4_0 = NULL;
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B3_0 = NULL;
	{
		// if (!IsValidHover(eventData))
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_0 = ___0_eventData;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* >::Invoke(24 /* System.Boolean Tilia.Indicators.ObjectPointers.PointerConfigurator::IsValidHover(Zinnia.Pointer.ObjectPointer/EventData) */, __this, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Facade.Exited?.Invoke(eventData);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_2;
		L_2 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_2);
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_3 = L_2->___Exited_17;
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_5 = ___0_eventData;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8(G_B4_0, L_5, UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::EmitHoverChanged(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitHoverChanged_m6B1DC685A7421C5A751B33B8A678D4D8A2EA16BC (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B4_0 = NULL;
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B3_0 = NULL;
	{
		// if (!IsValidHover(eventData))
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_0 = ___0_eventData;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* >::Invoke(24 /* System.Boolean Tilia.Indicators.ObjectPointers.PointerConfigurator::IsValidHover(Zinnia.Pointer.ObjectPointer/EventData) */, __this, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Facade.HoverChanged?.Invoke(eventData);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_2;
		L_2 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_2);
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_3 = L_2->___HoverChanged_18;
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_5 = ___0_eventData;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8(G_B4_0, L_5, UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::EmitSelected(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitSelected_m1D31254F6752CBA119FA692268BC29872F2AE200 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B2_0 = NULL;
	UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* G_B1_0 = NULL;
	{
		// Facade.Selected?.Invoke(eventData);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_0;
		L_0 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_0);
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_1 = L_0->___Selected_19;
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_3 = ___0_eventData;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8(G_B2_0, L_3, UnityEvent_1_Invoke_mE4DD951FA8CDA74A07DCDC842938B3A77C4F22B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_OnEnable_mBA15C008ABDEB00A8380E8009AC4608D1A5C5A1B (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// ConfigureTargetValidity();
		VirtualActionInvoker0::Invoke(4 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTargetValidity() */, __this);
		// ConfigureTargetPointValidity();
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTargetPointValidity() */, __this);
		// ConfigureRaycastRules();
		VirtualActionInvoker0::Invoke(6 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureRaycastRules() */, __this);
		// ConfigureFollowSources();
		VirtualActionInvoker0::Invoke(9 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureFollowSources() */, __this);
		// ConfigureSelectionType();
		VirtualActionInvoker0::Invoke(12 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureSelectionType() */, __this);
		// ConfigureCursorLockThreshold();
		VirtualActionInvoker0::Invoke(7 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureCursorLockThreshold() */, __this);
		// ConfigureTransitionDuration();
		VirtualActionInvoker0::Invoke(8 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTransitionDuration() */, __this);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetFollowSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_SetFollowSource_m482613044BCFD6E72F9C6E5A2CB64342FC417A23 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectFollow.Sources.Clear();
		ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* L_0;
		L_0 = PointerConfigurator_get_ObjectFollow_m88F219D5277A19FBCBD809A72C459792F2A92712_inline(__this, NULL);
		NullCheck(L_0);
		GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* L_1;
		L_1 = GameObjectSourceTargetProcessor_get_Sources_mBA76D2CAAED402B7EAA3D42470243955F4BF8B4F_inline(L_0, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>::Clear(System.Boolean) */, L_1, (bool)0);
		// if (Facade.FollowSource != null)
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_2;
		L_2 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = PointerFacade_get_FollowSource_m15B3A9A809765604324FE70DA03F77EBD41A0CB6_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// ObjectFollow.Sources.Add(Facade.FollowSource);
		ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* L_5;
		L_5 = PointerConfigurator_get_ObjectFollow_m88F219D5277A19FBCBD809A72C459792F2A92712_inline(__this, NULL);
		NullCheck(L_5);
		GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* L_6;
		L_6 = GameObjectSourceTargetProcessor_get_Sources_mBA76D2CAAED402B7EAA3D42470243955F4BF8B4F_inline(L_5, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_7;
		L_7 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = PointerFacade_get_FollowSource_m15B3A9A809765604324FE70DA03F77EBD41A0CB6_inline(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(15 /* System.Void Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>::Add(TElement) */, L_6, L_8);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_SetActivationAction_m0429D4100D4F93A309FA1E86F8D95490DD9EF4E6 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivationAction.ClearSources();
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0;
		L_0 = PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		// if (Facade.ActivationAction != null)
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2;
		L_2 = PointerFacade_get_ActivationAction_mB72F5F5297205488E0D451C7D44FC79C4C4D3B23_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// ActivationAction.AddSource(Facade.ActivationAction);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_4;
		L_4 = PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_5;
		L_5 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_5);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_6;
		L_6 = PointerFacade_get_ActivationAction_mB72F5F5297205488E0D451C7D44FC79C4C4D3B23_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_4, L_6);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetSelectionOnActivatedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_SetSelectionOnActivatedAction_m2E86A64DBA771E8E017918096FFFB6DE596A19B2 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SelectOnActivatedAction.ClearSources();
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0;
		L_0 = PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		// if (Facade.SelectionAction != null)
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2;
		L_2 = PointerFacade_get_SelectionAction_mDAD4B18F400453D2A148C03D1EB5EED9F36AB676_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// SelectOnActivatedAction.AddSource(Facade.SelectionAction);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_4;
		L_4 = PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_5;
		L_5 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_5);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_6;
		L_6 = PointerFacade_get_SelectionAction_mDAD4B18F400453D2A148C03D1EB5EED9F36AB676_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_4, L_6);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetSelectionOnDeactivatedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_SetSelectionOnDeactivatedAction_m53814C2D4342C7908DA52EE6C00ECE607B3C2816 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SelectOnDeactivatedAction.ClearSources();
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0;
		L_0 = PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		// if (Facade.SelectionAction != null)
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_1;
		L_1 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_1);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2;
		L_2 = PointerFacade_get_SelectionAction_mDAD4B18F400453D2A148C03D1EB5EED9F36AB676_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// SelectOnDeactivatedAction.AddSource(Facade.SelectionAction);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_4;
		L_4 = PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306_inline(__this, NULL);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_5;
		L_5 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_5);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_6;
		L_6 = PointerFacade_get_SelectionAction_mDAD4B18F400453D2A148C03D1EB5EED9F36AB676_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_4, L_6);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Boolean Tilia.Indicators.ObjectPointers.PointerConfigurator::IsValidHover(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerConfigurator_IsValidHover_m4C9DC190CB41C70B6B742E9D62D00F4CCA4BBD11 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return eventData != null &&
		//     eventData.CurrentPointsCastData != null &&
		//     eventData.CurrentPointsCastData.HitData != null &&
		//     eventData.CurrentPointsCastData.HitData.Value.transform != null &&
		//     Facade.HoverValidity.Accepts(eventData.CurrentPointsCastData.HitData.Value.transform.gameObject);
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_0 = ___0_eventData;
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_1 = ___0_eventData;
		NullCheck(L_1);
		EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* L_2;
		L_2 = EventData_get_CurrentPointsCastData_m602996CD399E9C22139F42AAA5442F0F847F1072_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_3 = ___0_eventData;
		NullCheck(L_3);
		EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* L_4;
		L_4 = EventData_get_CurrentPointsCastData_m602996CD399E9C22139F42AAA5442F0F847F1072_inline(L_3, NULL);
		NullCheck(L_4);
		Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 L_5;
		L_5 = EventData_get_HitData_m1B705209A7F4F8C8C6B73312E76300ECF950FDA0_inline(L_4, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_inline((&V_0), Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0074;
		}
	}
	{
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_7 = ___0_eventData;
		NullCheck(L_7);
		EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* L_8;
		L_8 = EventData_get_CurrentPointsCastData_m602996CD399E9C22139F42AAA5442F0F847F1072_inline(L_7, NULL);
		NullCheck(L_8);
		Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 L_9;
		L_9 = EventData_get_HitData_m1B705209A7F4F8C8C6B73312E76300ECF950FDA0_inline(L_8, NULL);
		V_0 = L_9;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_10;
		L_10 = Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC((&V_0), Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var);
		V_1 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_13;
		L_13 = PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline(__this, NULL);
		NullCheck(L_13);
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_14;
		L_14 = PointerFacade_get_HoverValidity_mE0FFA9F1DF74B8A81C9778EF66E95BF60C23A33F_inline(L_13, NULL);
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_15 = ___0_eventData;
		NullCheck(L_15);
		EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* L_16;
		L_16 = EventData_get_CurrentPointsCastData_m602996CD399E9C22139F42AAA5442F0F847F1072_inline(L_15, NULL);
		NullCheck(L_16);
		Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 L_17;
		L_17 = EventData_get_HitData_m1B705209A7F4F8C8C6B73312E76300ECF950FDA0_inline(L_16, NULL);
		V_0 = L_17;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_18;
		L_18 = Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC((&V_0), Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var);
		V_1 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		bool L_21;
		L_21 = RuleContainerExtensions_Accepts_m872DBFDD3794E0DFDD441CE6F3FCBF9690F92464(L_14, L_20, NULL);
		return L_21;
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator__ctor_mCEE24D513ECB50D434254D9D0C9F3D77764860E3 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::<ConfigureFollowSources>b__33_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureFollowSourcesU3Eb__33_0_m1DDDD1B719CE76297A6CF21DB532ABEB7CEA86D1 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// ObjectFollow.Sources.RunWhenActiveAndEnabled(() => SetFollowSource());
		VirtualActionInvoker0::Invoke(20 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetFollowSource() */, __this);
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::<ConfigureSelectionAction>b__34_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_0_m61CDCBBB65368BC3608FE086A048B2CB64B0DA4B (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// SelectOnActivatedAction.RunWhenActiveAndEnabled(() => SetSelectionOnActivatedAction());
		VirtualActionInvoker0::Invoke(22 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetSelectionOnActivatedAction() */, __this);
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::<ConfigureSelectionAction>b__34_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureSelectionActionU3Eb__34_1_m1597918F27F65215D4A1C522889FF6BF09C0390D (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// SelectOnDeactivatedAction.RunWhenActiveAndEnabled(() => SetSelectionOnDeactivatedAction());
		VirtualActionInvoker0::Invoke(23 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetSelectionOnDeactivatedAction() */, __this);
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::<ConfigureActivationAction>b__35_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureActivationActionU3Eb__35_0_mB7066DBCF389855A58AA302A47C402A0EFCF9382 (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// ActivationAction.RunWhenActiveAndEnabled(() => SetActivationAction());
		VirtualActionInvoker0::Invoke(21 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::SetActivationAction() */, __this);
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
// UnityEngine.GameObject Tilia.Indicators.ObjectPointers.PointerFacade::get_FollowSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerFacade_get_FollowSource_m15B3A9A809765604324FE70DA03F77EBD41A0CB6 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return followSource;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___followSource_4;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_FollowSource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_FollowSource_m5A26C4B4AC9022B22CC40C6577DBD829A03FCD50 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// followSource = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___followSource_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followSource_4), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterFollowSourceChange();
		VirtualActionInvoker0::Invoke(14 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterFollowSourceChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerFacade::get_ActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerFacade_get_ActivationAction_mB72F5F5297205488E0D451C7D44FC79C4C4D3B23 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return activationAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___activationAction_5;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_ActivationAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_ActivationAction_m23F8BF1348EC84C2E30BDC860E405B25A8214BCA (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___0_value, const RuntimeMethod* method) 
{
	{
		// activationAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___0_value;
		__this->___activationAction_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activationAction_5), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterActivationActionChange();
		VirtualActionInvoker0::Invoke(15 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterActivationActionChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Indicators.ObjectPointers.PointerFacade::get_SelectionAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerFacade_get_SelectionAction_mDAD4B18F400453D2A148C03D1EB5EED9F36AB676 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return selectionAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___selectionAction_6;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_SelectionAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_SelectionAction_m6099EBF69C694F25725398C51ADE08254BBBD201 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___0_value, const RuntimeMethod* method) 
{
	{
		// selectionAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___0_value;
		__this->___selectionAction_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectionAction_6), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterSelectionActionChange();
		VirtualActionInvoker0::Invoke(16 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterSelectionActionChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Indicators.ObjectPointers.PointerFacade/SelectionType Tilia.Indicators.ObjectPointers.PointerFacade::get_SelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerFacade_get_SelectionMethod_m8601985237A88C3EEE0A42BFCAD10855ACD0B63A (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return selectionMethod;
		int32_t L_0 = __this->___selectionMethod_7;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_SelectionMethod(Tilia.Indicators.ObjectPointers.PointerFacade/SelectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_SelectionMethod_mC90B72D74C48B891A112EE946251E03DCE83FD1C (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// selectionMethod = value;
		int32_t L_0 = ___0_value;
		__this->___selectionMethod_7 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterSelectionMethodChange();
		VirtualActionInvoker0::Invoke(17 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterSelectionMethodChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::get_HoverValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_HoverValidity_mE0FFA9F1DF74B8A81C9778EF66E95BF60C23A33F (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return hoverValidity;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = __this->___hoverValidity_8;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_HoverValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_HoverValidity_mBD2495A7A6CBF43C80B02FB9B5C08360192E6C80 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) 
{
	{
		// hoverValidity = value;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = ___0_value;
		__this->___hoverValidity_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hoverValidity_8), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::get_TargetValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_TargetValidity_m691B8BF2D744160D10782E42C49DB33886AFC3ED (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return targetValidity;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = __this->___targetValidity_9;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_TargetValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_TargetValidity_m67B428F65DCAB2C697DC835E1C723E6A4EF224C6 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) 
{
	{
		// targetValidity = value;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = ___0_value;
		__this->___targetValidity_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetValidity_9), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterTargetValidityChange();
		VirtualActionInvoker0::Invoke(18 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterTargetValidityChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Rule.RuleContainer Tilia.Indicators.ObjectPointers.PointerFacade::get_TargetPointValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_TargetPointValidity_m801455B19ED4E18269785E82B4BB629F6E597354 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return targetPointValidity;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = __this->___targetPointValidity_10;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_TargetPointValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_TargetPointValidity_m083BC27F396FA2ECC9E778A77AD504667E402110 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) 
{
	{
		// targetPointValidity = value;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = ___0_value;
		__this->___targetPointValidity_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetPointValidity_10), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterTargetPointValidityChange();
		VirtualActionInvoker0::Invoke(19 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterTargetPointValidityChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Cast.PhysicsCast Tilia.Indicators.ObjectPointers.PointerFacade::get_RaycastRules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* PointerFacade_get_RaycastRules_m97F95ACF99BA2A8746F4AD02AD2A65EEB1D69CCB (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return raycastRules;
		PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* L_0 = __this->___raycastRules_11;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_RaycastRules(Zinnia.Cast.PhysicsCast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_RaycastRules_m188027F19EE81127B8D8DB04ED61BD9370D37B2C (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* ___0_value, const RuntimeMethod* method) 
{
	{
		// raycastRules = value;
		PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* L_0 = ___0_value;
		__this->___raycastRules_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastRules_11), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterRaycastRulesChange();
		VirtualActionInvoker0::Invoke(20 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterRaycastRulesChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Single Tilia.Indicators.ObjectPointers.PointerFacade::get_CursorLockThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerFacade_get_CursorLockThreshold_mE0188061DD0B5FB8915D15A6D2F2A5909D42776D (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return cursorLockThreshold;
		float L_0 = __this->___cursorLockThreshold_12;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_CursorLockThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_CursorLockThreshold_m4A1BDB1EA7B5E9E936BF81F79F919DAE490A3CB0 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// cursorLockThreshold = value;
		float L_0 = ___0_value;
		__this->___cursorLockThreshold_12 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterCursorLockThresholdChange();
		VirtualActionInvoker0::Invoke(21 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterCursorLockThresholdChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Single Tilia.Indicators.ObjectPointers.PointerFacade::get_TransitionDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerFacade_get_TransitionDuration_m01EDD4215E0A4822685B7A6C442852737577ECCA (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return transitionDuration;
		float L_0 = __this->___transitionDuration_13;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_TransitionDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_TransitionDuration_mB87B8DB17489E38013557F598B8CB5373DB6F130 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// transitionDuration = value;
		float L_0 = ___0_value;
		__this->___transitionDuration_13 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterTransitionDurationChange();
		VirtualActionInvoker0::Invoke(22 /* System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterTransitionDurationChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Indicators.ObjectPointers.PointerConfigurator Tilia.Indicators.ObjectPointers.PointerFacade::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0 = __this->___configuration_20;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::set_Configuration(Tilia.Indicators.ObjectPointers.PointerConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_Configuration_m207FC978F15934DAF3F31DE8A51A95E1F872FF8D (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* ___0_value, const RuntimeMethod* method) 
{
	{
		// configuration = value;
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0 = ___0_value;
		__this->___configuration_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_20), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::ClearFollowSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearFollowSource_mE0EAED95D2612CF207E09A7C514DFEB703C2A062 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// FollowSource = default;
		PointerFacade_set_FollowSource_m5A26C4B4AC9022B22CC40C6577DBD829A03FCD50(__this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::ClearActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearActivationAction_mE507A634BEA6EF8B14C21E25D2F542FA749EEEDF (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// ActivationAction = default;
		PointerFacade_set_ActivationAction_m23F8BF1348EC84C2E30BDC860E405B25A8214BCA(__this, (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::ClearSelectionAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearSelectionAction_mD5A1D3444C24C7A9A47E90B10FBD161266455CD9 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// SelectionAction = default;
		PointerFacade_set_SelectionAction_m6099EBF69C694F25725398C51ADE08254BBBD201(__this, (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::ClearTargetValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearTargetValidity_mDD5DFE092E6D6159F9B3594F272B9CEAD9E2435C (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// TargetValidity = default;
		PointerFacade_set_TargetValidity_m67B428F65DCAB2C697DC835E1C723E6A4EF224C6(__this, (RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::ClearTargetPointValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearTargetPointValidity_mA22E3F1B20F868A6020FB3DF7B87DDC693F3BE72 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// TargetPointValidity = default;
		PointerFacade_set_TargetPointValidity_m083BC27F396FA2ECC9E778A77AD504667E402110(__this, (RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::ClearRaycastRules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearRaycastRules_m4DD017260D8F2973FE506178C7BD692EBAE6D764 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// RaycastRules = default;
		PointerFacade_set_RaycastRules_m188027F19EE81127B8D8DB04ED61BD9370D37B2C(__this, (PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::SetSelectionMethod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_SetSelectionMethod_mB0AFFD59DDCA7A5403F8D9F2B9A167CD908A3D37 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, int32_t ___0_selectionMethodIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumExtensions_GetByIndex_TisSelectionType_tA92619EF34428F7BEFCFACDAD88465AB010B3740_m207BF3D0542815C69094F9316782EFA670C1B5D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SelectionMethod = EnumExtensions.GetByIndex<SelectionType>(selectionMethodIndex);
		int32_t L_0 = ___0_selectionMethodIndex;
		int32_t L_1;
		L_1 = EnumExtensions_GetByIndex_TisSelectionType_tA92619EF34428F7BEFCFACDAD88465AB010B3740_m207BF3D0542815C69094F9316782EFA670C1B5D3(L_0, EnumExtensions_GetByIndex_TisSelectionType_tA92619EF34428F7BEFCFACDAD88465AB010B3740_m207BF3D0542815C69094F9316782EFA670C1B5D3_RuntimeMethod_var);
		PointerFacade_set_SelectionMethod_mC90B72D74C48B891A112EE946251E03DCE83FD1C(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_Activate_mEEE28A88529F7E1E27CD3858789A24C1B6E52CC4 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// Configuration.ObjectPointer.Activate();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_1;
		L_1 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_1);
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_2;
		L_2 = PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline(L_1, NULL);
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(19 /* System.Void Zinnia.Pointer.ObjectPointer::Activate() */, L_2);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_Deactivate_mCB92827B76168F79928E1384245B7DE4E327C091 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ObjectPointer.Deactivate();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_1;
		L_1 = PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline(L_0, NULL);
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(20 /* System.Void Zinnia.Pointer.ObjectPointer::Deactivate() */, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::Select()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_Select_mE2800A7AA3121AD9FD361E20BB7806F9869777E7 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// Configuration.ObjectPointer.Select();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_1;
		L_1 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_1);
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_2;
		L_2 = PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline(L_1, NULL);
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(21 /* System.Void Zinnia.Pointer.ObjectPointer::Select() */, L_2);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterFollowSourceChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterFollowSourceChange_m83837EE258BDF356E30E20A328D46C96FB2A15A3 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureFollowSources();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(9 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureFollowSources() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterActivationActionChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterActivationActionChange_m495EE942A8F58EEC37FCC1385A90803E44FCF404 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureActivationAction();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(11 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureActivationAction() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterSelectionActionChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterSelectionActionChange_m1C24E7FA83C8CE92305F495335072E5576B486BB (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureSelectionAction();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(10 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureSelectionAction() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterSelectionMethodChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterSelectionMethodChange_m0C98D238B1D426E82EA1DAE70901018EAFFCAB5F (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureSelectionType();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(12 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureSelectionType() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterTargetValidityChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterTargetValidityChange_mE0DD2DB356FB533A2D264DD7CAEAD12E7B57634F (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureTargetValidity();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTargetValidity() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterTargetPointValidityChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterTargetPointValidityChange_mD11F9CBE64FAC23C75AE814C4418D9D9349DAEF8 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureTargetPointValidity();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTargetPointValidity() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterRaycastRulesChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterRaycastRulesChange_m9E7ECADAD9234EBA136C373F7DBE39958E79D9E4 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureRaycastRules();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(6 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureRaycastRules() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterCursorLockThresholdChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterCursorLockThresholdChange_m03086A2B38FE42130720740D5AB798BB01D3DFA1 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureCursorLockThreshold();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(7 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureCursorLockThreshold() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::OnAfterTransitionDurationChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterTransitionDurationChange_m1482902FF42CA100C132641085F729D3169EBF6E (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureTransitionDuration();
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0;
		L_0 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void Tilia.Indicators.ObjectPointers.PointerConfigurator::ConfigureTransitionDuration() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.PointerFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade__ctor_mC2B2A53EF9D549421967FD4E4D340C626CE37A74 (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectPointer.UnityEvent Activated = new ObjectPointer.UnityEvent();
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_0 = (UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4*)il2cpp_codegen_object_new(UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m4388E844ACF6275001423620B2F9D3B5960BAFD3(L_0, NULL);
		__this->___Activated_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Activated_14), (void*)L_0);
		// public ObjectPointer.UnityEvent Deactivated = new ObjectPointer.UnityEvent();
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_1 = (UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4*)il2cpp_codegen_object_new(UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m4388E844ACF6275001423620B2F9D3B5960BAFD3(L_1, NULL);
		__this->___Deactivated_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Deactivated_15), (void*)L_1);
		// public ObjectPointer.UnityEvent Entered = new ObjectPointer.UnityEvent();
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_2 = (UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4*)il2cpp_codegen_object_new(UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m4388E844ACF6275001423620B2F9D3B5960BAFD3(L_2, NULL);
		__this->___Entered_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entered_16), (void*)L_2);
		// public ObjectPointer.UnityEvent Exited = new ObjectPointer.UnityEvent();
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_3 = (UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4*)il2cpp_codegen_object_new(UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m4388E844ACF6275001423620B2F9D3B5960BAFD3(L_3, NULL);
		__this->___Exited_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Exited_17), (void*)L_3);
		// public ObjectPointer.UnityEvent HoverChanged = new ObjectPointer.UnityEvent();
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_4 = (UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4*)il2cpp_codegen_object_new(UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent__ctor_m4388E844ACF6275001423620B2F9D3B5960BAFD3(L_4, NULL);
		__this->___HoverChanged_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HoverChanged_18), (void*)L_4);
		// public ObjectPointer.UnityEvent Selected = new ObjectPointer.UnityEvent();
		UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4* L_5 = (UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4*)il2cpp_codegen_object_new(UnityEvent_t1FD12894AF91E11386AB69AFF964600965536FF4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEvent__ctor_m4388E844ACF6275001423620B2F9D3B5960BAFD3(L_5, NULL);
		__this->___Selected_19 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Selected_19), (void*)L_5);
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
// Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor/PointerComponentType Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor::get_PointerComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerFacadeComponentGameObjectExtractor_get_PointerComponent_m6AD3459D49CB15A716E36F03051622B40BE66673 (PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9* __this, const RuntimeMethod* method) 
{
	{
		// return pointerComponent;
		int32_t L_0 = __this->___pointerComponent_8;
		return L_0;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor::set_PointerComponent(Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor/PointerComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_set_PointerComponent_mFB5108E8EC3BA9912CDC2CEE33E7701D03BB834D (PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// pointerComponent = value;
		int32_t L_0 = ___0_value;
		__this->___pointerComponent_8 = L_0;
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor::ExtractValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerFacadeComponentGameObjectExtractor_ExtractValue_mB0E072A9CEC825792E430836123124C03C41DF60 (PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (Source == null || Source.GetType() != typeof(PointerFacade))
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0;
		L_0 = ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_inline(__this, ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_inline(__this, ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_002c:
	{
		// PointerFacade pointerSource = (PointerFacade)Source;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
		L_7 = ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_inline(__this, ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var);
		V_0 = ((PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D*)CastclassClass((RuntimeObject*)L_7, PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_il2cpp_TypeInfo_var));
		// switch (PointerComponent)
		int32_t L_8;
		L_8 = PointerFacadeComponentGameObjectExtractor_get_PointerComponent_m6AD3459D49CB15A716E36F03051622B40BE66673_inline(__this, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_0094;
			}
		}
	}
	{
		goto IL_00aa;
	}

IL_0057:
	{
		// return pointerSource.Configuration.Caster.gameObject;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_10 = V_0;
		NullCheck(L_10);
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_11;
		L_11 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(L_10, NULL);
		NullCheck(L_11);
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_12;
		L_12 = PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline(L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		return L_13;
	}

IL_0068:
	{
		// return pointerSource.Configuration.ObjectPointer.Origin.gameObject;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_14 = V_0;
		NullCheck(L_14);
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_15;
		L_15 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(L_14, NULL);
		NullCheck(L_15);
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_16;
		L_16 = PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline(L_15, NULL);
		NullCheck(L_16);
		PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* L_17;
		L_17 = ObjectPointer_get_Origin_m6053BA9EFC914CA7BB19488CE2BA793DE633AD06_inline(L_16, NULL);
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		return L_18;
	}

IL_007e:
	{
		// return pointerSource.Configuration.ObjectPointer.RepeatedSegment.gameObject;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_19 = V_0;
		NullCheck(L_19);
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_20;
		L_20 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(L_19, NULL);
		NullCheck(L_20);
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_21;
		L_21 = PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline(L_20, NULL);
		NullCheck(L_21);
		PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* L_22;
		L_22 = ObjectPointer_get_RepeatedSegment_m7D6571A88AFEDF0E3DDB0CF2076DF2B628F73575_inline(L_21, NULL);
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		return L_23;
	}

IL_0094:
	{
		// return pointerSource.Configuration.ObjectPointer.Destination.gameObject;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_24 = V_0;
		NullCheck(L_24);
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_25;
		L_25 = PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline(L_24, NULL);
		NullCheck(L_25);
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_26;
		L_26 = PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline(L_25, NULL);
		NullCheck(L_26);
		PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* L_27;
		L_27 = ObjectPointer_get_Destination_m0A0BA685659D09FEBC040CBABDF5FABB6FBC683B_inline(L_26, NULL);
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		return L_28;
	}

IL_00aa:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor::SetSource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_SetSource_mCC2BDCDE978C0F2D2372619286648D73F5FB3007 (PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectExtensions_TryGetComponent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mD0DD21774DCF1465C1F71D15D0DF935C131590FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// Source = source.TryGetComponent<PointerFacade>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_source;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_2;
		L_2 = GameObjectExtensions_TryGetComponent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mD0DD21774DCF1465C1F71D15D0DF935C131590FD(L_1, (bool)0, (bool)0, GameObjectExtensions_TryGetComponent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mD0DD21774DCF1465C1F71D15D0DF935C131590FD_RuntimeMethod_var);
		ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_inline(__this, L_2, ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeComponentGameObjectExtractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor__ctor_m2BDBD3C4824DADCF8A8331EA4D80A473AA70F9BB (PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9* __this, const RuntimeMethod* method) 
{
	{
		ComponentGameObjectExtractor__ctor_mC3BAA239BE9C02D6818EF7B1ACC5B37912189F6F(__this, NULL);
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
// UnityEngine.GameObject Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::Extract(Zinnia.Data.Type.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerFacadeGameObjectExtractor_Extract_m2FD62F9A28628C76A9F65BB81BAEA615FE31CDF8 (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* ___0_data, const RuntimeMethod* method) 
{
	{
		// SetSource(data);
		SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* L_0 = ___0_data;
		VirtualActionInvoker1< SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* >::Invoke(19 /* System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		// return Extract();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = VirtualFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(7 /* TResultElement Zinnia.Data.Operation.Extraction.ValueExtractor`4<UnityEngine.GameObject,UnityEngine.Component,Zinnia.Data.Operation.Extraction.ComponentGameObjectExtractor/UnityEvent,UnityEngine.GameObject>::Extract() */, __this);
		return L_1;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::DoExtract(Zinnia.Data.Type.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_DoExtract_m8CE36D1286FF349664E16F6D83FAF8D32983A40D (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* ___0_data, const RuntimeMethod* method) 
{
	{
		// Extract(data);
		SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* L_0 = ___0_data;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = VirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* >::Invoke(15 /* UnityEngine.GameObject Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::Extract(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::Extract(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerFacadeGameObjectExtractor_Extract_mE8590AFC209C65FCEB0C2BF1323B393E7B0FDD88 (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_data, const RuntimeMethod* method) 
{
	{
		// return Extract((SurfaceData)data);
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_0 = ___0_data;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = VirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* >::Invoke(15 /* UnityEngine.GameObject Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::Extract(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		return L_1;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::DoExtract(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_DoExtract_mA19BD381220E5C9AF4C0F4223BCD55346BEEEE63 (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_data, const RuntimeMethod* method) 
{
	{
		// Extract(data);
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_0 = ___0_data;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = VirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* >::Invoke(17 /* UnityEngine.GameObject Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::Extract(Zinnia.Pointer.ObjectPointer/EventData) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Data.Type.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_SetSource_m9044542171B6BEA94555DA98B78273CFE3A139D6 (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mE2C1FCB03E909F333FE3590D4421A12E01936BF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsValidState() || source == null || source.Transform == null)
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* L_1 = ___0_source;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* L_2 = ___0_source;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = TransformData_get_Transform_m1844E8B5E08EBB513C58DFFA492C4A4F912B1D8D_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// return;
		return;
	}

IL_001c:
	{
		// Source = source.Transform.GetComponentInParent<PointerFacade>();
		SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* L_5 = ___0_source;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = TransformData_get_Transform_m1844E8B5E08EBB513C58DFFA492C4A4F912B1D8D_inline(L_5, NULL);
		NullCheck(L_6);
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_7;
		L_7 = Component_GetComponentInParent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mE2C1FCB03E909F333FE3590D4421A12E01936BF6(L_6, Component_GetComponentInParent_TisPointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_mE2C1FCB03E909F333FE3590D4421A12E01936BF6_RuntimeMethod_var);
		ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_inline(__this, L_7, ValueExtractor_4_set_Source_m5E939227227031B9C4A92308452B9F3A058DAE5B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Pointer.ObjectPointer/EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_SetSource_m446ABDE12946BA04ED490F8CCA5945E20365422D (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* ___0_source, const RuntimeMethod* method) 
{
	{
		// SetSource((SurfaceData)source);
		EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* L_0 = ___0_source;
		VirtualActionInvoker1< SurfaceData_t91AD728B78F4D689FBEB294FC15FDB0E1B975587* >::Invoke(19 /* System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::ExtractValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerFacadeGameObjectExtractor_ExtractValue_m63AD81205DD7B7B64DACF2A726547C6DE6CA4B3B (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Source != null && Source.GetType() == typeof(PointerFacade) ? base.ExtractValue() : null;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0;
		L_0 = ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_inline(__this, ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_inline(__this, ValueExtractor_4_get_Source_m46F5A47F51A2658D9A45778C1250D853F09DAA2E_RuntimeMethod_var);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_5, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_002c:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = ComponentGameObjectExtractor_ExtractValue_m0D212FD14EAC60AF68F63998C4EF1F2C067A9B9D(__this, NULL);
		return L_7;
	}
}
// System.Void Tilia.Indicators.ObjectPointers.Operation.Extraction.PointerFacadeGameObjectExtractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor__ctor_m77C4C84236B034354962937A48BE19D079049620 (PointerFacadeGameObjectExtractor_tC67E829E7368D8CF162F221610FAE715A17F03A6* __this, const RuntimeMethod* method) 
{
	{
		ComponentGameObjectExtractor__ctor_mC3BAA239BE9C02D6818EF7B1ACC5B37912189F6F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* PointerConfigurator_get_Caster_m19150F4EFC633592994C140A4911A87F835C35FB_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return caster;
		PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* L_0 = __this->___caster_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* PointerConfigurator_get_Facade_mE2B5AB54B06062616A7EF5221B3301C4888F0CB6_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return facade;
		PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* L_0 = __this->___facade_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_TargetValidity_m691B8BF2D744160D10782E42C49DB33886AFC3ED_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return targetValidity;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = __this->___targetValidity_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_TargetValidity_mB8CA185C582A3AC112D4F20FCD00BA6DE7EDD373_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) 
{
	{
		// targetValidity = value;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = ___0_value;
		__this->___targetValidity_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetValidity_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_TargetPointValidity_m801455B19ED4E18269785E82B4BB629F6E597354_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return targetPointValidity;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = __this->___targetPointValidity_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_TargetPointValidity_mF1A3F1657AC2F65CAF071962273891EDFD1F0315_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* ___0_value, const RuntimeMethod* method) 
{
	{
		// targetPointValidity = value;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = ___0_value;
		__this->___targetPointValidity_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetPointValidity_7), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* PointerFacade_get_RaycastRules_m97F95ACF99BA2A8746F4AD02AD2A65EEB1D69CCB_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return raycastRules;
		PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* L_0 = __this->___raycastRules_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_PhysicsCast_mE06CEACDEA2FDB116F948C3E87DEBF4A36FF32A4_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* ___0_value, const RuntimeMethod* method) 
{
	{
		// physicsCast = value;
		PhysicsCast_tAD9C66F568B7B4410AF719860EBADCC11572DCAD* L_0 = ___0_value;
		__this->___physicsCast_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___physicsCast_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerFacade_get_CursorLockThreshold_mE0188061DD0B5FB8915D15A6D2F2A5909D42776D_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return cursorLockThreshold;
		float L_0 = __this->___cursorLockThreshold_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_CursorLockThreshold_mC309585B57FB8926111162D58B851C6167B75EAC_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// cursorLockThreshold = value;
		float L_0 = ___0_value;
		__this->___cursorLockThreshold_8 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerFacade_get_TransitionDuration_m01EDD4215E0A4822685B7A6C442852737577ECCA_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return transitionDuration;
		float L_0 = __this->___transitionDuration_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointsCast_set_TransitionDuration_mECDFF8455DC116A8AA5CDDCCA7209C976295319D_inline (PointsCast_tE9D47A9F7EC96A45646CB019EC54E6F882C767C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// transitionDuration = value;
		float L_0 = ___0_value;
		__this->___transitionDuration_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* PointerConfigurator_get_ObjectFollow_m88F219D5277A19FBCBD809A72C459792F2A92712_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return objectFollow;
		ObjectFollower_t12E22AF168C99D8B3908607087B42F7FAC166100* L_0 = __this->___objectFollow_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* GameObjectSourceTargetProcessor_get_Sources_mBA76D2CAAED402B7EAA3D42470243955F4BF8B4F_inline (GameObjectSourceTargetProcessor_t61E5575207AE6D27D96AFF2E431F9DAA564B6130* __this, const RuntimeMethod* method) 
{
	{
		// return sources;
		GameObjectObservableList_tD35C1B9E8112E6937B26D5182CC258DA8997E593* L_0 = __this->___sources_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_SelectOnActivatedAction_mBF39EDABC94568145A5B154ED372D68C427FEB5E_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return selectOnActivatedAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___selectOnActivatedAction_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_SelectOnDeactivatedAction_m913B5FC193BD3A9DA991C8507B78F2FEE49C8306_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return selectOnDeactivatedAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___selectOnDeactivatedAction_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerConfigurator_get_ActivationAction_mA0B3376C55A010E590AA9B5BBEAAFDF4FCD51D31_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return activationAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___activationAction_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerFacade_get_SelectionMethod_m8601985237A88C3EEE0A42BFCAD10855ACD0B63A_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return selectionMethod;
		int32_t L_0 = __this->___selectionMethod_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerFacade_get_FollowSource_m15B3A9A809765604324FE70DA03F77EBD41A0CB6_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return followSource;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___followSource_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerFacade_get_ActivationAction_mB72F5F5297205488E0D451C7D44FC79C4C4D3B23_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return activationAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___activationAction_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* PointerFacade_get_SelectionAction_mDAD4B18F400453D2A148C03D1EB5EED9F36AB676_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return selectionAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___selectionAction_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* EventData_get_CurrentPointsCastData_m602996CD399E9C22139F42AAA5442F0F847F1072_inline (EventData_tBBBC117B73593461884E4A2FC72CB517D18FCB52* __this, const RuntimeMethod* method) 
{
	{
		// return currentPointsCastData;
		EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* L_0 = __this->___currentPointsCastData_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 EventData_get_HitData_m1B705209A7F4F8C8C6B73312E76300ECF950FDA0_inline (EventData_tF26F72A3DB65DA00CC49C64BDD9FDF998184A13E* __this, const RuntimeMethod* method) 
{
	{
		// return hitData;
		Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 L_0 = __this->___hitData_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* PointerFacade_get_HoverValidity_mE0FFA9F1DF74B8A81C9778EF66E95BF60C23A33F_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return hoverValidity;
		RuleContainer_t94F7E8793D5A30D8E226EC86A4F1632F134F2B34* L_0 = __this->___hoverValidity_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* PointerFacade_get_Configuration_mCF9A65199149747A5423917296E02E7A939BDE29_inline (PointerFacade_t488DE60CD14D6261F268F3C5ADFCF828549C622D* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* L_0 = __this->___configuration_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* PointerConfigurator_get_ObjectPointer_m9CAC9CF68ACAF7A0CD2951978E499487F0401289_inline (PointerConfigurator_t878906B57B5C642DEF6DF3BBD475EDBF58E50AD6* __this, const RuntimeMethod* method) 
{
	{
		// return objectPointer;
		ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* L_0 = __this->___objectPointer_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerFacadeComponentGameObjectExtractor_get_PointerComponent_m6AD3459D49CB15A716E36F03051622B40BE66673_inline (PointerFacadeComponentGameObjectExtractor_tC7BD7B9B5536541AFD0A3B016850C1FC4488EFC9* __this, const RuntimeMethod* method) 
{
	{
		// return pointerComponent;
		int32_t L_0 = __this->___pointerComponent_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ObjectPointer_get_Origin_m6053BA9EFC914CA7BB19488CE2BA793DE633AD06_inline (ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* __this, const RuntimeMethod* method) 
{
	{
		// return origin;
		PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* L_0 = __this->___origin_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ObjectPointer_get_RepeatedSegment_m7D6571A88AFEDF0E3DDB0CF2076DF2B628F73575_inline (ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* __this, const RuntimeMethod* method) 
{
	{
		// return repeatedSegment;
		PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* L_0 = __this->___repeatedSegment_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* ObjectPointer_get_Destination_m0A0BA685659D09FEBC040CBABDF5FABB6FBC683B_inline (ObjectPointer_tEA38ACB96D0A5AED6731A7D54003F5F3E587606A* __this, const RuntimeMethod* method) 
{
	{
		// return destination;
		PointerElement_tBC8652CD012131CBFF255B78EE710B2817D54378* L_0 = __this->___destination_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TransformData_get_Transform_m1844E8B5E08EBB513C58DFFA492C4A4F912B1D8D_inline (TransformData_t8B704F7BFD1E390A9CA280DDACE5F006ADFDE3F7* __this, const RuntimeMethod* method) 
{
	{
		// return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_gshared_inline (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExtractor_4_get_Source_m3DAE709BFDE553B6880A520B7EF419C1BE9896AF_gshared_inline (ValueExtractor_4_tDD6B19805DB83071DDA24BDBEA5A8816558A70F3* __this, const RuntimeMethod* method) 
{
	{
		// return source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExtractor_4_set_Source_m306D10499249BEAE7C2F86A99B5372D6605B061D_gshared_inline (ValueExtractor_4_tDD6B19805DB83071DDA24BDBEA5A8816558A70F3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// source = value;
		RuntimeObject* L_0 = ___0_value;
		__this->___source_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_6), (void*)L_0);
		// }
		return;
	}
}
