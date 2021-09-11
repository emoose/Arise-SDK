
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

// Function BP_BattleSceneInterface.BP_BattleSceneInterface_C.Battle_ForceTerminationBattleComplated
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BattleSceneInterface_C::Battle_ForceTerminationBattleComplated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSceneInterface.BP_BattleSceneInterface_C.Battle_ForceTerminationBattleComplated");

	UBP_BattleSceneInterface_C_Battle_ForceTerminationBattleComplated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
