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

// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.ChangeFishNameColor
struct UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_ChangeFishNameColor_Params
{
	bool                                               OpenColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.GetButtonLabel
struct UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_GetButtonLabel_Params
{
	struct FString                                     Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.SetButtonAction
struct UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_SetButtonAction_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.SetText
struct UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_SetText_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_FIS_LOC_STR.TO14_BPI_GUI_MNU_FIS_LOC_STR_C.ClearText
struct UTO14_BPI_GUI_MNU_FIS_LOC_STR_C_ClearText_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
