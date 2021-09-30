
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

// Function BP_AliasSupport.BP_AliasSupport_C.IsEnableAlias
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AliasSupport_C::STATIC_IsEnableAlias(int AliasID, class UObject* __WorldContext, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasSupport.BP_AliasSupport_C.IsEnableAlias");

	UBP_AliasSupport_C_IsEnableAlias_Params params;
	params.AliasID = AliasID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_AliasSupport.BP_AliasSupport_C.GetAliasCompleteBonusExp
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            BonusType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BonusValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           BonusExp                       (Parm, OutParm)

void UBP_AliasSupport_C::STATIC_GetAliasCompleteBonusExp(int BonusType, int BonusValue, class UObject* __WorldContext, struct FModifiedText* BonusExp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasSupport.BP_AliasSupport_C.GetAliasCompleteBonusExp");

	UBP_AliasSupport_C_GetAliasCompleteBonusExp_Params params;
	params.BonusType = BonusType;
	params.BonusValue = BonusValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonusExp != nullptr)
		*BonusExp = params.BonusExp;
}


// Function BP_AliasSupport.BP_AliasSupport_C.GetWidgetPosition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, OutParm, IsPlainOldData)

void UBP_AliasSupport_C::STATIC_GetWidgetPosition(class UWidget* NewParam, class UObject* __WorldContext, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasSupport.BP_AliasSupport_C.GetWidgetPosition");

	UBP_AliasSupport_C_GetWidgetPosition_Params params;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function BP_AliasSupport.BP_AliasSupport_C.GetAliasStatus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AliasName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Status                         (Parm, OutParm, ZeroConstructor)

void UBP_AliasSupport_C::STATIC_GetAliasStatus(const struct FString& AliasName, class UObject* __WorldContext, struct FString* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AliasSupport.BP_AliasSupport_C.GetAliasStatus");

	UBP_AliasSupport_C_GetAliasStatus_Params params;
	params.AliasName = AliasName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
