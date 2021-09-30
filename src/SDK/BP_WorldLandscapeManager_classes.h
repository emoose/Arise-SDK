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

// BlueprintGeneratedClass BP_WorldLandscapeManager.BP_WorldLandscapeManager_C
// 0x0020 (0x0348 - 0x0328)
class ABP_WorldLandscapeManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              LandscapeList;                                            // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldLandscapeManager.BP_WorldLandscapeManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMenuOpened();
	void OnMenuClosed();
	void SetLandscapeTickEnabled(bool Enabled);
	void ReceiveBeginPlay();
	void OnSceneChanged(unsigned char ChangedScene, unsigned char OldScene);
	void OnMapChanged(const struct FString& OldMapName, const struct FString& NewMapName);
	void ExecuteUbergraph_BP_WorldLandscapeManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
