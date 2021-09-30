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

// Function TO14_BPI_GUI_MNU_AFT_INFO_001.TO14_BPI_GUI_MNU_AFT_INFO_001_C.SetEffectInfo
struct UTO14_BPI_GUI_MNU_AFT_INFO_001_C_SetEffectInfo_Params
{
	struct FString                                     EffectID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_AFT_INFO_001.TO14_BPI_GUI_MNU_AFT_INFO_001_C.Init
struct UTO14_BPI_GUI_MNU_AFT_INFO_001_C_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_INFO_001.TO14_BPI_GUI_MNU_AFT_INFO_001_C.SetInfo
struct UTO14_BPI_GUI_MNU_AFT_INFO_001_C_SetInfo_Params
{
	struct FArtifactData                               ArtifactData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PartsComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExParts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_INFO_001.TO14_BPI_GUI_MNU_AFT_INFO_001_C.Construct
struct UTO14_BPI_GUI_MNU_AFT_INFO_001_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_INFO_001.TO14_BPI_GUI_MNU_AFT_INFO_001_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_INFO_001
struct UTO14_BPI_GUI_MNU_AFT_INFO_001_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_INFO_001_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
