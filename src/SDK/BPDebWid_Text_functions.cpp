
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

// Function BPDebWid_Text.BPDebWid_Text_C.RenderWiget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Text_C::RenderWiget(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Text.BPDebWid_Text_C.RenderWiget");

	UBPDebWid_Text_C_RenderWiget_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Text.BPDebWid_Text_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Text_C::Render(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Text.BPDebWid_Text_C.Render");

	UBPDebWid_Text_C_Render_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDebWid_Text.BPDebWid_Text_C.ExecuteUbergraph_BPDebWid_Text
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPDebWid_Text_C::ExecuteUbergraph_BPDebWid_Text(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDebWid_Text.BPDebWid_Text_C.ExecuteUbergraph_BPDebWid_Text");

	UBPDebWid_Text_C_ExecuteUbergraph_BPDebWid_Text_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
