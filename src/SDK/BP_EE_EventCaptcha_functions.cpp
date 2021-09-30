
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetCaptureImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UBP_EE_EventCaptcha_C::GetCaptureImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetCaptureImage");

	UBP_EE_EventCaptcha_C_GetCaptureImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetEndAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UBP_EE_EventCaptcha_C::GetEndAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetEndAnimation");

	UBP_EE_EventCaptcha_C_GetEndAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetLoopAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UBP_EE_EventCaptcha_C::GetLoopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetLoopAnimation");

	UBP_EE_EventCaptcha_C_GetLoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetStartAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UBP_EE_EventCaptcha_C::GetStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EE_EventCaptcha.BP_EE_EventCaptcha_C.GetStartAnimation");

	UBP_EE_EventCaptcha_C_GetStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
