
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

// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.MountSystemFunctions
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGameModeCore_C::MountSystemFunctions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.MountSystemFunctions");

	ABP_AriseGameModeCore_C_MountSystemFunctions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGameModeCore_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.UserConstructionScript");

	ABP_AriseGameModeCore_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameModeCore_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ReceiveTick");

	ABP_AriseGameModeCore_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AriseGameModeCore_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ReceiveBeginPlay");

	ABP_AriseGameModeCore_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.UpdateCurrentSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  StartedSection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameModeCore_C::UpdateCurrentSection(unsigned char StartedSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.UpdateCurrentSection");

	ABP_AriseGameModeCore_C_UpdateCurrentSection_Params params;
	params.StartedSection = StartedSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ExecuteUbergraph_BP_AriseGameModeCore
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameModeCore_C::ExecuteUbergraph_BP_AriseGameModeCore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ExecuteUbergraph_BP_AriseGameModeCore");

	ABP_AriseGameModeCore_C_ExecuteUbergraph_BP_AriseGameModeCore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
