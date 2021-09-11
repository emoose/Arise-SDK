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

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OpenMulti
struct UTO14_BP_MenuTutorialBase_C_OpenMulti_Params
{
	TArray<struct FString>                             TutorialLabelList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OpenFirst
struct UTO14_BP_MenuTutorialBase_C_OpenFirst_Params
{
	struct FString                                     TutorialLabel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.IsClosed
struct UTO14_BP_MenuTutorialBase_C_IsClosed_Params
{
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.Construct
struct UTO14_BP_MenuTutorialBase_C_Construct_Params
{
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.PlayInAnimation
struct UTO14_BP_MenuTutorialBase_C_PlayInAnimation_Params
{
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.PlayOutAnimation
struct UTO14_BP_MenuTutorialBase_C_PlayOutAnimation_Params
{
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OnAnimationFinished
struct UTO14_BP_MenuTutorialBase_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.EventInitialize
struct UTO14_BP_MenuTutorialBase_C_EventInitialize_Params
{
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.ExecuteUbergraph_TO14_BP_MenuTutorialBase
struct UTO14_BP_MenuTutorialBase_C_ExecuteUbergraph_TO14_BP_MenuTutorialBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OnAnimationEnd__DelegateSignature
struct UTO14_BP_MenuTutorialBase_C_OnAnimationEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
