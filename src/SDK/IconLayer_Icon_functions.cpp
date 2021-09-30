
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

// Function IconLayer_Icon.IconLayer_Icon_C.CreateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Icon_C::CreateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.CreateIcon");

	UIconLayer_Icon_C_CreateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.UpdateLadderIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon_C::UpdateLadderIcon(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.UpdateLadderIcon");

	UIconLayer_Icon_C_UpdateLadderIcon_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_Icon_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.Refresh");

	UIconLayer_Icon_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Icon_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.Update");

	UIconLayer_Icon_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.Construct");

	UIconLayer_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_Icon_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.EventUpdate");

	UIconLayer_Icon_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Icon_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.EventInitialize");

	UIconLayer_Icon_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverOwl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon_C::OnDiscoverOwl(const struct FString& InActorID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverOwl");

	UIconLayer_Icon_C_OnDiscoverOwl_Params params;
	params.InActorID = InActorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon_C::OnDiscoverBreak(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverBreak");

	UIconLayer_Icon_C_OnDiscoverBreak_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverSearchPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon_C::OnDiscoverSearchPoint(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverSearchPoint");

	UIconLayer_Icon_C_OnDiscoverSearchPoint_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverTreasure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon_C::OnDiscoverTreasure(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverTreasure");

	UIconLayer_Icon_C_OnDiscoverTreasure_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverGimmick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_Icon_C::OnDiscoverGimmick(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverGimmick");

	UIconLayer_Icon_C_OnDiscoverGimmick_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_Icon_C::CustomEvent_1(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.CustomEvent_1");

	UIconLayer_Icon_C_CustomEvent_1_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Icon.IconLayer_Icon_C.ExecuteUbergraph_IconLayer_Icon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Icon_C::ExecuteUbergraph_IconLayer_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Icon.IconLayer_Icon_C.ExecuteUbergraph_IconLayer_Icon");

	UIconLayer_Icon_C_ExecuteUbergraph_IconLayer_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
