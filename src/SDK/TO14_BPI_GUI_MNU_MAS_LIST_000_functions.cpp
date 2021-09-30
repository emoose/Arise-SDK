
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

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.CB_EnterRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::CB_EnterRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.CB_EnterRequest");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_CB_EnterRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.CB_SelectRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::CB_SelectRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.CB_SelectRequest");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_CB_SelectRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.GetCursorLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::GetCursorLabel(struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.GetCursorLabel");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_GetCursorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.PadWork");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.InitList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuArtsType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FindLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::InitList(int CharacterID, EMenuArtsType Type, const struct FName& FindLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.InitList");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_InitList_Params params;
	params.CharacterID = CharacterID;
	params.Type = Type;
	params.FindLabel = FindLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.OnSelectChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::OnSelectChange(int NewIndex, int OldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.OnSelectChange");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_OnSelectChange_Params params;
	params.NewIndex = NewIndex;
	params.OldIndex = OldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
