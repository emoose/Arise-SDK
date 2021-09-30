#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MiningSaveData.BP_MiningSaveData_C
// 0x0000 (0x0068 - 0x0068)
class UBP_MiningSaveData_C : public UAriseMiningSaveData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiningSaveData.BP_MiningSaveData_C");
		return ptr;
	}


	bool AcquiredMiningData(const struct FString& actorId);
	bool GetMiningData(const struct FString& actorId, const struct FPFMiningPointItemID& ItemID, struct FAriseMiningPointSaveInfo* MiningPointInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
