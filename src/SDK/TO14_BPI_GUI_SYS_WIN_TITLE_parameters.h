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

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.SetDictionaryText
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_SetDictionaryText_Params
{
	struct FDictionaryText                             DictionaryText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.GetReturnValue
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_GetReturnValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.GetRenderSize
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_GetRenderSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.ChangeTitleText
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_ChangeTitleText_Params
{
	struct FText                                       TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseDictionary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.TextChange
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_TextChange_Params
{
	struct FText                                       UpdateText;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     DictionaryGroup;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.PlayOpenAnimation
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_PlayOpenAnimation_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.PlayCloseAnimation
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_PlayCloseAnimation_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TITLE
struct UTO14_BPI_GUI_SYS_WIN_TITLE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TITLE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
