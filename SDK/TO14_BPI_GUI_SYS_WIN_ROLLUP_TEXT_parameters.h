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

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetBarLength
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_GetBarLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetAriseScrollBar
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetAriseScrollBar_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.RefreshScrollBar
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_RefreshScrollBar_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetScrollBarLength
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetScrollBarLength_Params
{
	class USlider*                                     self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PanelLength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ContentLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.EnableLanguageButton
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_EnableLanguageButton_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetLineAmount
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_GetLineAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.GetPageAmount
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_GetPageAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Move
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Move_Params
{
	bool                                               IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetScrollBar
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetScrollBar_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetTranslatedButton
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetTranslatedButton_Params
{
	struct FString                                     ButtonTextLabel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EULA_Language                                      Lang;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetTranslatedText
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetTranslatedText_Params
{
	struct FString                                     TextLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EULA_Language                                      Lang;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.SetModifiedText
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_SetModifiedText_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Construct
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Tick
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.񣌘򠳾񍯐�0�0_1
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_񣌘򠳾񍯐�0�0_1_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.Activate
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_Activate_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.UpdateMoveText
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_UpdateMoveText_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.LanguageButtonClicked__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_LanguageButtonClicked__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.NextClicked__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_NextClicked__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT.TO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C.PrevClicked__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_ROLLUP_TEXT_C_PrevClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
