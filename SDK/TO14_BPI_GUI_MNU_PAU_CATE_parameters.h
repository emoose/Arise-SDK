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

// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.CB_MouseRequest
struct UTO14_BPI_GUI_MNU_PAU_CATE_C_CB_MouseRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.PadWork
struct UTO14_BPI_GUI_MNU_PAU_CATE_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChanged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.Initialize
struct UTO14_BPI_GUI_MNU_PAU_CATE_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.SetActiveIndex
struct UTO14_BPI_GUI_MNU_PAU_CATE_C_SetActiveIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE.TO14_BPI_GUI_MNU_PAU_CATE_C.SetTextData
struct UTO14_BPI_GUI_MNU_PAU_CATE_C_SetTextData_Params
{
	struct FModifiedText                               LeftText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               RightText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     LeftButtonLabel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     RightButtonLabel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
