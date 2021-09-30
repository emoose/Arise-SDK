
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

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_EQU2_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Exit");

	UTO14_BPI_GUI_MNU_EQU2_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Init");

	UTO14_BPI_GUI_MNU_EQU2_C_Init_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ReadWait");

	UTO14_BPI_GUI_MNU_EQU2_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Exec");

	UTO14_BPI_GUI_MNU_EQU2_C_Exec_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetNextScene");

	UTO14_BPI_GUI_MNU_EQU2_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Finish
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Finish");

	UTO14_BPI_GUI_MNU_EQU2_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ResultValue != nullptr)
		*ResultValue = params.ResultValue;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.BackupVisualStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::BackupVisualStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.BackupVisualStatus");

	UTO14_BPI_GUI_MNU_EQU2_C_BackupVisualStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.KPICheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::KPICheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.KPICheck");

	UTO14_BPI_GUI_MNU_EQU2_C_KPICheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SaveEquipVisualItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::SaveEquipVisualItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SaveEquipVisualItem");

	UTO14_BPI_GUI_MNU_EQU2_C_SaveEquipVisualItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.UpdateHelpText_Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuVisualData         VisualData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_EQU2_C::UpdateHelpText_Item(struct FMenuVisualData* VisualData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.UpdateHelpText_Item");

	UTO14_BPI_GUI_MNU_EQU2_C_UpdateHelpText_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VisualData != nullptr)
		*VisualData = params.VisualData;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.EXNewDialog2
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::EXNewDialog2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.EXNewDialog2");

	UTO14_BPI_GUI_MNU_EQU2_C_EXNewDialog2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.EXNewDialog1
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::EXNewDialog1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.EXNewDialog1");

	UTO14_BPI_GUI_MNU_EQU2_C_EXNewDialog1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.AttachmentError
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::AttachmentError()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.AttachmentError");

	UTO14_BPI_GUI_MNU_EQU2_C_AttachmentError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetModelChangeFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::SetModelChangeFlag(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetModelChangeFlag");

	UTO14_BPI_GUI_MNU_EQU2_C_SetModelChangeFlag_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.CheckVisualState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::CheckVisualState(bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.CheckVisualState");

	UTO14_BPI_GUI_MNU_EQU2_C_CheckVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetLoadFailureWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::MysetLoadFailureWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetLoadFailureWork");

	UTO14_BPI_GUI_MNU_EQU2_C_MysetLoadFailureWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.BackHelpText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::BackHelpText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.BackHelpText");

	UTO14_BPI_GUI_MNU_EQU2_C_BackHelpText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.UpdateHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            slotno                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MySet                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MySetSave                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MySetLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           List                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           View                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::UpdateHelpText(int CharaID, int slotno, bool MySet, bool MySetSave, bool MySetLoad, bool List, bool View)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.UpdateHelpText");

	UTO14_BPI_GUI_MNU_EQU2_C_UpdateHelpText_Params params;
	params.CharaID = CharaID;
	params.slotno = slotno;
	params.MySet = MySet;
	params.MySetSave = MySetSave;
	params.MySetLoad = MySetLoad;
	params.List = List;
	params.View = View;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.NoWeaponWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::NoWeaponWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.NoWeaponWork");

	UTO14_BPI_GUI_MNU_EQU2_C_NoWeaponWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ViewModeWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::ViewModeWork(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ViewModeWork");

	UTO14_BPI_GUI_MNU_EQU2_C_ViewModeWork_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetCharaDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EArisePartyID, struct FVector> Default                        (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_EQU2_C::GetCharaDefault(TMap<EArisePartyID, struct FVector>* Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetCharaDefault");

	UTO14_BPI_GUI_MNU_EQU2_C_GetCharaDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Default != nullptr)
		*Default = params.Default;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.InitDefaultValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::InitDefaultValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.InitDefaultValue");

	UTO14_BPI_GUI_MNU_EQU2_C_InitDefaultValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.InitStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::InitStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.InitStage");

	UTO14_BPI_GUI_MNU_EQU2_C_InitStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.CloseAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::CloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.CloseAnimation");

	UTO14_BPI_GUI_MNU_EQU2_C_CloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetChangeWindowWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::MysetChangeWindowWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetChangeWindowWait");

	UTO14_BPI_GUI_MNU_EQU2_C_MysetChangeWindowWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetSelectWindowWait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::MysetSelectWindowWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetSelectWindowWait");

	UTO14_BPI_GUI_MNU_EQU2_C_MysetSelectWindowWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SlotSelectSaveWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::SlotSelectSaveWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SlotSelectSaveWork");

	UTO14_BPI_GUI_MNU_EQU2_C_SlotSelectSaveWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetTypeSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::MysetTypeSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetTypeSelect");

	UTO14_BPI_GUI_MNU_EQU2_C_MysetTypeSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetVisualItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuVisualData         VisualData                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_EQU2_C::SetVisualItem(int CharacterID, int Part, int ItemID, const struct FMenuVisualData& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetVisualItem");

	UTO14_BPI_GUI_MNU_EQU2_C_SetVisualItem_Params params;
	params.CharacterID = CharacterID;
	params.Part = Part;
	params.ItemID = ItemID;
	params.VisualData = VisualData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.FinishAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::FinishAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.FinishAnim");

	UTO14_BPI_GUI_MNU_EQU2_C_FinishAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetRebuildRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    OutIdList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Request                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Attach                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Hair                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Body                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::GetRebuildRequest(TArray<int>* OutIdList, bool* Request, bool* Weapon, bool* Attach, bool* Hair, bool* Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetRebuildRequest");

	UTO14_BPI_GUI_MNU_EQU2_C_GetRebuildRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIdList != nullptr)
		*OutIdList = params.OutIdList;
	if (Request != nullptr)
		*Request = params.Request;
	if (Weapon != nullptr)
		*Weapon = params.Weapon;
	if (Attach != nullptr)
		*Attach = params.Attach;
	if (Hair != nullptr)
		*Hair = params.Hair;
	if (Body != nullptr)
		*Body = params.Body;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ListSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::ListSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ListSelect");

	UTO14_BPI_GUI_MNU_EQU2_C_ListSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.PartSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::PartSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.PartSelect");

	UTO14_BPI_GUI_MNU_EQU2_C_PartSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.IsFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Finish                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::IsFinish(bool* Finish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.IsFinish");

	UTO14_BPI_GUI_MNU_EQU2_C_IsFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finish != nullptr)
		*Finish = params.Finish;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Execute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::Execute(class AMenuPadProcess* PadProcess, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Execute");

	UTO14_BPI_GUI_MNU_EQU2_C_Execute_Params params;
	params.PadProcess = PadProcess;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ChangeCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::ChangeCharacter(int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ChangeCharacter");

	UTO14_BPI_GUI_MNU_EQU2_C_ChangeCharacter_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::Initialize(int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Initialize");

	UTO14_BPI_GUI_MNU_EQU2_C_Initialize_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_EQU2_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU2_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.OnViewClose");

	UTO14_BPI_GUI_MNU_EQU2_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Tick");

	UTO14_BPI_GUI_MNU_EQU2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU2");

	UTO14_BPI_GUI_MNU_EQU2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetTabMouseVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU2_C::SetTabMouseVisible__DelegateSignature(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetTabMouseVisible__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU2_C_SetTabMouseVisible__DelegateSignature_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
