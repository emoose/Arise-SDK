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

// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.SetBehavior
struct APFAIC_EnSym_Common_C_SetBehavior_Params
{
	struct FGameplayTag                                Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBehaviorTree*                               BehaviorAsset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.Terminate
struct APFAIC_EnSym_Common_C_Terminate_Params
{
};

// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.StartAI
struct APFAIC_EnSym_Common_C_StartAI_Params
{
};

// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.UserConstructionScript
struct APFAIC_EnSym_Common_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
