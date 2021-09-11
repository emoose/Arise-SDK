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

// BlueprintGeneratedClass BP_TreasurePointSaveData.BP_TreasurePointSaveData_C
// 0x0048 (0x0158 - 0x0110)
class UBP_TreasurePointSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FString                                     Label_Discover;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Label_Open;                                               // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDiscoverStateChanged;                                   // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenStateChanged;                                       // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasurePointSaveData.BP_TreasurePointSaveData_C");
		return ptr;
	}


	void GetOpenCount(int* Count);
	void BindOnOpenStateChanged(const struct FScriptDelegate& Event);
	void BindOnDiscoverStateChanged(const struct FScriptDelegate& Event);
	void GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array);
	void SetDiscover(const struct FPFTreasurePointItemID& ItemID, bool bValue);
	void FillDiscover(bool bDiscover);
	void IsChunkEnable(const struct FString& ChunkName, const struct FPFTreasurePointItemID& ItemID, bool* bEnable);
	void SetChunkEnable(const struct FString& ChunkName, const struct FPFTreasurePointItemID& ItemID, bool bEnable);
	void IsOpen(const struct FPFTreasurePointItemID& ItemID, bool* bEnable);
	void Open(const struct FPFTreasurePointItemID& ItemID);
	void IsDiscover(const struct FPFTreasurePointItemID& ItemID, bool* bEnable);
	void Discover(const struct FPFTreasurePointItemID& ItemID);
	void RegisterParameter();
	void ExecuteUbergraph_BP_TreasurePointSaveData(int EntryPoint);
	void OnOpenStateChanged__DelegateSignature(const struct FString& actorId);
	void OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
