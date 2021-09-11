
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

// Function BP_PFPlayStart.BP_PFPlayStart_C.ManageQuestOpen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayStart_C::ManageQuestOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayStart.BP_PFPlayStart_C.ManageQuestOpen");

	ABP_PFPlayStart_C_ManageQuestOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayStart.BP_PFPlayStart_C.ScreenMaskManagement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayStart_C::ScreenMaskManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayStart.BP_PFPlayStart_C.ScreenMaskManagement");

	ABP_PFPlayStart_C_ScreenMaskManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayStart.BP_PFPlayStart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayStart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayStart.BP_PFPlayStart_C.UserConstructionScript");

	ABP_PFPlayStart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayStart.BP_PFPlayStart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PFPlayStart_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayStart.BP_PFPlayStart_C.ReceiveBeginPlay");

	ABP_PFPlayStart_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayStart.BP_PFPlayStart_C.ExecuteUbergraph_BP_PFPlayStart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayStart_C::ExecuteUbergraph_BP_PFPlayStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayStart.BP_PFPlayStart_C.ExecuteUbergraph_BP_PFPlayStart");

	ABP_PFPlayStart_C_ExecuteUbergraph_BP_PFPlayStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
