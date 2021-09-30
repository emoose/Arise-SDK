
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

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowDialog                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::GetItem(const struct FString& ItemLabel, int ItemNum, bool* bShowDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.GetItem");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_GetItem_Params params;
	params.ItemLabel = ItemLabel;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShowDialog != nullptr)
		*bShowDialog = params.bShowDialog;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.GetPlayTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::GetPlayTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.GetPlayTransform");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_GetPlayTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.IsMySelfEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Same                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::IsMySelfEvent(const struct FString& EventName, bool* Same)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.IsMySelfEvent");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_IsMySelfEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Same != nullptr)
		*Same = params.Same;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.UserConstructionScript");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.OnPostEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OptionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::OnPostEvent(const struct FString& EventName, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.OnPostEvent");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_OnPostEvent_Params params;
	params.EventName = EventName;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ReceiveEndPlay");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.Post Interact
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::Post_Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.Post Interact");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_Post_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.K2_Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::K2_Execute(class AActor* Sender, class AActor* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.K2_Execute");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_K2_Execute_Params params;
	params.Sender = Sender;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ReceiveBeginPlay");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.On Gimmick Post Event Process
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::On_Gimmick_Post_Event_Process(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.On Gimmick Post Event Process");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_On_Gimmick_Post_Event_Process_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.RunPostEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::RunPostEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.RunPostEvent");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_RunPostEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.OnPlayEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::OnPlayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.OnPlayEvent");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_OnPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPerson
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_Gimmick_InjuredPerson_C::ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPerson(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPerson");

	ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPerson_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
