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

// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetFastTravelID
struct UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_SetFastTravelID_Params
{
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetImagePath
struct UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_SetImagePath_Params
{
	struct FString                                     TextureFullPath;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetImageNo
struct UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_SetImageNo_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.Tick
struct UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_FAST_IMAGE
struct UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
