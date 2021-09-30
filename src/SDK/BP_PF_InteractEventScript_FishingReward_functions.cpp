
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

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.CheckTrophy
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PF_InteractEventScript_FishingReward_C::CheckTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.CheckTrophy");

	UBP_PF_InteractEventScript_FishingReward_C_CheckTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.SetReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PF_InteractEventScript_FishingReward_C::SetReward(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.SetReward");

	UBP_PF_InteractEventScript_FishingReward_C_SetReward_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.SaveGetReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingReward_C::SaveGetReward(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.SaveGetReward");

	UBP_PF_InteractEventScript_FishingReward_C_SaveGetReward_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.GetRewardData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFishingRewardItemDatabaseRow RewardData                     (Parm, OutParm)
// bool                           bComplete                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingReward_C::GetRewardData(const struct FString& Key, bool* bValid, struct FFishingRewardItemDatabaseRow* RewardData, bool* bComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.GetRewardData");

	UBP_PF_InteractEventScript_FishingReward_C_GetRewardData_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (RewardData != nullptr)
		*RewardData = params.RewardData;
	if (bComplete != nullptr)
		*bComplete = params.bComplete;
}


// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PF_InteractEventScript_FishingReward_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.Main");

	UBP_PF_InteractEventScript_FishingReward_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.On Pre Begin Talk
// (BlueprintCallable, BlueprintEvent)

void UBP_PF_InteractEventScript_FishingReward_C::On_Pre_Begin_Talk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.On Pre Begin Talk");

	UBP_PF_InteractEventScript_FishingReward_C_On_Pre_Begin_Talk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.ExecuteUbergraph_BP_PF_InteractEventScript_FishingReward
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_FishingReward_C::ExecuteUbergraph_BP_PF_InteractEventScript_FishingReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.ExecuteUbergraph_BP_PF_InteractEventScript_FishingReward");

	UBP_PF_InteractEventScript_FishingReward_C_ExecuteUbergraph_BP_PF_InteractEventScript_FishingReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
