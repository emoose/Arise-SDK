
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

// Function LandscapeWallCylinder.LandscapeWallCylinder_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALandscapeWallCylinder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeWallCylinder.LandscapeWallCylinder_C.UserConstructionScript");

	ALandscapeWallCylinder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
