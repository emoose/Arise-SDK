
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

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepOpenCheck
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StepStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StepEnd                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGuideUpdate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetQuestGuideStepOpenCheck(const struct FQuestID& QuestID, int QuestStep, int StepStart, int StepEnd, bool bGuideUpdate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepOpenCheck");

	UBP_PF_FunctionLibrary_C_SetQuestGuideStepOpenCheck_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;
	params.StepStart = StepStart;
	params.StepEnd = StepEnd;
	params.bGuideUpdate = bGuideUpdate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RotateToBackward
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleportPhysics               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_FunctionLibrary_C::STATIC_RotateToBackward(class AActor* Target, class AActor* To, bool bTeleportPhysics, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RotateToBackward");

	UBP_PF_FunctionLibrary_C_RotateToBackward_Params params;
	params.Target = Target;
	params.To = To;
	params.bTeleportPhysics = bTeleportPhysics;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.WhiteIn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_WhiteIn(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.WhiteIn");

	UBP_PF_FunctionLibrary_C_WhiteIn_Params params;
	params.Layer = Layer;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RotateTo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleportPhysics               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_FunctionLibrary_C::STATIC_RotateTo(class AActor* Target, class AActor* To, bool bTeleportPhysics, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RotateTo");

	UBP_PF_FunctionLibrary_C_RotateTo_Params params;
	params.Target = Target;
	params.To = To;
	params.bTeleportPhysics = bTeleportPhysics;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.WhiteOut
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_WhiteOut(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.WhiteOut");

	UBP_PF_FunctionLibrary_C_WhiteOut_Params params;
	params.Layer = Layer;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepShowFlag
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            StepNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowFlag                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetQuestGuideStepShowFlag(const struct FQuestID& QuestID, int StepNo, class UObject* __WorldContext, bool* ShowFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepShowFlag");

	UBP_PF_FunctionLibrary_C_GetQuestGuideStepShowFlag_Params params;
	params.QuestID = QuestID;
	params.StepNo = StepNo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShowFlag != nullptr)
		*ShowFlag = params.ShowFlag;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackOut(Deactive)
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_BlackOut_Deactive_(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackOut(Deactive)");

	UBP_PF_FunctionLibrary_C_BlackOut_Deactive__Params params;
	params.Layer = Layer;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetNPCAdjustHeightWithActor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineID          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetNPCAdjustHeightWithActor(const struct FPFNpcDefineID& DefineID, class AActor* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetNPCAdjustHeightWithActor");

	UBP_PF_FunctionLibrary_C_SetNPCAdjustHeightWithActor_Params params;
	params.DefineID = DefineID;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CollectQuestSysRewardLossItems
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            StepNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasLoss                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSysWinItemData> LossItems                      (Parm, OutParm, ZeroConstructor)
// int                            LossGald                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CollectQuestSysRewardLossItems(const struct FQuestID& QuestID, int StepNo, class UObject* __WorldContext, bool* bHasLoss, TArray<struct FSysWinItemData>* LossItems, int* LossGald)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CollectQuestSysRewardLossItems");

	UBP_PF_FunctionLibrary_C_CollectQuestSysRewardLossItems_Params params;
	params.QuestID = QuestID;
	params.StepNo = StepNo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasLoss != nullptr)
		*bHasLoss = params.bHasLoss;
	if (LossItems != nullptr)
		*LossItems = params.LossItems;
	if (LossGald != nullptr)
		*LossGald = params.LossGald;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActorFromDefineID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineID          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NpcActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetNPCActorFromDefineID(const struct FPFNpcDefineID& DefineID, class UObject* __WorldContext, class AActor** NpcActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActorFromDefineID");

	UBP_PF_FunctionLibrary_C_GetNPCActorFromDefineID_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NpcActor != nullptr)
		*NpcActor = params.NpcActor;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetMenuManagerInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTO14_BP_MenuManagerInterface_C> MenuManagerInterface           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetMenuManagerInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* MenuManagerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetMenuManagerInterface");

	UBP_PF_FunctionLibrary_C_GetMenuManagerInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuManagerInterface != nullptr)
		*MenuManagerInterface = params.MenuManagerInterface;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetAllMapObjVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetAllMapObjVisibility(bool bVisible, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetAllMapObjVisibility");

	UBP_PF_FunctionLibrary_C_SetAllMapObjVisibility_Params params;
	params.bVisible = bVisible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.TeleportLocator
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_TeleportLocator(const struct FString& MapLocatorName, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.TeleportLocator");

	UBP_PF_FunctionLibrary_C_TeleportLocator_Params params;
	params.MapLocatorName = MapLocatorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsQuestGuideMultiStepCleared
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int>                    QuestStepArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_IsQuestGuideMultiStepCleared(const struct FQuestID& QuestID, class UObject* __WorldContext, TArray<int>* QuestStepArray, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsQuestGuideMultiStepCleared");

	UBP_PF_FunctionLibrary_C_IsQuestGuideMultiStepCleared_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestStepArray != nullptr)
		*QuestStepArray = params.QuestStepArray;
	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackInStay
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_BlackInStay(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackInStay");

	UBP_PF_FunctionLibrary_C_BlackInStay_Params params;
	params.Layer = Layer;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckScenarioCondition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FScenarioConditionNamed> Conditions                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CheckScenarioCondition(class UObject* __WorldContext, TArray<struct FScenarioConditionNamed>* Conditions, bool* ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckScenarioCondition");

	UBP_PF_FunctionLibrary_C_CheckScenarioCondition_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Conditions != nullptr)
		*Conditions = params.Conditions;
	if (ok != nullptr)
		*ok = params.ok;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetEventContinueState
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSet                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetEventContinueState(bool bSet, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetEventContinueState");

	UBP_PF_FunctionLibrary_C_SetEventContinueState_Params params;
	params.bSet = bSet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsLongChatPlaying
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlaying                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_IsLongChatPlaying(class UObject* __WorldContext, bool* bPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsLongChatPlaying");

	UBP_PF_FunctionLibrary_C_IsLongChatPlaying_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlaying != nullptr)
		*bPlaying = params.bPlaying;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PlayLongChat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongCharName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bQued                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_PlayLongChat(const struct FString& LongCharName, bool bQued, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PlayLongChat");

	UBP_PF_FunctionLibrary_C_PlayLongChat_Params params;
	params.LongCharName = LongCharName;
	params.bQued = bQued;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetArtsLearnByLabel
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetArtsLearnByLabel(EArisePartyID PartyId, const struct FString& ArtsLabel, class UObject* __WorldContext, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetArtsLearnByLabel");

	UBP_PF_FunctionLibrary_C_GetArtsLearnByLabel_Params params;
	params.PartyId = PartyId;
	params.ArtsLabel = ArtsLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetAliasLearnByLabel
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetAliasLearnByLabel(const struct FString& Label, class UObject* __WorldContext, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetAliasLearnByLabel");

	UBP_PF_FunctionLibrary_C_GetAliasLearnByLabel_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetScenarioFlagByNameArray
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         FlagName                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetScenarioFlagByNameArray(bool Flag, class UObject* __WorldContext, TArray<struct FString>* FlagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetScenarioFlagByNameArray");

	UBP_PF_FunctionLibrary_C_SetScenarioFlagByNameArray_Params params;
	params.Flag = Flag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlagName != nullptr)
		*FlagName = params.FlagName;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RecoverAllForStayingInn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_RecoverAllForStayingInn(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RecoverAllForStayingInn");

	UBP_PF_FunctionLibrary_C_RecoverAllForStayingInn_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CollectQuestGuideRewardLossItems
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuestRewardItem> LossItems                      (Parm, OutParm, ZeroConstructor)
// int                            LossGald                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CollectQuestGuideRewardLossItems(const struct FQuestID& QuestID, class UObject* __WorldContext, TArray<struct FQuestRewardItem>* LossItems, int* LossGald)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CollectQuestGuideRewardLossItems");

	UBP_PF_FunctionLibrary_C_CollectQuestGuideRewardLossItems_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LossItems != nullptr)
		*LossItems = params.LossItems;
	if (LossGald != nullptr)
		*LossGald = params.LossGald;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckRisePointMaxNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddRP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GetIt                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CheckRisePointMaxNum(int AddRP, class UObject* __WorldContext, bool* GetIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckRisePointMaxNum");

	UBP_PF_FunctionLibrary_C_CheckRisePointMaxNum_Params params;
	params.AddRP = AddRP;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIt != nullptr)
		*GetIt = params.GetIt;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckRisePointNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HaveIt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CheckRisePointNum(int RP, class UObject* __WorldContext, bool* HaveIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckRisePointNum");

	UBP_PF_FunctionLibrary_C_CheckRisePointNum_Params params;
	params.RP = RP;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HaveIt != nullptr)
		*HaveIt = params.HaveIt;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckGaldMaxNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddGald                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GetIt                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LostNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CheckGaldMaxNum(int AddGald, class UObject* __WorldContext, bool* GetIt, int* LostNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckGaldMaxNum");

	UBP_PF_FunctionLibrary_C_CheckGaldMaxNum_Params params;
	params.AddGald = AddGald;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIt != nullptr)
		*GetIt = params.GetIt;
	if (LostNum != nullptr)
		*LostNum = params.LostNum;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckGaldNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Gald                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HaveIt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CheckGaldNum(int Gald, class UObject* __WorldContext, bool* HaveIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckGaldNum");

	UBP_PF_FunctionLibrary_C_CheckGaldNum_Params params;
	params.Gald = Gald;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HaveIt != nullptr)
		*HaveIt = params.HaveIt;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideReward
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GetIt                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         LearningAlias                  (Parm, OutParm, ZeroConstructor)

void UBP_PF_FunctionLibrary_C::STATIC_GetQuestGuideReward(const struct FQuestID& QuestID, class UObject* __WorldContext, bool* GetIt, TArray<struct FString>* LearningAlias)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideReward");

	UBP_PF_FunctionLibrary_C_GetQuestGuideReward_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIt != nullptr)
		*GetIt = params.GetIt;
	if (LearningAlias != nullptr)
		*LearningAlias = params.LearningAlias;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.DuplicateNPCActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestinationActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_DuplicateNPCActor(class AActor* DestinationActor, class AActor* SourceActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.DuplicateNPCActor");

	UBP_PF_FunctionLibrary_C_DuplicateNPCActor_Params params;
	params.DestinationActor = DestinationActor;
	params.SourceActor = SourceActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PF_OpenShopMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ShopID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_PF_OpenShopMenu(const struct FString& ShopID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PF_OpenShopMenu");

	UBP_PF_FunctionLibrary_C_PF_OpenShopMenu_Params params;
	params.ShopID = ShopID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetMenuManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ATO14_BP_MenuManagerBase_C* MenuManager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetMenuManager(class UObject* __WorldContext, class ATO14_BP_MenuManagerBase_C** MenuManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetMenuManager");

	UBP_PF_FunctionLibrary_C_GetMenuManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuManager != nullptr)
		*MenuManager = params.MenuManager;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PF_OpenMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_PF_OpenMenu(const struct FString& MenuID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PF_OpenMenu");

	UBP_PF_FunctionLibrary_C_PF_OpenMenu_Params params;
	params.MenuID = MenuID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideStepNameByString
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UBP_PF_FunctionLibrary_C::STATIC_MakeQuestGuideStepNameByString(const struct FString& QuestID, const struct FString& QuestStep, class UObject* __WorldContext, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideStepNameByString");

	UBP_PF_FunctionLibrary_C_MakeQuestGuideStepNameByString_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepFlagByString
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 QuestFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetQuestGuideStepFlagByString(const struct FString& QuestID, const struct FString& QuestStep, const struct FString& QuestFlag, const struct FString& Valid, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepFlagByString");

	UBP_PF_FunctionLibrary_C_SetQuestGuideStepFlagByString_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;
	params.QuestFlag = QuestFlag;
	params.Valid = Valid;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepFlagByString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetQuestGuideStepFlagByString(const struct FQuestID& QuestID, int QuestStep, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepFlagByString");

	UBP_PF_FunctionLibrary_C_GetQuestGuideStepFlagByString_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;
	params.QuestFlag = QuestFlag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActorFromID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NpcActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetNPCActorFromID(const struct FString& CharacterID, class UObject* __WorldContext, class AActor** NpcActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActorFromID");

	UBP_PF_FunctionLibrary_C_GetNPCActorFromID_Params params;
	params.CharacterID = CharacterID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NpcActor != nullptr)
		*NpcActor = params.NpcActor;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckItemMaxNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCategory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GetIt                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LostNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CheckItemMaxNum(const struct FString& ItemLabel, int ItemNum, bool bCategory, class UObject* __WorldContext, bool* GetIt, int* LostNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckItemMaxNum");

	UBP_PF_FunctionLibrary_C_CheckItemMaxNum_Params params;
	params.ItemLabel = ItemLabel;
	params.ItemNum = ItemNum;
	params.bCategory = bCategory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIt != nullptr)
		*GetIt = params.GetIt;
	if (LostNum != nullptr)
		*LostNum = params.LostNum;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetItemId
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_PF_FunctionLibrary_C::STATIC_GetItemId(const struct FString& ItemLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetItemId");

	UBP_PF_FunctionLibrary_C_GetItemId_Params params;
	params.ItemLabel = ItemLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetItemMaxNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetItemMaxNum(const struct FString& ItemLabel, class UObject* __WorldContext, int* MaxNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetItemMaxNum");

	UBP_PF_FunctionLibrary_C_GetItemMaxNum_Params params;
	params.ItemLabel = ItemLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxNum != nullptr)
		*MaxNum = params.MaxNum;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestRewardItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RewardItemLabel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GetIt                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetQuestRewardItem(const struct FString& RewardItemLabel, int ItemNum, class UObject* __WorldContext, bool* GetIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestRewardItem");

	UBP_PF_FunctionLibrary_C_GetQuestRewardItem_Params params;
	params.RewardItemLabel = RewardItemLabel;
	params.ItemNum = ItemNum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIt != nullptr)
		*GetIt = params.GetIt;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckItemNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HaveIt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_CheckItemNum(const struct FString& ItemLabel, int ItemNum, class UObject* __WorldContext, bool* HaveIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckItemNum");

	UBP_PF_FunctionLibrary_C_CheckItemNum_Params params;
	params.ItemLabel = ItemLabel;
	params.ItemNum = ItemNum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HaveIt != nullptr)
		*HaveIt = params.HaveIt;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.AddUserItemNum
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            AddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccessorySkillRandom          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_AddUserItemNum(const struct FString& ItemLabel, int AddNum, bool bAccessorySkillRandom, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.AddUserItemNum");

	UBP_PF_FunctionLibrary_C_AddUserItemNum_Params params;
	params.ItemLabel = ItemLabel;
	params.AddNum = AddNum;
	params.bAccessorySkillRandom = bAccessorySkillRandom;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetUserItemNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetUserItemNum(const struct FString& ItemLabel, class UObject* __WorldContext, int* ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetUserItemNum");

	UBP_PF_FunctionLibrary_C_GetUserItemNum_Params params;
	params.ItemLabel = ItemLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemNum != nullptr)
		*ItemNum = params.ItemNum;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackIn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_BlackIn(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackIn");

	UBP_PF_FunctionLibrary_C_BlackIn_Params params;
	params.Layer = Layer;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackOut
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_BlackOut(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackOut");

	UBP_PF_FunctionLibrary_C_BlackOut_Params params;
	params.Layer = Layer;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MapJump
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ChangeScenarioFlag             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_MapJump(const struct FString& MapName, const struct FString& MapLocatorName, bool ChangeScenarioFlag, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MapJump");

	UBP_PF_FunctionLibrary_C_MapJump_Params params;
	params.MapName = MapName;
	params.MapLocatorName = MapLocatorName;
	params.ChangeScenarioFlag = ChangeScenarioFlag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 NpcName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NpcActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetNPCActor(const struct FString& NpcName, class UObject* __WorldContext, class AActor** NpcActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActor");

	UBP_PF_FunctionLibrary_C_GetNPCActor_Params params;
	params.NpcName = NpcName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NpcActor != nullptr)
		*NpcActor = params.NpcActor;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SeparateTimeMinutes
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDT_PF_ScriptTime       Time                           (Parm, OutParm)

void UBP_PF_FunctionLibrary_C::STATIC_SeparateTimeMinutes(int Minutes, class UObject* __WorldContext, struct FDT_PF_ScriptTime* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SeparateTimeMinutes");

	UBP_PF_FunctionLibrary_C_SeparateTimeMinutes_Params params;
	params.Minutes = Minutes;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsTimeElapsed
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            elapsedDay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            elapsedHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ElapsedMinute                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bElapsed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_IsTimeElapsed(int Timestamp, int elapsedDay, int elapsedHour, int ElapsedMinute, class UObject* __WorldContext, bool* bElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsTimeElapsed");

	UBP_PF_FunctionLibrary_C_IsTimeElapsed_Params params;
	params.Timestamp = Timestamp;
	params.elapsedDay = elapsedDay;
	params.elapsedHour = elapsedHour;
	params.ElapsedMinute = ElapsedMinute;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bElapsed != nullptr)
		*bElapsed = params.bElapsed;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeStamp
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Timestamp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetTimeStamp(class UObject* __WorldContext, int* Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeStamp");

	UBP_PF_FunctionLibrary_C_GetTimeStamp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timestamp != nullptr)
		*Timestamp = params.Timestamp;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeToMinutes
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDT_PF_ScriptTime       Time                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetTimeToMinutes(const struct FDT_PF_ScriptTime& Time, class UObject* __WorldContext, int* Minutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeToMinutes");

	UBP_PF_FunctionLibrary_C_GetTimeToMinutes_Params params;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Minutes != nullptr)
		*Minutes = params.Minutes;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeElapsedMinutes
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ElapsedMinutes                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetTimeElapsedMinutes(int Minutes, class UObject* __WorldContext, int* ElapsedMinutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeElapsedMinutes");

	UBP_PF_FunctionLibrary_C_GetTimeElapsedMinutes_Params params;
	params.Minutes = Minutes;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElapsedMinutes != nullptr)
		*ElapsedMinutes = params.ElapsedMinutes;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetExcludeStringArray
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FString>         Selects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    ExcludeIndexs                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         NewSelects                     (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Indices                        (Parm, OutParm, ZeroConstructor)

void UBP_PF_FunctionLibrary_C::STATIC_GetExcludeStringArray(class UObject* __WorldContext, TArray<struct FString>* Selects, TArray<int>* ExcludeIndexs, TArray<struct FString>* NewSelects, TArray<int>* Indices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetExcludeStringArray");

	UBP_PF_FunctionLibrary_C_GetExcludeStringArray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selects != nullptr)
		*Selects = params.Selects;
	if (ExcludeIndexs != nullptr)
		*ExcludeIndexs = params.ExcludeIndexs;
	if (NewSelects != nullptr)
		*NewSelects = params.NewSelects;
	if (Indices != nullptr)
		*Indices = params.Indices;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetDictionaryModifiedTextArray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         IDs                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FModifiedText>   ModifiedTextArray              (Parm, OutParm, ZeroConstructor)

void UBP_PF_FunctionLibrary_C::STATIC_GetDictionaryModifiedTextArray(const struct FString& Group, class UObject* __WorldContext, TArray<struct FString>* IDs, TArray<struct FModifiedText>* ModifiedTextArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetDictionaryModifiedTextArray");

	UBP_PF_FunctionLibrary_C_GetDictionaryModifiedTextArray_Params params;
	params.Group = Group;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDs != nullptr)
		*IDs = params.IDs;
	if (ModifiedTextArray != nullptr)
		*ModifiedTextArray = params.ModifiedTextArray;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetDictionaryModifiedText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ModifiedText                   (Parm, OutParm)

void UBP_PF_FunctionLibrary_C::STATIC_GetDictionaryModifiedText(const struct FString& Group, const struct FString& ID, class UObject* __WorldContext, struct FModifiedText* ModifiedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetDictionaryModifiedText");

	UBP_PF_FunctionLibrary_C_GetDictionaryModifiedText_Params params;
	params.Group = Group;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedText != nullptr)
		*ModifiedText = params.ModifiedText;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetExcludeIndexArray
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<int>                    Selects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    ExcludeIndexs                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    NewSelects                     (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Indices                        (Parm, OutParm, ZeroConstructor)

void UBP_PF_FunctionLibrary_C::STATIC_GetExcludeIndexArray(class UObject* __WorldContext, TArray<int>* Selects, TArray<int>* ExcludeIndexs, TArray<int>* NewSelects, TArray<int>* Indices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetExcludeIndexArray");

	UBP_PF_FunctionLibrary_C_GetExcludeIndexArray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selects != nullptr)
		*Selects = params.Selects;
	if (ExcludeIndexs != nullptr)
		*ExcludeIndexs = params.ExcludeIndexs;
	if (NewSelects != nullptr)
		*NewSelects = params.NewSelects;
	if (Indices != nullptr)
		*Indices = params.Indices;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetPFScriptComponent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAriseScriptComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAriseScriptComponent* UBP_PF_FunctionLibrary_C::STATIC_GetPFScriptComponent(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetPFScriptComponent");

	UBP_PF_FunctionLibrary_C_GetPFScriptComponent_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepFlagByID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetQuestGuideStepFlagByID(const struct FQuestID& QuestID, int QuestStep, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepFlagByID");

	UBP_PF_FunctionLibrary_C_GetQuestGuideStepFlagByID_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;
	params.QuestFlag = QuestFlag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepFlagByID
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGuideUpdate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetQuestGuideStepFlagByID(const struct FQuestID& QuestID, int QuestStep, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, bool bValid, bool bGuideUpdate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepFlagByID");

	UBP_PF_FunctionLibrary_C_SetQuestGuideStepFlagByID_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;
	params.QuestFlag = QuestFlag;
	params.bValid = bValid;
	params.bGuideUpdate = bGuideUpdate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideStepName
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UBP_PF_FunctionLibrary_C::STATIC_MakeQuestGuideStepName(const struct FQuestID& QuestID, int QuestStep, class UObject* __WorldContext, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideStepName");

	UBP_PF_FunctionLibrary_C_MakeQuestGuideStepName_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideFlagByID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_GetQuestGuideFlagByID(const struct FQuestID& QuestID, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideFlagByID");

	UBP_PF_FunctionLibrary_C_GetQuestGuideFlagByID_Params params;
	params.QuestID = QuestID;
	params.QuestFlag = QuestFlag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideFlagSuffixName
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBP_PF_FunctionLibrary_C::STATIC_MakeQuestGuideFlagSuffixName(TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideFlagSuffixName");

	UBP_PF_FunctionLibrary_C_MakeQuestGuideFlagSuffixName_Params params;
	params.QuestFlag = QuestFlag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideFlagByID
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_FunctionLibrary_C::STATIC_SetQuestGuideFlagByID(const struct FQuestID& QuestID, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, bool bValid, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideFlagByID");

	UBP_PF_FunctionLibrary_C_SetQuestGuideFlagByID_Params params;
	params.QuestID = QuestID;
	params.QuestFlag = QuestFlag;
	params.bValid = bValid;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
