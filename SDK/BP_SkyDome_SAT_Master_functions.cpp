
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

// Function BP_SkyDome_SAT_Master.BP_SkyDome_SAT_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_SAT_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome_SAT_Master.BP_SkyDome_SAT_Master_C.UserConstructionScript");

	ABP_SkyDome_SAT_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
