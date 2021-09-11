
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

// Function BP_AlphaMask_CameraFadeTaskBase.BP_AlphaMask_CameraFadeTaskBase_C.Begin
// (Event, Public, BlueprintEvent)

void UBP_AlphaMask_CameraFadeTaskBase_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlphaMask_CameraFadeTaskBase.BP_AlphaMask_CameraFadeTaskBase_C.Begin");

	UBP_AlphaMask_CameraFadeTaskBase_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AlphaMask_CameraFadeTaskBase.BP_AlphaMask_CameraFadeTaskBase_C.ExecuteUbergraph_BP_AlphaMask_CameraFadeTaskBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AlphaMask_CameraFadeTaskBase_C::ExecuteUbergraph_BP_AlphaMask_CameraFadeTaskBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlphaMask_CameraFadeTaskBase.BP_AlphaMask_CameraFadeTaskBase_C.ExecuteUbergraph_BP_AlphaMask_CameraFadeTaskBase");

	UBP_AlphaMask_CameraFadeTaskBase_C_ExecuteUbergraph_BP_AlphaMask_CameraFadeTaskBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
