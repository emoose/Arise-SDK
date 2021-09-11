
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

// Function BPDebWid_InstLog.BPDebWid_InstLog_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_InstLog_C::SetScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_InstLog.BPDebWid_InstLog_C.SetScale");

	UBPDebWid_InstLog_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_InstLog.BPDebWid_InstLog_C.PrintString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPDebWid_InstLog_C::PrintString(const struct FString& String, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_InstLog.BPDebWid_InstLog_C.PrintString");

	UBPDebWid_InstLog_C_PrintString_Params params;
	params.String = String;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_InstLog.BPDebWid_InstLog_C.RenderInstantLog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_InstLog_C::RenderInstantLog(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_InstLog.BPDebWid_InstLog_C.RenderInstantLog");

	UBPDebWid_InstLog_C_RenderInstantLog_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_InstLog.BPDebWid_InstLog_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_InstLog_C::Render(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_InstLog.BPDebWid_InstLog_C.Render");

	UBPDebWid_InstLog_C_Render_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_InstLog.BPDebWid_InstLog_C.ExecuteUbergraph_BPDebWid_InstLog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_InstLog_C::ExecuteUbergraph_BPDebWid_InstLog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_InstLog.BPDebWid_InstLog_C.ExecuteUbergraph_BPDebWid_InstLog");

	UBPDebWid_InstLog_C_ExecuteUbergraph_BPDebWid_InstLog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
