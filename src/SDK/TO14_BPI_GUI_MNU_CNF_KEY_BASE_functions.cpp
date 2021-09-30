
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

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.IsSelectState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsSelect                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::IsSelectState(bool* OutIsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.IsSelectState");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_IsSelectState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsSelect != nullptr)
		*OutIsSelect = params.OutIsSelect;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.UpdateSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::UpdateSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.UpdateSaveData");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_UpdateSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.KeyboardSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::KeyboardSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.KeyboardSaveData");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_KeyboardSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.GetInputCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EInputCategory                 OutInputCategory               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::GetInputCategory(EInputCategory* OutInputCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.GetInputCategory");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_GetInputCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInputCategory != nullptr)
		*OutInputCategory = params.OutInputCategory;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.ChengOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::ChengOperation(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.ChengOperation");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_ChengOperation_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FModifiedText           OutMText                       (Parm, OutParm)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::GetText(const struct FString& inString, struct FModifiedText* OutMText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.GetText");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_GetText_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMText != nullptr)
		*OutMText = params.OutMText;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.PadSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::PadSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.PadSaveData");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_PadSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.SetList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::SetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.SetList");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_SetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.CreateList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::CreateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.CreateList");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_CreateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Initialize");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.PadControl
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProsess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::PadControl(class AMenuPadProcess* InPadProsess, bool* OutIsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.PadControl");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_PadControl_Params params;
	params.InPadProsess = InPadProsess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsEnd != nullptr)
		*OutIsEnd = params.OutIsEnd;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.CloseAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::CloseAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.CloseAnima");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_CloseAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.OpenAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::OpenAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.OpenAnima");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_OpenAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Chengekey
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::Chengekey()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Chengekey");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_Chengekey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Construct");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialogClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::InputDialogClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialogClose");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_InputDialogClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.«0¹0¿0à0¤0Ù0ó0È0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           InChengeTitle                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InButtunIMessage_Text          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InButtunID_Text                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InChengeMessage                (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::«0¹0¿0à0¤0Ù0ó0È0_1(const struct FModifiedText& InChengeTitle, const struct FModifiedText& InButtunIMessage_Text, const struct FModifiedText& InButtunID_Text, const struct FModifiedText& InChengeMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.«0¹0¿0à0¤0Ù0ó0È0_1");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params params;
	params.InChengeTitle = InChengeTitle;
	params.InButtunIMessage_Text = InButtunIMessage_Text;
	params.InButtunID_Text = InButtunID_Text;
	params.InChengeMessage = InChengeMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialog_CloseEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::InputDialog_CloseEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialog_CloseEnd");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_InputDialog_CloseEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialog_OpenStart
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::InputDialog_OpenStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialog_OpenStart");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_InputDialog_OpenStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_BASE");

	UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
