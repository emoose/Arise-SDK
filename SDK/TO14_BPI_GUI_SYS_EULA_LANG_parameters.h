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

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnClosed
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_OnClosed_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnOpened
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_OnOpened_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.GetLastResult
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_GetLastResult_Params
{
	EULA_Language                                      ResultLanguage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnViewOpen
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnViewClose
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.EventInitialize
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_EventInitialize_Params
{
	EULA_Language                                      InLanguage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Select
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_Select_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Decide
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_Decide_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.EventPad
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_EventPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Close
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LANG
struct UTO14_BPI_GUI_SYS_EULA_LANG_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LANG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
