
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

// Function BP_BTL_UMG_HELPER_LIBRARY.BP_BTL_UMG_HELPER_LIBRARY_C.SetPercent_ProgressBar
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*            ProgressBar                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_UMG_HELPER_LIBRARY_C::STATIC_SetPercent_ProgressBar(class UProgressBar* ProgressBar, float Percent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_UMG_HELPER_LIBRARY.BP_BTL_UMG_HELPER_LIBRARY_C.SetPercent_ProgressBar");

	UBP_BTL_UMG_HELPER_LIBRARY_C_SetPercent_ProgressBar_Params params;
	params.ProgressBar = ProgressBar;
	params.Percent = Percent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_UMG_HELPER_LIBRARY.BP_BTL_UMG_HELPER_LIBRARY_C.SetPercent_GaugeImage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  GaugeImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_UMG_HELPER_LIBRARY_C::STATIC_SetPercent_GaugeImage(class UImage* GaugeImage, const struct FName& ParameterName, float Percent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_UMG_HELPER_LIBRARY.BP_BTL_UMG_HELPER_LIBRARY_C.SetPercent_GaugeImage");

	UBP_BTL_UMG_HELPER_LIBRARY_C_SetPercent_GaugeImage_Params params;
	params.GaugeImage = GaugeImage;
	params.ParameterName = ParameterName;
	params.Percent = Percent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
