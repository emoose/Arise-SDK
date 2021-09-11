
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

// Function CompassIconInterface.CompassIconInterface_C.SetAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompassIconInterface_C::SetAlpha(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassIconInterface.CompassIconInterface_C.SetAlpha");

	UCompassIconInterface_C_SetAlpha_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassIconInterface.CompassIconInterface_C.SetDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompassIconInterface_C::SetDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassIconInterface.CompassIconInterface_C.SetDistance");

	UCompassIconInterface_C_SetDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
