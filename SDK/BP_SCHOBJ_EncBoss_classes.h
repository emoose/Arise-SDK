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

// BlueprintGeneratedClass BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C
// 0x007F (0x02B0 - 0x0231)
class UBP_SCHOBJ_EncBoss_C : public UBP_SCHOBJ_BaseComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class ABP_EncountGroup_C*                          EncountGroup;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckedQuest;                                             // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	TArray<struct FString>                             QuestIdList;                                              // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FST_PFSC_QuestTargetData> TargetNumList;                                            // 0x0260(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C");
		return ptr;
	}


	struct FVector GetTargetLocation();
	void CheckEnmyNotEnough(const struct FST_PFSC_QuestTargetData& Param, bool* Result);
	void IsQuestEnemy(bool* Result);
	bool GetShortChatDatabase();
	void FindBossSymbol(class AActor** Actor);
	void FindRareSymbol(class AActor** Actor);
	class AActor* GetTarget();
	bool CanCheck();
	bool IsTarget();
	void ReceiveBeginPlay();
	void CheckQuest();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Update();
	void ExecuteUbergraph_BP_SCHOBJ_EncBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
