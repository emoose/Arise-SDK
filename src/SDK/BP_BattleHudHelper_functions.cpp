
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

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenBreakTextAtTargetCursor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleOpenBreakTextAtTargetCursor(class ABtlCharacterBase* Unit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenBreakTextAtTargetCursor");

	UBP_BattleHudHelper_C_BattleOpenBreakTextAtTargetCursor_Params params;
	params.Unit = Unit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenBreakText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleOpenBreakText(const struct FVector& Location, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenBreakText");

	UBP_BattleHudHelper_C_BattleOpenBreakText_Params params;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.SetBattleWorldPositionImplementation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 UserWiget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bIsClampScreen                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScreenInRange                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_SetBattleWorldPositionImplementation(class UWidget* UserWiget, const struct FVector& Position, bool bIsClampScreen, class UObject* __WorldContext, bool* bScreenInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.SetBattleWorldPositionImplementation");

	UBP_BattleHudHelper_C_SetBattleWorldPositionImplementation_Params params;
	params.UserWiget = UserWiget;
	params.Position = Position;
	params.bIsClampScreen = bIsClampScreen;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bScreenInRange != nullptr)
		*bScreenInRange = params.bScreenInRange;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleSuccessTutorial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleSuccessTutorial(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleSuccessTutorial");

	UBP_BattleHudHelper_C_BattleSuccessTutorial_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleBeginTutorial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleBeginTutorial(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleBeginTutorial");

	UBP_BattleHudHelper_C_BattleBeginTutorial_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleBeginSpecialStrikeUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       TargetUnit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  VisiableCharacterID            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleBeginSpecialStrikeUI(class ABtlCharacterBase* TargetUnit, EArisePartyID VisiableCharacterID, float Timer, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleBeginSpecialStrikeUI");

	UBP_BattleHudHelper_C_BattleBeginSpecialStrikeUI_Params params;
	params.TargetUnit = TargetUnit;
	params.VisiableCharacterID = VisiableCharacterID;
	params.Timer = Timer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleChangeCharacterTopPrev
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleChangeCharacterTopPrev(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleChangeCharacterTopPrev");

	UBP_BattleHudHelper_C_BattleChangeCharacterTopPrev_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleChangeCharacterTopNext
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleChangeCharacterTopNext(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleChangeCharacterTopNext");

	UBP_BattleHudHelper_C_BattleChangeCharacterTopNext_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenPlayableHelp(Xml)
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCollectionHelp_XmlDatabaseLabel HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleOpenPlayableHelp_Xml_(const struct FCollectionHelp_XmlDatabaseLabel& HelpLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenPlayableHelp(Xml)");

	UBP_BattleHudHelper_C_BattleOpenPlayableHelp_Xml__Params params;
	params.HelpLabel = HelpLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleTutorialCountUpdate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CountMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleTutorialCountUpdate(int Count, int CountMax, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleTutorialCountUpdate");

	UBP_BattleHudHelper_C_BattleTutorialCountUpdate_Params params;
	params.Count = Count;
	params.CountMax = CountMax;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleClosePlayableHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleClosePlayableHelp(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleClosePlayableHelp");

	UBP_BattleHudHelper_C_BattleClosePlayableHelp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenPlayableHelp
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattleHudHelper_C::STATIC_BattleOpenPlayableHelp(const struct FString& HelpLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenPlayableHelp");

	UBP_BattleHudHelper_C_BattleOpenPlayableHelp_Params params;
	params.HelpLabel = HelpLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleHudHelper.BP_BattleHudHelper_C.GetHudVisible
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTR_BtlHudVisible      Result                         (Parm, OutParm)

void UBP_BattleHudHelper_C::STATIC_GetHudVisible(const struct FName& RowName, class UObject* __WorldContext, struct FSTR_BtlHudVisible* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleHudHelper.BP_BattleHudHelper_C.GetHudVisible");

	UBP_BattleHudHelper_C_GetHudVisible_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
