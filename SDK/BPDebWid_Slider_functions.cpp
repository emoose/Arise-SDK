
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

// Function BPDebWid_Slider.BPDebWid_Slider_C.RenderWiget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Slider_C::RenderWiget(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.RenderWiget");

	UBPDebWid_Slider_C_RenderWiget_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Slider.BPDebWid_Slider_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Slider_C::Render(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.Render");

	UBPDebWid_Slider_C_Render_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Slider.BPDebWid_Slider_C.OnMouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Slider_C::OnMouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.OnMouseMove");

	UBPDebWid_Slider_C_OnMouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Slider.BPDebWid_Slider_C.OnMouseDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Slider_C::OnMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.OnMouseDown");

	UBPDebWid_Slider_C_OnMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Slider.BPDebWid_Slider_C.OnMouseUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Slider_C::OnMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.OnMouseUp");

	UBPDebWid_Slider_C_OnMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Slider.BPDebWid_Slider_C.ExecuteUbergraph_BPDebWid_Slider
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Slider_C::ExecuteUbergraph_BPDebWid_Slider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.ExecuteUbergraph_BPDebWid_Slider");

	UBPDebWid_Slider_C_ExecuteUbergraph_BPDebWid_Slider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Slider.BPDebWid_Slider_C.EventChangeValueEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPDebWid_Slider_C::EventChangeValueEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.EventChangeValueEnd__DelegateSignature");

	UBPDebWid_Slider_C_EventChangeValueEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Slider.BPDebWid_Slider_C.EventChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPDebWid_Slider_C::EventChangeValue__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Slider.BPDebWid_Slider_C.EventChangeValue__DelegateSignature");

	UBPDebWid_Slider_C_EventChangeValue__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
