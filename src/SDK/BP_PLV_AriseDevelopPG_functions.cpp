
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

// Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.LoadNowLoadingUIAsset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PLV_AriseDevelopPG_C::LoadNowLoadingUIAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.LoadNowLoadingUIAsset");

	ABP_PLV_AriseDevelopPG_C_LoadNowLoadingUIAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PLV_AriseDevelopPG_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.UserConstructionScript");

	ABP_PLV_AriseDevelopPG_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.StartNewGameSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  StartedSection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PLV_AriseDevelopPG_C::StartNewGameSection(unsigned char StartedSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.StartNewGameSection");

	ABP_PLV_AriseDevelopPG_C_StartNewGameSection_Params params;
	params.StartedSection = StartedSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PLV_AriseDevelopPG_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.ReceiveBeginPlay");

	ABP_PLV_AriseDevelopPG_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PLV_AriseDevelopPG_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.ReceiveTick");

	ABP_PLV_AriseDevelopPG_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.ExecuteUbergraph_BP_PLV_AriseDevelopPG
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PLV_AriseDevelopPG_C::ExecuteUbergraph_BP_PLV_AriseDevelopPG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PLV_AriseDevelopPG.BP_PLV_AriseDevelopPG_C.ExecuteUbergraph_BP_PLV_AriseDevelopPG");

	ABP_PLV_AriseDevelopPG_C_ExecuteUbergraph_BP_PLV_AriseDevelopPG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
