
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

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.SetWorldTimePause
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           newPause                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_SetWorldTimePause(bool newPause, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.SetWorldTimePause");

	UBP_MEP_CommonFucntion_C_SetWorldTimePause_Params params;
	params.newPause = newPause;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetQuestGuideClearCount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQuestID                Quest_ID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_MEP_CommonFucntion_C::STATIC_GetQuestGuideClearCount(const struct FQuestID& Quest_ID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetQuestGuideClearCount");

	UBP_MEP_CommonFucntion_C_GetQuestGuideClearCount_Params params;
	params.Quest_ID = Quest_ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideReorder
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                Quest_ID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_QuestGuideReorder(const struct FQuestID& Quest_ID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideReorder");

	UBP_MEP_CommonFucntion_C_QuestGuideReorder_Params params;
	params.Quest_ID = Quest_ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindow(XmlLabel)
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCollectionHelp_XmlDatabaseLabel HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_ShowPlayableHelpWindow_XmlLabel_(const struct FCollectionHelp_XmlDatabaseLabel& HelpLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindow(XmlLabel)");

	UBP_MEP_CommonFucntion_C_ShowPlayableHelpWindow_XmlLabel__Params params;
	params.HelpLabel = HelpLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindowDuration
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InHelpLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          InDuration                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_ShowPlayableHelpWindowDuration(const struct FString& InHelpLabel, float InDuration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindowDuration");

	UBP_MEP_CommonFucntion_C_ShowPlayableHelpWindowDuration_Params params;
	params.InHelpLabel = InHelpLabel;
	params.InDuration = InDuration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.SetWorldTime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          newTimeHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_SetWorldTime(float newTimeHour, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.SetWorldTime");

	UBP_MEP_CommonFucntion_C_SetWorldTime_Params params;
	params.newTimeHour = newTimeHour;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_ShowPlayableHelpWindow(const struct FString& HelpLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindow");

	UBP_MEP_CommonFucntion_C_ShowPlayableHelpWindow_Params params;
	params.HelpLabel = HelpLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetAlias
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AliasName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_GetAlias(const struct FString& AliasName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetAlias");

	UBP_MEP_CommonFucntion_C_GetAlias_Params params;
	params.AliasName = AliasName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.IsQuestGuideOpened
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                Quest_ID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClear                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_IsQuestGuideOpened(const struct FQuestID& Quest_ID, class UObject* __WorldContext, bool* bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.IsQuestGuideOpened");

	UBP_MEP_CommonFucntion_C_IsQuestGuideOpened_Params params;
	params.Quest_ID = Quest_ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClear != nullptr)
		*bClear = params.bClear;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.IsQuestGuideCleared
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                Quest_ID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClear                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_IsQuestGuideCleared(const struct FQuestID& Quest_ID, class UObject* __WorldContext, bool* bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.IsQuestGuideCleared");

	UBP_MEP_CommonFucntion_C_IsQuestGuideCleared_Params params;
	params.Quest_ID = Quest_ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClear != nullptr)
		*bClear = params.bClear;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideStart
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                Quest_ID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_QuestGuideStart(const struct FQuestID& Quest_ID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideStart");

	UBP_MEP_CommonFucntion_C_QuestGuideStart_Params params;
	params.Quest_ID = Quest_ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideStep
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                Quest_ID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Clear_Step                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowGuideOpen                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_QuestGuideStep(const struct FQuestID& Quest_ID, int Clear_Step, bool bShowGuideOpen, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideStep");

	UBP_MEP_CommonFucntion_C_QuestGuideStep_Params params;
	params.Quest_ID = Quest_ID;
	params.Clear_Step = Clear_Step;
	params.bShowGuideOpen = bShowGuideOpen;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetItemEquipmentPlayer
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MEP_CommonFucntion_C::STATIC_GetItemEquipmentPlayer(EArisePartyID PartyId, const struct FString& ItemLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetItemEquipmentPlayer");

	UBP_MEP_CommonFucntion_C_GetItemEquipmentPlayer_Params params;
	params.PartyId = PartyId;
	params.ItemLabel = ItemLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
