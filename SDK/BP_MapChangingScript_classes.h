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

// BlueprintGeneratedClass BP_MapChangingScript.BP_MapChangingScript_C
// 0x005C (0x0384 - 0x0328)
class ABP_MapChangingScript_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AreaName;                                                 // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMapLinkDatabase*                            MaplinkDB;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     MapOutSE;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MapInSE;                                                  // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DOOR_OPEN_MOTION_DELAY;                                   // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapChangingScript.BP_MapChangingScript_C");
		return ptr;
	}


	void TrimAreaName(const struct FString& iAreaName, struct FString* oAreaName);
	void PlaySE(const struct FString& SELabel);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMapChange(const struct FString& OldMapName, const struct FString& NewMapName);
	void PlayMapOutSE();
	void ExecuteUbergraph_BP_MapChangingScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
