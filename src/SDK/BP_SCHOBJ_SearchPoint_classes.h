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

// BlueprintGeneratedClass BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C
// 0x006F (0x02A0 - 0x0231)
class UBP_SCHOBJ_SearchPoint_C : public UBP_SCHOBJ_BaseComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class ABP_PF_MAPOBJ_SearchPoint_C*                 SearchPoint;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckedQuest;                                             // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	TMap<struct FString, struct FST_PFSC_QuestTargetData> TargetNumList;                                            // 0x0250(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C");
		return ptr;
	}


	void CheckItemNotEnough(const struct FST_PFSC_QuestTargetData& Param, bool* Result);
	void IsQuestItem(bool* Result);
	bool GetShortChatDatabase();
	bool CanCheck();
	class AActor* GetTarget();
	bool IsTarget();
	void ReceiveBeginPlay();
	void CheckQuest();
	void ExecuteUbergraph_BP_SCHOBJ_SearchPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
