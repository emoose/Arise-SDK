
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

// Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_Detect_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.OnExecute");

	UPFT_EnSym_Detect_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.OnTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_Detect_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.OnTick");

	UPFT_EnSym_Detect_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.ExecuteUbergraph_PFT_EnSym_Detect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_Detect_C::ExecuteUbergraph_PFT_EnSym_Detect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.ExecuteUbergraph_PFT_EnSym_Detect");

	UPFT_EnSym_Detect_C_ExecuteUbergraph_PFT_EnSym_Detect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
