
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGpuMemoryInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               BasePos                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_DebugMemory_C::DrawGpuMemoryInfo(const struct FPaintContext& Context, const struct FVector2D& BasePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGpuMemoryInfo");

	UUMG_DebugMemory_C_DrawGpuMemoryInfo_Params params;
	params.Context = Context;
	params.BasePos = BasePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawMemoryInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               BasePos                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_DebugMemory_C::DrawMemoryInfo(const struct FPaintContext& Context, const struct FVector2D& BasePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.DrawMemoryInfo");

	UUMG_DebugMemory_C_DrawMemoryInfo_Params params;
	params.Context = Context;
	params.BasePos = BasePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraphTextureSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               BasePos                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugMemory_C::DrawGraphTextureSize(const struct FPaintContext& Context, const struct FVector2D& BasePos, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraphTextureSize");

	UUMG_DebugMemory_C_DrawGraphTextureSize_Params params;
	params.Context = Context;
	params.BasePos = BasePos;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.SelectTagByKeyboard
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_DebugMemory_C::SelectTagByKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.SelectTagByKeyboard");

	UUMG_DebugMemory_C_SelectTagByKeyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.ClampIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugMemory_C::ClampIndex(int In, int Max, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.ClampIndex");

	UUMG_DebugMemory_C_ClampIndex_Params params;
	params.In = In;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraphWithTotal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               BasePos                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         TagArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  AllocSizeArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector2D               CursorPos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 Caption                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TotalSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugMemory_C::DrawGraphWithTotal(const struct FPaintContext& Context, const struct FVector2D& BasePos, float Scale, const struct FVector2D& CursorPos, const struct FString& Caption, float TotalSize, TArray<struct FString>* TagArray, TArray<float>* AllocSizeArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraphWithTotal");

	UUMG_DebugMemory_C_DrawGraphWithTotal_Params params;
	params.Context = Context;
	params.BasePos = BasePos;
	params.Scale = Scale;
	params.CursorPos = CursorPos;
	params.Caption = Caption;
	params.TotalSize = TotalSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagArray != nullptr)
		*TagArray = params.TagArray;
	if (AllocSizeArray != nullptr)
		*AllocSizeArray = params.AllocSizeArray;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraph
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               BasePos                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         TagArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  AllocSizeArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector2D               CursorPos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            BaseColorIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugMemory_C::DrawGraph(const struct FPaintContext& Context, const struct FVector2D& BasePos, float Scale, const struct FVector2D& CursorPos, int BaseColorIndex, TArray<struct FString>* TagArray, TArray<float>* AllocSizeArray, int* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.DrawGraph");

	UUMG_DebugMemory_C_DrawGraph_Params params;
	params.Context = Context;
	params.BasePos = BasePos;
	params.Scale = Scale;
	params.CursorPos = CursorPos;
	params.BaseColorIndex = BaseColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagArray != nullptr)
		*TagArray = params.TagArray;
	if (AllocSizeArray != nullptr)
		*AllocSizeArray = params.AllocSizeArray;
	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.DrawInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   Text1                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Text2                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_DebugMemory_C::DrawInfoText(const struct FPaintContext& Context, const struct FVector2D& pos, const struct FText& Text1, const struct FText& Text2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.DrawInfoText");

	UUMG_DebugMemory_C_DrawInfoText_Params params;
	params.Context = Context;
	params.pos = pos;
	params.Text1 = Text1;
	params.Text2 = Text2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.InRect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               TopLeft                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           InRect                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugMemory_C::InRect(const struct FVector2D& pos, const struct FVector2D& TopLeft, const struct FVector2D& Size, bool* InRect)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.InRect");

	UUMG_DebugMemory_C_InRect_Params params;
	params.pos = pos;
	params.TopLeft = TopLeft;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRect != nullptr)
		*InRect = params.InRect;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.ToggleVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_DebugMemory_C::ToggleVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.ToggleVisible");

	UUMG_DebugMemory_C_ToggleVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.GetColorFromIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UUMG_DebugMemory_C::GetColorFromIndex(int Index, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.GetColorFromIndex");

	UUMG_DebugMemory_C_GetColorFromIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_DebugMemory_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.OnPaint");

	UUMG_DebugMemory_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_DebugMemory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.Construct");

	UUMG_DebugMemory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugMemory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.Tick");

	UUMG_DebugMemory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugMemory.UMG_DebugMemory_C.ExecuteUbergraph_UMG_DebugMemory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugMemory_C::ExecuteUbergraph_UMG_DebugMemory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugMemory.UMG_DebugMemory_C.ExecuteUbergraph_UMG_DebugMemory");

	UUMG_DebugMemory_C_ExecuteUbergraph_UMG_DebugMemory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
