
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

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.CalcDisplayMaxNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::CalcDisplayMaxNum(int* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.CalcDisplayMaxNum");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_CalcDisplayMaxNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.GetSelectArtifactData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArtifactData           ArtifactData                   (Parm, OutParm)
// bool                           PartsComp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ExParts                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::GetSelectArtifactData(struct FArtifactData* ArtifactData, bool* PartsComp, bool* ExParts, bool* Find)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.GetSelectArtifactData");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_GetSelectArtifactData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtifactData != nullptr)
		*ArtifactData = params.ArtifactData;
	if (PartsComp != nullptr)
		*PartsComp = params.PartsComp;
	if (ExParts != nullptr)
		*ExParts = params.ExParts;
	if (Find != nullptr)
		*Find = params.Find;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.InputPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OpenTalk                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OpenEffect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::InputPad(class AMenuPadProcess* PadProcess, bool* OpenTalk, bool* OpenEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.InputPad");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_InputPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenTalk != nullptr)
		*OpenTalk = params.OpenTalk;
	if (OpenEffect != nullptr)
		*OpenEffect = params.OpenEffect;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.SetupItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MapIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DataIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::SetupItem(const struct FString& ItemID, int MapIndex, int DataIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.SetupItem");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_SetupItem_Params params;
	params.ItemID = ItemID;
	params.MapIndex = MapIndex;
	params.DataIndex = DataIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.RestructList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::RestructList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.RestructList");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_RestructList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.InitList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArtifactData>   Database                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::InitList(TArray<struct FArtifactData>* Database)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.InitList");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_InitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Database != nullptr)
		*Database = params.Database;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.Construct");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.OnCursorMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::OnCursorMove(int NewIndex, int OldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.OnCursorMove");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_OnCursorMove_Params params;
	params.NewIndex = NewIndex;
	params.OldIndex = OldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_LIST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_LIST");

	UTO14_BPI_GUI_MNU_AFT_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
