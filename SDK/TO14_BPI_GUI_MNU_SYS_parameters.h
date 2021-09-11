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

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_SYS_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.Exit
struct UTO14_BPI_GUI_MNU_SYS_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.Init
struct UTO14_BPI_GUI_MNU_SYS_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.ReadWait
struct UTO14_BPI_GUI_MNU_SYS_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.Exec
struct UTO14_BPI_GUI_MNU_SYS_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.GetNextScene
struct UTO14_BPI_GUI_MNU_SYS_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.Finish
struct UTO14_BPI_GUI_MNU_SYS_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.Close
struct UTO14_BPI_GUI_MNU_SYS_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_SYS_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.OnViewClose
struct UTO14_BPI_GUI_MNU_SYS_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.Construct
struct UTO14_BPI_GUI_MNU_SYS_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_SYS.TO14_BPI_GUI_MNU_SYS_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS
struct UTO14_BPI_GUI_MNU_SYS_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
