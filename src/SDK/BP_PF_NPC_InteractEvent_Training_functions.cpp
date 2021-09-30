
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

// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.GetTrainingQuestEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bPlayQuest                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Training_C::GetTrainingQuestEvent(bool* bPlayQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.GetTrainingQuestEvent");

	ABP_PF_NPC_InteractEvent_Training_C_GetTrainingQuestEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayQuest != nullptr)
		*bPlayQuest = params.bPlayQuest;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.GetTrainingTalkNo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 TalkNo                         (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_InteractEvent_Training_C::GetTrainingTalkNo(const struct FString& Tag, struct FString* TalkNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.GetTrainingTalkNo");

	ABP_PF_NPC_InteractEvent_Training_C_GetTrainingTalkNo_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkNo != nullptr)
		*TalkNo = params.TalkNo;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.EventActorSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::EventActorSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.EventActorSetting");

	ABP_PF_NPC_InteractEvent_Training_C_EventActorSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.UserConstructionScript");

	ABP_PF_NPC_InteractEvent_Training_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Event Get First Reward
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::Event_Get_First_Reward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Event Get First Reward");

	ABP_PF_NPC_InteractEvent_Training_C_Event_Get_First_Reward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Event Get Time Reward
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::Event_Get_Time_Reward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Event Get Time Reward");

	ABP_PF_NPC_InteractEvent_Training_C_Event_Get_Time_Reward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Open Traning Menu
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::Open_Traning_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Open Traning Menu");

	ABP_PF_NPC_InteractEvent_Training_C_Open_Traning_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.MainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::MainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.MainInteract");

	ABP_PF_NPC_InteractEvent_Training_C_MainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.ReceiveBeginPlay");

	ABP_PF_NPC_InteractEvent_Training_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Execute Training Menu
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::Execute_Training_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Execute Training Menu");

	ABP_PF_NPC_InteractEvent_Training_C_Execute_Training_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Execute Quest Event
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Training_C::Execute_Quest_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.Execute Quest Event");

	ABP_PF_NPC_InteractEvent_Training_C_Execute_Quest_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Training
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Training_C::ExecuteUbergraph_BP_PF_NPC_InteractEvent_Training(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Training");

	ABP_PF_NPC_InteractEvent_Training_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_Training_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
