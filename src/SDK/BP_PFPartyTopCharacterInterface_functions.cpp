
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

// Function BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C.IF_ReconstPartyTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PFPartyTopCharacterInterface_C::IF_ReconstPartyTop(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C.IF_ReconstPartyTop");

	UBP_PFPartyTopCharacterInterface_C_IF_ReconstPartyTop_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C.IsBuildCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PFPartyTopCharacterInterface_C::IsBuildCharacter(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C.IsBuildCharacter");

	UBP_PFPartyTopCharacterInterface_C_IsBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C.BuildCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PFPartyTopCharacterInterface_C::BuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C.BuildCharacter");

	UBP_PFPartyTopCharacterInterface_C_BuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
