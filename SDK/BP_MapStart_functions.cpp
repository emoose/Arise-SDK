
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

// Function BP_MapStart.BP_MapStart_C.WorldTimeAdjust
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapStart_C::WorldTimeAdjust()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapStart.BP_MapStart_C.WorldTimeAdjust");

	ABP_MapStart_C_WorldTimeAdjust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapStart.BP_MapStart_C.ScreenMaskManagement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapStart_C::ScreenMaskManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapStart.BP_MapStart_C.ScreenMaskManagement");

	ABP_MapStart_C_ScreenMaskManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapStart.BP_MapStart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapStart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapStart.BP_MapStart_C.UserConstructionScript");

	ABP_MapStart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapStart.BP_MapStart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapStart_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapStart.BP_MapStart_C.ReceiveBeginPlay");

	ABP_MapStart_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapStart.BP_MapStart_C.ExecuteUbergraph_BP_MapStart
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapStart_C::ExecuteUbergraph_BP_MapStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapStart.BP_MapStart_C.ExecuteUbergraph_BP_MapStart");

	ABP_MapStart_C_ExecuteUbergraph_BP_MapStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
