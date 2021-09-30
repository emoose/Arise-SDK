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

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableRequestMovePFFlag
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_InitEnableRequestMovePFFlag_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.IsHealListOpen
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_IsHealListOpen_Params
{
	bool                                               IsHealListOpen;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindChangeMenuStaEvent
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindChangeMenuStaEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindChangeMenuForEvent
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindChangeMenuForEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.CheckInputOpenSta
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_CheckInputOpenSta_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.CheckInputOpenFor
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_CheckInputOpenFor_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableSta
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_InitEnableSta_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableFor
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_InitEnableFor_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindClosedEvent
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindClosedEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindDecideEvent
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindDecideEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.PlayAnimClose
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_PlayAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.UpdateHelpText
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_UpdateHelpText_Params
{
	bool                                               IsHeal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.HealSelectWork
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_HealSelectWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.IconPadWork
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_IconPadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Terminate
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_Terminate_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Execute
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_Execute_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InHeal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Initialize
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnRequestMovePFFlag
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnRequestMovePFFlag_Params
{
	int                                                Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnClosedFromCmd
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnClosedFromCmd_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnInit
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnInit_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnHealIconClick
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnHealIconClick_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnPreviewFromTP
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnPreviewFromTP_Params
{
	TMap<EArisePartyID, int>                           HealHPMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                UseTP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_TMP
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_TMP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnChangeMenuStaEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnChangeMenuStaEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnChangeMenuForEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnChangeMenuForEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnClosedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnClosedEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
