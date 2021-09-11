#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenBreakTextAtTargetCursor
struct UBP_BattleHudHelper_C_BattleOpenBreakTextAtTargetCursor_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenBreakText
struct UBP_BattleHudHelper_C_BattleOpenBreakText_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.SetBattleWorldPositionImplementation
struct UBP_BattleHudHelper_C_SetBattleWorldPositionImplementation_Params
{
	class UWidget*                                     UserWiget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bIsClampScreen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScreenInRange;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleSuccessTutorial
struct UBP_BattleHudHelper_C_BattleSuccessTutorial_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleBeginTutorial
struct UBP_BattleHudHelper_C_BattleBeginTutorial_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleBeginSpecialStrikeUI
struct UBP_BattleHudHelper_C_BattleBeginSpecialStrikeUI_Params
{
	class ABtlCharacterBase*                           TargetUnit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      VisiableCharacterID;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleChangeCharacterTopPrev
struct UBP_BattleHudHelper_C_BattleChangeCharacterTopPrev_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleChangeCharacterTopNext
struct UBP_BattleHudHelper_C_BattleChangeCharacterTopNext_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenPlayableHelp(Xml)
struct UBP_BattleHudHelper_C_BattleOpenPlayableHelp_Xml__Params
{
	struct FCollectionHelp_XmlDatabaseLabel            HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleTutorialCountUpdate
struct UBP_BattleHudHelper_C_BattleTutorialCountUpdate_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CountMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleClosePlayableHelp
struct UBP_BattleHudHelper_C_BattleClosePlayableHelp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.BattleOpenPlayableHelp
struct UBP_BattleHudHelper_C_BattleOpenPlayableHelp_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleHudHelper.BP_BattleHudHelper_C.GetHudVisible
struct UBP_BattleHudHelper_C_GetHudVisible_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTR_BtlHudVisible                          Result;                                                   // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
