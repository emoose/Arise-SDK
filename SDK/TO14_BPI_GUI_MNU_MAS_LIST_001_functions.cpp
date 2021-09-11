
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

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.UsableFlagChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C* TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlagChange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::UsableFlagChange(class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C* TargetWidget, int CharacterID, bool* FlagChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.UsableFlagChange");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_UsableFlagChange_Params params;
	params.TargetWidget = TargetWidget;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlagChange != nullptr)
		*FlagChange = params.FlagChange;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.GetListTopIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::GetListTopIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.GetListTopIndex");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_GetListTopIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.ChangeHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checkmark                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BattleMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::ChangeHelp(bool Checkmark, bool BattleMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.ChangeHelp");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_ChangeHelp_Params params;
	params.Checkmark = Checkmark;
	params.BattleMode = BattleMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.GetListSelectIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::GetListSelectIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.GetListSelectIndex");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_GetListSelectIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_EnterGroupItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::CB_EnterGroupItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_EnterGroupItem");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_EnterGroupItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_SelectGroupItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::CB_SelectGroupItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_SelectGroupItem");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_SelectGroupItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_DeselectLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Line                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::CB_DeselectLine(int Line)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_DeselectLine");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_DeselectLine_Params params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_SelectLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Line                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::CB_SelectLine(int Line)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_SelectLine");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_SelectLine_Params params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BattleMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::PadWork(class AMenuPadProcess* PadProcess, int CharacterID, bool BattleMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.PadWork");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_PadWork_Params params;
	params.PadProcess = PadProcess;
	params.CharacterID = CharacterID;
	params.BattleMode = BattleMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           ArtsLabelList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ListScroll                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BattleMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::Init(int CharacterID, int ListIndex, int ListScroll, bool BattleMode, TArray<struct FName>* ArtsLabelList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Init");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_Init_Params params;
	params.CharacterID = CharacterID;
	params.ListIndex = ListIndex;
	params.ListScroll = ListScroll;
	params.BattleMode = BattleMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsLabelList != nullptr)
		*ArtsLabelList = params.ArtsLabelList;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Initialize");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
