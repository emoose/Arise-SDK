
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

// Function BP_PF_NpcCharacterEmpty.BP_PF_NpcCharacterEmpty_C.BuildCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcPlacementData     Placement_Info                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_NpcCharacterEmpty_C::BuildCharacter(const struct FPFNpcPlacementData& Placement_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEmpty.BP_PF_NpcCharacterEmpty_C.BuildCharacter");

	ABP_PF_NpcCharacterEmpty_C_BuildCharacter_Params params;
	params.Placement_Info = Placement_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcCharacterEmpty.BP_PF_NpcCharacterEmpty_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcCharacterEmpty_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcCharacterEmpty.BP_PF_NpcCharacterEmpty_C.UserConstructionScript");

	ABP_PF_NpcCharacterEmpty_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
