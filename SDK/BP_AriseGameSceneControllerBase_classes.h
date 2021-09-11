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

// BlueprintGeneratedClass BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C
// 0x0028 (0x0070 - 0x0048)
class UBP_AriseGameSceneControllerBase_C : public UGameSceneController
{
public:
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               SceneLevelNames;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             SceneLevelPaths;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C");
		return ptr;
	}


	void DebugPrintSceneState(bool bPrint, const struct FString& Header);
	void UnloadThisSceneStreamLevels();
	void LoadThisSceneStreamLevels();
	void AddThisSceneStreamLevels(EAriseGameScene SceneID);
	void GetAriseGameMode();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
