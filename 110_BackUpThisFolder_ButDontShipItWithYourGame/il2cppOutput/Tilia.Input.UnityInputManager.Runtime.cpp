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

// System.Collections.Generic.List`1<Zinnia.Action.BooleanAction>
struct List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71;
// System.Collections.Generic.List`1<Zinnia.Action.FloatAction>
struct List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689;
// System.Collections.Generic.List`1<Zinnia.Action.Vector2Action>
struct List_1_t8E7A3C31F79D8625CB0FEE8F245BE1AE87DBACDD;
// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E;
// Zinnia.Action.FloatAction
struct FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62;
// System.String
struct String_t;
// Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction
struct UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90;
// Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction
struct UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343;
// Tilia.Input.UnityInputManager.UnityInputManagerButtonAction
struct UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D;
// Zinnia.Action.Vector2Action
struct Vector2Action_t33AC2201F274A3FFAC17CD5070F05EE831B883A9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zinnia.Action.Action/BooleanUnityEvent
struct BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8;
// Zinnia.Action.BooleanAction/UnityEvent
struct UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776;
// Zinnia.Action.FloatAction/UnityEvent
struct UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452;
// Zinnia.Action.Vector2Action/UnityEvent
struct UnityEvent_t9CE81F2C7F3A97A8BEF5463E8E83CFB3778C3DD7;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8CB11E6FD40F9F15B03374389E038E816735D8A5 
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Zinnia.Action.Action
struct Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.Action/BooleanUnityEvent Zinnia.Action.Action::ActivationStateChanged
	BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8* ___ActivationStateChanged_4;
	// System.Boolean Zinnia.Action.Action::isActivated
	bool ___isActivated_5;
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

// Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>
struct Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	float ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	float ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	float ___value_13;
};

// Zinnia.Action.Action`3<Zinnia.Action.Vector2Action,UnityEngine.Vector2,Zinnia.Action.Vector2Action/UnityEvent>
struct Action_3_tADB178EFD2AC096D524C1A8F3A8ECC25FF5F8CBC  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t8E7A3C31F79D8625CB0FEE8F245BE1AE87DBACDD* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_t9CE81F2C7F3A97A8BEF5463E8E83CFB3778C3DD7* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_t9CE81F2C7F3A97A8BEF5463E8E83CFB3778C3DD7* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_t9CE81F2C7F3A97A8BEF5463E8E83CFB3778C3DD7* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_t9CE81F2C7F3A97A8BEF5463E8E83CFB3778C3DD7* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_13;
};

// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E  : public Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344
{
};

// Zinnia.Action.FloatAction
struct FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62  : public Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623
{
	// System.Single Zinnia.Action.FloatAction::equalityTolerance
	float ___equalityTolerance_14;
};

// Zinnia.Action.Vector2Action
struct Vector2Action_t33AC2201F274A3FFAC17CD5070F05EE831B883A9  : public Action_3_tADB178EFD2AC096D524C1A8F3A8ECC25FF5F8CBC
{
	// System.Single Zinnia.Action.Vector2Action::equalityTolerance
	float ___equalityTolerance_14;
};

// Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction
struct UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90  : public FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62
{
	// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::axisName
	String_t* ___axisName_15;
	// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::multiplier
	float ___multiplier_16;
};

// Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction
struct UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343  : public Vector2Action_t33AC2201F274A3FFAC17CD5070F05EE831B883A9
{
	// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::xAxisName
	String_t* ___xAxisName_15;
	// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::yAxisName
	String_t* ___yAxisName_16;
	// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::xMultiplier
	float ___xMultiplier_17;
	// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::yMultiplier
	float ___yMultiplier_18;
};

