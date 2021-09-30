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

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.RequestSelectIndex
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_RequestSelectIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.PadWork
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.Init
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_Init_Params
{
	TArray<int>                                        CharacterList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetIconType
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_SetIconType_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IconNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetSelect
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_SetSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetActiveIconNum
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_SetActiveIconNum_Params
{
	int                                                IconNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.Construct
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.InitEvent
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_InitEvent_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_CATE_CHARA
struct UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_CATE_CHARA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
