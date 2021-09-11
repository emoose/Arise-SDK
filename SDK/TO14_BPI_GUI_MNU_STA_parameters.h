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

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_STA_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.Exit
struct UTO14_BPI_GUI_MNU_STA_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.Init
struct UTO14_BPI_GUI_MNU_STA_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.ReadWait
struct UTO14_BPI_GUI_MNU_STA_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.Exec
struct UTO14_BPI_GUI_MNU_STA_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.GetNextScene
struct UTO14_BPI_GUI_MNU_STA_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.Finish
struct UTO14_BPI_GUI_MNU_STA_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.SetViewModelMode
struct UTO14_BPI_GUI_MNU_STA_C_SetViewModelMode_Params
{
	bool                                               ModelMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.SetViewType
struct UTO14_BPI_GUI_MNU_STA_C_SetViewType_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.ModelPadWork
struct UTO14_BPI_GUI_MNU_STA_C_ModelPadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.UpdateGuide
struct UTO14_BPI_GUI_MNU_STA_C_UpdateGuide_Params
{
	int                                                PAGE;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Zoom;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.SetTitleData
struct UTO14_BPI_GUI_MNU_STA_C_SetTitleData_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.AliasListWork
struct UTO14_BPI_GUI_MNU_STA_C_AliasListWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_STA_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.OnViewClose
struct UTO14_BPI_GUI_MNU_STA_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_STA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.CloseAnimation
struct UTO14_BPI_GUI_MNU_STA_C_CloseAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_STA.TO14_BPI_GUI_MNU_STA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_STA
struct UTO14_BPI_GUI_MNU_STA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_STA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
