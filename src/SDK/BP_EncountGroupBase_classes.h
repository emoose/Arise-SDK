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

// BlueprintGeneratedClass BP_EncountGroupBase.BP_EncountGroupBase_C
// 0x0098 (0x04C0 - 0x0428)
class ABP_EncountGroupBase_C : public AEncountGroup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaComponent*                              PreloadArea;                                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaComponent*                              SpawnArea;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpawnRange;                                               // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FPFEncountSymbolGroupID                     ID;                                                       // 0x0458(0x0010) (Edit, BlueprintVisible)
	bool                                               bUnload;                                                  // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreload;                                                 // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBattle;                                                  // 0x046A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableEncount;                                          // 0x046B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FString                                     AutoSymbolName;                                           // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FEncoutSymbolInfo                           EncountSymolInfo;                                         // 0x0480(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_EncountManager_C*                        EncountManager;                                           // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAriseGameMode*                              AriseGameMode;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FPFEncountSymbolBattleID                    BtlMapID;                                                 // 0x04A8(0x0010) (Edit, BlueprintVisible)
	bool                                               bMapDontCare;                                             // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              SpawnHeight;                                              // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EncountGroupBase.BP_EncountGroupBase_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	struct FName GetBattleAssetUser(struct FString* AutoSymbolName, struct FString* MapName);
	void GetBtlMapName(struct FString* MapName);
	void SetEncountSymbolState();
	void SetEncountGroupNames();
	void DoEncountRequest(class AActor* Encount, bool* bEncountAccept);
	void GetIDName(struct FName* Name);
	void GetDistanceToPlayer(float* Distance);
	void BattleAssetPreload();
	void BattleAssetUnload(bool bForceUnload);
	void ChangeSymbolState(EEncountSymbolState NewState);
	void RegisterSymbol();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_EncountGroupBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
