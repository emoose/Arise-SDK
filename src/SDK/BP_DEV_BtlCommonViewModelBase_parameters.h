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

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevBattleChangeCharacterTopPrev
struct UBP_DEV_BtlCommonViewModelBase_C_DevBattleChangeCharacterTopPrev_Params
{
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevBattleChangeCharacterTopNext
struct UBP_DEV_BtlCommonViewModelBase_C_DevBattleChangeCharacterTopNext_Params
{
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevGetBackMember
struct UBP_DEV_BtlCommonViewModelBase_C_DevGetBackMember_Params
{
	TArray<class UBtlStatusViewModelBase*>             Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevGetFrontMember
struct UBP_DEV_BtlCommonViewModelBase_C_DevGetFrontMember_Params
{
	bool                                               IsIgnorePlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBtlStatusViewModelBase*>             Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnOpenBreakTextRaw__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnOpenBreakTextRaw__DelegateSignature_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerPrePhase__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuChangePlayerPrePhase__DelegateSignature_Params
{
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuEnd__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuEnd__DelegateSignature_Params
{
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuStart__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuStart__DelegateSignature_Params
{
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerPrev__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuChangePlayerPrev__DelegateSignature_Params
{
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnBattleMenuChangePlayerNext__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnBattleMenuChangePlayerNext__DelegateSignature_Params
{
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnChangeTutorialCount__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnChangeTutorialCount__DelegateSignature_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CountMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnInspirationArts__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnInspirationArts__DelegateSignature_Params
{
	struct FBtlArts_XmlDatatableLabel                  ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnNotUseArtsForTp__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnNotUseArtsForTp__DelegateSignature_Params
{
	int                                                ArtsIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnSwitchStrikeSwap__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnSwitchStrikeSwap__DelegateSignature_Params
{
	bool                                               bIsSwap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DEV_BtlCommonViewModelBase.BP_DEV_BtlCommonViewModelBase_C.DevOnChangeVisiblePreset__DelegateSignature
struct UBP_DEV_BtlCommonViewModelBase_C_DevOnChangeVisiblePreset__DelegateSignature_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
