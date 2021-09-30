
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

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.RefreshCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::RefreshCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.RefreshCheck");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_RefreshCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowClickableArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsSelect                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::ShowClickableArea(bool InIsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowClickableArea");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ShowClickableArea_Params params;
	params.InIsSelect = InIsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetIsPlayback
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsPlayback                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::GetIsPlayback(bool* OutIsPlayback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetIsPlayback");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_GetIsPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPlayback != nullptr)
		*OutIsPlayback = params.OutIsPlayback;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetBGMSortID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutBGMID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::GetBGMSortID(int* OutBGMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetBGMSortID");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_GetBGMSortID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBGMID != nullptr)
		*OutBGMID = params.OutBGMID;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowPlayback
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::ShowPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowPlayback");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ShowPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SwitcPlayback
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsSE                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsPlay                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::SwitcPlayback(bool InIsSE, bool* OutIsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SwitcPlayback");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SwitcPlayback_Params params;
	params.InIsSE = InIsSE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPlay != nullptr)
		*OutIsPlay = params.OutIsPlay;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::ShowCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowCheck");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ShowCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SwitcCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsSE                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::SwitcCheck(bool InIsSE)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SwitcCheck");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SwitcCheck_Params params;
	params.InIsSE = InIsSE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.DeselectedAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::DeselectedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.DeselectedAnim");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_DeselectedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SelectAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::SelectAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SelectAnim");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SelectAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetGameTitleSort
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutGameTitleSort               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::GetGameTitleSort(int* OutGameTitleSort)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetGameTitleSort");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_GetGameTitleSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGameTitleSort != nullptr)
		*OutGameTitleSort = params.OutGameTitleSort;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigBgmData          InBgmData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::SetData(const struct FConfigBgmData& InBgmData, int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SetData");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SetData_Params params;
	params.InBgmData = InBgmData;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.OnChangeCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::OnChangeCheck__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.OnChangeCheck__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_OnChangeCheck__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedBGMName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::MouseClickedBGMName__DelegateSignature(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedBGMName__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_MouseClickedBGMName__DelegateSignature_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedPlayback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::MouseClickedPlayback__DelegateSignature(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedPlayback__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_MouseClickedPlayback__DelegateSignature_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C::MouseClickedCheck__DelegateSignature(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedCheck__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_MouseClickedCheck__DelegateSignature_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
