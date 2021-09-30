
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

// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_LIST_C::Decide(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.Decide");

	UTO14_BPI_GUI_MNU_FIS_LIST_C_Decide_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.InputPad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_LIST_C::InputPad(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.InputPad");

	UTO14_BPI_GUI_MNU_FIS_LIST_C_InputPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.RestructLureList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLureData>       LureMaster                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectID                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_LIST_C::RestructLureList(int SelectID, TArray<struct FLureData>* LureMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.RestructLureList");

	UTO14_BPI_GUI_MNU_FIS_LIST_C_RestructLureList_Params params;
	params.SelectID = SelectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LureMaster != nullptr)
		*LureMaster = params.LureMaster;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.SetupItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IremID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MapIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DataIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_LIST_C::SetupItem(int IremID, int MapIndex, int DataIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.SetupItem");

	UTO14_BPI_GUI_MNU_FIS_LIST_C_SetupItem_Params params;
	params.IremID = IremID;
	params.MapIndex = MapIndex;
	params.DataIndex = DataIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.RestructRodList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRodData>        RodMaster                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectID                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_LIST_C::RestructRodList(int SelectID, TArray<struct FRodData>* RodMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.RestructRodList");

	UTO14_BPI_GUI_MNU_FIS_LIST_C_RestructRodList_Params params;
	params.SelectID = SelectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RodMaster != nullptr)
		*RodMaster = params.RodMaster;
}


// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_LIST_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.Init");

	UTO14_BPI_GUI_MNU_FIS_LIST_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
