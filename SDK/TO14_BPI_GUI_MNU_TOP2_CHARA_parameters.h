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

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_ANM_OPEN
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_ANM_OPEN_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_ANM_NEXT
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_ANM_NEXT_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_ANM_COMEBACK
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_ANM_COMEBACK_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_ANM_CLOSE
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_ANM_CLOSE_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_ANM_NEXT_HIDE
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_ANM_NEXT_HIDE_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_AMM_COMEBACK_HIDE
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_AMM_COMEBACK_HIDE_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_ANM_NEXT_STAY
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_ANM_NEXT_STAY_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim_ANM_COMEBACK_STAY
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_ANM_COMEBACK_STAY_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetMyAnim
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetMyAnim_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_TOP2_CHARA_ANIM_C*         MyAnim;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.DestroyCharaStrAnim
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_DestroyCharaStrAnim_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.Terminate
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_Terminate_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.CreateCharaStrAnim
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_CreateCharaStrAnim_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimPreOpen
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimPreOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.RestructByImages
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_RestructByImages_Params
{
	TArray<struct FMenuTopChara>                       Images;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayPreOpen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimComebackStay
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimComebackStay_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimNextStay
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimNextStay_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimComebackHide
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimComebackHide_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimNextHide
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimNextHide_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.Initialize
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.FindStr
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_FindStr_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C*          str;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimChange
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimChange_Params
{
	EArisePartyID                                      NewSelectCharaID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimComeback
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimComeback_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimNext
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimNext_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimClose
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.GetFilename
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_GetFilename_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.Restruct
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_Restruct_Params
{
	TArray<EArisePartyID>                              PartyIDs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.Preview
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_Preview_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ANM_OPEN_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ANM_OPEN_STR_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnViewClose
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnAnimNext
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnAnimNext_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnAnimComeback
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnAnimComeback_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ANM_NEXT_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ANM_NEXT_STR_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ANM_COMEBACK_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ANM_COMEBACK_STR_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ANM_CLOSE_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ANM_CLOSE_STR_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ANM_PRE_OPEN_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ANM_PRE_OPEN_STR_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnAnimNextHide
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnAnimNextHide_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnAnimComebackHide
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnAnimComebackHide_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnAnimNextStay
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnAnimNextStay_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ANM_NEXT_STAY_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ANM_NEXT_STAY_STR_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.OnAnimComebackStay
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_OnAnimComebackStay_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ANM_COMEBACK_STAY_STR
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ANM_COMEBACK_STAY_STR_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.PreConstruct
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.Tick
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.Construct
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_CHARA
struct UTO14_BPI_GUI_MNU_TOP2_CHARA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_CHARA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
