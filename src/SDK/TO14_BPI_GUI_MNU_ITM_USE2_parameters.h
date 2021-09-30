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

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetForceSelect
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_SetForceSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.IsBarAnimationPlaying
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_IsBarAnimationPlaying_Params
{
	bool                                               Play;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetBattleArts
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_SetBattleArts_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.UpdateText
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_UpdateText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetUseArts
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_SetUseArts_Params
{
	EArisePartyID                                      UseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.AllSelect
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_AllSelect_Params
{
	bool                                               Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.PlayHPAnimation
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_PlayHPAnimation_Params
{
	int                                                PlayIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.repeat
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_repeat_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetUseItem
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_SetUseItem_Params
{
	int                                                ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.PadWork
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetCharacterList
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_SetCharacterList_Params
{
	TArray<int>                                        CharacterList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               BattleMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.CB_MouseMove
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_CB_MouseMove_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_CB_MouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.DataConstruct
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_DataConstruct_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2
struct UTO14_BPI_GUI_MNU_ITM_USE2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
