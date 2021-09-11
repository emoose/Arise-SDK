
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

// Function DBP_BattleScreenshot.DBP_BattleScreenshot_C.Received_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDBP_BattleScreenshot_C::Received_Tick(float FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DBP_BattleScreenshot.DBP_BattleScreenshot_C.Received_Tick");

	UDBP_BattleScreenshot_C_Received_Tick_Params params;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBP_BattleScreenshot.DBP_BattleScreenshot_C.ExecuteUbergraph_DBP_BattleScreenshot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDBP_BattleScreenshot_C::ExecuteUbergraph_DBP_BattleScreenshot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DBP_BattleScreenshot.DBP_BattleScreenshot_C.ExecuteUbergraph_DBP_BattleScreenshot");

	UDBP_BattleScreenshot_C_ExecuteUbergraph_DBP_BattleScreenshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
