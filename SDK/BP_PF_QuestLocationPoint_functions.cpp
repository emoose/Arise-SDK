
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

// Function BP_PF_QuestLocationPoint.BP_PF_QuestLocationPoint_C.SetID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestLocationPoint_C::SetID(int NewID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocationPoint.BP_PF_QuestLocationPoint_C.SetID");

	ABP_PF_QuestLocationPoint_C_SetID_Params params;
	params.NewID = NewID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestLocationPoint.BP_PF_QuestLocationPoint_C.SetupLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestLocationPoint_C::SetupLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocationPoint.BP_PF_QuestLocationPoint_C.SetupLabel");

	ABP_PF_QuestLocationPoint_C_SetupLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestLocationPoint.BP_PF_QuestLocationPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestLocationPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestLocationPoint.BP_PF_QuestLocationPoint_C.UserConstructionScript");

	ABP_PF_QuestLocationPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
