
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

// Function PFT_EnSym_Lazy.PFT_EnSym_Lazy_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_Lazy_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Lazy.PFT_EnSym_Lazy_C.OnExecute");

	UPFT_EnSym_Lazy_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_Lazy.PFT_EnSym_Lazy_C.OnTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_Lazy_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Lazy.PFT_EnSym_Lazy_C.OnTick");

	UPFT_EnSym_Lazy_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_Lazy.PFT_EnSym_Lazy_C.ExecuteUbergraph_PFT_EnSym_Lazy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_Lazy_C::ExecuteUbergraph_PFT_EnSym_Lazy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Lazy.PFT_EnSym_Lazy_C.ExecuteUbergraph_PFT_EnSym_Lazy");

	UPFT_EnSym_Lazy_C_ExecuteUbergraph_PFT_EnSym_Lazy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
