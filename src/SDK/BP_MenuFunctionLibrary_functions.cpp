
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

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ResetMenuArenaSelect
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_ResetMenuArenaSelect(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ResetMenuArenaSelect");

	UBP_MenuFunctionLibrary_C_ResetMenuArenaSelect_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CallOnCookingEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CallOnCookingEvent(EArisePartyID PartyId, int RecipeID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CallOnCookingEvent");

	UBP_MenuFunctionLibrary_C_CallOnCookingEvent_Params params;
	params.PartyId = PartyId;
	params.RecipeID = RecipeID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetAreaNameModifiedText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ScenarioCounter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

struct FModifiedText UBP_MenuFunctionLibrary_C::STATIC_GetAreaNameModifiedText(const struct FString& AreaName, int ScenarioCounter, class UObject* __WorldContext, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetAreaNameModifiedText");

	UBP_MenuFunctionLibrary_C_GetAreaNameModifiedText_Params params;
	params.AreaName = AreaName;
	params.ScenarioCounter = ScenarioCounter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;

	return params.ReturnValue;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnim_ANM_NAME
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_MENU_GetIcnMnuAnim_ANM_NAME(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnim_ANM_NAME");

	UBP_MenuFunctionLibrary_C_MENU_GetIcnMnuAnim_ANM_NAME_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnim_ANM_FONT
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_MENU_GetIcnMnuAnim_ANM_FONT(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnim_ANM_FONT");

	UBP_MenuFunctionLibrary_C_MENU_GetIcnMnuAnim_ANM_FONT_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnimInterface
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_MENU_GetIcnMnuAnimInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnimInterface");

	UBP_MenuFunctionLibrary_C_MENU_GetIcnMnuAnimInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsAUG_Closed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ScenarioCounter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MenuFunctionLibrary_C::STATIC_IsAUG_Closed(const struct FString& AreaName, int ScenarioCounter, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsAUG_Closed");

	UBP_MenuFunctionLibrary_C_IsAUG_Closed_Params params;
	params.AreaName = AreaName;
	params.ScenarioCounter = ScenarioCounter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SwitchHelpWidgetHitTest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInteractable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SwitchHelpWidgetHitTest(bool bInteractable, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SwitchHelpWidgetHitTest");

	UBP_MenuFunctionLibrary_C_SwitchHelpWidgetHitTest_Params params;
	params.bInteractable = bInteractable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetQuestIDSecondary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 QuestIDSecondary               (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetQuestIDSecondary(class UObject* __WorldContext, struct FString* QuestIDSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetQuestIDSecondary");

	UBP_MenuFunctionLibrary_C_GetQuestIDSecondary_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestIDSecondary != nullptr)
		*QuestIDSecondary = params.QuestIDSecondary;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetQuestID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 QuestID                        (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetQuestID(class UObject* __WorldContext, struct FString* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetQuestID");

	UBP_MenuFunctionLibrary_C_GetQuestID_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestID != nullptr)
		*QuestID = params.QuestID;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetOpenMapLocationSecondary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenMapLocationSecondary       (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetOpenMapLocationSecondary(class UObject* __WorldContext, struct FString* OpenMapLocationSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetOpenMapLocationSecondary");

	UBP_MenuFunctionLibrary_C_GetOpenMapLocationSecondary_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenMapLocationSecondary != nullptr)
		*OpenMapLocationSecondary = params.OpenMapLocationSecondary;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetOpenMapLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenMapLocation                (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetOpenMapLocation(class UObject* __WorldContext, struct FString* OpenMapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetOpenMapLocation");

	UBP_MenuFunctionLibrary_C_GetOpenMapLocation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenMapLocation != nullptr)
		*OpenMapLocation = params.OpenMapLocation;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckPrevMenuCount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CheckPrevMenuCount(const struct FString& MenuID, class UObject* __WorldContext, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckPrevMenuCount");

	UBP_MenuFunctionLibrary_C_CheckPrevMenuCount_Params params;
	params.MenuID = MenuID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetQuestIDSecondary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestIDSecondary               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetQuestIDSecondary(const struct FString& QuestIDSecondary, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetQuestIDSecondary");

	UBP_MenuFunctionLibrary_C_SetQuestIDSecondary_Params params;
	params.QuestIDSecondary = QuestIDSecondary;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetQuestID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetQuestID(const struct FString& QuestID, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetQuestID");

	UBP_MenuFunctionLibrary_C_SetQuestID_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetOpenMapLocationSecondary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocationSecondary       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetOpenMapLocationSecondary(const struct FString& OpenMapLocationSecondary, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetOpenMapLocationSecondary");

	UBP_MenuFunctionLibrary_C_SetOpenMapLocationSecondary_Params params;
	params.OpenMapLocationSecondary = OpenMapLocationSecondary;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetOpenMapLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetOpenMapLocation(const struct FString& OpenMapLocation, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetOpenMapLocation");

	UBP_MenuFunctionLibrary_C_SetOpenMapLocation_Params params;
	params.OpenMapLocation = OpenMapLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBtlControlChara
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  CharaID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetBtlControlChara(class UObject* __WorldContext, EArisePartyID* CharaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBtlControlChara");

	UBP_MenuFunctionLibrary_C_GetBtlControlChara_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaID != nullptr)
		*CharaID = params.CharaID;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.NotifyOnChangeEquipment
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_NotifyOnChangeEquipment(EArisePartyID PartyId, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.NotifyOnChangeEquipment");

	UBP_MenuFunctionLibrary_C_NotifyOnChangeEquipment_Params params;
	params.PartyId = PartyId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetCharaOffset
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetCharaOffset(const struct FVector2D& Offset, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetCharaOffset");

	UBP_MenuFunctionLibrary_C_SetCharaOffset_Params params;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetVisibilityHeaderWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetVisibilityHeaderWidget(ESlateVisibility InVisibility, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetVisibilityHeaderWidget");

	UBP_MenuFunctionLibrary_C_SetVisibilityHeaderWidget_Params params;
	params.InVisibility = InVisibility;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetBtlUsetItemID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetBtlUsetItemID(const struct FString& ItemID, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetBtlUsetItemID");

	UBP_MenuFunctionLibrary_C_SetBtlUsetItemID_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBtlItemID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BtlItemID                      (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetBtlItemID(class UObject* __WorldContext, struct FString* BtlItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBtlItemID");

	UBP_MenuFunctionLibrary_C_GetBtlItemID_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlItemID != nullptr)
		*BtlItemID = params.BtlItemID;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetIsNewGameStart
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNewGameStart                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetIsNewGameStart(class UObject* __WorldContext, bool* IsNewGameStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetIsNewGameStart");

	UBP_MenuFunctionLibrary_C_GetIsNewGameStart_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNewGameStart != nullptr)
		*IsNewGameStart = params.IsNewGameStart;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetIsNewGameStart
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNewGameStart                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetIsNewGameStart(bool IsNewGameStart, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetIsNewGameStart");

	UBP_MenuFunctionLibrary_C_SetIsNewGameStart_Params params;
	params.IsNewGameStart = IsNewGameStart;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetNextSceneID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetNextSceneID(class UObject* __WorldContext, struct FString* NextSceneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetNextSceneID");

	UBP_MenuFunctionLibrary_C_GetNextSceneID_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetHeaderNameTopMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InMenuID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDictionaryText         InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetHeaderNameTopMenu");

	UBP_MenuFunctionLibrary_C_SetHeaderNameTopMenu_Params params;
	params.InMenuID = InMenuID;
	params.InText = InText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetSaveDataLoaded
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetSaveDataLoaded(bool Loaded, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetSaveDataLoaded");

	UBP_MenuFunctionLibrary_C_SetSaveDataLoaded_Params params;
	params.Loaded = Loaded;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.PrepareToCloseView
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextMenuID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_PrepareToCloseView(const struct FString& NextMenuID, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.PrepareToCloseView");

	UBP_MenuFunctionLibrary_C_PrepareToCloseView_Params params;
	params.NextMenuID = NextMenuID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetHeaderIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           WithAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetHeaderIcon(const struct FString& MenuID, bool WithAnimation, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetHeaderIcon");

	UBP_MenuFunctionLibrary_C_SetHeaderIcon_Params params;
	params.MenuID = MenuID;
	params.WithAnimation = WithAnimation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetMenuLoadedSlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoadedSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetMenuLoadedSlot(int LoadedSlot, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetMenuLoadedSlot");

	UBP_MenuFunctionLibrary_C_SetMenuLoadedSlot_Params params;
	params.LoadedSlot = LoadedSlot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ShowMenuHelpWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_ShowMenuHelpWidget(class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ShowMenuHelpWidget");

	UBP_MenuFunctionLibrary_C_ShowMenuHelpWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetCurrentMenuID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetCurrentMenuID(class UObject* __WorldContext, struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetCurrentMenuID");

	UBP_MenuFunctionLibrary_C_GetCurrentMenuID_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuHelpWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             HelpWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetMenuHelpWidget(class UObject* __WorldContext, class UUserWidget** HelpWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuHelpWidget");

	UBP_MenuFunctionLibrary_C_GetMenuHelpWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HelpWidget != nullptr)
		*HelpWidget = params.HelpWidget;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuPadProcess
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetMenuPadProcess(class UObject* __WorldContext, class AMenuPadProcess** PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuPadProcess");

	UBP_MenuFunctionLibrary_C_GetMenuPadProcess_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PadProcess != nullptr)
		*PadProcess = params.PadProcess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetIsTitleMoviePlay
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTitleMoviePlay               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetIsTitleMoviePlay(class UObject* __WorldContext, bool* IsTitleMoviePlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetIsTitleMoviePlay");

	UBP_MenuFunctionLibrary_C_GetIsTitleMoviePlay_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTitleMoviePlay != nullptr)
		*IsTitleMoviePlay = params.IsTitleMoviePlay;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuBGType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuBGType                    BGType                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetMenuBGType(class UObject* __WorldContext, EMenuBGType* BGType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuBGType");

	UBP_MenuFunctionLibrary_C_GetMenuBGType_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGType != nullptr)
		*BGType = params.BGType;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuPrevSceneCount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetMenuPrevSceneCount(class UObject* __WorldContext, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuPrevSceneCount");

	UBP_MenuFunctionLibrary_C_GetMenuPrevSceneCount_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsSaveDataLoaded
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_IsSaveDataLoaded(class UObject* __WorldContext, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsSaveDataLoaded");

	UBP_MenuFunctionLibrary_C_IsSaveDataLoaded_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MenuOpen
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APlayerController*       OwnerPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideCapture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_MenuOpen(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MenuOpen");

	UBP_MenuFunctionLibrary_C_MenuOpen_Params params;
	params.MenuID = MenuID;
	params.OwnerPlayer = OwnerPlayer;
	params.HideCapture = HideCapture;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsMenuClose
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_IsMenuClose(class UObject* __WorldContext, bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsMenuClose");

	UBP_MenuFunctionLibrary_C_IsMenuClose_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuManagerInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTO14_BP_MenuManagerInterface_C> MenuManagerInterface           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_GetMenuManagerInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* MenuManagerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuManagerInterface");

	UBP_MenuFunctionLibrary_C_GetMenuManagerInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuManagerInterface != nullptr)
		*MenuManagerInterface = params.MenuManagerInterface;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuSysUpdated
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUpdated                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CheckMenuSysUpdated(class UObject* __WorldContext, bool* IsUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuSysUpdated");

	UBP_MenuFunctionLibrary_C_CheckMenuSysUpdated_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUpdated != nullptr)
		*IsUpdated = params.IsUpdated;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPauseMenuOpenType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPauseMenuOpenType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPauseMenuOpenType> UBP_MenuFunctionLibrary_C::STATIC_GetPauseMenuOpenType(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPauseMenuOpenType");

	UBP_MenuFunctionLibrary_C_GetPauseMenuOpenType_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ClearMenuUpdatedByData
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuData               MenuData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_ClearMenuUpdatedByData(const struct FMenuData& MenuData, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ClearMenuUpdatedByData");

	UBP_MenuFunctionLibrary_C_ClearMenuUpdatedByData_Params params;
	params.MenuData = MenuData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ClearMenuUpdatedByID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_ClearMenuUpdatedByID(const struct FString& MenuID, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ClearMenuUpdatedByID");

	UBP_MenuFunctionLibrary_C_ClearMenuUpdatedByID_Params params;
	params.MenuID = MenuID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByDataBase
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuData               MenuData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUpdated                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CheckMenuUpdatedByDataBase(const struct FMenuData& MenuData, class UObject* __WorldContext, bool* IsUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByDataBase");

	UBP_MenuFunctionLibrary_C_CheckMenuUpdatedByDataBase_Params params;
	params.MenuData = MenuData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUpdated != nullptr)
		*IsUpdated = params.IsUpdated;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuData               MenuData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUpdated                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CheckMenuUpdatedByData(const struct FMenuData& MenuData, class UObject* __WorldContext, bool* IsUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByData");

	UBP_MenuFunctionLibrary_C_CheckMenuUpdatedByData_Params params;
	params.MenuData = MenuData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUpdated != nullptr)
		*IsUpdated = params.IsUpdated;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuColUpdated
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUpdated                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CheckMenuColUpdated(class UObject* __WorldContext, bool* IsUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuColUpdated");

	UBP_MenuFunctionLibrary_C_CheckMenuColUpdated_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUpdated != nullptr)
		*IsUpdated = params.IsUpdated;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUpdated                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CheckMenuUpdatedByID(const struct FString& MenuID, class UObject* __WorldContext, bool* IsUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByID");

	UBP_MenuFunctionLibrary_C_CheckMenuUpdatedByID_Params params;
	params.MenuID = MenuID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUpdated != nullptr)
		*IsUpdated = params.IsUpdated;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetIntWithSpace
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseTextWidget*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Digit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetIntWithSpace(class UAriseTextWidget* Target, int Num, int Digit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetIntWithSpace");

	UBP_MenuFunctionLibrary_C_SetIntWithSpace_Params params;
	params.Target = Target;
	params.Num = Num;
	params.Digit = Digit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.TickMaterialWhenPaused
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoTick                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_TickMaterialWhenPaused(bool DoTick, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.TickMaterialWhenPaused");

	UBP_MenuFunctionLibrary_C_TickMaterialWhenPaused_Params params;
	params.DoTick = DoTick;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedTextByIndex
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShortName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScenarioCounter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           Text                           (Parm, OutParm)

void UBP_MenuFunctionLibrary_C::STATIC_GetLocationNameModifiedTextByIndex(int Index, bool IsShortName, int ScenarioCounter, class UObject* __WorldContext, struct FModifiedText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedTextByIndex");

	UBP_MenuFunctionLibrary_C_GetLocationNameModifiedTextByIndex_Params params;
	params.Index = Index;
	params.IsShortName = IsShortName;
	params.ScenarioCounter = ScenarioCounter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsDEQ_Closed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ScenarioCounter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MenuFunctionLibrary_C::STATIC_IsDEQ_Closed(const struct FString& AreaName, int ScenarioCounter, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsDEQ_Closed");

	UBP_MenuFunctionLibrary_C_IsDEQ_Closed_Params params;
	params.AreaName = AreaName;
	params.ScenarioCounter = ScenarioCounter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.AllowInputChangeMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_AllowInputChangeMenu(class UObject* __WorldContext, bool* bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.AllowInputChangeMenu");

	UBP_MenuFunctionLibrary_C_AllowInputChangeMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllow != nullptr)
		*bAllow = params.bAllow;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.StartEndingScene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_StartEndingScene(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.StartEndingScene");

	UBP_MenuFunctionLibrary_C_StartEndingScene_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedTextBase
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        LocationData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsShortName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScenarioCounter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           Text                           (Parm, OutParm)

void UBP_MenuFunctionLibrary_C::STATIC_GetLocationNameModifiedTextBase(const struct FMapLocationData& LocationData, bool IsShortName, int ScenarioCounter, class UObject* __WorldContext, struct FModifiedText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedTextBase");

	UBP_MenuFunctionLibrary_C_GetLocationNameModifiedTextBase_Params params;
	params.LocationData = LocationData;
	params.IsShortName = IsShortName;
	params.ScenarioCounter = ScenarioCounter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMapLinkNameModifiedText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 CurrentLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           Text                           (Parm, OutParm)

void UBP_MenuFunctionLibrary_C::STATIC_GetMapLinkNameModifiedText(const struct FString& NextLocation, const struct FString& CurrentLocation, class UObject* __WorldContext, struct FModifiedText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMapLinkNameModifiedText");

	UBP_MenuFunctionLibrary_C_GetMapLinkNameModifiedText_Params params;
	params.NextLocation = NextLocation;
	params.CurrentLocation = CurrentLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetMenuInputHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetMenuInputHelp(const struct FString& Label, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetMenuInputHelp");

	UBP_MenuFunctionLibrary_C_SetMenuInputHelp_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.FadeInForMenuLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_FadeInForMenuLevel(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.FadeInForMenuLevel");

	UBP_MenuFunctionLibrary_C_FadeInForMenuLevel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.FadeOutForMenuLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_FadeOutForMenuLevel(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.FadeOutForMenuLevel");

	UBP_MenuFunctionLibrary_C_FadeOutForMenuLevel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.PFMenuPartyTopChanged
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_PFMenuPartyTopChanged(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.PFMenuPartyTopChanged");

	UBP_MenuFunctionLibrary_C_PFMenuPartyTopChanged_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuArtsSettingChanged
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_BattleMenuArtsSettingChanged(EArisePartyID PartyId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuArtsSettingChanged");

	UBP_MenuFunctionLibrary_C_BattleMenuArtsSettingChanged_Params params;
	params.PartyId = PartyId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsShortName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           Text                           (Parm, OutParm)

void UBP_MenuFunctionLibrary_C::STATIC_GetLocationNameModifiedText(const struct FString& Location, bool IsShortName, class UObject* __WorldContext, struct FModifiedText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedText");

	UBP_MenuFunctionLibrary_C_GetLocationNameModifiedText_Params params;
	params.Location = Location;
	params.IsShortName = IsShortName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuTacticsRefreshRequest
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_BattleMenuTacticsRefreshRequest(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuTacticsRefreshRequest");

	UBP_MenuFunctionLibrary_C_BattleMenuTacticsRefreshRequest_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuWeaponChanged
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WeaponItemLabel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_BattleMenuWeaponChanged(EArisePartyID PartyId, const struct FName& WeaponItemLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuWeaponChanged");

	UBP_MenuFunctionLibrary_C_BattleMenuWeaponChanged_Params params;
	params.PartyId = PartyId;
	params.WeaponItemLabel = WeaponItemLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetBattleMenuArtsParam
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_SetBattleMenuArtsParam(EArisePartyID User, const struct FName& ArtsLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetBattleMenuArtsParam");

	UBP_MenuFunctionLibrary_C_SetBattleMenuArtsParam_Params params;
	params.User = User;
	params.ArtsLabel = ArtsLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBattleMenuParam
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleMenuParam        Param                          (Parm, OutParm)

void UBP_MenuFunctionLibrary_C::STATIC_GetBattleMenuParam(class UObject* __WorldContext, struct FBattleMenuParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBattleMenuParam");

	UBP_MenuFunctionLibrary_C_GetBattleMenuParam_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CursorAnimationUpdate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_CURSOR_C* CursorWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PauseTime                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CursorAnimationUpdate(class UTO14_BPI_GUI_SYS_CURSOR_C* CursorWidget, bool IsActive, bool IsSelect, class UObject* __WorldContext, float* PauseTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CursorAnimationUpdate");

	UBP_MenuFunctionLibrary_C_CursorAnimationUpdate_Params params;
	params.CursorWidget = CursorWidget;
	params.IsActive = IsActive;
	params.IsSelect = IsSelect;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PauseTime != nullptr)
		*PauseTime = params.PauseTime;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CursorControl
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_CURSOR_C* CursorWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFunctionLibrary_C::STATIC_CursorControl(class UTO14_BPI_GUI_SYS_CURSOR_C* CursorWidget, bool IsActive, bool IsSelect, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CursorControl");

	UBP_MenuFunctionLibrary_C_CursorControl_Params params;
	params.CursorWidget = CursorWidget;
	params.IsActive = IsActive;
	params.IsSelect = IsSelect;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPartyIDList(Enum)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EArisePartyID>          List_Enum_                     (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetPartyIDList_Enum_(class UObject* __WorldContext, TArray<EArisePartyID>* List_Enum_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPartyIDList(Enum)");

	UBP_MenuFunctionLibrary_C_GetPartyIDList_Enum__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List_Enum_ != nullptr)
		*List_Enum_ = params.List_Enum_;
}


// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPartyIDList(int)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    List                           (Parm, OutParm, ZeroConstructor)

void UBP_MenuFunctionLibrary_C::STATIC_GetPartyIDList_int_(class UObject* __WorldContext, TArray<int>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPartyIDList(int)");

	UBP_MenuFunctionLibrary_C_GetPartyIDList_int__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
