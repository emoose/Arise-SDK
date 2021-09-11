
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

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.SetBeforeInputID
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::SetBeforeInputID()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.SetBeforeInputID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_SetBeforeInputID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ShowSelectImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMouseSelect                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::ShowSelectImage(bool InIsMouseSelect, bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ShowSelectImage");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_ShowSelectImage_Params params;
	params.InIsMouseSelect = InIsMouseSelect;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ShowSelectMouseImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::ShowSelectMouseImage(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ShowSelectMouseImage");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_ShowSelectMouseImage_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.StopTextChangeAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::StopTextChangeAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.StopTextChangeAnime");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_StopTextChangeAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ShowSelectKeyImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::ShowSelectKeyImage(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ShowSelectKeyImage");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_ShowSelectKeyImage_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.SetKeyIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsAnima                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::SetKeyIcon(bool InIsAnima)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.SetKeyIcon");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_SetKeyIcon_Params params;
	params.InIsAnima = InIsAnima;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.UpdateKeyIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InAdd                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          InPadKeyIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::UpdateKeyIcon(int InAdd, TArray<unsigned char>* InPadKeyIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.UpdateKeyIcon");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_UpdateKeyIcon_Params params;
	params.InAdd = InAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPadKeyIDs != nullptr)
		*InPadKeyIDs = params.InPadKeyIDs;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BtnTextCursorAnima
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMouseSelect                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BtnTextCursorAnima(bool InIsMouseSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BtnTextCursorAnima");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BtnTextCursorAnima_Params params;
	params.InIsMouseSelect = InIsMouseSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.InfoCursorAnima
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMouseSelect                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::InfoCursorAnima(bool InIsMouseSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.InfoCursorAnima");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_InfoCursorAnima_Params params;
	params.InIsMouseSelect = InIsMouseSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.DeselectedAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::DeselectedAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.DeselectedAnima");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_DeselectedAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  InPadKeyID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InMouseID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InLavelName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsKeyboard                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::SetData(unsigned char InPadKeyID, unsigned char InMouseID, const struct FName& InLavelName, bool InIsKeyboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.SetData");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_SetData_Params params;
	params.InPadKeyID = InPadKeyID;
	params.InMouseID = InMouseID;
	params.InLavelName = InLavelName;
	params.InIsKeyboard = InIsKeyboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BndEvt__BtnInfo_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnText_ClickableArea_L_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BndEvt__BtnText_ClickableArea_L_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnText_ClickableArea_L_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BndEvt__BtnText_ClickableArea_L_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnText_ClickableArea_R_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BndEvt__BtnText_ClickableArea_R_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__BtnText_ClickableArea_R_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BndEvt__BtnText_ClickableArea_R_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BndEvt__Mouse_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__Btn_ClickableArea_R_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::BndEvt__Btn_ClickableArea_R_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.BndEvt__Btn_ClickableArea_R_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_BndEvt__Btn_ClickableArea_R_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnHoveredKeyEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::OnHoveredKeyEvent__DelegateSignature(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnHoveredKeyEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_OnHoveredKeyEvent__DelegateSignature_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnClickedKeyEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::OnClickedKeyEvent__DelegateSignature(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnClickedKeyEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_OnClickedKeyEvent__DelegateSignature_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnHoveredMouseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::OnHoveredMouseEvent__DelegateSignature(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnHoveredMouseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_OnHoveredMouseEvent__DelegateSignature_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnClickedMouseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::OnClickedMouseEvent__DelegateSignature(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.OnClickedMouseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_OnClickedMouseEvent__DelegateSignature_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.EventChengKeyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C::EventChengKeyIcon__DelegateSignature(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C.EventChengKeyIcon__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C_EventChengKeyIcon__DelegateSignature_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
