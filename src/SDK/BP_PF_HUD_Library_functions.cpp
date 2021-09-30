
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

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsPFHelpUIOpenCheck
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsOpen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_IsPFHelpUIOpenCheck(class UObject* __WorldContext, bool* OutIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsPFHelpUIOpenCheck");

	UBP_PF_HUD_Library_C_PF_HUD_IsPFHelpUIOpenCheck_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsOpen != nullptr)
		*OutIsOpen = params.OutIsOpen;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_GetDefaultShow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   IsDefaultShow                  (Parm, OutParm, ZeroConstructor)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_GetDefaultShow(class UObject* __WorldContext, TArray<bool>* IsDefaultShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_GetDefaultShow");

	UBP_PF_HUD_Library_C_PF_HUD_GetDefaultShow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDefaultShow != nullptr)
		*IsDefaultShow = params.IsDefaultShow;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_Hide
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_Hide(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_Hide");

	UBP_PF_HUD_Library_C_PF_HUD_Hide_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_ManagerNative
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APF_HUD_Manager*         OutBP_PF_HUD                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_GetPF_HUD_ManagerNative(class UObject* __WorldContext, class APF_HUD_Manager** OutBP_PF_HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_ManagerNative");

	UBP_PF_HUD_Library_C_GetPF_HUD_ManagerNative_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBP_PF_HUD != nullptr)
		*OutBP_PF_HUD = params.OutBP_PF_HUD;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_ManagerInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBP_PF_HUD_Interface_C> OutBP_PF_HUD                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_GetPF_HUD_ManagerInterface(class UObject* __WorldContext, TScriptInterface<class UBP_PF_HUD_Interface_C>* OutBP_PF_HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_ManagerInterface");

	UBP_PF_HUD_Library_C_GetPF_HUD_ManagerInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBP_PF_HUD != nullptr)
		*OutBP_PF_HUD = params.OutBP_PF_HUD;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AbortShortChat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AbortShortChat(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AbortShortChat");

	UBP_PF_HUD_Library_C_PF_HUD_AbortShortChat_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowPFUIHelp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_IsShowPFUIHelp(class UObject* __WorldContext, bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowPFUIHelp");

	UBP_PF_HUD_Library_C_PF_HUD_IsShowPFUIHelp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ClearShortChat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ClearShortChat(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ClearShortChat");

	UBP_PF_HUD_Library_C_PF_HUD_ClearShortChat_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowCPAction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_IsShowCPAction(class UObject* __WorldContext, bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowCPAction");

	UBP_PF_HUD_Library_C_PF_HUD_IsShowCPAction_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowLongChatInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_IsShowLongChatInfo(class UObject* __WorldContext, bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowLongChatInfo");

	UBP_PF_HUD_Library_C_PF_HUD_IsShowLongChatInfo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_LayoutInterface
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C> PF_Layout                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_GetPF_HUD_LayoutInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C>* PF_Layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_LayoutInterface");

	UBP_PF_HUD_Library_C_GetPF_HUD_LayoutInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PF_Layout != nullptr)
		*PF_Layout = params.PF_Layout;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowNextMapName?
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_IsShowNextMapName_(class UObject* __WorldContext, bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowNextMapName?");

	UBP_PF_HUD_Library_C_PF_HUD_IsShowNextMapName__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFarmLivestockHarvest
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogFarmLivestockHarvest(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFarmLivestockHarvest");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogFarmLivestockHarvest_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsPlayableHelpButtonShow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_IsPlayableHelpButtonShow(class UObject* __WorldContext, bool* IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsPlayableHelpButtonShow");

	UBP_PF_HUD_Library_C_PF_HUD_IsPlayableHelpButtonShow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsShow != nullptr)
		*IsShow = params.IsShow;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_GetShownPlayableHelpLabel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_GetShownPlayableHelpLabel(class UObject* __WorldContext, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_GetShownPlayableHelpLabel");

	UBP_PF_HUD_Library_C_PF_HUD_GetShownPlayableHelpLabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetNewsInfoManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UNewsInfoManager*        Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_GetNewsInfoManager(class UObject* __WorldContext, class UNewsInfoManager** Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetNewsInfoManager");

	UBP_PF_HUD_Library_C_GetNewsInfoManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowSubQuest
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           OldName                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowSubQuest(const struct FModifiedText& Name, const struct FModifiedText& OldName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowSubQuest");

	UBP_PF_HUD_Library_C_PF_HUD_ShowSubQuest_Params params;
	params.Name = Name;
	params.OldName = OldName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_Refresh
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_Refresh(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_Refresh");

	UBP_PF_HUD_Library_C_PF_HUD_Refresh_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.DbPrintHelpSaveStatus
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_DbPrintHelpSaveStatus(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.DbPrintHelpSaveStatus");

	UBP_PF_HUD_Library_C_DbPrintHelpSaveStatus_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowPlayableHelpByLabel
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowPlayableHelpByLabel(const struct FString& Label, class UObject* __WorldContext, bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowPlayableHelpByLabel");

	UBP_PF_HUD_Library_C_PF_HUD_ShowPlayableHelpByLabel_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ChangeUIControl
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFUIPattern                   InPFUIPattern                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsChangeLock                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ChangeUIControl(EPFUIPattern InPFUIPattern, bool InIsChangeLock, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ChangeUIControl");

	UBP_PF_HUD_Library_C_PF_HUD_ChangeUIControl_Params params;
	params.InPFUIPattern = InPFUIPattern;
	params.InIsChangeLock = InIsChangeLock;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFoodEffectEnd
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogFoodEffectEnd(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFoodEffectEnd");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogFoodEffectEnd_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowTPAnimation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Old                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          New                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowTPAnimation(float Old, float New, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowTPAnimation");

	UBP_PF_HUD_Library_C_PF_HUD_ShowTPAnimation_Params params;
	params.Old = Old;
	params.New = New;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetNavimapFootprintManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UNavimapFootprintManager* Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_GetNavimapFootprintManager(class UObject* __WorldContext, class UNavimapFootprintManager** Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetNavimapFootprintManager");

	UBP_PF_HUD_Library_C_GetNavimapFootprintManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideKeyHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_HideKeyHelp(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideKeyHelp");

	UBP_PF_HUD_Library_C_PF_HUD_HideKeyHelp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowKeyHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EKeyHelpMode>      Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowKeyHelp(TEnumAsByte<EKeyHelpMode> Mode, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowKeyHelp");

	UBP_PF_HUD_Library_C_PF_HUD_ShowKeyHelp_Params params;
	params.Mode = Mode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HidePlayableHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_HidePlayableHelp(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HidePlayableHelp");

	UBP_PF_HUD_Library_C_PF_HUD_HidePlayableHelp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowPlayableHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsShowButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CachedLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowPlayableHelp(const struct FModifiedText& Title, const struct FModifiedText& Text, bool IsShowButton, const struct FString& CachedLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowPlayableHelp");

	UBP_PF_HUD_Library_C_PF_HUD_ShowPlayableHelp_Params params;
	params.Title = Title;
	params.Text = Text;
	params.IsShowButton = IsShowButton;
	params.CachedLabel = CachedLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_CloseShortChat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_CloseShortChat(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_CloseShortChat");

	UBP_PF_HUD_Library_C_PF_HUD_CloseShortChat_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_PlayShortChat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseCharaIconID              CharaIconID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_PlayShortChat(EAriseCharaIconID CharaIconID, const struct FText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_PlayShortChat");

	UBP_PF_HUD_Library_C_PF_HUD_PlayShortChat_Params params;
	params.CharaIconID = CharaIconID;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestDefeatEnemy
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EnemyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogQuestDefeatEnemy(const struct FName& EnemyID, int Num, int Max, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestDefeatEnemy");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogQuestDefeatEnemy_Params params;
	params.EnemyID = EnemyID;
	params.Num = Num;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFastTravelEnabled
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocatorName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogFastTravelEnabled(const struct FString& LocatorName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFastTravelEnabled");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogFastTravelEnabled_Params params;
	params.LocatorName = LocatorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestGetItem
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogQuestGetItem(const struct FString& ItemID, int Num, int Max, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestGetItem");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogQuestGetItem_Params params;
	params.ItemID = ItemID;
	params.Num = Num;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowLocation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldLocatiojnName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowLocation(const struct FString& LocationName, const struct FString& OldLocatiojnName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowLocation");

	UBP_PF_HUD_Library_C_PF_HUD_ShowLocation_Params params;
	params.LocationName = LocationName;
	params.OldLocatiojnName = OldLocatiojnName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddMainQuestUpdate
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OldQuestID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            OldStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddMainQuestUpdate(const struct FString& QuestID, int Step, const struct FString& OldQuestID, int OldStep, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddMainQuestUpdate");

	UBP_PF_HUD_Library_C_PF_HUD_AddMainQuestUpdate_Params params;
	params.QuestID = QuestID;
	params.Step = Step;
	params.OldQuestID = OldQuestID;
	params.OldStep = OldStep;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPopupInfoManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPopupInfoManager*       Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_GetPopupInfoManager(class UObject* __WorldContext, class UPopupInfoManager** Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPopupInfoManager");

	UBP_PF_HUD_Library_C_GetPopupInfoManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideActInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_HideActInfo(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideActInfo");

	UBP_PF_HUD_Library_C_PF_HUD_HideActInfo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowActInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ButtonLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InCPPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowActInfo(const struct FModifiedText& Info, const struct FString& ButtonLabel, bool Condition, int InCPPoint, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowActInfo");

	UBP_PF_HUD_Library_C_PF_HUD_ShowActInfo_Params params;
	params.Info = Info;
	params.ButtonLabel = ButtonLabel;
	params.Condition = Condition;
	params.InCPPoint = InCPPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideNextMapName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_HideNextMapName(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideNextMapName");

	UBP_PF_HUD_Library_C_PF_HUD_HideNextMapName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowNextMapName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowNextMapName(const struct FModifiedText& MapName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowNextMapName");

	UBP_PF_HUD_Library_C_PF_HUD_ShowNextMapName_Params params;
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestStepUpdate
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogQuestStepUpdate(const struct FModifiedText& Name, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestStepUpdate");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogQuestStepUpdate_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowMainQuest
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           OldName                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_ShowMainQuest(const struct FModifiedText& Name, const struct FModifiedText& OldName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowMainQuest");

	UBP_PF_HUD_Library_C_PF_HUD_ShowMainQuest_Params params;
	params.Name = Name;
	params.OldName = OldName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddQuestUpdate
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddQuestUpdate(const struct FString& QuestID, int Step, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddQuestUpdate");

	UBP_PF_HUD_Library_C_PF_HUD_AddQuestUpdate_Params params;
	params.QuestID = QuestID;
	params.Step = Step;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogGetItem
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOption                        InLogOption                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogGetItem(const struct FString& ItemID, int Num, EOption InLogOption, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogGetItem");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogGetItem_Params params;
	params.ItemID = ItemID;
	params.Num = Num;
	params.InLogOption = InLogOption;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogMessageBase
// (Static, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETO14_ImageType>   inImageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            inImageID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            inRarity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOption                        InOption                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Library_C::STATIC_PF_HUD_AddLogMessageBase(const struct FModifiedText& Message, TEnumAsByte<ETO14_ImageType> inImageType, int inImageID, int inRarity, EOption InOption, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogMessageBase");

	UBP_PF_HUD_Library_C_PF_HUD_AddLogMessageBase_Params params;
	params.Message = Message;
	params.inImageType = inImageType;
	params.inImageID = inImageID;
	params.inRarity = inRarity;
	params.InOption = InOption;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
