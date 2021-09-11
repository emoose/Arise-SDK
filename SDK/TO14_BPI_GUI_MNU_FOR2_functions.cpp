
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

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_FOR2_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Exit");

	UTO14_BPI_GUI_MNU_FOR2_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Init");

	UTO14_BPI_GUI_MNU_FOR2_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ReadWait");

	UTO14_BPI_GUI_MNU_FOR2_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Exec");

	UTO14_BPI_GUI_MNU_FOR2_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetNextScene");

	UTO14_BPI_GUI_MNU_FOR2_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Finish");

	UTO14_BPI_GUI_MNU_FOR2_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetBtlLookChek
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCharaID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsChemge                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsLook                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::GetBtlLookChek(int InCharaID, bool* OutIsChemge, bool* OutIsLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetBtlLookChek");

	UTO14_BPI_GUI_MNU_FOR2_C_GetBtlLookChek_Params params;
	params.InCharaID = InCharaID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsChemge != nullptr)
		*OutIsChemge = params.OutIsChemge;
	if (OutIsLook != nullptr)
		*OutIsLook = params.OutIsLook;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectChek
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InSelectIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsSelect                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::SelectChek(int InSelectIndex, bool* OutIsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectChek");

	UTO14_BPI_GUI_MNU_FOR2_C_SelectChek_Params params;
	params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsSelect != nullptr)
		*OutIsSelect = params.OutIsSelect;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChengImageChek
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::ChengImageChek()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChengImageChek");

	UTO14_BPI_GUI_MNU_FOR2_C_ChengImageChek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetBtlParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::SetBtlParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetBtlParty");

	UTO14_BPI_GUI_MNU_FOR2_C_SetBtlParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetChengeOrders
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuFormationData      InPartyData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           GetIsCheng                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EFBtlChangeOrderType           GetChengeOrderType             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           GetLock                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::GetChengeOrders(const struct FMenuFormationData& InPartyData, bool* GetIsCheng, EFBtlChangeOrderType* GetChengeOrderType, bool* GetLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetChengeOrders");

	UTO14_BPI_GUI_MNU_FOR2_C_GetChengeOrders_Params params;
	params.InPartyData = InPartyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetIsCheng != nullptr)
		*GetIsCheng = params.GetIsCheng;
	if (GetChengeOrderType != nullptr)
		*GetChengeOrderType = params.GetChengeOrderType;
	if (GetLock != nullptr)
		*GetLock = params.GetLock;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.InitializePatly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::InitializePatly()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.InitializePatly");

	UTO14_BPI_GUI_MNU_FOR2_C_InitializePatly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetCancelHelpText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::SetCancelHelpText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetCancelHelpText");

	UTO14_BPI_GUI_MNU_FOR2_C_SetCancelHelpText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetListTargetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InListIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::SetListTargetIndex(int InListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetListTargetIndex");

	UTO14_BPI_GUI_MNU_FOR2_C_SetListTargetIndex_Params params;
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InTextLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_FOR2_C::SetHelpText(const struct FString& InTextLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetHelpText");

	UTO14_BPI_GUI_MNU_FOR2_C_SetHelpText_Params params;
	params.InTextLabel = InTextLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.AllDeathErrorWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::AllDeathErrorWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.AllDeathErrorWindow");

	UTO14_BPI_GUI_MNU_FOR2_C_AllDeathErrorWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MainMemberAllDeathCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsAllDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::MainMemberAllDeathCheck(bool* OutIsAllDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MainMemberAllDeathCheck");

	UTO14_BPI_GUI_MNU_FOR2_C_MainMemberAllDeathCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsAllDeath != nullptr)
		*OutIsAllDeath = params.OutIsAllDeath;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.InitBtlControlCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::InitBtlControlCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.InitBtlControlCheck");

	UTO14_BPI_GUI_MNU_FOR2_C_InitBtlControlCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OpushonTriggerCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::OpushonTriggerCheck(class AMenuPadProcess* InPadData, bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OpushonTriggerCheck");

	UTO14_BPI_GUI_MNU_FOR2_C_OpushonTriggerCheck_Params params;
	params.InPadData = InPadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ControllChangeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::ControllChangeCheck(bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ControllChangeCheck");

	UTO14_BPI_GUI_MNU_FOR2_C_ControllChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.IsListLRChangeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InBtnID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         InPadData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OuRresult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::IsListLRChangeCheck(int InBtnID, class AMenuPadProcess* InPadData, const struct FName& KeyName, bool* OuRresult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.IsListLRChangeCheck");

	UTO14_BPI_GUI_MNU_FOR2_C_IsListLRChangeCheck_Params params;
	params.InBtnID = InBtnID;
	params.InPadData = InPadData;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OuRresult != nullptr)
		*OuRresult = params.OuRresult;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetPadTrigger
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InMenuPad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutTriggerID                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::GetPadTrigger(class AMenuPadProcess* InMenuPad, int* OutTriggerID, bool* OutIsResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetPadTrigger");

	UTO14_BPI_GUI_MNU_FOR2_C_GetPadTrigger_Params params;
	params.InMenuPad = InMenuPad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTriggerID != nullptr)
		*OutTriggerID = params.OutTriggerID;
	if (OutIsResult != nullptr)
		*OutIsResult = params.OutIsResult;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangePartyData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNewSelect                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuFormationData      InCharaData1                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMenuFormationData      InCharaData2                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_FOR2_C::ChangePartyData(int InNewSelect, const struct FMenuFormationData& InCharaData1, const struct FMenuFormationData& InCharaData2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangePartyData");

	UTO14_BPI_GUI_MNU_FOR2_C_ChangePartyData_Params params;
	params.InNewSelect = InNewSelect;
	params.InCharaData1 = InCharaData1;
	params.InCharaData2 = InCharaData2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.RestoreSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::RestoreSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.RestoreSelect");

	UTO14_BPI_GUI_MNU_FOR2_C_RestoreSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MouseDecision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::MouseDecision(bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MouseDecision");

	UTO14_BPI_GUI_MNU_FOR2_C_MouseDecision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CloseAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::CloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CloseAnimation");

	UTO14_BPI_GUI_MNU_FOR2_C_CloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ListStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNewIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::ListStateChange(int InNewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ListStateChange");

	UTO14_BPI_GUI_MNU_FOR2_C_ListStateChange_Params params;
	params.InNewIndex = InNewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.WindowWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::WindowWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.WindowWait");

	UTO14_BPI_GUI_MNU_FOR2_C_WindowWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MakeErrorWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::MakeErrorWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MakeErrorWindow");

	UTO14_BPI_GUI_MNU_FOR2_C_MakeErrorWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetTargetWidget
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_FOR2_CHARA_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::GetTargetWidget(int Index, class UTO14_BPI_GUI_MNU_FOR2_CHARA_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetTargetWidget");

	UTO14_BPI_GUI_MNU_FOR2_C_GetTargetWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CursorChangeWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNewIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InOldIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::CursorChangeWork(int InNewIndex, int InOldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CursorChangeWork");

	UTO14_BPI_GUI_MNU_FOR2_C_CursorChangeWork_Params params;
	params.InNewIndex = InNewIndex;
	params.InOldIndex = InOldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.UpdateControllChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::UpdateControllChange(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.UpdateControllChange");

	UTO14_BPI_GUI_MNU_FOR2_C_UpdateControllChange_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangeAnimationFinish
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::ChangeAnimationFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangeAnimationFinish");

	UTO14_BPI_GUI_MNU_FOR2_C_ChangeAnimationFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangeAnimationWait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::ChangeAnimationWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangeAnimationWait");

	UTO14_BPI_GUI_MNU_FOR2_C_ChangeAnimationWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectAnimationStart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::SelectAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectAnimationStart");

	UTO14_BPI_GUI_MNU_FOR2_C_SelectAnimationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectChangeWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::SelectChangeWork(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectChangeWork");

	UTO14_BPI_GUI_MNU_FOR2_C_SelectChangeWork_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CursorWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::CursorWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CursorWork");

	UTO14_BPI_GUI_MNU_FOR2_C_CursorWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.StartAnimationWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::StartAnimationWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.StartAnimationWait");

	UTO14_BPI_GUI_MNU_FOR2_C_StartAnimationWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::CB_MouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_FOR2_C_CB_MouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::CB_MouseSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_FOR2_C_CB_MouseSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OnViewClose");

	UTO14_BPI_GUI_MNU_FOR2_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Construct");

	UTO14_BPI_GUI_MNU_FOR2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_FOR2_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2");

	UTO14_BPI_GUI_MNU_FOR2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
