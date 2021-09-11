
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

// Function LV_DRT_T01_SND.LV_DRT_T01_SND_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALV_DRT_T01_SND_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_DRT_T01_SND.LV_DRT_T01_SND_C.ReceiveBeginPlay");

	ALV_DRT_T01_SND_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_DRT_T01_SND.LV_DRT_T01_SND_C.ExecuteUbergraph_LV_DRT_T01_SND
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_DRT_T01_SND_C::ExecuteUbergraph_LV_DRT_T01_SND(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_DRT_T01_SND.LV_DRT_T01_SND_C.ExecuteUbergraph_LV_DRT_T01_SND");

	ALV_DRT_T01_SND_C_ExecuteUbergraph_LV_DRT_T01_SND_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
