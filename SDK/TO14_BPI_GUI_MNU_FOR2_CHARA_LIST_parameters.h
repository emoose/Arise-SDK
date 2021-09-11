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

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.SetAnimDataAll
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_SetAnimDataAll_Params
{
	class UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C*         InAnimWidjet;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Term
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_Term_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.GetIndex
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_GetIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.SetIndex
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_SetIndex_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InCursorVisible;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.PadWork
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.GetWidget
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_GetWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_FOR2_CHARA_C*              Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Init
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_Init_Params
{
	TArray<struct FMenuFormationData>                  PartyData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                StartIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Construct
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_LIST
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
