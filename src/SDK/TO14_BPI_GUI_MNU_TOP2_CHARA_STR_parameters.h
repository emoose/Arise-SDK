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

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.GetANM_OPEN
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_GetANM_OPEN_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.GetANM_NEXT_IN
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_GetANM_NEXT_IN_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.GetANM_NEXT_OUT
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_GetANM_NEXT_OUT_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.GetANM_PRE_OPEN
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_GetANM_PRE_OPEN_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.GetANM_CHANGE_IN
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_GetANM_CHANGE_IN_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.GetANM_CHANGE_OUT
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_GetANM_CHANGE_OUT_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.BindCharStrAnim
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_BindCharStrAnim_Params
{
	TScriptInterface<class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface_C> InCharaStrAnim;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.PlayAnimChangeOut
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_PlayAnimChangeOut_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.PlayAnimChangeIn
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_PlayAnimChangeIn_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.ProgramAnimInOut
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_ProgramAnimInOut_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReverseTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.GetCharaID
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_GetCharaID_Params
{
	EArisePartyID                                      CharaID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.PlayAnimPreOpen
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_PlayAnimPreOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.PlayAnimComeback
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_PlayAnimComeback_Params
{
	bool                                               IsIn;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.PlayAnimNext
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_PlayAnimNext_Params
{
	bool                                               IsIn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.PlayAnimClose
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_PlayAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.Restruct
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_Restruct_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.OnViewClose
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.OnAnimNext
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_OnAnimNext_Params
{
	bool                                               IsIn;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.OnAnimComeback
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_OnAnimComeback_Params
{
	bool                                               IsIn;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.OnViewPreOpen
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_OnViewPreOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.OnAnimChangeIn
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_OnAnimChangeIn_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.OnAnimChangeOut
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_OnAnimChangeOut_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.Tick
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_CHARA_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_CHARA_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
