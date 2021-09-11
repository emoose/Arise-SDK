
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

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevBattleChangeCharacterTopPrev
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlCommonViewModelBase_C::DevBattleChangeCharacterTopPrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevBattleChangeCharacterTopPrev");

	UBP_DEV_BtlCommonViewModelBase_C_DevBattleChangeCharacterTopPrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevBattleChangeCharacterTopNext
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlCommonViewModelBase_C::DevBattleChangeCharacterTopNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevBattleChangeCharacterTopNext");

	UBP_DEV_BtlCommonViewModelBase_C_DevBattleChangeCharacterTopNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevGetBackMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewModelBase*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_DEV_BtlCommonViewModelBase_C::DevGetBackMember(TArray<class UBtlStatusViewModelBase*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevGetBackMember");

	UBP_DEV_BtlCommonViewModelBase_C_DevGetBackMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevGetFrontMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsIgnorePlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBtlStatusViewModelBase*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_DEV_BtlCommonViewModelBase_C::DevGetFrontMember(bool IsIgnorePlayer, TArray<class UBtlStatusViewModelBase*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevGetFrontMember");

	UBP_DEV_BtlCommonViewModelBase_C_DevGetFrontMember_Params params;
	params.IsIgnorePlayer = IsIgnorePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnOpenBreakTextRaw__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnOpenBreakTextRaw__DelegateSignature(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnOpenBreakTextRaw__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnOpenBreakTextRaw__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerPrePhase__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnBattleMenuChangePlayerPrePhase__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerPrePhase__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuChangePlayerPrePhase__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnBattleMenuEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuEnd__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnBattleMenuStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuStart__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerPrev__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnBattleMenuChangePlayerPrev__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerPrev__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuChangePlayerPrev__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerNext__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnBattleMenuChangePlayerNext__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerNext__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuChangePlayerNext__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnChangeTutorialCount__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CountMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnChangeTutorialCount__DelegateSignature(int Count, int CountMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnChangeTutorialCount__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnChangeTutorialCount__DelegateSignature_Params params;
	params.Count = Count;
	params.CountMax = CountMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnInspirationArts__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArts_XmlDatatableLabel ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnInspirationArts__DelegateSignature(const struct FBtlArts_XmlDatatableLabel& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnInspirationArts__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnInspirationArts__DelegateSignature_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnNotUseArtsForTp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArtsIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnNotUseArtsForTp__DelegateSignature(int ArtsIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnNotUseArtsForTp__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnNotUseArtsForTp__DelegateSignature_Params params;
	params.ArtsIndex = ArtsIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnSwitchStrikeSwap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSwap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnSwitchStrikeSwap__DelegateSignature(bool bIsSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnSwitchStrikeSwap__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnSwitchStrikeSwap__DelegateSignature_Params params;
	params.bIsSwap = bIsSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnChangeVisiblePreset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DEV_BtlCommonViewModelBase_C::DevOnChangeVisiblePreset__DelegateSignature(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnChangeVisiblePreset__DelegateSignature");

	UBP_DEV_BtlCommonViewModelBase_C_DevOnChangeVisiblePreset__DelegateSignature_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
