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

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetLookDisplay
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetLookDisplay_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetChangeImage
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetChangeImage_Params
{
	EFBtlChangeOrderType                               InChengeOrderType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetCharaImage
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetCharaImage_Params
{
	int                                                InPlayerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetAnimData
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetAnimData_Params
{
	class UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C*         InAnimWidjet;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.UpdateBarMaterial
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_UpdateBarMaterial_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetCursorUI
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetCursorUI_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.UpdateCHRPos
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_UpdateCHRPos_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.EraseCharaData
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_EraseCharaData_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetControllFlag
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetControllFlag_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.PlayCancelAnimation
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_PlayCancelAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.PlaySelectAnimation
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_PlaySelectAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.PlayOutAnimation
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_PlayOutAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.PlayInAnimation
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_PlayInAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetCursorActive
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetCursorActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.SetData
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_SetData_Params
{
	struct FMenuFormationData                          Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.Tick
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.BndEvt__MouseArea_K2Node_ComponentBoundEvent_16_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_BndEvt__MouseArea_K2Node_ComponentBoundEvent_16_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.BndEvt__MouseArea_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_BndEvt__MouseArea_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.OnMouseDeselect__DelegateSignature
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_OnMouseDeselect__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.OnMouseSelect__DelegateSignature
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_OnMouseSelect__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_CHARA.TO14_BPI_GUI_MNU_FOR2_CHARA_C.OnAnimationFinish__DelegateSignature
struct UTO14_BPI_GUI_MNU_FOR2_CHARA_C_OnAnimationFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
