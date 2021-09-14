
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

// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetAbnomalIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAbnormalType                  Abnormal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C::SetAbnomalIcon(EAbnormalType Abnormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetAbnomalIcon");

	UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_SetAbnomalIcon_Params params;
	params.Abnormal = Abnormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetElementIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlElementType                Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C::SetElementIcon(EBtlElementType Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetElementIcon");

	UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_SetElementIcon_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.GetTargetImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C::GetTargetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.GetTargetImage");

	UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_GetTargetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   String                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C::SetString(const struct FText& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_INFO_ITEM_STR.TO14_BPI_GUI_BTL_INFO_ITEM_STR_C.SetString");

	UTO14_BPI_GUI_BTL_INFO_ITEM_STR_C_SetString_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
