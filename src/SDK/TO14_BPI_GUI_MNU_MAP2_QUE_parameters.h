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

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Close
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Open
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_Open_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.CustomEvent_Refresh
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_CustomEvent_Refresh_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseFinished
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewCloseFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.Construct
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewCloseFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewCloseEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewCloseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpenFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnViewOpenEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnViewOpenEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnRefreshSubQuestEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnRefreshSubQuestEvent__DelegateSignature_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE.TO14_BPI_GUI_MNU_MAP2_QUE_C.OnRefreshMainQuestEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_QUE_C_OnRefreshMainQuestEvent__DelegateSignature_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
