
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

// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C::SetColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetColor");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_SetColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.GetStock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutStock                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C::GetStock(int* OutStock)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.GetStock");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_GetStock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStock != nullptr)
		*OutStock = params.OutStock;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.GetGaugeMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_C* InGaugeWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* OutMaterial                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C::GetGaugeMaterial(class UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_C* InGaugeWidget, class UMaterialInstanceDynamic** OutMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.GetGaugeMaterial");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_GetGaugeMaterial_Params params;
	params.InGaugeWidget = InGaugeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetAddValue
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C::SetAddValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetAddValue");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_SetAddValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.AddGaugeEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InNowValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InOldValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C::AddGaugeEvent(float InNowValue, float InOldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.AddGaugeEvent");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_AddGaugeEvent_Params params;
	params.InNowValue = InNowValue;
	params.InOldValue = InOldValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP.TO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C.SetValue");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_GAUGE_GROUP_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
