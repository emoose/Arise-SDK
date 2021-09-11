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

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.SetAbnormalIcon
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_SetAbnormalIcon_Params
{
	int                                                StartIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.CheckFlameArts
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_CheckFlameArts_Params
{
	bool                                               ok;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.MakeArtsText
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_MakeArtsText_Params
{
	struct FDictionaryText                             BaseName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDictionaryText                             Ruby;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               ArtsText;                                                 // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.SetArtsLabel
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_SetArtsLabel_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.Construct
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.Initialize
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_DET_000
struct UTO14_BPI_GUI_MNU_MAS_DET_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_DET_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
