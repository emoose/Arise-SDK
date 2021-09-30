
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

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnTSSErrorEvent_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENewsInfoPurpose               purpose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ErrorCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_News_C::OnTSSErrorEvent_New(ENewsInfoPurpose purpose, int ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnTSSErrorEvent_New");

	UTO14_BPI_GUI_SYS_TTL_News_C_OnTSSErrorEvent_New_Params params;
	params.purpose = purpose;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnStringLoadCompleteEvent_New
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENewsInfoPurpose               purpose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InStr                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_TTL_News_C::OnStringLoadCompleteEvent_New(ENewsInfoPurpose purpose, const struct FString& InStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnStringLoadCompleteEvent_New");

	UTO14_BPI_GUI_SYS_TTL_News_C_OnStringLoadCompleteEvent_New_Params params;
	params.purpose = purpose;
	params.InStr = InStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.HideNews
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_News_C::HideNews()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.HideNews");

	UTO14_BPI_GUI_SYS_TTL_News_C_HideNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnTSSErrorEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            slotno                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ErrorCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_News_C::OnTSSErrorEvent(int slotno, int ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnTSSErrorEvent");

	UTO14_BPI_GUI_SYS_TTL_News_C_OnTSSErrorEvent_Params params;
	params.slotno = slotno;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.GetPlatformSlotID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutSlotID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_News_C::GetPlatformSlotID(int* OutSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.GetPlatformSlotID");

	UTO14_BPI_GUI_SYS_TTL_News_C_GetPlatformSlotID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSlotID != nullptr)
		*OutSlotID = params.OutSlotID;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnStringLoadCompleteEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InSlotID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InStr                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_TTL_News_C::OnStringLoadCompleteEvent(int InSlotID, const struct FString& InStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnStringLoadCompleteEvent");

	UTO14_BPI_GUI_SYS_TTL_News_C_OnStringLoadCompleteEvent_Params params;
	params.InSlotID = InSlotID;
	params.InStr = InStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.RequestNews
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsRequest                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_News_C::RequestNews(bool* OutIsRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.RequestNews");

	UTO14_BPI_GUI_SYS_TTL_News_C_RequestNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsRequest != nullptr)
		*OutIsRequest = params.OutIsRequest;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InStr                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_TTL_News_C::SetText(const struct FString& InStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.SetText");

	UTO14_BPI_GUI_SYS_TTL_News_C_SetText_Params params;
	params.InStr = InStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.IsClosePlayAnime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsPlay                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_News_C::IsClosePlayAnime(bool* OutIsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.IsClosePlayAnime");

	UTO14_BPI_GUI_SYS_TTL_News_C_IsClosePlayAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPlay != nullptr)
		*OutIsPlay = params.OutIsPlay;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.IsOpenPlayAnime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsPlay                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_News_C::IsOpenPlayAnime(bool* OutIsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.IsOpenPlayAnime");

	UTO14_BPI_GUI_SYS_TTL_News_C_IsOpenPlayAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPlay != nullptr)
		*OutIsPlay = params.OutIsPlay;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.ClosePlayAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_News_C::ClosePlayAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.ClosePlayAnime");

	UTO14_BPI_GUI_SYS_TTL_News_C_ClosePlayAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OpenPlayAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_News_C::OpenPlayAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OpenPlayAnime");

	UTO14_BPI_GUI_SYS_TTL_News_C_OpenPlayAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_News_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.Construct");

	UTO14_BPI_GUI_SYS_TTL_News_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_News_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.Destruct");

	UTO14_BPI_GUI_SYS_TTL_News_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_News
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_News_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_News(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_News");

	UTO14_BPI_GUI_SYS_TTL_News_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_News_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
