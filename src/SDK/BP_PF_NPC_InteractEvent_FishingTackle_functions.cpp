
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

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchNextReward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFishingRewardItemDatabaseRow RewardData                     (Parm, OutParm)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::SearchNextReward(bool* bFound, struct FFishingRewardItemDatabaseRow* RewardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchNextReward");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_SearchNextReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (RewardData != nullptr)
		*RewardData = params.RewardData;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SetRewardAcquired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::SetRewardAcquired(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SetRewardAcquired");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_SetRewardAcquired_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.GetRewardAcquired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAcquired                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::GetRewardAcquired(int ID, bool* bAcquired)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.GetRewardAcquired");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_GetRewardAcquired_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAcquired != nullptr)
		*bAcquired = params.bAcquired;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckRewardCond
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishingRewardItemDatabaseRow FishingRewardItemDatabaseRow   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bIsGet                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::CheckRewardCond(const struct FFishingRewardItemDatabaseRow& FishingRewardItemDatabaseRow, bool* bIsGet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckRewardCond");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_CheckRewardCond_Params params;
	params.FishingRewardItemDatabaseRow = FishingRewardItemDatabaseRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsGet != nullptr)
		*bIsGet = params.bIsGet;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckFishBigCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdate                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::CheckFishBigCount(int Count, bool* bUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckFishBigCount");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_CheckFishBigCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUpdate != nullptr)
		*bUpdate = params.bUpdate;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckFishTypeCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdate                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::CheckFishTypeCount(int Count, bool* bUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckFishTypeCount");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_CheckFishTypeCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUpdate != nullptr)
		*bUpdate = params.bUpdate;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchTips
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFishingRewardItemTipsData> Tips                           (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::SearchTips(TArray<struct FFishingRewardItemTipsData>* Tips)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchTips");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_SearchTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tips != nullptr)
		*Tips = params.Tips;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchAcquireReward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFishingRewardItemDatabaseRow RewardData                     (Parm, OutParm)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::SearchAcquireReward(bool* bFound, struct FFishingRewardItemDatabaseRow* RewardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchAcquireReward");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_SearchAcquireReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (RewardData != nullptr)
		*RewardData = params.RewardData;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.UserConstructionScript");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.MainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::MainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.MainInteract");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_MainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.ReceiveDestroyed");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_FishingTackle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_FishingTackle_C::ExecuteUbergraph_BP_PF_NPC_InteractEvent_FishingTackle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_FishingTackle");

	ABP_PF_NPC_InteractEvent_FishingTackle_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_FishingTackle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
