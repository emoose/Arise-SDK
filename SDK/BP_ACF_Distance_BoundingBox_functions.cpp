
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

// Function BP_ACF_Distance_BoundingBox.BP_ACF_Distance_BoundingBox_C.Begin
// (Event, Public, BlueprintEvent)

void UBP_ACF_Distance_BoundingBox_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACF_Distance_BoundingBox.BP_ACF_Distance_BoundingBox_C.Begin");

	UBP_ACF_Distance_BoundingBox_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACF_Distance_BoundingBox.BP_ACF_Distance_BoundingBox_C.ExecuteUbergraph_BP_ACF_Distance_BoundingBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ACF_Distance_BoundingBox_C::ExecuteUbergraph_BP_ACF_Distance_BoundingBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACF_Distance_BoundingBox.BP_ACF_Distance_BoundingBox_C.ExecuteUbergraph_BP_ACF_Distance_BoundingBox");

	UBP_ACF_Distance_BoundingBox_C_ExecuteUbergraph_BP_ACF_Distance_BoundingBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
