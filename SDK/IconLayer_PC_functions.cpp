
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

// Function IconLayer_PC.IconLayer_PC_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_PC_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PC.IconLayer_PC_C.Refresh");

	UIconLayer_PC_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PC.IconLayer_PC_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_PC_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PC.IconLayer_PC_C.Update");

	UIconLayer_PC_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PC.IconLayer_PC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_PC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PC.IconLayer_PC_C.Construct");

	UIconLayer_PC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PC.IconLayer_PC_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_PC_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PC.IconLayer_PC_C.EventUpdate");

	UIconLayer_PC_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PC.IconLayer_PC_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_PC_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PC.IconLayer_PC_C.EventInitialize");

	UIconLayer_PC_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PC.IconLayer_PC_C.ExecuteUbergraph_IconLayer_PC
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_PC_C::ExecuteUbergraph_IconLayer_PC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PC.IconLayer_PC_C.ExecuteUbergraph_IconLayer_PC");

	UIconLayer_PC_C_ExecuteUbergraph_IconLayer_PC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
