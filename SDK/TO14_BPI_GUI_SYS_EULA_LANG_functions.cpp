
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

// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnClosed");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnOpened");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.GetLastResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EULA_Language                  ResultLanguage                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::GetLastResult(EULA_Language* ResultLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.GetLastResult");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_GetLastResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLanguage != nullptr)
		*ResultLanguage = params.ResultLanguage;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnViewOpen");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.OnViewClose");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EULA_Language                  InLanguage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::EventInitialize(EULA_Language InLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.EventInitialize");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_EventInitialize_Params params;
	params.InLanguage = InLanguage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::Select(int NewIndex, int OldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Select");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_Select_Params params;
	params.NewIndex = NewIndex;
	params.OldIndex = OldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Decide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::Decide(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Decide");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_Decide_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.EventPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::EventPad(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.EventPad");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_EventPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Close
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.Close");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LANG
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LANG_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LANG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LANG.TO14_BPI_GUI_SYS_EULA_LANG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LANG");

	UTO14_BPI_GUI_SYS_EULA_LANG_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LANG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
