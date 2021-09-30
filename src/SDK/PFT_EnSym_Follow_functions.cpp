
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

// Function PFT_EnSym_Follow.PFT_EnSym_Follow_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_Follow_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Follow.PFT_EnSym_Follow_C.OnExecute");

	UPFT_EnSym_Follow_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_Follow.PFT_EnSym_Follow_C.ExecuteUbergraph_PFT_EnSym_Follow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_Follow_C::ExecuteUbergraph_PFT_EnSym_Follow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_Follow.PFT_EnSym_Follow_C.ExecuteUbergraph_PFT_EnSym_Follow");

	UPFT_EnSym_Follow_C_ExecuteUbergraph_PFT_EnSym_Follow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
