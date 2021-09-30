
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

// Function BP_MiningSaveData.BP_MiningSaveData_C.AcquiredMiningData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MiningSaveData_C::AcquiredMiningData(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiningSaveData.BP_MiningSaveData_C.AcquiredMiningData");

	UBP_MiningSaveData_C_AcquiredMiningData_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiningSaveData.BP_MiningSaveData_C.GetMiningData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FPFMiningPointItemID    ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAriseMiningPointSaveInfo MiningPointInfo                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MiningSaveData_C::GetMiningData(const struct FString& actorId, const struct FPFMiningPointItemID& ItemID, struct FAriseMiningPointSaveInfo* MiningPointInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiningSaveData.BP_MiningSaveData_C.GetMiningData");

	UBP_MiningSaveData_C_GetMiningData_Params params;
	params.actorId = actorId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiningPointInfo != nullptr)
		*MiningPointInfo = params.MiningPointInfo;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
