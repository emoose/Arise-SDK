
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

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CalculateDefaultTacticsIndex
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMenuTacticsData> TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ResultIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::CalculateDefaultTacticsIndex(TArray<struct FMenuTacticsData>* TacticsData, int* ResultIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CalculateDefaultTacticsIndex");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_CalculateDefaultTacticsIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TacticsData != nullptr)
		*TacticsData = params.TacticsData;
	if (ResultIndex != nullptr)
		*ResultIndex = params.ResultIndex;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.ChangeVisibilityDefaultTactics
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::ChangeVisibilityDefaultTactics(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.ChangeVisibilityDefaultTactics");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_ChangeVisibilityDefaultTactics_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.PadWork");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.GetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuTacticsData        TacticsData                    (Parm, OutParm)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::GetData(int Index, struct FMenuTacticsData* TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.GetData");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_GetData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TacticsData != nullptr)
		*TacticsData = params.TacticsData;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::Update(int Index, const struct FMenuTacticsData& TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.Update");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_Update_Params params;
	params.Index = Index;
	params.TacticsData = TacticsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CB_OnMouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::CB_OnMouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CB_OnMouseEnter");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_CB_OnMouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CB_OnMouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::CB_OnMouseSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CB_OnMouseSelect");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_CB_OnMouseSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.InitConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::InitConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.InitConstruct");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_InitConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.InitList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMenuTacticsData> TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::InitList(TArray<struct FMenuTacticsData>* TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.InitList");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_InitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TacticsData != nullptr)
		*TacticsData = params.TacticsData;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.Construct");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_LIST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_LIST");

	UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