// Tilia.Input.UnityInputManager.UnityInputManagerButtonAction
struct UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D  : public BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E
{
	// UnityEngine.KeyCode Tilia.Input.UnityInputManager.UnityInputManagerButtonAction::keyCode
	int32_t ___keyCode_14;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Single

// System.Single

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// System.Void

// System.Void

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>

// Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>

// Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>

// Zinnia.Action.Action`3<Zinnia.Action.Vector2Action,UnityEngine.Vector2,Zinnia.Action.Vector2Action/UnityEvent>

// Zinnia.Action.Action`3<Zinnia.Action.Vector2Action,UnityEngine.Vector2,Zinnia.Action.Vector2Action/UnityEvent>

// Zinnia.Action.BooleanAction

// Zinnia.Action.BooleanAction

// Zinnia.Action.FloatAction

// Zinnia.Action.FloatAction

// Zinnia.Action.Vector2Action

// Zinnia.Action.Vector2Action

// Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction

// Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction

// Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction

// Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction

// Tilia.Input.UnityInputManager.UnityInputManagerButtonAction

// Tilia.Input.UnityInputManager.UnityInputManagerButtonAction
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::get_AxisName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis1DAction_get_AxisName_mB7D915D7D8CE486B3027183AE5AED4168E4CC46F_inline (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::get_Multiplier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityInputManagerAxis1DAction_get_Multiplier_mC5EECE212014196281AFB2540DFC6360DC560EE6_inline (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.FloatAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAction__ctor_mDADCBFC1C19CC6ED999EF3DDDD138E9BE89D238F (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* __this, const RuntimeMethod* method) ;
// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_XAxisName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis2DAction_get_XAxisName_m535120A5A468A8D95DB1AD2EEC3538CC3F21A134_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) ;
// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_XMultiplier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityInputManagerAxis2DAction_get_XMultiplier_m86FCB5D2D213E71B1EB19A6B905E16DDE46BBD78_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) ;
// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_YAxisName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis2DAction_get_YAxisName_mE644D48762EC657FF41A872394A8498649F6A5A0_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) ;
// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_YMultiplier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityInputManagerAxis2DAction_get_YMultiplier_m32945FC1252AE56BB9CCDD0F3CF488AB07113503_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.Vector2Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Action__ctor_mCF66F33F17163ABECDEA16080A6EBAE2471999E5 (Vector2Action_t33AC2201F274A3FFAC17CD5070F05EE831B883A9* __this, const RuntimeMethod* method) ;
// UnityEngine.KeyCode Tilia.Input.UnityInputManager.UnityInputManagerButtonAction::get_KeyCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityInputManagerButtonAction_get_KeyCode_mFC6206D6765B77D3AB7812B2F7EDE71D98BECCB8_inline (UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.BooleanAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74 (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* __this, const RuntimeMethod* method) ;
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
// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::get_AxisName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis1DAction_get_AxisName_mB7D915D7D8CE486B3027183AE5AED4168E4CC46F (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) 
{
	{
		// return axisName;
		String_t* L_0 = __this->___axisName_15;
		return L_0;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::set_AxisName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis1DAction_set_AxisName_m43FCD0FBEA59FCD1235B775C16AEFF3C384DBE07 (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// axisName = value;
		String_t* L_0 = ___0_value;
		__this->___axisName_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisName_15), (void*)L_0);
		// }
		return;
	}
}
// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::get_Multiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityInputManagerAxis1DAction_get_Multiplier_mC5EECE212014196281AFB2540DFC6360DC560EE6 (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) 
{
	{
		// return multiplier;
		float L_0 = __this->___multiplier_16;
		return L_0;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::set_Multiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis1DAction_set_Multiplier_mF8BE439C3B99EBBADB4BE4AF7D7C50A0DBD62B36 (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// multiplier = value;
		float L_0 = ___0_value;
		__this->___multiplier_16 = L_0;
		// }
		return;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis1DAction_Process_mB1B7052AB31F97DAACCDB972E575D51D2A4F5C24 (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) 
{
	{
		// Receive(Input.GetAxis(AxisName) * Multiplier);
		String_t* L_0;
		L_0 = UnityInputManagerAxis1DAction_get_AxisName_mB7D915D7D8CE486B3027183AE5AED4168E4CC46F_inline(__this, NULL);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_0, NULL);
		float L_2;
		L_2 = UnityInputManagerAxis1DAction_get_Multiplier_mC5EECE212014196281AFB2540DFC6360DC560EE6_inline(__this, NULL);
		VirtualActionInvoker1< float >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>::Receive(TValue) */, __this, ((float)il2cpp_codegen_multiply(L_1, L_2)));
		// }
		return;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis1DAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis1DAction__ctor_m94C8B43F5DB6211F04A97A98637A0E6CB4C65BFE (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) 
{
	{
		// private float multiplier = 1f;
		__this->___multiplier_16 = (1.0f);
		FloatAction__ctor_mDADCBFC1C19CC6ED999EF3DDDD138E9BE89D238F(__this, NULL);
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
// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_XAxisName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis2DAction_get_XAxisName_m535120A5A468A8D95DB1AD2EEC3538CC3F21A134 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return xAxisName;
		String_t* L_0 = __this->___xAxisName_15;
		return L_0;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::set_XAxisName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis2DAction_set_XAxisName_mE252268A619464D26B46AE46869822769EB0D0BC (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// xAxisName = value;
		String_t* L_0 = ___0_value;
		__this->___xAxisName_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xAxisName_15), (void*)L_0);
		// }
		return;
	}
}
// System.String Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_YAxisName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis2DAction_get_YAxisName_mE644D48762EC657FF41A872394A8498649F6A5A0 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return yAxisName;
		String_t* L_0 = __this->___yAxisName_16;
		return L_0;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::set_YAxisName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis2DAction_set_YAxisName_m108F98CDDC3B47E8BBE69CF307B419D5A5B25E19 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// yAxisName = value;
		String_t* L_0 = ___0_value;
		__this->___yAxisName_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yAxisName_16), (void*)L_0);
		// }
		return;
	}
}
// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_XMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityInputManagerAxis2DAction_get_XMultiplier_m86FCB5D2D213E71B1EB19A6B905E16DDE46BBD78 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return xMultiplier;
		float L_0 = __this->___xMultiplier_17;
		return L_0;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::set_XMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis2DAction_set_XMultiplier_m05B6321128FD45BFC8395F1ECDDFEFEED25AF367 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// xMultiplier = value;
		float L_0 = ___0_value;
		__this->___xMultiplier_17 = L_0;
		// }
		return;
	}
}
// System.Single Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::get_YMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityInputManagerAxis2DAction_get_YMultiplier_m32945FC1252AE56BB9CCDD0F3CF488AB07113503 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return yMultiplier;
		float L_0 = __this->___yMultiplier_18;
		return L_0;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::set_YMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis2DAction_set_YMultiplier_mAAF1F1566AD460914C5AD0E7D230E7F179EDA438 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// yMultiplier = value;
		float L_0 = ___0_value;
		__this->___yMultiplier_18 = L_0;
		// }
		return;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis2DAction_Process_m8F55A4F5F0375987F8B0C65E5C7FC876377691A4 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// Receive(new Vector2(Input.GetAxis(XAxisName) * XMultiplier, Input.GetAxis(YAxisName) * YMultiplier));
		String_t* L_0;
		L_0 = UnityInputManagerAxis2DAction_get_XAxisName_m535120A5A468A8D95DB1AD2EEC3538CC3F21A134_inline(__this, NULL);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_0, NULL);
		float L_2;
		L_2 = UnityInputManagerAxis2DAction_get_XMultiplier_m86FCB5D2D213E71B1EB19A6B905E16DDE46BBD78_inline(__this, NULL);
		String_t* L_3;
		L_3 = UnityInputManagerAxis2DAction_get_YAxisName_mE644D48762EC657FF41A872394A8498649F6A5A0_inline(__this, NULL);
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_3, NULL);
		float L_5;
		L_5 = UnityInputManagerAxis2DAction_get_YMultiplier_m32945FC1252AE56BB9CCDD0F3CF488AB07113503_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.Vector2Action,UnityEngine.Vector2,Zinnia.Action.Vector2Action/UnityEvent>::Receive(TValue) */, __this, L_6);
		// }
		return;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerAxis2DAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerAxis2DAction__ctor_m4C0D3BAE33FD0D6BE7A5EB4F8F107F6648C81DD0 (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// private float xMultiplier = 1f;
		__this->___xMultiplier_17 = (1.0f);
		// private float yMultiplier = 1f;
		__this->___yMultiplier_18 = (1.0f);
		Vector2Action__ctor_mCF66F33F17163ABECDEA16080A6EBAE2471999E5(__this, NULL);
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
// UnityEngine.KeyCode Tilia.Input.UnityInputManager.UnityInputManagerButtonAction::get_KeyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityInputManagerButtonAction_get_KeyCode_mFC6206D6765B77D3AB7812B2F7EDE71D98BECCB8 (UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D* __this, const RuntimeMethod* method) 
{
	{
		// return keyCode;
		int32_t L_0 = __this->___keyCode_14;
		return L_0;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerButtonAction::set_KeyCode(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerButtonAction_set_KeyCode_m9A52FC54F774C253E2B9C6BB2C160486EA03D9D4 (UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// keyCode = value;
		int32_t L_0 = ___0_value;
		__this->___keyCode_14 = L_0;
		// }
		return;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerButtonAction::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerButtonAction_Process_m63FA2BC680D4816BF4876F9DD00A418B39464DCB (UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D* __this, const RuntimeMethod* method) 
{
	{
		// Receive(Input.GetKey(KeyCode));
		int32_t L_0;
		L_0 = UnityInputManagerButtonAction_get_KeyCode_mFC6206D6765B77D3AB7812B2F7EDE71D98BECCB8_inline(__this, NULL);
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_0, NULL);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>::Receive(TValue) */, __this, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.UnityInputManager.UnityInputManagerButtonAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityInputManagerButtonAction__ctor_m4DBDF134B350FB23FCBC1C1FD58AB78C4BE92290 (UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D* __this, const RuntimeMethod* method) 
{
	{
		BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis1DAction_get_AxisName_mB7D915D7D8CE486B3027183AE5AED4168E4CC46F_inline (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) 
{
	{
		// return axisName;
		String_t* L_0 = __this->___axisName_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityInputManagerAxis1DAction_get_Multiplier_mC5EECE212014196281AFB2540DFC6360DC560EE6_inline (UnityInputManagerAxis1DAction_t0AAA8A0B34813D9C43312BA4CF800DEA74075E90* __this, const RuntimeMethod* method) 
{
	{
		// return multiplier;
		float L_0 = __this->___multiplier_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis2DAction_get_XAxisName_m535120A5A468A8D95DB1AD2EEC3538CC3F21A134_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return xAxisName;
		String_t* L_0 = __this->___xAxisName_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityInputManagerAxis2DAction_get_XMultiplier_m86FCB5D2D213E71B1EB19A6B905E16DDE46BBD78_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return xMultiplier;
		float L_0 = __this->___xMultiplier_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityInputManagerAxis2DAction_get_YAxisName_mE644D48762EC657FF41A872394A8498649F6A5A0_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return yAxisName;
		String_t* L_0 = __this->___yAxisName_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityInputManagerAxis2DAction_get_YMultiplier_m32945FC1252AE56BB9CCDD0F3CF488AB07113503_inline (UnityInputManagerAxis2DAction_tD296963E8B5E6D49954236CE8F33A5EB53055343* __this, const RuntimeMethod* method) 
{
	{
		// return yMultiplier;
		float L_0 = __this->___yMultiplier_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityInputManagerButtonAction_get_KeyCode_mFC6206D6765B77D3AB7812B2F7EDE71D98BECCB8_inline (UnityInputManagerButtonAction_t90E8A52571F8D58DF9E9334095981B41EA6ABA1D* __this, const RuntimeMethod* method) 
{
	{
		// return keyCode;
		int32_t L_0 = __this->___keyCode_14;
		return L_0;
	}
}
