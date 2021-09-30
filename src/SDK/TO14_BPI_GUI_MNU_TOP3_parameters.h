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

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_TOP3_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Exit
struct UTO14_BPI_GUI_MNU_TOP3_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Init
struct UTO14_BPI_GUI_MNU_TOP3_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ReadWait
struct UTO14_BPI_GUI_MNU_TOP3_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Exec
struct UTO14_BPI_GUI_MNU_TOP3_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.GetNextScene
struct UTO14_BPI_GUI_MNU_TOP3_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Finish
struct UTO14_BPI_GUI_MNU_TOP3_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.Get3DBGActor
struct UTO14_BPI_GUI_MNU_TOP3_C_Get3DBGActor_Params
{
	class ABP_MNU_3DWIDGET_BaseActor_C*                _3DBGActor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.CheckArtifactMenu
struct UTO14_BPI_GUI_MNU_TOP3_C_CheckArtifactMenu_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ChangeNextMenu
struct UTO14_BPI_GUI_MNU_TOP3_C_ChangeNextMenu_Params
{
	struct FString                                     NextMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.CheckChangedPartyTop
struct UTO14_BPI_GUI_MNU_TOP3_C_CheckChangedPartyTop_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.UpdatePartyTopWhenOpen
struct UTO14_BPI_GUI_MNU_TOP3_C_UpdatePartyTopWhenOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimNext
struct UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimNext_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimComeback
struct UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimComeback_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.PlayAnimClose
struct UTO14_BPI_GUI_MNU_TOP3_C_PlayAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnChangeMenuForFromTmp
struct UTO14_BPI_GUI_MNU_TOP3_C_OnChangeMenuForFromTmp_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnChangeMenuStaFromTmp
struct UTO14_BPI_GUI_MNU_TOP3_C_OnChangeMenuStaFromTmp_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnInit
struct UTO14_BPI_GUI_MNU_TOP3_C_OnInit_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnClosedFromTmp
struct UTO14_BPI_GUI_MNU_TOP3_C_OnClosedFromTmp_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.OnDecideFromTmp
struct UTO14_BPI_GUI_MNU_TOP3_C_OnDecideFromTmp_Params
{
	struct FString                                     MenuID;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3
struct UTO14_BPI_GUI_MNU_TOP3_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
