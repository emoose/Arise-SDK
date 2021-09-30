
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

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.IsValidTalk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Base_C::IsValidTalk(bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.IsValidTalk");

	ABP_PF_NPC_InteractEvent_Base_C_IsValidTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.SetupInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcInteractionData   InteractionData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_NPC_InteractEvent_Base_C::SetupInteraction(const struct FPFNpcInteractionData& InteractionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.SetupInteraction");

	ABP_PF_NPC_InteractEvent_Base_C_SetupInteraction_Params params;
	params.InteractionData = InteractionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.OwnerSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::OwnerSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.OwnerSetting");

	ABP_PF_NPC_InteractEvent_Base_C_OwnerSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.StartOneTopProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameProcessClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SelectTalkNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AAriseGameProcess*       GameProcess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Base_C::StartOneTopProcess(class UClass* GameProcessClass, const struct FString& SelectTalkNo, class AAriseGameProcess** GameProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.StartOneTopProcess");

	ABP_PF_NPC_InteractEvent_Base_C_StartOneTopProcess_Params params;
	params.GameProcessClass = GameProcessClass;
	params.SelectTalkNo = SelectTalkNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameProcess != nullptr)
		*GameProcess = params.GameProcess;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Init");

	ABP_PF_NPC_InteractEvent_Base_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ClearAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::ClearAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ClearAction");

	ABP_PF_NPC_InteractEvent_Base_C_ClearAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ActionToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::ActionToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ActionToDefault");

	ABP_PF_NPC_InteractEvent_Base_C_ActionToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.LookAtToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::LookAtToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.LookAtToDefault");

	ABP_PF_NPC_InteractEvent_Base_C_LookAtToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.TurnToDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::TurnToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.TurnToDefault");

	ABP_PF_NPC_InteractEvent_Base_C_TurnToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.FinishMainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::FinishMainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.FinishMainInteract");

	ABP_PF_NPC_InteractEvent_Base_C_FinishMainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.MainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::MainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.MainInteract");

	ABP_PF_NPC_InteractEvent_Base_C_MainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.UserConstructionScript");

	ABP_PF_NPC_InteractEvent_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.BeginEvent
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::BeginEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.BeginEvent");

	ABP_PF_NPC_InteractEvent_Base_C_BeginEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.EndEvent
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::EndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.EndEvent");

	ABP_PF_NPC_InteractEvent_Base_C_EndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Interact
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Interact");

	ABP_PF_NPC_InteractEvent_Base_C_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Event Select Notify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectTextNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Base_C::Event_Select_Notify(int SelectNo, int SelectTextNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Event Select Notify");

	ABP_PF_NPC_InteractEvent_Base_C_Event_Select_Notify_Params params;
	params.SelectNo = SelectNo;
	params.SelectTextNo = SelectTextNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add Turn Character
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Base_C::Add_Turn_Character(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add Turn Character");

	ABP_PF_NPC_InteractEvent_Base_C_Add_Turn_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add LookAt Character
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Base_C::Add_LookAt_Character(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add LookAt Character");

	ABP_PF_NPC_InteractEvent_Base_C_Add_LookAt_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add PlayAction Character
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Base_C::Add_PlayAction_Character(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add PlayAction Character");

	ABP_PF_NPC_InteractEvent_Base_C_Add_PlayAction_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Execute OneTop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameProcessClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SelectTalkNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_NPC_InteractEvent_Base_C::Execute_OneTop(class UClass* GameProcessClass, const struct FString& SelectTalkNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Execute OneTop");

	ABP_PF_NPC_InteractEvent_Base_C_Execute_OneTop_Params params;
	params.GameProcessClass = GameProcessClass;
	params.SelectTalkNo = SelectTalkNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Finish OneTop
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Base_C::Finish_OneTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Finish OneTop");

	ABP_PF_NPC_InteractEvent_Base_C_Finish_OneTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Base_C::ExecuteUbergraph_BP_PF_NPC_InteractEvent_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Base");

	ABP_PF_NPC_InteractEvent_Base_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
