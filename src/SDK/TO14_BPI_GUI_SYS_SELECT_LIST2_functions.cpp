
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

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.ExecPad
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::ExecPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.ExecPad");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_ExecPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::Decide(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Decide");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Decide_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Next
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Next");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Prev
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Prev");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::Select(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Select");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Select_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Setup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   Choices                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocusLastByCancel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   IsRead                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::Setup(int SelectedIndex, bool EnableCancel, bool IsFocusLastByCancel, TArray<struct FModifiedText>* Choices, TArray<bool>* IsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Setup");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Setup_Params params;
	params.SelectedIndex = SelectedIndex;
	params.EnableCancel = EnableCancel;
	params.IsFocusLastByCancel = IsFocusLastByCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Choices != nullptr)
		*Choices = params.Choices;
	if (IsRead != nullptr)
		*IsRead = params.IsRead;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Tick");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SELECT_LIST2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_SELECT_LIST2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SELECT_LIST2");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SELECT_LIST2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SELECT_LIST2_C::OnClose__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.OnClose__DelegateSignature");

	UTO14_BPI_GUI_SYS_SELECT_LIST2_C_OnClose__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
