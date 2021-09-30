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

// BlueprintGeneratedClass BP_PF_SCHTimer.BP_PF_SCHTimer_C
// 0x0048 (0x00E8 - 0x00A0)
class UBP_PF_SCHTimer_C : public UShortChatTimerTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class AAriseGameMode*                              GameMode;                                                 // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FShortChatConditionData                     LowHPCondition;                                           // 0x00B0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_SCHTimer.BP_PF_SCHTimer_C");
		return ptr;
	}


	bool K2_FinalCheck(const struct FShortChatConditionData& Condition);
	void CollectConditionList();
	void Bind();
	void Unbind();
	void OnMapChange(const struct FString& OldMapName, const struct FString& NewMapName);
	void OnEndBattleScene(const struct FBtlResultInfo& ResultInfo);
	void K2_Initialize();
	void K2_Terminate();
	void ExecuteUbergraph_BP_PF_SCHTimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
