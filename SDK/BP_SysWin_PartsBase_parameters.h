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

// Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.PadWork
struct UBP_SysWin_PartsBase_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.Cancel__DelegateSignature
struct UBP_SysWin_PartsBase_C_Cancel__DelegateSignature_Params
{
};

// Function BP_SysWin_PartsBase.BP_SysWin_PartsBase_C.Decide__DelegateSignature
struct UBP_SysWin_PartsBase_C_Decide__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
