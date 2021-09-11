
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

// Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.RenderWiget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_CheckBox_C::RenderWiget(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.RenderWiget");

	UBPDebWid_CheckBox_C_RenderWiget_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_CheckBox_C::Render(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.Render");

	UBPDebWid_CheckBox_C_Render_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.OnMouseUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_CheckBox_C::OnMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.OnMouseUp");

	UBPDebWid_CheckBox_C_OnMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.ExecuteUbergraph_BPDebWid_CheckBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_CheckBox_C::ExecuteUbergraph_BPDebWid_CheckBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.ExecuteUbergraph_BPDebWid_CheckBox");

	UBPDebWid_CheckBox_C_ExecuteUbergraph_BPDebWid_CheckBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.EventChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPDebWid_CheckBox_C::EventChangeValue__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_CheckBox.BPDebWid_CheckBox_C.EventChangeValue__DelegateSignature");

	UBPDebWid_CheckBox_C_EventChangeValue__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
