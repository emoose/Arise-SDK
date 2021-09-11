
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

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetupOneTopComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopID             OneTopID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 SelectTalkNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GP_ScriptSystem_C::SetupOneTopComponent(const struct FPFOneTopID& OneTopID, const struct FString& SelectTalkNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetupOneTopComponent");

	ABP_GP_ScriptSystem_C_SetupOneTopComponent_Params params;
	params.OneTopID = OneTopID;
	params.SelectTalkNo = SelectTalkNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.CollectMasterComponent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::CollectMasterComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.CollectMasterComponent");

	ABP_GP_ScriptSystem_C_CollectMasterComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.PerseActionLookAtAimParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 SourceString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::PerseActionLookAtAimParameter(const struct FString& SourceString, float* Yaw, float* Pitch, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.PerseActionLookAtAimParameter");

	ABP_GP_ScriptSystem_C_PerseActionLookAtAimParameter_Params params;
	params.SourceString = SourceString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterActionLookAtAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PF_NPC_Stand_AIController_C* TargetController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDE_PF_NPC_AIController_LookAtType> LookAtType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::SetCharacterActionLookAtAim(class APFNpcCharacterBase* TargetCharacter, class ABP_PF_NPC_Stand_AIController_C* TargetController, TEnumAsByte<EDE_PF_NPC_AIController_LookAtType> LookAtType, float Yaw, float Pitch, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterActionLookAtAim");

	ABP_GP_ScriptSystem_C_SetCharacterActionLookAtAim_Params params;
	params.TargetCharacter = TargetCharacter;
	params.TargetController = TargetController;
	params.LookAtType = LookAtType;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterPlayAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PF_NPC_Stand_AIController_C* TargetController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bBlend                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPFNpcAnimPlayActionLoop       Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::SetCharacterPlayAction(class APFNpcCharacterBase* TargetCharacter, class ABP_PF_NPC_Stand_AIController_C* TargetController, const struct FString& ActionKey, bool bBlend, bool bForce, EPFNpcAnimPlayActionLoop Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterPlayAction");

	ABP_GP_ScriptSystem_C_SetCharacterPlayAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.TargetController = TargetController;
	params.ActionKey = ActionKey;
	params.bBlend = bBlend;
	params.bForce = bForce;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterActionLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PF_NPC_Stand_AIController_C* TargetController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<EDE_PF_NPC_AIController_LookAtType> LookAtType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NonTargetLookAtActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::SetCharacterActionLookAt(class APFNpcCharacterBase* TargetCharacter, class ABP_PF_NPC_Stand_AIController_C* TargetController, const struct FString& LookAtTarget, TEnumAsByte<EDE_PF_NPC_AIController_LookAtType> LookAtType, class AActor* NonTargetLookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterActionLookAt");

	ABP_GP_ScriptSystem_C_SetCharacterActionLookAt_Params params;
	params.TargetCharacter = TargetCharacter;
	params.TargetController = TargetController;
	params.LookAtTarget = LookAtTarget;
	params.LookAtType = LookAtType;
	params.NonTargetLookAtActor = NonTargetLookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_PlaySE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_PlaySE(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_PlaySE");

	ABP_GP_ScriptSystem_C_MetaEvent_PlaySE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.IsMessageWindowClose
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bClose                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::IsMessageWindowClose(bool* bClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.IsMessageWindowClose");

	ABP_GP_ScriptSystem_C_IsMessageWindowClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClose != nullptr)
		*bClose = params.bClose;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnPlayVoiceEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 VoiceLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 CaptionId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bHasLipSync                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::OnPlayVoiceEvent(const struct FString& VoiceLabel, const struct FString& CaptionId, bool bHasLipSync)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnPlayVoiceEvent");

	ABP_GP_ScriptSystem_C_OnPlayVoiceEvent_Params params;
	params.VoiceLabel = VoiceLabel;
	params.CaptionId = CaptionId;
	params.bHasLipSync = bHasLipSync;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetMoveToLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_GP_ScriptSystem_C::GetMoveToLocation(class ACharacter* Character, float Yaw, float Distance, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetMoveToLocation");

	ABP_GP_ScriptSystem_C_GetMoveToLocation_Params params;
	params.Character = Character;
	params.Yaw = Yaw;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_CheckTargetCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_CheckTargetCount(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_CheckTargetCount");

	ABP_GP_ScriptSystem_C_MetaEvent_CheckTargetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ApplyCameraPreset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::ApplyCameraPreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ApplyCameraPreset");

	ABP_GP_ScriptSystem_C_ApplyCameraPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetCameraPreset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_SetCameraPreset(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetCameraPreset");

	ABP_GP_ScriptSystem_C_MetaEvent_SetCameraPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.«0á0é0RŠ0ÿfH0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::«0á0é0RŠ0ÿfH0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.«0á0é0RŠ0ÿfH0");

	ABP_GP_ScriptSystem_C_«0á0é0RŠ0ÿfH0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.×0ê0»0Ã0È0iÜ_
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::×0ê0»0Ã0È0iÜ_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.×0ê0»0Ã0È0iÜ_");

	ABP_GP_ScriptSystem_C_×0ê0»0Ã0È0iÜ__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0");

	ABP_GP_ScriptSystem_C_¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddGald
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_AddGald(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddGald");

	ABP_GP_ScriptSystem_C_MetaEvent_AddGald_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddUserItemNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_AddUserItemNum(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddUserItemNum");

	ABP_GP_ScriptSystem_C_MetaEvent_AddUserItemNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetScriptQuestFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FlagString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<EDE_PF_Script_QuestFlag> Flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::GetScriptQuestFlag(const struct FString& FlagString, TEnumAsByte<EDE_PF_Script_QuestFlag>* Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetScriptQuestFlag");

	ABP_GP_ScriptSystem_C_GetScriptQuestFlag_Params params;
	params.FlagString = FlagString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Flag != nullptr)
		*Flag = params.Flag;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideStepFlagByID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_SetQuestGuideStepFlagByID(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideStepFlagByID");

	ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideStepFlagByID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideFlagByID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_SetQuestGuideFlagByID(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideFlagByID");

	ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideFlagByID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetScenarioFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_SetScenarioFlag(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetScenarioFlag");

	ABP_GP_ScriptSystem_C_MetaEvent_SetScenarioFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetScenarioCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_SetScenarioCounter(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetScenarioCounter");

	ABP_GP_ScriptSystem_C_MetaEvent_SetScenarioCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddFavorability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_AddFavorability(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddFavorability");

	ABP_GP_ScriptSystem_C_MetaEvent_AddFavorability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.FindNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APFNpcCharacterBase*     Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::FindNPC(const struct FString& CharacterID, class APFNpcCharacterBase** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.FindNPC");

	ABP_GP_ScriptSystem_C_FindNPC_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_IsQuestGuideFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_IsQuestGuideFlag(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_IsQuestGuideFlag");

	ABP_GP_ScriptSystem_C_MetaEvent_IsQuestGuideFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_SetQuestGuideFlag(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideFlag");

	ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_IsQuestGuideStepFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_IsQuestGuideStepFlag(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_IsQuestGuideStepFlag");

	ABP_GP_ScriptSystem_C_MetaEvent_IsQuestGuideStepFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::MetaEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent");

	ABP_GP_ScriptSystem_C_MetaEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideStepFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_SetQuestGuideStepFlag(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideStepFlag");

	ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideStepFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPFOneTopCharacterEvent> CharacterEvents                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::OnCharacterEvent(TArray<struct FPFOneTopCharacterEvent>* CharacterEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterEvent");

	ABP_GP_ScriptSystem_C_OnCharacterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterEvents != nullptr)
		*CharacterEvents = params.CharacterEvents;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_FadeOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_FadeOut(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_FadeOut");

	ABP_GP_ScriptSystem_C_MetaEvent_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_FadeIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_FadeIn(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_FadeIn");

	ABP_GP_ScriptSystem_C_MetaEvent_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_CheckItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_CheckItem(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_CheckItem");

	ABP_GP_ScriptSystem_C_MetaEvent_CheckItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_Custom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Args                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MetaEvent_Custom(TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_Custom");

	ABP_GP_ScriptSystem_C_MetaEvent_Custom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnMetaEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  MetaType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::OnMetaEvent(unsigned char MetaType, TArray<struct FString>* UserData, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnMetaEvent");

	ABP_GP_ScriptSystem_C_OnMetaEvent_Params params;
	params.MetaType = MetaType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserData != nullptr)
		*UserData = params.UserData;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetSelectionNo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            SelectIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectNo                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::GetSelectionNo(int SelectIndex, int* SelectNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetSelectionNo");

	ABP_GP_ScriptSystem_C_GetSelectionNo_Params params;
	params.SelectIndex = SelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectNo != nullptr)
		*SelectNo = params.SelectNo;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MakeSelection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   InSelectMessages               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GP_ScriptSystem_C::MakeSelection(TArray<struct FModifiedText>* InSelectMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MakeSelection");

	ABP_GP_ScriptSystem_C_MakeSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSelectMessages != nullptr)
		*InSelectMessages = params.InSelectMessages;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.TickMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bClose                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::TickMessage(class UUserWidget* Widget, bool* bClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.TickMessage");

	ABP_GP_ScriptSystem_C_TickMessage_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClose != nullptr)
		*bClose = params.bClose;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.FinishMessage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::FinishMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.FinishMessage");

	ABP_GP_ScriptSystem_C_FinishMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.UserConstructionScript");

	ABP_GP_ScriptSystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Run Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopID             OneTopID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 SelectTalkNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GP_ScriptSystem_C::Run_Message(const struct FPFOneTopID& OneTopID, const struct FString& SelectTalkNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Run Message");

	ABP_GP_ScriptSystem_C_Run_Message_Params params;
	params.OneTopID = OneTopID;
	params.SelectTalkNo = SelectTalkNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.End Message
// (BlueprintCallable, BlueprintEvent)

void ABP_GP_ScriptSystem_C::End_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.End Message");

	ABP_GP_ScriptSystem_C_End_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GP_ScriptSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ReceiveBeginPlay");

	ABP_GP_ScriptSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Play MetaEvent_FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::Play_MetaEvent_FadeOut(TEnumAsByte<EVisualFadeLayer> Layer, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Play MetaEvent_FadeOut");

	ABP_GP_ScriptSystem_C_Play_MetaEvent_FadeOut_Params params;
	params.Layer = Layer;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Play MetaEvent_FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::Play_MetaEvent_FadeIn(TEnumAsByte<EVisualFadeLayer> Layer, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Play MetaEvent_FadeIn");

	ABP_GP_ScriptSystem_C_Play_MetaEvent_FadeIn_Params params;
	params.Layer = Layer;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ExecuteUbergraph_BP_GP_ScriptSystem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::ExecuteUbergraph_BP_GP_ScriptSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ExecuteUbergraph_BP_GP_ScriptSystem");

	ABP_GP_ScriptSystem_C_ExecuteUbergraph_BP_GP_ScriptSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterPlayAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::OnCharacterPlayAction__DelegateSignature(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterPlayAction__DelegateSignature");

	ABP_GP_ScriptSystem_C_OnCharacterPlayAction__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterLookAt__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::OnCharacterLookAt__DelegateSignature(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterLookAt__DelegateSignature");

	ABP_GP_ScriptSystem_C_OnCharacterLookAt__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterTurn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_ScriptSystem_C::OnCharacterTurn__DelegateSignature(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterTurn__DelegateSignature");

	ABP_GP_ScriptSystem_C_OnCharacterTurn__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnGetUserData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData01                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 UserData02                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 UserData03                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GP_ScriptSystem_C::OnGetUserData__DelegateSignature(const struct FString& UserData01, const struct FString& UserData02, const struct FString& UserData03)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnGetUserData__DelegateSignature");

	ABP_GP_ScriptSystem_C_OnGetUserData__DelegateSignature_Params params;
	params.UserData01 = UserData01;
	params.UserData02 = UserData02;
	params.UserData03 = UserData03;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
