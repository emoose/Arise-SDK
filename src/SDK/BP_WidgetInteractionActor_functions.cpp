
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

// Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.UpdateInteractionEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WidgetInteractionActor_C::UpdateInteractionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.UpdateInteractionEnabled");

	ABP_WidgetInteractionActor_C_UpdateInteractionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WidgetInteractionActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.UserConstructionScript");

	ABP_WidgetInteractionActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WidgetInteractionActor_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	ABP_WidgetInteractionActor_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WidgetInteractionActor_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	ABP_WidgetInteractionActor_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetInteractionActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.ReceiveTick");

	ABP_WidgetInteractionActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WidgetInteractionActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.ReceiveBeginPlay");

	ABP_WidgetInteractionActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.ExecuteUbergraph_BP_WidgetInteractionActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetInteractionActor_C::ExecuteUbergraph_BP_WidgetInteractionActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInteractionActor.BP_WidgetInteractionActor_C.ExecuteUbergraph_BP_WidgetInteractionActor");

	ABP_WidgetInteractionActor_C_ExecuteUbergraph_BP_WidgetInteractionActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
