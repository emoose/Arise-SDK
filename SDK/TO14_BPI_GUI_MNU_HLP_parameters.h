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

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.SetPadProcess
struct UTO14_BPI_GUI_MNU_HLP_C_SetPadProcess_Params
{
	class AMenuPadProcess*                             CurrentPadProcess;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.GetPadProcess
struct UTO14_BPI_GUI_MNU_HLP_C_GetPadProcess_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.Hide
struct UTO14_BPI_GUI_MNU_HLP_C_Hide_Params
{
};

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.Show
struct UTO14_BPI_GUI_MNU_HLP_C_Show_Params
{
};

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.SetHelp
struct UTO14_BPI_GUI_MNU_HLP_C_SetHelp_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnActivate__DelegateSignature
struct UTO14_BPI_GUI_MNU_HLP_C_OnActivate__DelegateSignature_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnHide__DelegateSignature
struct UTO14_BPI_GUI_MNU_HLP_C_OnHide__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnShow__DelegateSignature
struct UTO14_BPI_GUI_MNU_HLP_C_OnShow__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
