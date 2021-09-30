
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

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::SetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.SetIndex");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_SetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetCursor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::GetCursor(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetCursor");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_GetCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::GetSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetSelect");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_GetSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.PadWork");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_FOR2_CHARA_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::GetWidget(int Index, class UTO14_BPI_GUI_MNU_FOR2_CHARA_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetWidget");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_GetWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMenuFormationData> PartyData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::Init(TArray<struct FMenuFormationData>* PartyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.Init");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyData != nullptr)
		*PartyData = params.PartyData;
}


// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_WIN_001
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_WIN_001_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_WIN_001(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_WIN_001");

	UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_WIN_001_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
