
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

// Function TO14_BP_YOK_Bld_PillarWood01_b3_MCAM.TO14_BP_YOK_Bld_PillarWood01_b3_MCAM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_YOK_Bld_PillarWood01_b3_MCAM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_YOK_Bld_PillarWood01_b3_MCAM.TO14_BP_YOK_Bld_PillarWood01_b3_MCAM_C.UserConstructionScript");

	ATO14_BP_YOK_Bld_PillarWood01_b3_MCAM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
