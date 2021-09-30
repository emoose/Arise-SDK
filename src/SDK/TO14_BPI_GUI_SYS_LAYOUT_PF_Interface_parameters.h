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

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.RestructTutorialKeyButtonIconAll
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_RestructTutorialKeyButtonIconAll_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.CallIsPFHelpUIOpenCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_CallIsPFHelpUIOpenCheck_Params
{
	bool                                               OutIsOpen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.AbortShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_AbortShortChat_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ClearShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ClearShortChat_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.IsShowCPAction
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_IsShowCPAction_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.IsShowPFUIHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_IsShowPFUIHelp_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.IsShowLongChatInfo
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_IsShowLongChatInfo_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.IsShowNextMapName
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_IsShowNextMapName_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.IsShowInfoOptionCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_IsShowInfoOptionCheck_Params
{
	EOption                                            Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.IsPlayableHelpButtonShow
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_IsPlayableHelpButtonShow_Params
{
	bool                                               IsShow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.GetShownPlayableHelpLabel
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_GetShownPlayableHelpLabel_Params
{
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ShowSubQuest
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ShowSubQuest_Params
{
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               OldName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.HideKeyHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_HideKeyHelp_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ShowKeyHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ShowKeyHelp_Params
{
	TEnumAsByte<EKeyHelpMode>                          Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.HidePlayableHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_HidePlayableHelp_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ShowPlayableHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ShowPlayableHelp_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsShowButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CachedLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.CloseShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_CloseShortChat_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.PlayShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_PlayShortChat_Params
{
	EAriseCharaIconID                                  CharaIconID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ShowLocation
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ShowLocation_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.HideActInfo
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_HideActInfo_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ShowActInfo
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ShowActInfo_Params
{
	struct FModifiedText                               Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ButtonLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCPPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.HideNextMapName
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_HideNextMapName_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ShowNextMapName
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ShowNextMapName_Params
{
	struct FModifiedText                               MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C.ShowMainQuest
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C_ShowMainQuest_Params
{
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               OldName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
