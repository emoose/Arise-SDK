
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

// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetQuestName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainQuestStep                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::SetQuestName(const struct FString& MainQuestID, int MainQuestStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetQuestName");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_SetQuestName_Params params;
	params.MainQuestID = MainQuestID;
	params.MainQuestStep = MainQuestStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetDebugFilename
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::SetDebugFilename(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetDebugFilename");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_SetDebugFilename_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetNo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseTextWidget*        򠸖񸰄�0                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsAuto                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::SetNo(class UAriseTextWidget* 򠸖񸰄�0, bool bIsAuto, int Slot, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetNo");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_SetNo_Params params;
	params.򠸖񸰄�0 = 򠸖񸰄�0;
	params.bIsAuto = bIsAuto;
	params.Slot = Slot;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.DisableNotClearedData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::DisableNotClearedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.DisableNotClearedData");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_DisableNotClearedData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.ThumbneilUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            slotno                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::ThumbneilUpdate(int slotno)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.ThumbneilUpdate");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_ThumbneilUpdate_Params params;
	params.slotno = slotno;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEmpty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::SetEnable(bool IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetEnable");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_SetEnable_Params params;
	params.IsEmpty = IsEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuSaveHeaderData     HeaderData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::SetSaveData(const struct FMenuSaveHeaderData& HeaderData, int Slot, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.SetSaveData");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_SetSaveData_Params params;
	params.HeaderData = HeaderData;
	params.Slot = Slot;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.AnimationControl
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::AnimationControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.AnimationControl");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_AnimationControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_SAV_WIN_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.OnDeselected");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_SAV_WIN_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.OnSelected");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.EventOnRefresh
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::EventOnRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.EventOnRefresh");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_EventOnRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.Construct");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.Tick");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::CustomEvent(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.CustomEvent");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_CustomEvent_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_55_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_55_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_55_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_55_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_BndEvt__CA_MAIN_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.Activate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::Activate(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.Activate");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_Activate_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WIN
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_WIN_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV_WIN.TO14_BPI_GUI_MNU_SAV_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WIN");

	UTO14_BPI_GUI_MNU_SAV_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_WIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
