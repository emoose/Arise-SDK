
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

// Function PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C.SetRootMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_Rush_Wait_C::SetRootMotion(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C.SetRootMotion");

	UPFT_EnSym_Rush_Wait_C_SetRootMotion_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_Rush_Wait_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C.OnExecute");

	UPFT_EnSym_Rush_Wait_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C.ExecuteUbergraph_PFT_EnSym_Rush_Wait
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_Rush_Wait_C::ExecuteUbergraph_PFT_EnSym_Rush_Wait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C.ExecuteUbergraph_PFT_EnSym_Rush_Wait");

	UPFT_EnSym_Rush_Wait_C_ExecuteUbergraph_PFT_EnSym_Rush_Wait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
