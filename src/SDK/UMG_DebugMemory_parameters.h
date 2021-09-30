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

// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGpuMemoryInfo
struct UUMG_DebugMemory_C_DrawGpuMemoryInfo_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   BasePos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawMemoryInfo
struct UUMG_DebugMemory_C_DrawMemoryInfo_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   BasePos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraphTextureSize
struct UUMG_DebugMemory_C_DrawGraphTextureSize_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   BasePos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.SelectTagByKeyboard
struct UUMG_DebugMemory_C_SelectTagByKeyboard_Params
{
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.ClampIndex
struct UUMG_DebugMemory_C_ClampIndex_Params
{
	int                                                In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraphWithTotal
struct UUMG_DebugMemory_C_DrawGraphWithTotal_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   BasePos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             TagArray;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      AllocSizeArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector2D                                   CursorPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     Caption;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TotalSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraph
struct UUMG_DebugMemory_C_DrawGraph_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   BasePos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             TagArray;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      AllocSizeArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector2D                                   CursorPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                BaseColorIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Selected;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawInfoText
struct UUMG_DebugMemory_C_DrawInfoText_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       Text1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.InRect
struct UUMG_DebugMemory_C_InRect_Params
{
	struct FVector2D                                   pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   TopLeft;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               InRect;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.ToggleVisible
struct UUMG_DebugMemory_C_ToggleVisible_Params
{
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.GetColorFromIndex
struct UUMG_DebugMemory_C_GetColorFromIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.OnPaint
struct UUMG_DebugMemory_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.Construct
struct UUMG_DebugMemory_C_Construct_Params
{
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.Tick
struct UUMG_DebugMemory_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DebugMemory.UMG_DebugMemory_C.ExecuteUbergraph_UMG_DebugMemory
struct UUMG_DebugMemory_C_ExecuteUbergraph_UMG_DebugMemory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
