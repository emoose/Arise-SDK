
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

// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevIsUnknownHp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DEV_BtlStatusViewModelBase_C::DevIsUnknownHp(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevIsUnknownHp");

	UBP_DEV_BtlStatusViewModelBase_C_DevIsUnknownHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevIsUseArts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DEV_BtlStatusViewModelBase_C::DevIsUseArts(const struct FName& ArtsLabel, bool* IsUseable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevIsUseArts");

	UBP_DEV_BtlStatusViewModelBase_C_DevIsUseArts_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseable != nullptr)
		*IsUseable = params.IsUseable;
}


// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnChangeTp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlStatusViewModelBase_C::DevOnChangeTp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnChangeTp__DelegateSignature");

	UBP_DEV_BtlStatusViewModelBase_C_DevOnChangeTp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnChangePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlStatusViewModelBase_C::DevOnChangePlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnChangePlayer__DelegateSignature");

	UBP_DEV_BtlStatusViewModelBase_C_DevOnChangePlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnStrikeSwitchGaugeReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlStatusViewModelBase_C::DevOnStrikeSwitchGaugeReset__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnStrikeSwitchGaugeReset__DelegateSignature");

	UBP_DEV_BtlStatusViewModelBase_C_DevOnStrikeSwitchGaugeReset__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnStrikeSwitchStandby__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStandby                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OrderPattern                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DEV_BtlStatusViewModelBase_C::DevOnStrikeSwitchStandby__DelegateSignature(bool bStandby, int OrderPattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnStrikeSwitchStandby__DelegateSignature");

	UBP_DEV_BtlStatusViewModelBase_C_DevOnStrikeSwitchStandby__DelegateSignature_Params params;
	params.bStandby = bStandby;
	params.OrderPattern = OrderPattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
