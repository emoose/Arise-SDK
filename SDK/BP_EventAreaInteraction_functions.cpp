
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

// Function BP_EventAreaInteraction.BP_EventAreaInteraction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaInteraction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaInteraction.BP_EventAreaInteraction_C.UserConstructionScript");

	ABP_EventAreaInteraction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
