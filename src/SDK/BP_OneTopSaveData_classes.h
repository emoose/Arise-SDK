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

// BlueprintGeneratedClass BP_OneTopSaveData.BP_OneTopSaveData_C
// 0x0018 (0x0128 - 0x0110)
class UBP_OneTopSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FString                                     Label_AlreadyRead;                                        // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OneTopSaveData.BP_OneTopSaveData_C");
		return ptr;
	}


	void SetAlreadyRead(const struct FPFOneTopRecord& Record, bool Value);
	void IsChunkEnable(const struct FString& ChunkName, const struct FPFOneTopRecord& Record, bool* bEnable);
	void SetChunkEnable(const struct FString& ChunkName, const struct FPFOneTopRecord& Record, bool bEnable);
	void IsAlreadyRead(const struct FPFOneTopRecord& Record, bool* bEnable);
	void AlreadyRead(const struct FPFOneTopRecord& Record);
	void RegisterParameter();
	void ExecuteUbergraph_BP_OneTopSaveData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
