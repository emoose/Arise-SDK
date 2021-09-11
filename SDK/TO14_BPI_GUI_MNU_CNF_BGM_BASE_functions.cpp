
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

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.IsChengeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsCheck                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::IsChengeCheck(bool* OutIsCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.IsChengeCheck");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_IsChengeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsCheck != nullptr)
		*OutIsCheck = params.OutIsCheck;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.SetTitleBGMHelp
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::SetTitleBGMHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.SetTitleBGMHelp");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_SetTitleBGMHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.ListRequestCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigBgmData          InConfigBgmData                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::ListRequestCheck(const struct FConfigBgmData& InConfigBgmData, int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.ListRequestCheck");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_ListRequestCheck_Params params;
	params.InConfigBgmData = InConfigBgmData;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CreateList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FConfigBgmData>  InBgmDataList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::CreateList(TArray<struct FConfigBgmData>* InBgmDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CreateList");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_CreateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBgmDataList != nullptr)
		*InBgmDataList = params.InBgmDataList;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FModifiedText           OutText_                       (Parm, OutParm)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::GetText(const struct FString& inString, struct FModifiedText* OutText_)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.GetText");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_GetText_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText_ != nullptr)
		*OutText_ = params.OutText_;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.DiarogCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::DiarogCheck(bool* OutIsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.DiarogCheck");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_DiarogCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsEnd != nullptr)
		*OutIsEnd = params.OutIsEnd;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.BGMSave
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::BGMSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.BGMSave");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_BGMSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.EventChengBGMName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InPlayBGMName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::EventChengBGMName(const struct FString& InPlayBGMName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.EventChengBGMName");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_EventChengBGMName_Params params;
	params.InPlayBGMName = InPlayBGMName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CommonControl
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::CommonControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CommonControl");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_CommonControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.BGMselectControl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::BGMselectControl(bool* OutIsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.BGMselectControl");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_BGMselectControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsEnd != nullptr)
		*OutIsEnd = params.OutIsEnd;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.GameTitleControl
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::GameTitleControl(bool* OutIsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.GameTitleControl");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_GameTitleControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsEnd != nullptr)
		*OutIsEnd = params.OutIsEnd;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.EventRefreshSoundList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InGameTitleSrot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::EventRefreshSoundList(int InGameTitleSrot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.EventRefreshSoundList");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_EventRefreshSoundList_Params params;
	params.InGameTitleSrot = InGameTitleSrot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.PadControl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProsess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::PadControl(class AMenuPadProcess* InPadProsess, bool* OutIsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.PadControl");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_PadControl_Params params;
	params.InPadProsess = InPadProsess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsEnd != nullptr)
		*OutIsEnd = params.OutIsEnd;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.Initialize");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CloseAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::CloseAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CloseAnima");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_CloseAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.OpenAnima
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigData             InConfigData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::OpenAnima(const struct FConfigData& InConfigData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.OpenAnima");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_OpenAnima_Params params;
	params.InConfigData = InConfigData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.Construct");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_BASE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_BASE");

	UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
