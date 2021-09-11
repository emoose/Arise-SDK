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

// BlueprintGeneratedClass BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C
// 0x0038 (0x0148 - 0x0110)
class UBP_EncountSymbolSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FString                                     ChunkPostFix_Discover;                                    // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ChunkPostFix_Visible;                                     // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ChunkPostFix_Battle;                                      // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EncountSymbolSaveData.BP_EncountSymbolSaveData_C");
		return ptr;
	}


	void Battle_Enable(const struct FString& actorId, bool InEnable);
	void IsBattle(const struct FString& actorId, bool* Result);
	void Battle(const struct FString& actorId);
	void IsValid(const struct FString& actorId, bool* Result);
	void IsMapVisible(const struct FString& actorId, bool* Result);
	void MapVisible(const struct FString& actorId, bool Enable);
	void IsChunkEnable(const struct FString& InActorID, const struct FString& InChunkPostFix, bool* Result);
	void IsDiscover(const struct FString& actorId, bool* Result);
	void SetChunkEnable(const struct FString& InActorID, const struct FString& InChunkPostFix, bool InEnable);
	void Discover(const struct FString& actorId);
	void Register(const struct FString& InLevelName, int InNum);
	void RegisterParameter();
	void OnNewGame();
	void OnLoad();
	void ExecuteUbergraph_BP_EncountSymbolSaveData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
