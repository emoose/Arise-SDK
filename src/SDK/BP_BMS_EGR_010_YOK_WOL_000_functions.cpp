
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

// Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnComplete_0F1A31D34D2E812617FAA8A5608685BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BMS_EGR_010_YOK_WOL_000_C::OnComplete_0F1A31D34D2E812617FAA8A5608685BC(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnComplete_0F1A31D34D2E812617FAA8A5608685BC");

	UBP_BMS_EGR_010_YOK_WOL_000_C_OnComplete_0F1A31D34D2E812617FAA8A5608685BC_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnPostCameraInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_WOL_000_C::OnPostCameraInitialize(class ABtl_Camera* BtlCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnPostCameraInitialize");

	UBP_BMS_EGR_010_YOK_WOL_000_C_OnPostCameraInitialize_Params params;
	params.BtlCamera = BtlCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnFinalize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_EGR_010_YOK_WOL_000_C::OnFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnFinalize");

	UBP_BMS_EGR_010_YOK_WOL_000_C_OnFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnPrevMainProduction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_EGR_010_YOK_WOL_000_C::OnPrevMainProduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.OnPrevMainProduction");

	UBP_BMS_EGR_010_YOK_WOL_000_C_OnPrevMainProduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_WOL_000
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_WOL_000_C::ExecuteUbergraph_BP_BMS_EGR_010_YOK_WOL_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_WOL_000.BP_BMS_EGR_010_YOK_WOL_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_WOL_000");

	UBP_BMS_EGR_010_YOK_WOL_000_C_ExecuteUbergraph_BP_BMS_EGR_010_YOK_WOL_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
