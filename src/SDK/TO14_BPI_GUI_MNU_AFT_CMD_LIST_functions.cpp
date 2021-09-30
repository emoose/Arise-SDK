
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

// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.GetSelectEffectID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EffectID                       (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C::GetSelectEffectID(struct FString* EffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.GetSelectEffectID");

	UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_GetSelectEffectID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectID != nullptr)
		*EffectID = params.EffectID;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.InputPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ToggleEffect                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C::InputPad(class AMenuPadProcess* PadProcess, bool* ToggleEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.InputPad");

	UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_InputPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToggleEffect != nullptr)
		*ToggleEffect = params.ToggleEffect;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.SetupItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EffectID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MapIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DataIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C::SetupItem(const struct FString& EffectID, int MapIndex, int DataIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.SetupItem");

	UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_SetupItem_Params params;
	params.EffectID = EffectID;
	params.MapIndex = MapIndex;
	params.DataIndex = DataIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.RestructList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C::RestructList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.RestructList");

	UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_RestructList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.InitList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArtifactData>   Database                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C::InitList(TArray<struct FArtifactData>* Database)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.InitList");

	UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_InitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Database != nullptr)
		*Database = params.Database;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
