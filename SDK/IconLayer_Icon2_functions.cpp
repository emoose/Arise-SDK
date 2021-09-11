
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

// Function IconLayer_Icon2.IconLayer_Icon2_C.UpdateLadderIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon2_C::UpdateLadderIcon(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.UpdateLadderIcon");

	UIconLayer_Icon2_C_UpdateLadderIcon_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Icon2_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.Refresh");

	UIconLayer_Icon2_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Icon2_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.Update");

	UIconLayer_Icon2_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Icon2_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.EventInitialize");

	UIconLayer_Icon2_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverOwl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon2_C::OnDiscoverOwl(const struct FString& InActorID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverOwl");

	UIconLayer_Icon2_C_OnDiscoverOwl_Params params;
	params.InActorID = InActorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon2_C::OnDiscoverBreak(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverBreak");

	UIconLayer_Icon2_C_OnDiscoverBreak_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverSearchPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon2_C::OnDiscoverSearchPoint(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverSearchPoint");

	UIconLayer_Icon2_C_OnDiscoverSearchPoint_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverTreasure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon2_C::OnDiscoverTreasure(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverTreasure");

	UIconLayer_Icon2_C_OnDiscoverTreasure_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverGimmick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon2_C::OnDiscoverGimmick(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverGimmick");

	UIconLayer_Icon2_C_OnDiscoverGimmick_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_Icon2_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.EventUpdate");

	UIconLayer_Icon2_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_Icon2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.Construct");

	UIconLayer_Icon2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_Icon2_C::CustomEvent_1(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.CustomEvent_1");

	UIconLayer_Icon2_C_CustomEvent_1_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon2.IconLayer_Icon2_C.ExecuteUbergraph_IconLayer_Icon2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Icon2_C::ExecuteUbergraph_IconLayer_Icon2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon2.IconLayer_Icon2_C.ExecuteUbergraph_IconLayer_Icon2");

	UIconLayer_Icon2_C_ExecuteUbergraph_IconLayer_Icon2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
