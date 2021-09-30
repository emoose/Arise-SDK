
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

// Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.RenderWiget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_DirCursor_C::RenderWiget(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.RenderWiget");

	UBPDebWid_DirCursor_C_RenderWiget_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_DirCursor_C::Render(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.Render");

	UBPDebWid_DirCursor_C_Render_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.ExecuteUbergraph_BPDebWid_DirCursor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_DirCursor_C::ExecuteUbergraph_BPDebWid_DirCursor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.ExecuteUbergraph_BPDebWid_DirCursor");

	UBPDebWid_DirCursor_C_ExecuteUbergraph_BPDebWid_DirCursor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.EventChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPDebWid_DirCursor_C::EventChangeValue__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_DirCursor.BPDebWid_DirCursor_C.EventChangeValue__DelegateSignature");

	UBPDebWid_DirCursor_C_EventChangeValue__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
