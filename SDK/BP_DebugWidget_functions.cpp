
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

// Function BP_DebugWidget.BP_DebugWidget_C.GetWorldPosition
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Wx                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wy                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWidget_C::GetWorldPosition(float* Wx, float* Wy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.GetWorldPosition");

	UBP_DebugWidget_C_GetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wx != nullptr)
		*Wx = params.Wx;
	if (Wy != nullptr)
		*Wy = params.Wy;
}


// Function BP_DebugWidget.BP_DebugWidget_C.RenderCross
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_DebugWidget_C::RenderCross(class AHUD* MasterHUD, float X, float Y, float W, float H, const struct FLinearColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.RenderCross");

	UBP_DebugWidget_C_RenderCross_Params params;
	params.MasterHUD = MasterHUD;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWidget.BP_DebugWidget_C.RenderBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_DebugWidget_C::RenderBox(class AHUD* MasterHUD, float X, float Y, float W, float H, const struct FLinearColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.RenderBox");

	UBP_DebugWidget_C_RenderBox_Params params;
	params.MasterHUD = MasterHUD;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWidget.BP_DebugWidget_C.OnMouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWidget_C::OnMouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.OnMouseMove");

	UBP_DebugWidget_C_OnMouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWidget.BP_DebugWidget_C.OnMouseUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWidget_C::OnMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.OnMouseUp");

	UBP_DebugWidget_C_OnMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWidget.BP_DebugWidget_C.OnMouseDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWidget_C::OnMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.OnMouseDown");

	UBP_DebugWidget_C_OnMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWidget.BP_DebugWidget_C.InWindown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bin                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWidget_C::InWindown(float Cx, float cy, bool* bin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.InWindown");

	UBP_DebugWidget_C_InWindown_Params params;
	params.Cx = Cx;
	params.cy = cy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bin != nullptr)
		*bin = params.bin;
}


// Function BP_DebugWidget.BP_DebugWidget_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWidget_C::Render(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWidget.BP_DebugWidget_C.Render");

	UBP_DebugWidget_C_Render_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
