
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

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_GimmickBase_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetOutlinerFolderPath");

	ABP_PF_GimmickBase_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_GimmickBase_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetOutlinerLabelName");

	ABP_PF_GimmickBase_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetVisible
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bVisible                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetVisible");

	ABP_PF_GimmickBase_C_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetCollision
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bEnable                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::SetCollision(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetCollision");

	ABP_PF_GimmickBase_C_SetCollision_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetTick
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bEnable                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::SetTick(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetTick");

	ABP_PF_GimmickBase_C_SetTick_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.IsQuestContinue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bContinue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::IsQuestContinue(bool* bContinue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.IsQuestContinue");

	ABP_PF_GimmickBase_C_IsQuestContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bContinue != nullptr)
		*bContinue = params.bContinue;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.UpdateQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::UpdateQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.UpdateQuest");

	ABP_PF_GimmickBase_C_UpdateQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.IsSleeping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsSleeping                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::IsSleeping(bool* bIsSleeping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.IsSleeping");

	ABP_PF_GimmickBase_C_IsSleeping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSleeping != nullptr)
		*bIsSleeping = params.bIsSleeping;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetInteractActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InteractActor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::GetInteractActor(class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetInteractActor");

	ABP_PF_GimmickBase_C_GetInteractActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InteractActor != nullptr)
		*InteractActor = params.InteractActor;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetInteractActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::SetInteractActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetInteractActor");

	ABP_PF_GimmickBase_C_SetInteractActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetDefaultPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              DefaultPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::GetDefaultPlayer(class ACharacter** DefaultPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetDefaultPlayer");

	ABP_PF_GimmickBase_C_GetDefaultPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultPlayer != nullptr)
		*DefaultPlayer = params.DefaultPlayer;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetPlayerRotate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::ResetPlayerRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetPlayerRotate");

	ABP_PF_GimmickBase_C_ResetPlayerRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetPlayerCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::ResetPlayerCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetPlayerCamera");

	ABP_PF_GimmickBase_C_ResetPlayerCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetDefaultPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::ResetDefaultPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetDefaultPlayer");

	ABP_PF_GimmickBase_C_ResetDefaultPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetPartyOrder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArisePartyOrder*        PartyOrder                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::GetPartyOrder(class UArisePartyOrder** PartyOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetPartyOrder");

	ABP_PF_GimmickBase_C_GetPartyOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyOrder != nullptr)
		*PartyOrder = params.PartyOrder;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ShowPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::ShowPlayer(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ShowPlayer");

	ABP_PF_GimmickBase_C_ShowPlayer_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetFieldController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_GSC_Field_C*         FieldController                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::GetFieldController(class UBP_GSC_Field_C** FieldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetFieldController");

	ABP_PF_GimmickBase_C_GetFieldController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FieldController != nullptr)
		*FieldController = params.FieldController;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ApplyChangeFlags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::ApplyChangeFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ApplyChangeFlags");

	ABP_PF_GimmickBase_C_ApplyChangeFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.UserConstructionScript");

	ABP_PF_GimmickBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_GimmickBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ReceiveBeginPlay");

	ABP_PF_GimmickBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Field Action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InSener                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::On_Receive_Field_Action(class AActor* InSener)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Field Action");

	ABP_PF_GimmickBase_C_On_Receive_Field_Action_Params params;
	params.InSener = InSener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Interact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InSender                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::On_Receive_Interact(class AActor* InSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Interact");

	ABP_PF_GimmickBase_C_On_Receive_Interact_Params params;
	params.InSender = InSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ReceiveEndPlay");

	ABP_PF_GimmickBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Command
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_GimmickBase_C::On_Receive_Command(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Command");

	ABP_PF_GimmickBase_C_On_Receive_Command_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SleepInGame
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::SleepInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SleepInGame");

	ABP_PF_GimmickBase_C_SleepInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.WakeupInGame
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::WakeupInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.WakeupInGame");

	ABP_PF_GimmickBase_C_WakeupInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.OnFoundTrapIn
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PF_GimmickBase_C::OnFoundTrapIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.OnFoundTrapIn");

	ABP_PF_GimmickBase_C_OnFoundTrapIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ExecuteUbergraph_BP_PF_GimmickBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_GimmickBase_C::ExecuteUbergraph_BP_PF_GimmickBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ExecuteUbergraph_BP_PF_GimmickBase");

	ABP_PF_GimmickBase_C_ExecuteUbergraph_BP_PF_GimmickBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
