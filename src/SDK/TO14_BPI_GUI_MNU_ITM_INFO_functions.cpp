
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

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.InitPadSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Plus10_KeyLabel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Minus10_KeyLabel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::InitPadSetting(const struct FString& Plus10_KeyLabel, const struct FString& Minus10_KeyLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.InitPadSetting");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_InitPadSetting_Params params;
	params.Plus10_KeyLabel = Plus10_KeyLabel;
	params.Minus10_KeyLabel = Minus10_KeyLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.GetNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Now                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::GetNum(int* Now)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.GetNum");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_GetNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Now != nullptr)
		*Now = params.Now;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.ResetResult
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::ResetResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.ResetResult");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_ResetResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.SetItemDataDirect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::SetItemDataDirect(int ItemID, int Min, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.SetItemDataDirect");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_SetItemDataDirect_Params params;
	params.ItemID = ItemID;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.GetResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::GetResult(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.GetResult");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_GetResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.PadWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::PadWork(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.PadWork");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_PadWork_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.SetItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuItemData           ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::SetItemData(const struct FMenuItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.SetItemData");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_SetItemData_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_72_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_72_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_72_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_72_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_86_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_86_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_86_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_86_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_113_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_113_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_113_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_113_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_INFO
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_INFO_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_INFO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_INFO");

	UTO14_BPI_GUI_MNU_ITM_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_INFO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
