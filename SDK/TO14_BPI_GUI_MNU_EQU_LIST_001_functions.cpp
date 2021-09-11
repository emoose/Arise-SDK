
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

// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.TextColorChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_C::TextColorChange(int CharacterID, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.TextColorChange");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_C_TextColorChange_Params params;
	params.CharacterID = CharacterID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.PadWork");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.DataInitialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_C::DataInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.DataInitialize");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_C_DataInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_C::CB_MouseSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_C_CB_MouseSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.CB_MouseOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_C::CB_MouseOver(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.CB_MouseOver");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_C_CB_MouseOver_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
