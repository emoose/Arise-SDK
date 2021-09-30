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

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.MaxLevelMode
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_MaxLevelMode_Params
{
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyAndAnimationHp
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ApplyAndAnimationHp_Params
{
	int                                                InWorkRecoveryHp;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.CalcDiffExpValue
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_CalcDiffExpValue_Params
{
	EArisePartyID                                      InPartyID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InExp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextDiffExp;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DiffExp;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetParameter_PcStatus
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SetParameter_PcStatus_Params
{
	struct FArisePlayerStatus                          PCStatus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetPercent
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SetPercent_Params
{
	float                                              InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetParameter
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SetParameter_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RPNum;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HPMax;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SkipLevelup
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SkipLevelup_Params
{
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyAndAnimation
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ApplyAndAnimation_Params
{
	int                                                InWorkTotalExp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.LevelUp
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_LevelUp_Params
{
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Initilize
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Initilize_Params
{
	EArisePartyID                                      NewPartyId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BattlePrevLv;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BattlePrevExp;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GiveExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RPNum;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HPMax;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecoveryHp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Construct
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Construct_Params
{
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.OnGaugeAnimationFinish_Event
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_OnGaugeAnimationFinish_Event_Params
{
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Destruct
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyPercent
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ApplyPercent_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Tick
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.PreConstruct
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.PlayStartAnim
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_PlayStartAnim_Params
{
	bool                                               bWorkExpAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorkHpAnim;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_RESULT_EXP_PANEL
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.OnLevelupAnimationFinish__DelegateSignature
struct UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_OnLevelupAnimationFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
