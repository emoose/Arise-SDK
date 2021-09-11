
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

// Function IconLayer_PF.IconLayer_PF_C.IsOutOfBox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FBox2D                  Box                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               Output                         (Parm, OutParm, IsPlainOldData)
// bool                           IsOutLeft                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutTop                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutRight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutBottom                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIconLayer_PF_C::IsOutOfBox(const struct FVector2D& Point, const struct FBox2D& Box, struct FVector2D* Output, bool* IsOutLeft, bool* IsOutTop, bool* IsOutRight, bool* IsOutBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.IsOutOfBox");

	UIconLayer_PF_C_IsOutOfBox_Params params;
	params.Point = Point;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
	if (IsOutLeft != nullptr)
		*IsOutLeft = params.IsOutLeft;
	if (IsOutTop != nullptr)
		*IsOutTop = params.IsOutTop;
	if (IsOutRight != nullptr)
		*IsOutRight = params.IsOutRight;
	if (IsOutBottom != nullptr)
		*IsOutBottom = params.IsOutBottom;
}


// Function IconLayer_PF.IconLayer_PF_C.GetSafeScreenPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FVector2D               ReturnValue2                   (Parm, OutParm, IsPlainOldData)

bool UIconLayer_PF_C::GetSafeScreenPosition(struct FVector* WorldPosition, struct FVector2D* ReturnValue2)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.GetSafeScreenPosition");

	UIconLayer_PF_C_GetSafeScreenPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldPosition != nullptr)
		*WorldPosition = params.WorldPosition;
	if (ReturnValue2 != nullptr)
		*ReturnValue2 = params.ReturnValue2;

	return params.ReturnValue;
}


// Function IconLayer_PF.IconLayer_PF_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_PF_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.Refresh");

	UIconLayer_PF_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_PF_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.Update");

	UIconLayer_PF_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_PF_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.Construct");

	UIconLayer_PF_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_PF_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.Tick");

	UIconLayer_PF_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.OnQuestUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_PF_C::OnQuestUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.OnQuestUpdate");

	UIconLayer_PF_C_OnQuestUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.OnLoadNewLocation
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_PF_C::OnLoadNewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.OnLoadNewLocation");

	UIconLayer_PF_C_OnLoadNewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_PF_C::CustomEvent_1(const struct FString& UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.CustomEvent_1");

	UIconLayer_PF_C_CustomEvent_1_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.ExecuteUbergraph_IconLayer_PF
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_PF_C::ExecuteUbergraph_IconLayer_PF(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.ExecuteUbergraph_IconLayer_PF");

	UIconLayer_PF_C_ExecuteUbergraph_IconLayer_PF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_PF.IconLayer_PF_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UIconLayer_PF_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_PF.IconLayer_PF_C.NewEventDispatcher_0__DelegateSignature");

	UIconLayer_PF_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
