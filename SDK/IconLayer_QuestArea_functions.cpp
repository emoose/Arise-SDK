
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

// Function IconLayer_QuestArea.IconLayer_QuestArea_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_QuestArea_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_QuestArea.IconLayer_QuestArea_C.Refresh");

	UIconLayer_QuestArea_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_QuestArea.IconLayer_QuestArea_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_QuestArea_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_QuestArea.IconLayer_QuestArea_C.Update");

	UIconLayer_QuestArea_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_QuestArea.IconLayer_QuestArea_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_QuestArea_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_QuestArea.IconLayer_QuestArea_C.Construct");

	UIconLayer_QuestArea_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_QuestArea.IconLayer_QuestArea_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_QuestArea_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_QuestArea.IconLayer_QuestArea_C.EventUpdate");

	UIconLayer_QuestArea_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_QuestArea.IconLayer_QuestArea_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_QuestArea_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_QuestArea.IconLayer_QuestArea_C.EventInitialize");

	UIconLayer_QuestArea_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_QuestArea.IconLayer_QuestArea_C.ExecuteUbergraph_IconLayer_QuestArea
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_QuestArea_C::ExecuteUbergraph_IconLayer_QuestArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_QuestArea.IconLayer_QuestArea_C.ExecuteUbergraph_IconLayer_QuestArea");

	UIconLayer_QuestArea_C_ExecuteUbergraph_IconLayer_QuestArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
