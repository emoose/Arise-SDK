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

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetAbnormalIcon
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetAbnormalIcon_Params
{
	int                                                StartIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.Refresh
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetMaterial
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetMaterial_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.GetData
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_GetData_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_TIT2_SKL_EXP_DATA                       Data;                                                     // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_PRE_LEARN
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_PRE_LEARN_Params
{
	struct FAliasDataString                            Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               CompBonusText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_ICON
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_IMG_ICON_Params
{
	int                                                IconNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetCharaID
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetCharaID_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_TYPE1
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_TYPE1_Params
{
	struct FDictionaryText                             Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_TYPE2
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_TYPE2_Params
{
	EArisePartyID                                      CharaID;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_TYPE
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_IMG_TYPE_Params
{
	struct FName                                       ArtsLabel;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_ELEM
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_IMG_ELEM_Params
{
	TArray<EBtlElementType>                            Elements;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_AEV
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_AEV_Params
{
	int                                                AEV;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_SP
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_SP_Params
{
	int                                                SP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetRisePoint
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetRisePoint_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_Params
{
	struct FBtlSkillData                               SkillData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_DISABLE
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_DISABLE_Params
{
	struct FAliasDataString                            Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bScenarioOK;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_ENABLE
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_ENABLE_Params
{
	struct FAliasDataString                            Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bScenarioOK;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_LEARN
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_LEARN_Params
{
	struct FAliasDataString                            Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               CompBonusText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_COMP
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_COMP_Params
{
	struct FAliasDataString                            Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               CompBonusText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_Params
{
	int                                                Alias_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_Params
{
	int                                                Alias_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestSkillShow
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_CustomEvent_RequestSkillShow_Params
{
	int                                                Alias_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestHide
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_CustomEvent_RequestHide_Params
{
	int                                                Alias_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestAliasShow
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_CustomEvent_RequestAliasShow_Params
{
	int                                                Alias_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.Construct
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_EXP
struct UTO14_BPI_GUI_MNU_TIT2_EXP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_EXP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
