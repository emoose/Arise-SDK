
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

// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventManagedScriptKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPlayQuest                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetPostEventManagedScriptKill(bool bPlayQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventManagedScriptKill");

	UBP_GP_Script2_C_SetPostEventManagedScriptKill_Params params;
	params.bPlayQuest = bPlayQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.RequestAutoSave
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::RequestAutoSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.RequestAutoSave");

	UBP_GP_Script2_C_RequestAutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ManageAutoSave
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::ManageAutoSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ManageAutoSave");

	UBP_GP_Script2_C_ManageAutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestAdvanced
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsQuestAdvanced(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsQuestAdvanced");

	UBP_GP_Script2_C_IsQuestAdvanced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CollectionReferenceCharacters
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::CollectionReferenceCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CollectionReferenceCharacters");

	UBP_GP_Script2_C_CollectionReferenceCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CollectionQuestStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::CollectionQuestStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CollectionQuestStatus");

	UBP_GP_Script2_C_CollectionQuestStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventTeleportLocator
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::DoPostEventTeleportLocator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventTeleportLocator");

	UBP_GP_Script2_C_DoPostEventTeleportLocator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventBattle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::DoPostEventBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventBattle");

	UBP_GP_Script2_C_DoPostEventBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventMapJump
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::DoPostEventMapJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventMapJump");

	UBP_GP_Script2_C_DoPostEventMapJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ChangeCameraPresetOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewCameraPresetName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::ChangeCameraPresetOverride(const struct FString& NewCameraPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ChangeCameraPresetOverride");

	UBP_GP_Script2_C_ChangeCameraPresetOverride_Params params;
	params.NewCameraPresetName = NewCameraPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ChangeCameraPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewCameraPresetName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::ChangeCameraPreset(const struct FString& NewCameraPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ChangeCameraPreset");

	UBP_GP_Script2_C_ChangeCameraPreset_Params params;
	params.NewCameraPresetName = NewCameraPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetPersonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAchScenarioCharacterID CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetPersonVisibility(const struct FAchScenarioCharacterID& CharacterID, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetPersonVisibility");

	UBP_GP_Script2_C_SetPersonVisibility_Params params;
	params.CharacterID = CharacterID;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.HideMovementPerson
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_PF_NpcCharacterEvent_C*> MovementPerson                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_GP_Script2_C::HideMovementPerson(TArray<class ABP_PF_NpcCharacterEvent_C*>* MovementPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.HideMovementPerson");

	UBP_GP_Script2_C_HideMovementPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovementPerson != nullptr)
		*MovementPerson = params.MovementPerson;
}


// Function BP_GP_Script2.BP_GP_Script2_C.AddMovementPerson
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::AddMovementPerson(class AActor* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.AddMovementPerson");

	UBP_GP_Script2_C_AddMovementPerson_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.TermQuest
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::TermQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.TermQuest");

	UBP_GP_Script2_C_TermQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.TrapIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::TrapIn(float Duration, TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.TrapIn");

	UBP_GP_Script2_C_TrapIn_Params params;
	params.Duration = Duration;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ShowNowLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::ShowNowLoading(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ShowNowLoading");

	UBP_GP_Script2_C_ShowNowLoading_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestContinue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsQuestContinue(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsQuestContinue");

	UBP_GP_Script2_C_IsQuestContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetFacialPresetPerson
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAchScenarioCharacterID CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            PresetNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetFacialPresetPerson(const struct FAchScenarioCharacterID& CharacterID, int PresetNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetFacialPresetPerson");

	UBP_GP_Script2_C_SetFacialPresetPerson_Params params;
	params.CharacterID = CharacterID;
	params.PresetNo = PresetNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetDefaultFacialPerson
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAchScenarioCharacterID CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GP_Script2_C::SetDefaultFacialPerson(const struct FAchScenarioCharacterID& CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetDefaultFacialPerson");

	UBP_GP_Script2_C_SetDefaultFacialPerson_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ResetPF
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::ResetPF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ResetPF");

	UBP_GP_Script2_C_ResetPF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DestroyInstatnceCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::DestroyInstatnceCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DestroyInstatnceCharacter");

	UBP_GP_Script2_C_DestroyInstatnceCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.TermScriptSystem
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::TermScriptSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.TermScriptSystem");

	UBP_GP_Script2_C_TermScriptSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.BuildPersonInternal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PF_NpcCharacterEvent_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InCharacterID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EPFNpcCharacterBuildType       Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InitPlayAction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GP_Script2_C::BuildPersonInternal(class ABP_PF_NpcCharacterEvent_C* Character, const struct FString& InCharacterID, EPFNpcCharacterBuildType Type, const struct FName& InitPlayAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.BuildPersonInternal");

	UBP_GP_Script2_C_BuildPersonInternal_Params params;
	params.Character = Character;
	params.InCharacterID = InCharacterID;
	params.Type = Type;
	params.InitPlayAction = InitPlayAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsLoadComplateEncountEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsLoadComplateEncountEffect(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsLoadComplateEncountEffect");

	UBP_GP_Script2_C_IsLoadComplateEncountEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActorLookAt
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::SetCaptionActorLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActorLookAt");

	UBP_GP_Script2_C_SetCaptionActorLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActorLip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::SetCaptionActorLip(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActorLip");

	UBP_GP_Script2_C_SetCaptionActorLip_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ResetCaptionActor
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::ResetCaptionActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ResetCaptionActor");

	UBP_GP_Script2_C_ResetCaptionActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.FindVoiceSpeaker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InCharacterID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  OutSpeaker                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::FindVoiceSpeaker(const struct FString& InCharacterID, class AActor** OutSpeaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.FindVoiceSpeaker");

	UBP_GP_Script2_C_FindVoiceSpeaker_Params params;
	params.InCharacterID = InCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSpeaker != nullptr)
		*OutSpeaker = params.OutSpeaker;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideLocFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bClear                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsQuestGuideLocFlag(int Step, const struct FString& actorId, bool* bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideLocFlag");

	UBP_GP_Script2_C_IsQuestGuideLocFlag_Params params;
	params.Step = Step;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClear != nullptr)
		*bClear = params.bClear;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideLocFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bClear                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetQuestGuideLocFlag(int Step, const struct FString& actorId, bool bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideLocFlag");

	UBP_GP_Script2_C_SetQuestGuideLocFlag_Params params;
	params.Step = Step;
	params.actorId = actorId;
	params.bClear = bClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestContinueOff
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::SetQuestContinueOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetQuestContinueOff");

	UBP_GP_Script2_C_SetQuestContinueOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestContinueOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bKeepBlackOut                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetQuestContinueOn(bool bKeepBlackOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetQuestContinueOn");

	UBP_GP_Script2_C_SetQuestContinueOn_Params params;
	params.bKeepBlackOut = bKeepBlackOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventTeleportLocator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::SetPostEventTeleportLocator(const struct FString& MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventTeleportLocator");

	UBP_GP_Script2_C_SetPostEventTeleportLocator_Params params;
	params.MapLocatorName = MapLocatorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventMapJump
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::SetPostEventMapJump(const struct FString& MapName, const struct FString& MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventMapJump");

	UBP_GP_Script2_C_SetPostEventMapJump_Params params;
	params.MapName = MapName;
	params.MapLocatorName = MapLocatorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetVisbilityPF
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetVisbilityPF(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetVisbilityPF");

	UBP_GP_Script2_C_SetVisbilityPF_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DuplicatePerson (from Npc)
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineID          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class ACharacter*              NewCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::DuplicatePerson__from_Npc_(const struct FPFNpcDefineID& DefineID, class ACharacter** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DuplicatePerson (from Npc)");

	UBP_GP_Script2_C_DuplicatePerson__from_Npc__Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCharacter != nullptr)
		*NewCharacter = params.NewCharacter;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DuplicatePersonInternal
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SourceCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsyncLoad                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              NewCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::DuplicatePersonInternal(class AActor* SourceCharacter, bool bAsyncLoad, class ACharacter** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DuplicatePersonInternal");

	UBP_GP_Script2_C_DuplicatePersonInternal_Params params;
	params.SourceCharacter = SourceCharacter;
	params.bAsyncLoad = bAsyncLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCharacter != nullptr)
		*NewCharacter = params.NewCharacter;
}


// Function BP_GP_Script2.BP_GP_Script2_C.PostMessageEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::PostMessageEvent(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.PostMessageEvent");

	UBP_GP_Script2_C_PostMessageEvent_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsAllPersonBuildCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsAllPersonBuildCompleted(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsAllPersonBuildCompleted");

	UBP_GP_Script2_C_IsAllPersonBuildCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::SetCaptionCamera(const struct FString& CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionCamera");

	UBP_GP_Script2_C_SetCaptionCamera_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetPlayerAnimSetPath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FSoftObjectPath         AnimSetPath                    (Parm, OutParm)

void UBP_GP_Script2_C::GetPlayerAnimSetPath(const struct FString& Name, struct FSoftObjectPath* AnimSetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetPlayerAnimSetPath");

	UBP_GP_Script2_C_GetPlayerAnimSetPath_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimSetPath != nullptr)
		*AnimSetPath = params.AnimSetPath;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CaptionActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::SetCaptionActor(class AActor* CaptionActor, class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActor");

	UBP_GP_Script2_C_SetCaptionActor_Params params;
	params.CaptionActor = CaptionActor;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetCategoryPerson
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDE_PF_NpcEventCategory> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ACharacter*>      Characters                     (Parm, OutParm, ZeroConstructor)

void UBP_GP_Script2_C::GetCategoryPerson(TEnumAsByte<EDE_PF_NpcEventCategory> Category, TArray<class ACharacter*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetCategoryPerson");

	UBP_GP_Script2_C_GetCategoryPerson_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetLookAtPerson
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDE_PF_NpcEventCategory> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetPerson                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetLookAtPerson(TEnumAsByte<EDE_PF_NpcEventCategory> Category, class AActor* TargetPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetLookAtPerson");

	UBP_GP_Script2_C_SetLookAtPerson_Params params;
	params.Category = Category;
	params.TargetPerson = TargetPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsMainQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsMainQuest(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsMainQuest");

	UBP_GP_Script2_C_IsMainQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_GP_Script2.BP_GP_Script2_C.InitQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::InitQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.InitQuest");

	UBP_GP_Script2_C_InitQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CreateEncountEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::CreateEncountEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CreateEncountEffect");

	UBP_GP_Script2_C_CreateEncountEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.InitScriptSystem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::InitScriptSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.InitScriptSystem");

	UBP_GP_Script2_C_InitScriptSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CheckQuestClear
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::CheckQuestClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CheckQuestClear");

	UBP_GP_Script2_C_CheckQuestClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CheckQuestStart
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::CheckQuestStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CheckQuestStart");

	UBP_GP_Script2_C_CheckQuestStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetPerson
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APFNpcCharacterBase*     Characters                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::GetPerson(const struct FString& CharacterID, class APFNpcCharacterBase** Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetPerson");

	UBP_GP_Script2_C_GetPerson_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function BP_GP_Script2.BP_GP_Script2_C.UpdateSelectionEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::UpdateSelectionEvent(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.UpdateSelectionEvent");

	UBP_GP_Script2_C_UpdateSelectionEvent_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CalcLookAtPointPitch
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Ptich                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::CalcLookAtPointPitch(const struct FVector& LookAtPoint, float* Ptich)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CalcLookAtPointPitch");

	UBP_GP_Script2_C_CalcLookAtPointPitch_Params params;
	params.LookAtPoint = LookAtPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ptich != nullptr)
		*Ptich = params.Ptich;
}


// Function BP_GP_Script2.BP_GP_Script2_C.UpdateMessageEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::UpdateMessageEvent(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.UpdateMessageEvent");

	UBP_GP_Script2_C_UpdateMessageEvent_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetOneTopMasterComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::GetOneTopMasterComponent(class UPFOneTopComponent** OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetOneTopMasterComponent");

	UBP_GP_Script2_C_GetOneTopMasterComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OneTopComponent != nullptr)
		*OneTopComponent = params.OneTopComponent;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CreateQuesetDefaultCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BaseLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FDT_PF_QuestArgs        Args                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GP_Script2_C::CreateQuesetDefaultCamera(const struct FVector& BaseLocation, const struct FDT_PF_QuestArgs& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CreateQuesetDefaultCamera");

	UBP_GP_Script2_C_CreateQuesetDefaultCamera_Params params;
	params.BaseLocation = BaseLocation;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetAllPerson
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACharacter*>      Characters                     (Parm, OutParm, ZeroConstructor)

void UBP_GP_Script2_C::GetAllPerson(TArray<class ACharacter*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetAllPerson");

	UBP_GP_Script2_C_GetAllPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CreateQuestCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BaseActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LookAtPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  NewCamera                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::CreateQuestCamera(class AActor* BaseActor, const struct FVector& LookAtPoint, class AActor** NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CreateQuestCamera");

	UBP_GP_Script2_C_CreateQuestCamera_Params params;
	params.BaseActor = BaseActor;
	params.LookAtPoint = LookAtPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCamera != nullptr)
		*NewCamera = params.NewCamera;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DuplicateQuestPerson
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SourceCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              NewCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::DuplicateQuestPerson(class AActor* SourceCharacter, class ACharacter** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DuplicateQuestPerson");

	UBP_GP_Script2_C_DuplicateQuestPerson_Params params;
	params.SourceCharacter = SourceCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCharacter != nullptr)
		*NewCharacter = params.NewCharacter;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ChangeOwnerScapegoat
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::ChangeOwnerScapegoat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ChangeOwnerScapegoat");

	UBP_GP_Script2_C_ChangeOwnerScapegoat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ShowOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::ShowOwner(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ShowOwner");

	UBP_GP_Script2_C_ShowOwner_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetCharacterActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetCharacterActive(class ACharacter* InCharacter, bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetCharacterActive");

	UBP_GP_Script2_C_SetCharacterActive_Params params;
	params.InCharacter = InCharacter;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CreateQuestPerson
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAchScenarioCharacterID CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UASAnimationSet*         AnimSet                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::CreateQuestPerson(int ID, const struct FAchScenarioCharacterID& CharacterID, class UASAnimationSet* AnimSet, class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CreateQuestPerson");

	UBP_GP_Script2_C_CreateQuestPerson_Params params;
	params.ID = ID;
	params.CharacterID = CharacterID;
	params.AnimSet = AnimSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CreatePersonInternal
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAchScenarioCharacterID ID                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UASAnimationSet*         AnimSet                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSoftObjectPath         AnimSetPath                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPFNpcPlacementData     PlacementInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EDE_PF_NpcEventCategory> CaptionCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CaptionNumber                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsyncLoad                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InitPlayAction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::CreatePersonInternal(const struct FTransform& Transform, const struct FAchScenarioCharacterID& ID, class UASAnimationSet* AnimSet, const struct FSoftObjectPath& AnimSetPath, const struct FPFNpcPlacementData& PlacementInfo, TEnumAsByte<EDE_PF_NpcEventCategory> CaptionCategory, int CaptionNumber, bool bAsyncLoad, const struct FName& InitPlayAction, class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CreatePersonInternal");

	UBP_GP_Script2_C_CreatePersonInternal_Params params;
	params.Transform = Transform;
	params.ID = ID;
	params.AnimSet = AnimSet;
	params.AnimSetPath = AnimSetPath;
	params.PlacementInfo = PlacementInfo;
	params.CaptionCategory = CaptionCategory;
	params.CaptionNumber = CaptionNumber;
	params.bAsyncLoad = bAsyncLoad;
	params.InitPlayAction = InitPlayAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DisplayQuestMsgEx
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopID             GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         GetUserDataEvent               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_GP_Script2_C::DisplayQuestMsgEx(const struct FPFOneTopID& GroupID, struct FScriptDelegate* GetUserDataEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DisplayQuestMsgEx");

	UBP_GP_Script2_C_DisplayQuestMsgEx_Params params;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetUserDataEvent != nullptr)
		*GetUserDataEvent = params.GetUserDataEvent;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsFinishQuestMsg
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bFinish                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsFinishQuestMsg(bool* bFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsFinishQuestMsg");

	UBP_GP_Script2_C_IsFinishQuestMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFinish != nullptr)
		*bFinish = params.bFinish;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DisplayQuestMsg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopID             GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 SelectTalkNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::DisplayQuestMsg(const struct FPFOneTopID& GroupID, const struct FString& SelectTalkNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DisplayQuestMsg");

	UBP_GP_Script2_C_DisplayQuestMsg_Params params;
	params.GroupID = GroupID;
	params.SelectTalkNo = SelectTalkNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetUserItemNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::GetUserItemNum(const struct FString& ItemLabel, int* ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetUserItemNum");

	UBP_GP_Script2_C_GetUserItemNum_Params params;
	params.ItemLabel = ItemLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemNum != nullptr)
		*ItemNum = params.ItemNum;
}


// Function BP_GP_Script2.BP_GP_Script2_C.AddUserItemNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            AddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::AddUserItemNum(const struct FString& ItemLabel, int AddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.AddUserItemNum");

	UBP_GP_Script2_C_AddUserItemNum_Params params;
	params.ItemLabel = ItemLabel;
	params.AddNum = AddNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ResetPlayerCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::ResetPlayerCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ResetPlayerCamera");

	UBP_GP_Script2_C_ResetPlayerCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ActorName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::GetActor(const struct FString& ActorName, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetActor");

	UBP_GP_Script2_C_GetActor_Params params;
	params.ActorName = ActorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetPlayerActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  PlayerActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::GetPlayerActor(class AActor** PlayerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetPlayerActor");

	UBP_GP_Script2_C_GetPlayerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerActor != nullptr)
		*PlayerActor = params.PlayerActor;
}


// Function BP_GP_Script2.BP_GP_Script2_C.WarpToTargetPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Locator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::WarpToTargetPoint(class AActor* Actor, const struct FString& Locator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.WarpToTargetPoint");

	UBP_GP_Script2_C_WarpToTargetPoint_Params params;
	params.Actor = Actor;
	params.Locator = Locator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.DisplayTalkMsg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TalkNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::DisplayTalkMsg(int TalkNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.DisplayTalkMsg");

	UBP_GP_Script2_C_DisplayTalkMsg_Params params;
	params.TalkNo = TalkNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventBattle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BattleMapName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EncountGroupName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bQuestContinue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetPostEventBattle(const struct FString& BattleMapName, const struct FString& EncountGroupName, bool bQuestContinue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventBattle");

	UBP_GP_Script2_C_SetPostEventBattle_Params params;
	params.BattleMapName = BattleMapName;
	params.EncountGroupName = EncountGroupName;
	params.bQuestContinue = bQuestContinue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ShowPartyTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::ShowPartyTop(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ShowPartyTop");

	UBP_GP_Script2_C_ShowPartyTop_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsTimeElapsed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            elapsedDay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            elapsedHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ElapsedMinute                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bElapsed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsTimeElapsed(int Minutes, int elapsedDay, int elapsedHour, int ElapsedMinute, bool* bElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsTimeElapsed");

	UBP_GP_Script2_C_IsTimeElapsed_Params params;
	params.Minutes = Minutes;
	params.elapsedDay = elapsedDay;
	params.elapsedHour = elapsedHour;
	params.ElapsedMinute = ElapsedMinute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bElapsed != nullptr)
		*bElapsed = params.bElapsed;
}


// Function BP_GP_Script2.BP_GP_Script2_C.GetTimeStamp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Timestamp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::GetTimeStamp(int* Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.GetTimeStamp");

	UBP_GP_Script2_C_GetTimeStamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timestamp != nullptr)
		*Timestamp = params.Timestamp;
}


// Function BP_GP_Script2.BP_GP_Script2_C.MakeSelections
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<int>                    Selects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Exclusions                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    NewSelects                     (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Indices                        (Parm, OutParm, ZeroConstructor)

void UBP_GP_Script2_C::MakeSelections(TArray<int>* Selects, TArray<int>* Exclusions, TArray<int>* NewSelects, TArray<int>* Indices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.MakeSelections");

	UBP_GP_Script2_C_MakeSelections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selects != nullptr)
		*Selects = params.Selects;
	if (Exclusions != nullptr)
		*Exclusions = params.Exclusions;
	if (NewSelects != nullptr)
		*NewSelects = params.NewSelects;
	if (Indices != nullptr)
		*Indices = params.Indices;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideStepFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDE_PF_Script_QuestFlag> Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClear                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsQuestGuideStepFlag(int Step, TEnumAsByte<EDE_PF_Script_QuestFlag> Flag, bool* bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideStepFlag");

	UBP_GP_Script2_C_IsQuestGuideStepFlag_Params params;
	params.Step = Step;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClear != nullptr)
		*bClear = params.bClear;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideStepFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDE_PF_Script_QuestFlag> Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetQuestGuideStepFlag(int Step, TEnumAsByte<EDE_PF_Script_QuestFlag> Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideStepFlag");

	UBP_GP_Script2_C_SetQuestGuideStepFlag_Params params;
	params.Step = Step;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDE_PF_Script_QuestFlag> Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClear                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsQuestGuideFlag(TEnumAsByte<EDE_PF_Script_QuestFlag> Flag, bool* bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideFlag");

	UBP_GP_Script2_C_IsQuestGuideFlag_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClear != nullptr)
		*bClear = params.bClear;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDE_PF_Script_QuestFlag> Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetQuestGuideFlag(TEnumAsByte<EDE_PF_Script_QuestFlag> Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideFlag");

	UBP_GP_Script2_C_SetQuestGuideFlag_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CreatePC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Locator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::CreatePC(const struct FString& Locator, EArisePartyID PartyId, class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CreatePC");

	UBP_GP_Script2_C_CreatePC_Params params;
	params.Locator = Locator;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_GP_Script2.BP_GP_Script2_C.FindActorFromName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::FindActorFromName(class UClass* Class, const struct FString& Name, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.FindActorFromName");

	UBP_GP_Script2_C_FindActorFromName_Params params;
	params.Class = Class;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SetCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::SetCamera(const struct FString& Name, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SetCamera");

	UBP_GP_Script2_C_SetCamera_Params params;
	params.Name = Name;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.FindLocator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class ATargetPoint*            Locator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::FindLocator(const struct FString& Name, class ATargetPoint** Locator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.FindLocator");

	UBP_GP_Script2_C_FindLocator_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locator != nullptr)
		*Locator = params.Locator;
}


// Function BP_GP_Script2.BP_GP_Script2_C.CreatePerson
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Locator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FAchScenarioCharacterID ID                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UASAnimationSet*         AnimSet                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::CreatePerson(const struct FString& Locator, const struct FAchScenarioCharacterID& ID, class UASAnimationSet* AnimSet, class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.CreatePerson");

	UBP_GP_Script2_C_CreatePerson_Params params;
	params.Locator = Locator;
	params.ID = ID;
	params.AnimSet = AnimSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_GP_Script2.BP_GP_Script2_C.OnSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::OnSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.OnSelection");

	UBP_GP_Script2_C_OnSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.SubProcessKill
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::SubProcessKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.SubProcessKill");

	UBP_GP_Script2_C_SubProcessKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.IsSubProcessCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::IsSubProcessCompleted(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.IsSubProcessCompleted");

	UBP_GP_Script2_C_IsSubProcessCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function BP_GP_Script2.BP_GP_Script2_C.RunSubProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ProcessClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAriseGameProcess*       Process                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAriseGameProcessComponent* Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::RunSubProcess(class UClass* ProcessClass, class AAriseGameProcess** Process, class UAriseGameProcessComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.RunSubProcess");

	UBP_GP_Script2_C_RunSubProcess_Params params;
	params.ProcessClass = ProcessClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Process != nullptr)
		*Process = params.Process;
	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Main");

	UBP_GP_Script2_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Go Back Title
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Go_Back_Title()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Go Back Title");

	UBP_GP_Script2_C_Go_Back_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest Start
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Finish_Quest_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest Start");

	UBP_GP_Script2_C_Finish_Quest_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest End
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Finish_Quest_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest End");

	UBP_GP_Script2_C_Finish_Quest_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Quest Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDT_PF_QuestArgs        Args                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GP_Script2_C::Quest_Start(const struct FDT_PF_QuestArgs& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Quest Start");

	UBP_GP_Script2_C_Quest_Start_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Quest End
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Quest_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Quest End");

	UBP_GP_Script2_C_Quest_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Simple Quest Start
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Simple_Quest_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Simple Quest Start");

	UBP_GP_Script2_C_Simple_Quest_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Simple Quest Start Finish
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Simple_Quest_Start_Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Simple Quest Start Finish");

	UBP_GP_Script2_C_Simple_Quest_Start_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Quest Post
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Quest_Post()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Quest Post");

	UBP_GP_Script2_C_Quest_Post_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest Post
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Finish_Quest_Post()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest Post");

	UBP_GP_Script2_C_Finish_Quest_Post_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.Play Quest Effects
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::Play_Quest_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.Play Quest Effects");

	UBP_GP_Script2_C_Play_Quest_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ProcessBegin
// (Event, Public, BlueprintEvent)

void UBP_GP_Script2_C::ProcessBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ProcessBegin");

	UBP_GP_Script2_C_ProcessBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.On Event End
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::On_Event_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.On Event End");

	UBP_GP_Script2_C_On_Event_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.On Event Start
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::On_Event_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.On Event Start");

	UBP_GP_Script2_C_On_Event_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GP_Script2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ReceiveBeginPlay");

	UBP_GP_Script2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ReceiveEndPlay");

	UBP_GP_Script2_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.On Post Begin Talk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::On_Post_Begin_Talk(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.On Post Begin Talk");

	UBP_GP_Script2_C_On_Post_Begin_Talk_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.On Pre End Talk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::On_Pre_End_Talk(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.On Pre End Talk");

	UBP_GP_Script2_C_On_Pre_End_Talk_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.On Pre Begin Talk
// (BlueprintCallable, BlueprintEvent)

void UBP_GP_Script2_C::On_Pre_Begin_Talk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.On Pre Begin Talk");

	UBP_GP_Script2_C_On_Pre_Begin_Talk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.On Post End Talk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GP_Script2_C::On_Post_End_Talk(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.On Post End Talk");

	UBP_GP_Script2_C_On_Post_End_Talk_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.On Setup Talk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopID             OneTopID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 SelectTalkNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GP_Script2_C::On_Setup_Talk(const struct FPFOneTopID& OneTopID, const struct FString& SelectTalkNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.On Setup Talk");

	UBP_GP_Script2_C_On_Setup_Talk_Params params;
	params.OneTopID = OneTopID;
	params.SelectTalkNo = SelectTalkNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_Script2.BP_GP_Script2_C.ExecuteUbergraph_BP_GP_Script2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GP_Script2_C::ExecuteUbergraph_BP_GP_Script2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_Script2.BP_GP_Script2_C.ExecuteUbergraph_BP_GP_Script2");

	UBP_GP_Script2_C_ExecuteUbergraph_BP_GP_Script2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
