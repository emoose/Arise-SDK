
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

// Function BP_MessageWindow.BP_MessageWindow_C.AddSelectionWithFlags
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocusLastByCancel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   IsRead                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_AddSelectionWithFlags(int SelectedIndex, bool EnableCancel, bool IsFocusLastByCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList, TArray<bool>* IsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.AddSelectionWithFlags");

	UBP_MessageWindow_C_AddSelectionWithFlags_Params params;
	params.SelectedIndex = SelectedIndex;
	params.EnableCancel = EnableCancel;
	params.IsFocusLastByCancel = IsFocusLastByCancel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
	if (IsRead != nullptr)
		*IsRead = params.IsRead;
}


// Function BP_MessageWindow.BP_MessageWindow_C.IsCloseMessageWindow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_IsCloseMessageWindow(class UObject* __WorldContext, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.IsCloseMessageWindow");

	UBP_MessageWindow_C_IsCloseMessageWindow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_MessageWindow.BP_MessageWindow_C.IsMessageEnd
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_IsMessageEnd(class UObject* __WorldContext, bool* IsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.IsMessageEnd");

	UBP_MessageWindow_C_IsMessageEnd_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnd != nullptr)
		*IsEnd = params.IsEnd;
}


// Function BP_MessageWindow.BP_MessageWindow_C.CloseMessageWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_CloseMessageWindow(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.CloseMessageWindow");

	UBP_MessageWindow_C_CloseMessageWindow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MessageWindow.BP_MessageWindow_C.AddSelection
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocusLastByCancel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_AddSelection(int SelectedIndex, bool EnableCancel, bool IsFocusLastByCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.AddSelection");

	UBP_MessageWindow_C_AddSelection_Params params;
	params.SelectedIndex = SelectedIndex;
	params.EnableCancel = EnableCancel;
	params.IsFocusLastByCancel = IsFocusLastByCancel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
}


// Function BP_MessageWindow.BP_MessageWindow_C.AddMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           SpeakerName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_AddMessage(const struct FModifiedText& Message, const struct FModifiedText& SpeakerName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.AddMessage");

	UBP_MessageWindow_C_AddMessage_Params params;
	params.Message = Message;
	params.SpeakerName = SpeakerName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MessageWindow.BP_MessageWindow_C.GetWidget
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_SYS_MSG_C* NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_GetWidget(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_MSG_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.GetWidget");

	UBP_MessageWindow_C_GetWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_MessageWindow.BP_MessageWindow_C.OpenMessageWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           FirstMessage                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           FirstSpeakerName               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MessageWindow_C::STATIC_OpenMessageWindow(const struct FModifiedText& FirstMessage, const struct FModifiedText& FirstSpeakerName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MessageWindow.BP_MessageWindow_C.OpenMessageWindow");

	UBP_MessageWindow_C_OpenMessageWindow_Params params;
	params.FirstMessage = FirstMessage;
	params.FirstSpeakerName = FirstSpeakerName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
