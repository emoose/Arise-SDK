
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

// Function IconLayer_Camera.IconLayer_Camera_C.CreateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Camera_C::CreateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.CreateIcon");

	UIconLayer_Camera_C_CreateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_Camera_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.Refresh");

	UIconLayer_Camera_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Camera_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.Update");

	UIconLayer_Camera_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_Camera_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.Construct");

	UIconLayer_Camera_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Camera_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.Tick");

	UIconLayer_Camera_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_Camera_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.EventUpdate");

	UIconLayer_Camera_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Camera_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.EventInitialize");

	UIconLayer_Camera_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_Camera_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.Destruct");

	UIconLayer_Camera_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Camera.IconLayer_Camera_C.ExecuteUbergraph_IconLayer_Camera
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Camera_C::ExecuteUbergraph_IconLayer_Camera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Camera.IconLayer_Camera_C.ExecuteUbergraph_IconLayer_Camera");

	UIconLayer_Camera_C_ExecuteUbergraph_IconLayer_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
