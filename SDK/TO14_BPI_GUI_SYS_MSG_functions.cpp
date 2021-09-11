
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

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetSelectionWithFlags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocusLastByCancel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   IsRead                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_SYS_MSG_C::SetSelectionWithFlags(int SelectedIndex, bool EnableCancel, bool IsFocusLastByCancel, TArray<struct FModifiedText>* SelectList, TArray<bool>* IsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetSelectionWithFlags");

	UTO14_BPI_GUI_SYS_MSG_C_SetSelectionWithFlags_Params params;
	params.SelectedIndex = SelectedIndex;
	params.EnableCancel = EnableCancel;
	params.IsFocusLastByCancel = IsFocusLastByCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
	if (IsRead != nullptr)
		*IsRead = params.IsRead;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseRelease
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::MouseRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseRelease");

	UTO14_BPI_GUI_SYS_MSG_C_MouseRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseGet
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::MouseGet()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseGet");

	UTO14_BPI_GUI_SYS_MSG_C_MouseGet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnMouseClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::OnMouseClicked(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnMouseClicked");

	UTO14_BPI_GUI_SYS_MSG_C_OnMouseClicked_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.GetLastResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ResultIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::GetLastResult(int* ResultIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.GetLastResult");

	UTO14_BPI_GUI_SYS_MSG_C_GetLastResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultIndex != nullptr)
		*ResultIndex = params.ResultIndex;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnSelectionClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::OnSelectionClose(int Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnSelectionClose");

	UTO14_BPI_GUI_SYS_MSG_C_OnSelectionClose_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Close");

	UTO14_BPI_GUI_SYS_MSG_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Open_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_MSG_C::Open_3(const struct FModifiedText& Message, const struct FModifiedText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Open_3");

	UTO14_BPI_GUI_SYS_MSG_C_Open_3_Params params;
	params.Message = Message;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.IsMessageEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::IsMessageEnd(bool* IsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.IsMessageEnd");

	UTO14_BPI_GUI_SYS_MSG_C_IsMessageEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnd != nullptr)
		*IsEnd = params.IsEnd;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           SpeakerName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_MSG_C::SetMessage(const struct FModifiedText& SpeakerName, const struct FModifiedText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetMessage");

	UTO14_BPI_GUI_SYS_MSG_C_SetMessage_Params params;
	params.SpeakerName = SpeakerName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocusLastByCancel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::SetSelection(int SelectedIndex, bool EnableCancel, bool IsFocusLastByCancel, TArray<struct FModifiedText>* SelectList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetSelection");

	UTO14_BPI_GUI_SYS_MSG_C_SetSelection_Params params;
	params.SelectedIndex = SelectedIndex;
	params.EnableCancel = EnableCancel;
	params.IsFocusLastByCancel = IsFocusLastByCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.AddMessageList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDictionaryText> SpeakerName                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FDictionaryText> Messages                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_SYS_MSG_C::AddMessageList(TArray<struct FDictionaryText>* SpeakerName, TArray<struct FDictionaryText>* Messages)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.AddMessageList");

	UTO14_BPI_GUI_SYS_MSG_C_AddMessageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpeakerName != nullptr)
		*SpeakerName = params.SpeakerName;
	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PadFinish
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::PadFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PadFinish");

	UTO14_BPI_GUI_SYS_MSG_C_PadFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PadInitFunc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::PadInitFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PadInitFunc");

	UTO14_BPI_GUI_SYS_MSG_C_PadInitFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseWork
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMouseInput                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::MouseWork(class APlayerController* PlayerController, bool* IsMouseInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseWork");

	UTO14_BPI_GUI_SYS_MSG_C_MouseWork_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseInput != nullptr)
		*IsMouseInput = params.IsMouseInput;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.NextPage
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.NextPage");

	UTO14_BPI_GUI_SYS_MSG_C_NextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PageCheck
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   BaseTextData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_MSG_C::PageCheck(const struct FText& BaseTextData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PageCheck");

	UTO14_BPI_GUI_SYS_MSG_C_PageCheck_Params params;
	params.BaseTextData = BaseTextData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::IsClose(bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.IsClose");

	UTO14_BPI_GUI_SYS_MSG_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_MSG_C::Open(const struct FText& Message, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Open");

	UTO14_BPI_GUI_SYS_MSG_C_Open_Params params;
	params.Message = Message;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Tick");

	UTO14_BPI_GUI_SYS_MSG_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnAnimationFinished");

	UTO14_BPI_GUI_SYS_MSG_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.UpdateTick");

	UTO14_BPI_GUI_SYS_MSG_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetupDelegate");

	UTO14_BPI_GUI_SYS_MSG_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OpenStarte
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::OpenStarte()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OpenStarte");

	UTO14_BPI_GUI_SYS_MSG_C_OpenStarte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.CloseEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::CloseEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.CloseEnd");

	UTO14_BPI_GUI_SYS_MSG_C_CloseEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Construct");

	UTO14_BPI_GUI_SYS_MSG_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG");

	UTO14_BPI_GUI_SYS_MSG_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
