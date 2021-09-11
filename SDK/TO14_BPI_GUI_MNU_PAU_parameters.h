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

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_PAU_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Exit
struct UTO14_BPI_GUI_MNU_PAU_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Init
struct UTO14_BPI_GUI_MNU_PAU_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ReadWait
struct UTO14_BPI_GUI_MNU_PAU_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Exec
struct UTO14_BPI_GUI_MNU_PAU_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.GetNextScene
struct UTO14_BPI_GUI_MNU_PAU_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Finish
struct UTO14_BPI_GUI_MNU_PAU_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.CreatePadImage
struct UTO14_BPI_GUI_MNU_PAU_C_CreatePadImage_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.CloseRequest
struct UTO14_BPI_GUI_MNU_PAU_C_CloseRequest_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.GetPauseOpenType
struct UTO14_BPI_GUI_MNU_PAU_C_GetPauseOpenType_Params
{
	TEnumAsByte<EPauseMenuOpenType>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.PadImageLoadCallback
struct UTO14_BPI_GUI_MNU_PAU_C_PadImageLoadCallback_Params
{
	class UObject*                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.PadCheck
struct UTO14_BPI_GUI_MNU_PAU_C_PadCheck_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ShowPadImage
struct UTO14_BPI_GUI_MNU_PAU_C_ShowPadImage_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ExitCheck
struct UTO14_BPI_GUI_MNU_PAU_C_ExitCheck_Params
{
	bool                                               RetValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.WindowWait
struct UTO14_BPI_GUI_MNU_PAU_C_WindowWait_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_PAU_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.OnViewClose
struct UTO14_BPI_GUI_MNU_PAU_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Construct
struct UTO14_BPI_GUI_MNU_PAU_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.TermPadCheck
struct UTO14_BPI_GUI_MNU_PAU_C_TermPadCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU
struct UTO14_BPI_GUI_MNU_PAU_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.SceneUpdate__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_C_SceneUpdate__DelegateSignature_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
