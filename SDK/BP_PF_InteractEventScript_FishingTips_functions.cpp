
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

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByHint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FishLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bVisited                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 AreaStr                        (Parm, OutParm, ZeroConstructor)

void UBP_PF_InteractEventScript_FishingTips_C::IsVisitedAreaByHint(const struct FString& FishLabel, bool* bVisited, struct FString* AreaStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByHint");

	UBP_PF_InteractEventScript_FishingTips_C_IsVisitedAreaByHint_Params params;
	params.FishLabel = FishLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bVisited != nullptr)
		*bVisited = params.bVisited;
	if (AreaStr != nullptr)
		*AreaStr = params.AreaStr;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.SetReplaceMessage_RewardFishTypeCount
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PF_InteractEventScript_FishingTips_C::SetReplaceMessage_RewardFishTypeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.SetReplaceMessage_RewardFishTypeCount");

	UBP_PF_InteractEventScript_FishingTips_C_SetReplaceMessage_RewardFishTypeCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.SetReplaceMessage_GetFishTypeCount
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PF_InteractEventScript_FishingTips_C::SetReplaceMessage_GetFishTypeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.SetReplaceMessage_GetFishTypeCount");

	UBP_PF_InteractEventScript_FishingTips_C_SetReplaceMessage_GetFishTypeCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByLocationID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 LocationID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bVisited                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingTips_C::IsVisitedAreaByLocationID(const struct FString& LocationID, bool* bVisited)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByLocationID");

	UBP_PF_InteractEventScript_FishingTips_C_IsVisitedAreaByLocationID_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bVisited != nullptr)
		*bVisited = params.bVisited;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByAreaStrID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 AreaStrID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bVisited                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingTips_C::IsVisitedAreaByAreaStrID(const struct FString& AreaStrID, bool* bVisited)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByAreaStrID");

	UBP_PF_InteractEventScript_FishingTips_C_IsVisitedAreaByAreaStrID_Params params;
	params.AreaStrID = AreaStrID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bVisited != nullptr)
		*bVisited = params.bVisited;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.CollectionUncatchedFish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PF_InteractEventScript_FishingTips_C::CollectionUncatchedFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.CollectionUncatchedFish");

	UBP_PF_InteractEventScript_FishingTips_C_CollectionUncatchedFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.Selection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectTextNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingTips_C::Selection(int SelectNo, int SelectTextNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.Selection");

	UBP_PF_InteractEventScript_FishingTips_C_Selection_Params params;
	params.SelectNo = SelectNo;
	params.SelectTextNo = SelectTextNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.On Pre Begin Talk
// (BlueprintCallable, BlueprintEvent)

void UBP_PF_InteractEventScript_FishingTips_C::On_Pre_Begin_Talk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.On Pre Begin Talk");

	UBP_PF_InteractEventScript_FishingTips_C_On_Pre_Begin_Talk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.On Post End Talk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFOneTopComponent*      OneTopComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingTips_C::On_Post_End_Talk(class UPFOneTopComponent* OneTopComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.On Post End Talk");

	UBP_PF_InteractEventScript_FishingTips_C_On_Post_End_Talk_Params params;
	params.OneTopComponent = OneTopComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.ExecuteUbergraph_BP_PF_InteractEventScript_FishingTips
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingTips_C::ExecuteUbergraph_BP_PF_InteractEventScript_FishingTips(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.ExecuteUbergraph_BP_PF_InteractEventScript_FishingTips");

	UBP_PF_InteractEventScript_FishingTips_C_ExecuteUbergraph_BP_PF_InteractEventScript_FishingTips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
