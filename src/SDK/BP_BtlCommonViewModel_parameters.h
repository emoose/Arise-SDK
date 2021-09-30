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

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.CheckCrisis
struct UBP_BtlCommonViewModel_C_CheckCrisis_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.IsPlayingTutorialSuccessAnimation
struct UBP_BtlCommonViewModel_C_IsPlayingTutorialSuccessAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.BattleChangeCharacterTopNext
struct UBP_BtlCommonViewModel_C_BattleChangeCharacterTopNext_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.BattleChangeCharacterTopPrev
struct UBP_BtlCommonViewModel_C_BattleChangeCharacterTopPrev_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.GetItemIntervalRate
struct UBP_BtlCommonViewModel_C_GetItemIntervalRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.GetEscapeRate
struct UBP_BtlCommonViewModel_C_GetEscapeRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.GetBoss
struct UBP_BtlCommonViewModel_C_GetBoss_Params
{
	TArray<class UBtlStatusViewModelBase*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.GetMaxTp
struct UBP_BtlCommonViewModel_C_GetMaxTp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.GetTp
struct UBP_BtlCommonViewModel_C_GetTp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.GetPlayer
struct UBP_BtlCommonViewModel_C_GetPlayer_Params
{
	class UBtlStatusViewModelBase*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.GetTarget
struct UBP_BtlCommonViewModel_C_GetTarget_Params
{
	class UBtlStatusViewModelBase*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.OnSuccessEscape
struct UBP_BtlCommonViewModel_C_OnSuccessEscape_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnCancelEspace
struct UBP_BtlCommonViewModel_C_EventOnCancelEspace_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.OnReusableItem
struct UBP_BtlCommonViewModel_C_OnReusableItem_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.OnUseItem
struct UBP_BtlCommonViewModel_C_OnUseItem_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.Dev_2_OnInspiration_Arts
struct UBP_BtlCommonViewModel_C_Dev_2_OnInspiration_Arts_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Arts;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InspirationArts;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.OnChangeOperatoionCharacter
struct UBP_BtlCommonViewModel_C_OnChangeOperatoionCharacter_Params
{
	class ABtlCharacterBase*                           PrevOperationUnit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NowOperationUnit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnBeginEspace
struct UBP_BtlCommonViewModel_C_EventOnBeginEspace_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.OnChangePCOrder
struct UBP_BtlCommonViewModel_C_OnChangePCOrder_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.DevBattleChangeCharacterTopNext
struct UBP_BtlCommonViewModel_C_DevBattleChangeCharacterTopNext_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.DevBattleChangeCharacterTopPrev
struct UBP_BtlCommonViewModel_C_DevBattleChangeCharacterTopPrev_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnChangeTp
struct UBP_BtlCommonViewModel_C_EventOnChangeTp_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnBeginTutorial
struct UBP_BtlCommonViewModel_C_EventOnBeginTutorial_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnSuccessTutorial
struct UBP_BtlCommonViewModel_C_EventOnSuccessTutorial_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.Fainalize
struct UBP_BtlCommonViewModel_C_Fainalize_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnFinihsedTutorialStartAnimation
struct UBP_BtlCommonViewModel_C_EventOnFinihsedTutorialStartAnimation_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnStartedTutorialTextAnimation
struct UBP_BtlCommonViewModel_C_EventOnStartedTutorialTextAnimation_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnFinihsedSuccessAnimation
struct UBP_BtlCommonViewModel_C_EventOnFinihsedSuccessAnimation_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnBeginArtsMystic
struct UBP_BtlCommonViewModel_C_EventOnBeginArtsMystic_Params
{
	struct FBtlMysticBeginParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.Initialize
struct UBP_BtlCommonViewModel_C_Initialize_Params
{
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.EventOnBeginArtsSpecialStrike
struct UBP_BtlCommonViewModel_C_EventOnBeginArtsSpecialStrike_Params
{
	struct FBtlSpecialStrikeBeginParam                 Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCommonViewModel.BP_BtlCommonViewModel_C.ExecuteUbergraph_BP_BtlCommonViewModel
struct UBP_BtlCommonViewModel_C_ExecuteUbergraph_BP_BtlCommonViewModel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
