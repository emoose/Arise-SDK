
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

// Function BP_PreEventBattle.BP_PreEventBattle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PreEventBattle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreEventBattle.BP_PreEventBattle_C.UserConstructionScript");

	ABP_PreEventBattle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreEventBattle.BP_PreEventBattle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PreEventBattle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreEventBattle.BP_PreEventBattle_C.ReceiveBeginPlay");

	ABP_PreEventBattle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreEventBattle.BP_PreEventBattle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PreEventBattle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreEventBattle.BP_PreEventBattle_C.ReceiveTick");

	ABP_PreEventBattle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreEventBattle.BP_PreEventBattle_C.ExecuteUbergraph_BP_PreEventBattle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PreEventBattle_C::ExecuteUbergraph_BP_PreEventBattle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreEventBattle.BP_PreEventBattle_C.ExecuteUbergraph_BP_PreEventBattle");

	ABP_PreEventBattle_C_ExecuteUbergraph_BP_PreEventBattle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
