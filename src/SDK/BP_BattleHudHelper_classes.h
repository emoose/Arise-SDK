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

// BlueprintGeneratedClass BP_BattleHudHelper.BP_BattleHudHelper_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BattleHudHelper_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleHudHelper.BP_BattleHudHelper_C");
		return ptr;
	}


	void STATIC_BattleOpenBreakTextAtTargetCursor(class ABtlCharacterBase* Unit, class UObject* __WorldContext);
	void STATIC_BattleOpenBreakText(const struct FVector& Location, class UObject* __WorldContext);
	void STATIC_SetBattleWorldPositionImplementation(class UWidget* UserWiget, const struct FVector& Position, bool bIsClampScreen, class UObject* __WorldContext, bool* bScreenInRange);
	void STATIC_BattleSuccessTutorial(class UObject* __WorldContext);
	void STATIC_BattleBeginTutorial(class UObject* __WorldContext);
	void STATIC_BattleBeginSpecialStrikeUI(class ABtlCharacterBase* TargetUnit, EArisePartyID VisiableCharacterID, float Timer, class UObject* __WorldContext);
	void STATIC_BattleChangeCharacterTopPrev(class UObject* __WorldContext);
	void STATIC_BattleChangeCharacterTopNext(class UObject* __WorldContext);
	void STATIC_BattleOpenPlayableHelp_Xml_(const struct FCollectionHelp_XmlDatabaseLabel& HelpLabel, class UObject* __WorldContext);
	void STATIC_BattleTutorialCountUpdate(int Count, int CountMax, class UObject* __WorldContext);
	void STATIC_BattleClosePlayableHelp(class UObject* __WorldContext);
	void STATIC_BattleOpenPlayableHelp(const struct FString& HelpLabel, class UObject* __WorldContext);
	void STATIC_GetHudVisible(const struct FName& RowName, class UObject* __WorldContext, struct FSTR_BtlHudVisible* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
