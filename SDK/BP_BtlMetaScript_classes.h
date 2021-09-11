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

// BlueprintGeneratedClass BP_BtlMetaScript.BP_BtlMetaScript_C
// 0x000C (0x0044 - 0x0038)
class UBP_BtlMetaScript_C : public UBtlMetaScript
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	float                                              BattleWinEndWaitTime;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlMetaScript.BP_BtlMetaScript_C");
		return ptr;
	}


	bool IsPlayingScenarioVoice();
	void RequestVoiceByCondition(EBtlVoiceCondition Condition);
	bool IsBattleLossCondition();
	bool IsBattleWinCondition();
	void Unregister_BattleWinCheck();
	void Register_BattleWinCheck();
	void OnWinCheck_DeadCharater(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void OnLossCheck_DeadCharater(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void Unregister_BattleLossCheck();
	void Register_BattleLossCheck();
	void RequestOpenHelpWindow(const struct FCollectionHelp_XmlDatabaseLabel& HelpLabel);
	void OnComplateHelpWindow(const struct FString& Label);
	void ExecuteUbergraph_BP_BtlMetaScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
