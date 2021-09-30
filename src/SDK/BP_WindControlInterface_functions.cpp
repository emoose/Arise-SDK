
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

// Function BP_WindControlInterface.BP_WindControlInterface_C.GetWindDirectional
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWindDirectionalSourceComponent* WindDirectional                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_WindControlInterface_C::GetWindDirectional(class UWindDirectionalSourceComponent** WindDirectional)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControlInterface.BP_WindControlInterface_C.GetWindDirectional");

	UBP_WindControlInterface_C_GetWindDirectional_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WindDirectional != nullptr)
		*WindDirectional = params.WindDirectional;
}


// Function BP_WindControlInterface.BP_WindControlInterface_C.GetWindStrengthScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          StrengthScale                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_WindControlInterface_C::GetWindStrengthScale(float* StrengthScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControlInterface.BP_WindControlInterface_C.GetWindStrengthScale");

	UBP_WindControlInterface_C_GetWindStrengthScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StrengthScale != nullptr)
		*StrengthScale = params.StrengthScale;
}


// Function BP_WindControlInterface.BP_WindControlInterface_C.SetWindStrengthScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StrengthScale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WindControlInterface_C::SetWindStrengthScale(float StrengthScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControlInterface.BP_WindControlInterface_C.SetWindStrengthScale");

	UBP_WindControlInterface_C_SetWindStrengthScale_Params params;
	params.StrengthScale = StrengthScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
