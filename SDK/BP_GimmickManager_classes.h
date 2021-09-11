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

// BlueprintGeneratedClass BP_GimmickManager.BP_GimmickManager_C
// 0x0018 (0x03A0 - 0x0388)
class ABP_GimmickManager_C : public APFGimmickManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GimmickManager.BP_GimmickManager_C");
		return ptr;
	}


	void GetStreamData(const struct FString& actorId, struct FString* Current_Map_Name, struct FString* LoadMapName);
	void IsShowMap(bool Current, bool Next, const struct FString& actorId, bool* Result);
	void UserConstructionScript();
	void RegisterMapOrder(const struct FString& actorId, const struct FString& CurrentMapName, const struct FString& LoadMapName);
	void PreloadMap(const struct FString& actorId);
	void UnloadMap(const struct FString& actorId);
	void ShowMap(const struct FString& actorId);
	void HideMap(const struct FString& actorId);
	void ShowCurrentMap(const struct FString& actorId);
	void HideCurrentMap(const struct FString& actorId);
	void ReceiveBeginPlay();
	void OnMapChangeStart(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnShowMap(const struct FName& LevelName, bool bShow);
	void BPE_UnloadLevel(const struct FString& actorId);
	void ExecuteUbergraph_BP_GimmickManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
