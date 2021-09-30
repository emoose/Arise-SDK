
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

// Function BP_BtlStateFinalizeInterface.BP_BtlStateFinalizeInterface_C.Battle_ForceTerminationBattle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlStateFinalizeInterface_C::Battle_ForceTerminationBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlStateFinalizeInterface.BP_BtlStateFinalizeInterface_C.Battle_ForceTerminationBattle");

	UBP_BtlStateFinalizeInterface_C_Battle_ForceTerminationBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
