
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

// Function BP_BattleExitScreen.BP_BattleExitScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleExitScreen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleExitScreen.BP_BattleExitScreen_C.UserConstructionScript");

	ABP_BattleExitScreen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleExitScreen.BP_BattleExitScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BattleExitScreen_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleExitScreen.BP_BattleExitScreen_C.ReceiveBeginPlay");

	ABP_BattleExitScreen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleExitScreen.BP_BattleExitScreen_C.ExecuteUbergraph_BP_BattleExitScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleExitScreen_C::ExecuteUbergraph_BP_BattleExitScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleExitScreen.BP_BattleExitScreen_C.ExecuteUbergraph_BP_BattleExitScreen");

	ABP_BattleExitScreen_C_ExecuteUbergraph_BP_BattleExitScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
