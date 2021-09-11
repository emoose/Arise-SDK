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

// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetText_Dictionary
struct UTO14_BPI_GUI_MNU_CNF_DET_C_SetText_Dictionary_Params
{
	struct FDictionaryText                             InTitleText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDictionaryText                             InInformationText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetText_Name
struct UTO14_BPI_GUI_MNU_CNF_DET_C_SetText_Name_Params
{
	struct FName                                       InTitleName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InInformationText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetInfomationText
struct UTO14_BPI_GUI_MNU_CNF_DET_C_SetInfomationText_Params
{
	struct FName                                       InTextName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetTitleName
struct UTO14_BPI_GUI_MNU_CNF_DET_C_SetTitleName_Params
{
	struct FName                                       InTextName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
