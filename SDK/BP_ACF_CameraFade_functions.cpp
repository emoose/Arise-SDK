
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

// Function BP_ACF_CameraFade.BP_ACF_CameraFade_C.Begin
// (Event, Public, BlueprintEvent)

void UBP_ACF_CameraFade_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACF_CameraFade.BP_ACF_CameraFade_C.Begin");

	UBP_ACF_CameraFade_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACF_CameraFade.BP_ACF_CameraFade_C.ExecuteUbergraph_BP_ACF_CameraFade
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ACF_CameraFade_C::ExecuteUbergraph_BP_ACF_CameraFade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACF_CameraFade.BP_ACF_CameraFade_C.ExecuteUbergraph_BP_ACF_CameraFade");

	UBP_ACF_CameraFade_C_ExecuteUbergraph_BP_ACF_CameraFade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
