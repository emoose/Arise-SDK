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

// BlueprintGeneratedClass BP_CampPointSaveData.BP_CampPointSaveData_C
// 0x0028 (0x0138 - 0x0110)
class UBP_CampPointSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FString                                     Label_Discover;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDiscoverStateChanged;                                   // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CampPointSaveData.BP_CampPointSaveData_C");
		return ptr;
	}


	void BindOnDiscoverStateChanged(const struct FScriptDelegate& Event);
	void GetDiscoverCount(int* Count);
	void GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array);
	void SetDiscover(const struct FString& actorId, bool Value);
	void FillDiscover(bool bDiscover);
	void IsChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool* bEnable);
	void SetChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool bEnable);
	void IsDiscover(const struct FString& actorId, bool* bEnable);
	void Discover(const struct FString& actorId);
	void RegisterParameter();
	void ExecuteUbergraph_BP_CampPointSaveData(int EntryPoint);
	void OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
