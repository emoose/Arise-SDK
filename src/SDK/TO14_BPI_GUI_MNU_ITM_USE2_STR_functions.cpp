
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

// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetMouseEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::SetMouseEnable(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetMouseEnable");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetMouseEnable_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.IsBarAnimationPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::IsBarAnimationPlaying(bool* Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.IsBarAnimationPlaying");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_IsBarAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play != nullptr)
		*Play = params.Play;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ResetHPGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::ResetHPGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ResetHPGauge");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_ResetHPGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetPreviewHealArts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  UseCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DefaultState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::SetPreviewHealArts(EArisePartyID UseCharacter, const struct FName& ArtsLabel, bool DefaultState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetPreviewHealArts");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetPreviewHealArts_Params params;
	params.UseCharacter = UseCharacter;
	params.ArtsLabel = ArtsLabel;
	params.DefaultState = DefaultState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.TextUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::TextUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.TextUpdate");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_TextUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.PlayUseAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::PlayUseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.PlayUseAnimation");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_PlayUseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetPreviewItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DefaultState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::SetPreviewItemID(int ItemID, int Type, bool DefaultState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetPreviewItemID");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetPreviewItemID_Params params;
	params.ItemID = ItemID;
	params.Type = Type;
	params.DefaultState = DefaultState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ReleaseImage
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::ReleaseImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ReleaseImage");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_ReleaseImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::UpdateHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UpdateHP");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UpdateHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetCharacterID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BattleSubMember                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::SetCharacterID(int CharacterID, bool BattleSubMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetCharacterID");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetCharacterID_Params params;
	params.CharacterID = CharacterID;
	params.BattleSubMember = BattleSubMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetViewType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::SetViewType(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.SetViewType");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_SetViewType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UseHPWork
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::UseHPWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UseHPWork");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UseHPWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_STR");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UseChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::UseChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UseChange__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UseChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UsableCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_STR_C::UsableCheck__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2_STR.TO14_BPI_GUI_MNU_ITM_USE2_STR_C.UsableCheck__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_USE2_STR_C_UsableCheck__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
