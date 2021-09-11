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

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetMouseEnable
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetMouseEnable_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.IsBarAnimationPlaying
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_IsBarAnimationPlaying_Params
{
	bool                                               Play;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ResetHPGauge
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_ResetHPGauge_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetPreviewHealArts
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetPreviewHealArts_Params
{
	EArisePartyID                                      UseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.TextUpdate
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_TextUpdate_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.PlayUseAnimation
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_PlayUseAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetPreviewItemID
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetPreviewItemID_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ReleaseImage
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_ReleaseImage_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UpdateHP
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UpdateHP_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetCharacterID
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetCharacterID_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BattleSubMember;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetActive
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetViewType
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetViewType_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UseHPWork
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UseHPWork_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_STR
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UseChange__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UseChange__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UsableCheck__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UsableCheck__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
