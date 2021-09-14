
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

// Function MP_BP_SM_Dead_tree_01.MP_BP_SM_Dead_tree_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMP_BP_SM_Dead_tree_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MP_BP_SM_Dead_tree_01.MP_BP_SM_Dead_tree_01_C.UserConstructionScript");

	AMP_BP_SM_Dead_tree_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
