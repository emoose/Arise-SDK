
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

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.GetLinkedLocatorName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 LocatorName                    (Parm, OutParm, ZeroConstructor)

void ABP_MapLinkSelectorBase_C::GetLinkedLocatorName(struct FString* LocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.GetLinkedLocatorName");

	ABP_MapLinkSelectorBase_C_GetLinkedLocatorName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocatorName != nullptr)
		*LocatorName = params.LocatorName;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.GetLinkedMapName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)

void ABP_MapLinkSelectorBase_C::GetLinkedMapName(struct FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.GetLinkedMapName");

	ABP_MapLinkSelectorBase_C_GetLinkedMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C._UpdateInteractionActInfo
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkSelectorBase_C::_UpdateInteractionActInfo(bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C._UpdateInteractionActInfo");

	ABP_MapLinkSelectorBase_C__UpdateInteractionActInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.CollectionSelectList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkSelectorBase_C::CollectionSelectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.CollectionSelectList");

	ABP_MapLinkSelectorBase_C_CollectionSelectList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.OnMapJump
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkSelectorBase_C::OnMapJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.OnMapJump");

	ABP_MapLinkSelectorBase_C_OnMapJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkSelectorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.UserConstructionScript");

	ABP_MapLinkSelectorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.Finish DoMapLink (Dialog)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapLinkSelectorBase_C::Finish_DoMapLink__Dialog_(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.Finish DoMapLink (Dialog)");

	ABP_MapLinkSelectorBase_C_Finish_DoMapLink__Dialog__Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.On Error Msg
// (BlueprintCallable, BlueprintEvent)

void ABP_MapLinkSelectorBase_C::On_Error_Msg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.On Error Msg");

	ABP_MapLinkSelectorBase_C_On_Error_Msg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.On Elevator Event
// (BlueprintCallable, BlueprintEvent)

void ABP_MapLinkSelectorBase_C::On_Elevator_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.On Elevator Event");

	ABP_MapLinkSelectorBase_C_On_Elevator_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapLinkSelectorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.ReceiveBeginPlay");

	ABP_MapLinkSelectorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.ExecuteUbergraph_BP_MapLinkSelectorBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkSelectorBase_C::ExecuteUbergraph_BP_MapLinkSelectorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.ExecuteUbergraph_BP_MapLinkSelectorBase");

	ABP_MapLinkSelectorBase_C_ExecuteUbergraph_BP_MapLinkSelectorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
