
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

// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetIsNotInputTimerStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsNotInputTimerStop          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::SetIsNotInputTimerStop(bool InIsNotInputTimerStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetIsNotInputTimerStop");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_SetIsNotInputTimerStop_Params params;
	params.InIsNotInputTimerStop = InIsNotInputTimerStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.GetLongChatManager
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::GetLongChatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.GetLongChatManager");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_GetLongChatManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.Refresh");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetPlayLongchatShow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::SetPlayLongchatShow(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetPlayLongchatShow");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_SetPlayLongchatShow_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.ChengSetShowUIFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShowUI                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::ChengSetShowUIFlag(bool InIsShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.ChengSetShowUIFlag");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_ChengSetShowUIFlag_Params params;
	params.InIsShowUI = InIsShowUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.AgainShowLCInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::AgainShowLCInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.AgainShowLCInfo");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_AgainShowLCInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetIsTimerStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsTimerStop                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::SetIsTimerStop(bool InIsTimerStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetIsTimerStop");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_SetIsTimerStop_Params params;
	params.InIsTimerStop = InIsTimerStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetLongChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::SetLongChat(const struct FString& LongchatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.SetLongChat");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_SetLongChat_Params params;
	params.LongchatName = LongchatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.Construct");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.Tick");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventHideLongChatBody
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::EventHideLongChatBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventHideLongChatBody");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_EventHideLongChatBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventShowLongChatBody
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::EventShowLongChatBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventShowLongChatBody");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_EventShowLongChatBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.ShowLCInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::ShowLCInfo(const struct FString& LongchatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.ShowLCInfo");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_ShowLCInfo_Params params;
	params.LongchatName = LongchatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.HideLCInfo
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::HideLCInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.HideLCInfo");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_HideLCInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventHideAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::EventHideAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventHideAnimationEnd");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_EventHideAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventShowLongChatTitle
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::EventShowLongChatTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.EventShowLongChatTitle");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_EventShowLongChatTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.«0¹0¿0à0¤0Ù0ó0È0_1
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::«0¹0¿0à0¤0Ù0ó0È0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.«0¹0¿0à0¤0Ù0ó0È0_1");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.LongChatManagerBind
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::LongChatManagerBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.LongChatManagerBind");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_LongChatManagerBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LCHT_INFO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LCHT_INFO_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_LCHT_INFO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LCHT_INFO.TO14_BPI_GUI_SYS_LCHT_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LCHT_INFO");

	UTO14_BPI_GUI_SYS_LCHT_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LCHT_INFO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
