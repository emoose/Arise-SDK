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

// BlueprintGeneratedClass BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C
// 0x0018 (0x0128 - 0x0110)
class UBP_QuestEnemyCountSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FString                                     Label_Count;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C");
		return ptr;
	}


	void SetCount(const struct FString& Label, int Count, bool* bValid);
	void GetChunkCount(const struct FString& ChunkName, const struct FString& Label, int* Count, bool* bValid);
	void SetChunkCount(const struct FString& ChunkName, const struct FString& Label, int Count, bool* bValid);
	void GetCount(const struct FString& Label, int* Count, bool* bValid);
	void RegisterParameter();
	void ExecuteUbergraph_BP_QuestEnemyCountSaveData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
