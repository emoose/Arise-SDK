
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

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.SetAnimDataAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C* InAnimWidjet                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::SetAnimDataAll(class UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C* InAnimWidjet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.SetAnimDataAll");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_SetAnimDataAll_Params params;
	params.InAnimWidjet = InAnimWidjet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Term
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::Term()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Term");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_Term_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::GetIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.GetIndex");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InCursorVisible                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::SetIndex(int InIndex, bool InCursorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.SetIndex");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_SetIndex_Params params;
	params.InIndex = InIndex;
	params.InCursorVisible = InCursorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.PadWork");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.GetWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_FOR2_CHARA_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::GetWidget(int Index, class UTO14_BPI_GUI_MNU_FOR2_CHARA_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.GetWidget");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_GetWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMenuFormationData> PartyData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            StartIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::Init(int StartIndex, TArray<struct FMenuFormationData>* PartyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Init");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_Init_Params params;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyData != nullptr)
		*PartyData = params.PartyData;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.Construct");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_LIST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_LIST.TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_LIST");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
