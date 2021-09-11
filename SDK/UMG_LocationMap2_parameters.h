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

// Function UMG_LocationMap2.UMG_LocationMap2_C.CheckGarbageCollection
struct UUMG_LocationMap2_C_CheckGarbageCollection_Params
{
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.AdjustIconScaling
struct UUMG_LocationMap2_C_AdjustIconScaling_Params
{
	TArray<class UWidget*>                             Widgets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.SetPositionLimit
struct UUMG_LocationMap2_C_SetPositionLimit_Params
{
	float                                              HalfWidth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.Activate
struct UUMG_LocationMap2_C_Activate_Params
{
	bool                                               MapLink;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FastTravel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.Pad
struct UUMG_LocationMap2_C_Pad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.EventMapMove
struct UUMG_LocationMap2_C_EventMapMove_Params
{
	struct FVector2D                                   In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.EventOnDestroy
struct UUMG_LocationMap2_C_EventOnDestroy_Params
{
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.CustomEvent_2
struct UUMG_LocationMap2_C_CustomEvent_2_Params
{
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.Initialize
struct UUMG_LocationMap2_C_Initialize_Params
{
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.EventLocationChange
struct UUMG_LocationMap2_C_EventLocationChange_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.EventMapMove2
struct UUMG_LocationMap2_C_EventMapMove2_Params
{
	struct FVector                                     Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.Tick
struct UUMG_LocationMap2_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.ExecuteUbergraph_UMG_LocationMap2
struct UUMG_LocationMap2_C_ExecuteUbergraph_UMG_LocationMap2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocationMap2.UMG_LocationMap2_C.OnChangedDefaultScale__DelegateSignature
struct UUMG_LocationMap2_C_OnChangedDefaultScale__DelegateSignature_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
