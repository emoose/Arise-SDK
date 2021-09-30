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

// BlueprintGeneratedClass BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C
// 0x0018 (0x0128 - 0x0110)
class UBP_RecoveryPointSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FString                                     Label_TimeStamp;                                          // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C");
		return ptr;
	}


	void ResetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId);
	void ResetRepopTime(const struct FString& actorId);
	void FillUnused();
	void GetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int* Time, EPFSearchPointStatus* Status);
	void SetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int Value);
	void GetUsed(const struct FString& actorId, bool* bUsed, int* Time);
	void SetUse(const struct FString& actorId, int Time);
	void RegisterParameter();
	void ExecuteUbergraph_BP_RecoveryPointSaveData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
