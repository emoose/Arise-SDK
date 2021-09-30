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

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Darken
struct UTO14_BP_MenuBGBase_C_Darken_Params
{
	bool                                               bSw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Terminate
struct UTO14_BP_MenuBGBase_C_Terminate_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Construct
struct UTO14_BP_MenuBGBase_C_Construct_Params
{
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayInAnimation
struct UTO14_BP_MenuBGBase_C_PlayInAnimation_Params
{
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayOutAnimation
struct UTO14_BP_MenuBGBase_C_PlayOutAnimation_Params
{
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.OnAnimationFinished
struct UTO14_BP_MenuBGBase_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.EventInitialize
struct UTO14_BP_MenuBGBase_C_EventInitialize_Params
{
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.ShowImmediate
struct UTO14_BP_MenuBGBase_C_ShowImmediate_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayFinishAnimation
struct UTO14_BP_MenuBGBase_C_PlayFinishAnimation_Params
{
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.ExecuteUbergraph_TO14_BP_MenuBGBase
struct UTO14_BP_MenuBGBase_C_ExecuteUbergraph_TO14_BP_MenuBGBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.OnAnimationEnd__DelegateSignature
struct UTO14_BP_MenuBGBase_C_OnAnimationEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
