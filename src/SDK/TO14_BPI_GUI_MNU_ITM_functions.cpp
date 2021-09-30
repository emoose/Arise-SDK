
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

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_ITM_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Exit");

	UTO14_BPI_GUI_MNU_ITM_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Init");

	UTO14_BPI_GUI_MNU_ITM_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ReadWait");

	UTO14_BPI_GUI_MNU_ITM_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Exec
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Exec");

	UTO14_BPI_GUI_MNU_ITM_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.GetNextScene");

	UTO14_BPI_GUI_MNU_ITM_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Finish");

	UTO14_BPI_GUI_MNU_ITM_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SkillDetailWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::SkillDetailWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SkillDetailWork");

	UTO14_BPI_GUI_MNU_ITM_C_SkillDetailWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ChangeSkillDetailMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::ChangeSkillDetailMode(bool on, int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ChangeSkillDetailMode");

	UTO14_BPI_GUI_MNU_ITM_C_ChangeSkillDetailMode_Params params;
	params.on = on;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_CPUP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem_CPUP(class AMenuPadProcess* MenuPad, float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_CPUP");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_CPUP_Params params;
	params.MenuPad = MenuPad;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseCheck_BattleRevive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseCheck_BattleRevive(int Index, bool* IsUsing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseCheck_BattleRevive");

	UTO14_BPI_GUI_MNU_ITM_C_UseCheck_BattleRevive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUsing != nullptr)
		*IsUsing = params.IsUsing;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Revive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem_Revive(class AMenuPadProcess* MenuPad, float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Revive");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_Revive_Params params;
	params.MenuPad = MenuPad;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseCheck_BattleHP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseCheck_BattleHP(int ItemID, int Index, bool* IsUsing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseCheck_BattleHP");

	UTO14_BPI_GUI_MNU_ITM_C_UseCheck_BattleHP_Params params;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUsing != nullptr)
		*IsUsing = params.IsUsing;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UpdateGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SortDisable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Using                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Battle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UpdateGuide(int ItemID, bool SortDisable, bool Using, bool Remove, bool Battle, int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UpdateGuide");

	UTO14_BPI_GUI_MNU_ITM_C_UpdateGuide_Params params;
	params.ItemID = ItemID;
	params.SortDisable = SortDisable;
	params.Using = Using;
	params.Remove = Remove;
	params.Battle = Battle;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Use_StatusUpWork
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUse                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::Use_StatusUpWork(int ItemID, int Index, bool* IsUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Use_StatusUpWork");

	UTO14_BPI_GUI_MNU_ITM_C_Use_StatusUpWork_Params params;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUse != nullptr)
		*IsUse = params.IsUse;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_StatusUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem_StatusUp(class AMenuPadProcess* MenuPad, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_StatusUp");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_StatusUp_Params params;
	params.MenuPad = MenuPad;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ChangeData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::ChangeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ChangeData");

	UTO14_BPI_GUI_MNU_ITM_C_ChangeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.CloseAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::CloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.CloseAnimation");

	UTO14_BPI_GUI_MNU_ITM_C_CloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SaveScrollSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::SaveScrollSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SaveScrollSaveData");

	UTO14_BPI_GUI_MNU_ITM_C_SaveScrollSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.InitScrollSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::InitScrollSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.InitScrollSaveData");

	UTO14_BPI_GUI_MNU_ITM_C_InitScrollSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Cook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem_Cook(class AMenuPadProcess* MenuPad, float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Cook");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_Cook_Params params;
	params.MenuPad = MenuPad;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashWork1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::TrashWork1(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashWork1");

	UTO14_BPI_GUI_MNU_ITM_C_TrashWork1_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SearchItemData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuItemData           TargetData                     (Parm, OutParm)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::SearchItemData(int Index, struct FMenuItemData* TargetData, bool* Find)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SearchItemData");

	UTO14_BPI_GUI_MNU_ITM_C_SearchItemData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetData != nullptr)
		*TargetData = params.TargetData;
	if (Find != nullptr)
		*Find = params.Find;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.FIndItemList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::FIndItemList(int ItemID, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.FIndItemList");

	UTO14_BPI_GUI_MNU_ITM_C_FIndItemList_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Use_HealHPWork
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BattleScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::Use_HealHPWork(int ItemID, int Index, bool BattleScene, bool* IsUsing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Use_HealHPWork");

	UTO14_BPI_GUI_MNU_ITM_C_Use_HealHPWork_Params params;
	params.ItemID = ItemID;
	params.Index = Index;
	params.BattleScene = BattleScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUsing != nullptr)
		*IsUsing = params.IsUsing;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Common
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem_Common(class AMenuPadProcess* MenuPad, float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Common");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_Common_Params params;
	params.MenuPad = MenuPad;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_HealTP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem_HealTP(class AMenuPadProcess* MenuPad, float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_HealTP");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_HealTP_Params params;
	params.MenuPad = MenuPad;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SetGuideText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::SetGuideText(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SetGuideText");

	UTO14_BPI_GUI_MNU_ITM_C_SetGuideText_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.IsItemUsable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUse                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::IsItemUsable(int ItemID, bool* IsUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.IsItemUsable");

	UTO14_BPI_GUI_MNU_ITM_C_IsItemUsable_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUse != nullptr)
		*IsUse = params.IsUse;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemSortChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::ItemSortChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemSortChange");

	UTO14_BPI_GUI_MNU_ITM_C_ItemSortChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.MouseEnableChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::MouseEnableChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.MouseEnableChange");

	UTO14_BPI_GUI_MNU_ITM_C_MouseEnableChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_HealHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem_HealHP(class AMenuPadProcess* MenuPad, float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_HealHP");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_HealHP_Params params;
	params.MenuPad = MenuPad;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemTypeSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::ItemTypeSwitch(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemTypeSwitch");

	UTO14_BPI_GUI_MNU_ITM_C_ItemTypeSwitch_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutputText                     (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_ITM_C::UseItem(int TargetIndex, int ItemNo, struct FString* OutputText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem");

	UTO14_BPI_GUI_MNU_ITM_C_UseItem_Params params;
	params.TargetIndex = TargetIndex;
	params.ItemNo = ItemNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputText != nullptr)
		*OutputText = params.OutputText;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemUseWork
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DecideIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUse                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::ItemUseWork(int DecideIndex, class AMenuPadProcess* PadData, bool* IsUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemUseWork");

	UTO14_BPI_GUI_MNU_ITM_C_ItemUseWork_Params params;
	params.DecideIndex = DecideIndex;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUse != nullptr)
		*IsUse = params.IsUse;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SceneFinishStart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::SceneFinishStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SceneFinishStart");

	UTO14_BPI_GUI_MNU_ITM_C_SceneFinishStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::TrashWork(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashWork");

	UTO14_BPI_GUI_MNU_ITM_C_TrashWork_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashButtonCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TrashType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::TrashButtonCheck(class AMenuPadProcess* PadData, int* TrashType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashButtonCheck");

	UTO14_BPI_GUI_MNU_ITM_C_TrashButtonCheck_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrashType != nullptr)
		*TrashType = params.TrashType;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UpdateItemDate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::UpdateItemDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UpdateItemDate");

	UTO14_BPI_GUI_MNU_ITM_C_UpdateItemDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemHealWork
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SortItemIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::ItemHealWork(int SortItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemHealWork");

	UTO14_BPI_GUI_MNU_ITM_C_ItemHealWork_Params params;
	params.SortItemIndex = SortItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TabChangeWork
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TabMove                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::TabChangeWork(class AMenuPadProcess* PadData, int* TabMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TabChangeWork");

	UTO14_BPI_GUI_MNU_ITM_C_TabChangeWork_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TabMove != nullptr)
		*TabMove = params.TabMove;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnUseOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnUseOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnUseOpen");

	UTO14_BPI_GUI_MNU_ITM_C_OnUseOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnUseClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnUseClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnUseClose");

	UTO14_BPI_GUI_MNU_ITM_C_OnUseClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnDetailOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnDetailOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnDetailOpen");

	UTO14_BPI_GUI_MNU_ITM_C_OnDetailOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnDetailClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnDetailClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnDetailClose");

	UTO14_BPI_GUI_MNU_ITM_C_OnDetailClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Construct");

	UTO14_BPI_GUI_MNU_ITM_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_ITM_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnThrowClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnThrowClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnThrowClose");

	UTO14_BPI_GUI_MNU_ITM_C_OnThrowClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnViewClose");

	UTO14_BPI_GUI_MNU_ITM_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnThrowOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnThrowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnThrowOpen");

	UTO14_BPI_GUI_MNU_ITM_C_OnThrowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_ITM_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM");

	UTO14_BPI_GUI_MNU_ITM_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UsingItemFlow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         MenuPad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_C::UsingItemFlow__DelegateSignature(class AMenuPadProcess* MenuPad, float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UsingItemFlow__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_C_UsingItemFlow__DelegateSignature_Params params;
	params.MenuPad = MenuPad;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
