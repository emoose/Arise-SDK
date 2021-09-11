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

// BlueprintGeneratedClass BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C
// 0x0051 (0x0389 - 0x0338)
class ABP_DebugBtlMapGameScript_C : public ABP_GameScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	struct FString                                     GameStartMapName;                                         // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SpawnBegin;                                               // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<class ATargetPoint*>                        EncountPoint;                                             // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int                                                EncountIndex;                                             // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              AgingMoveSpeed;                                           // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               AgingMode;                                                // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	int                                                BattleCount;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UUMG_DebugAgingHUD_C*                        Agine;                                                    // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DevelopCheck;                                             // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C");
		return ptr;
	}


	void @InitializeEncount(const struct FString& NewMap, const struct FString& OldMap);
	void ApplyBattleWorldSettings(class AAriseWorldSettings* AriseWorldSettings);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnBeginBattle();
	void OnEndBattle();
	void BattleEnd(unsigned char PrevScene);
	void ExecuteUbergraph_BP_DebugBtlMapGameScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
