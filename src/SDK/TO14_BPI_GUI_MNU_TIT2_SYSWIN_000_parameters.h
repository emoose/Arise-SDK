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

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetCursorAnimation
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetCursorAnimation_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetCursorIndex
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetCursorIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.GetSelectValue
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_GetSelectValue_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.GetCursorIndex
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_GetCursorIndex_Params
{
	int                                                ListIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetItemIDList
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetItemIDList_Params
{
	TArray<int>                                        SkillList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListTop;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.PadWork
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_PadWork_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.MoveCursorWork
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_MoveCursorWork_Params
{
	int                                                MoveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScrollRequest;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetMouseMove
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetMouseMove_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetMouseResult
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetMouseResult_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.RegistCallback
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_RegistCallback_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Restruct
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Restruct_Params
{
	TArray<int>                                        SkillList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListTop;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Initialize
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Construct
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Tick
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_000
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
