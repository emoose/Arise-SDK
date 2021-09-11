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

// BlueprintGeneratedClass BP_FishingSaveData.BP_FishingSaveData_C
// 0x0068 (0x0178 - 0x0110)
class UBP_FishingSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	int                                                FISH_COUNT_MAX;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FISH_TYPE_MAX;                                            // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FISH_ITEM_MAX;                                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FString                                     CHUNK_NAME_FishCount;                                     // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CHUNK_NAME_FishSize;                                      // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CHUNK_NAME_FishingItem;                                   // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CHUNK_NAME_FishReward;                                    // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LEGEND_FISH_NAME;                                         // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FishingSaveData.BP_FishingSaveData_C");
		return ptr;
	}


	void CheckEXNewGameInheritFlag(class UAriseScriptSaveDataChunk* ChunkData, bool* Result);
	void GetFishTypeNum(int* Nums);
	void SetFishingItem(int ID, int ItemID);
	void GetFishingItem(int ID, int* ItemID);
	void GetCatchedFishCount(int InIndex, int* outCount);
	void GetFishRewardGetFlag(int ID, bool* bFlag);
	void SetFishRewardGetFlag(int ID, bool bFlag);
	void GetBigRecordFishTypeCount(int* outTypeCount, int* EpicTypeCount, bool* bLegendCatch);
	void GetCatchedFishTypeCount(int* outTypeCount);
	void GetFishSizeChunk(class UAriseScriptSaveDataChunk_INT32** Chunk);
	void GetFishCountChunk(class UAriseScriptSaveDataChunk_INT32** Chunk);
	void SaveFishingRecord(int FishId, int Size, bool* SizeRecordUpdate);
	void RegisterParameter();
	void OnNewGame();
	void ExecuteUbergraph_BP_FishingSaveData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
