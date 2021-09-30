
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

// Function BP_BMS_Default.BP_BMS_Default_C.OnPostCameraInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_Default_C::OnPostCameraInitialize(class ABtl_Camera* BtlCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_Default.BP_BMS_Default_C.OnPostCameraInitialize");

	UBP_BMS_Default_C_OnPostCameraInitialize_Params params;
	params.BtlCamera = BtlCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_Default.BP_BMS_Default_C.OnPrevMain
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_Default_C::OnPrevMain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_Default.BP_BMS_Default_C.OnPrevMain");

	UBP_BMS_Default_C_OnPrevMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_Default.BP_BMS_Default_C.ExecuteUbergraph_BP_BMS_Default
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_Default_C::ExecuteUbergraph_BP_BMS_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_Default.BP_BMS_Default_C.ExecuteUbergraph_BP_BMS_Default");

	UBP_BMS_Default_C_ExecuteUbergraph_BP_BMS_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
