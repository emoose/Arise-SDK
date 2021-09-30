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

// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.IsClosed
struct UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_IsClosed_Params
{
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.Tick
struct UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.OpenFirst
struct UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_OpenFirst_Params
{
	struct FString                                     TutorialLabel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.OpenMulti
struct UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_OpenMulti_Params
{
	TArray<struct FString>                             TutorialLabelList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.ExecuteUbergraph_TO14_BP_GUI_MNU_TUTORIAL_OVERLAY
struct UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_ExecuteUbergraph_TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
