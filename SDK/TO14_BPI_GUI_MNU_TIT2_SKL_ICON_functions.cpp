
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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.GetArtsMovieName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::GetArtsMovieName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.GetArtsMovieName");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_GetArtsMovieName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.IsArts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsArts                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::IsArts(bool* IsArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.IsArts");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_IsArts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsArts != nullptr)
		*IsArts = params.IsArts;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.GetData
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_TIT2_SKL_ICON_DATA  Data                           (Parm, OutParm)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::GetData(const struct FName& RowName, bool* Valid, struct FST_TIT2_SKL_ICON_DATA* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.GetData");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_GetData_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlayLearnAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::PlayLearnAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlayLearnAnim");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_PlayLearnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.BindAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ANIM_DEFAULT_NO_LEARN          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        ANIM_DEFAULT_LEARNABLE         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        ANIM_DEFAULT_LEARN             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        ANIM_DEFAULT_COMPLETE          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        ANIM_SELECT                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        ANIM_LEARN                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        ANIM_COMPLETE                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::BindAnimation(class UWidgetAnimation* ANIM_DEFAULT_NO_LEARN, class UWidgetAnimation* ANIM_DEFAULT_LEARNABLE, class UWidgetAnimation* ANIM_DEFAULT_LEARN, class UWidgetAnimation* ANIM_DEFAULT_COMPLETE, class UWidgetAnimation* ANIM_SELECT, class UWidgetAnimation* ANIM_LEARN, class UWidgetAnimation* ANIM_COMPLETE)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.BindAnimation");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_BindAnimation_Params params;
	params.ANIM_DEFAULT_NO_LEARN = ANIM_DEFAULT_NO_LEARN;
	params.ANIM_DEFAULT_LEARNABLE = ANIM_DEFAULT_LEARNABLE;
	params.ANIM_DEFAULT_LEARN = ANIM_DEFAULT_LEARN;
	params.ANIM_DEFAULT_COMPLETE = ANIM_DEFAULT_COMPLETE;
	params.ANIM_SELECT = ANIM_SELECT;
	params.ANIM_LEARN = ANIM_LEARN;
	params.ANIM_COMPLETE = ANIM_COMPLETE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.Initailize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  CharaID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPanelPreLean                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPanelLearn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPanelComplete                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLearnable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLearn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeedOnSlotIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::Initailize(EArisePartyID CharaID, int SkillID, bool IsPanelPreLean, bool IsPanelLearn, bool IsPanelComplete, bool IsLearnable, bool IsLearn, bool NeedOnSlotIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.Initailize");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_Initailize_Params params;
	params.CharaID = CharaID;
	params.SkillID = SkillID;
	params.IsPanelPreLean = IsPanelPreLean;
	params.IsPanelLearn = IsPanelLearn;
	params.IsPanelComplete = IsPanelComplete;
	params.IsLearnable = IsLearnable;
	params.IsLearn = IsLearn;
	params.NeedOnSlotIcon = NeedOnSlotIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlayDeselectAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::PlayDeselectAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlayDeselectAnim");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_PlayDeselectAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlaySelectAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::PlaySelectAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlaySelectAnim");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_PlaySelectAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::Activate(bool IsActive, bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.Activate");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_Activate_Params params;
	params.IsActive = IsActive;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.SetVisibilityPAS
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::SetVisibilityPAS(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.SetVisibilityPAS");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_SetVisibilityPAS_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultNoLearn
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimDefaultNoLearn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultNoLearn");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultNoLearn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultLearnable
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimDefaultLearnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultLearnable");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultLearnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultLearn
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimDefaultLearn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultLearn");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultLearn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultComplete
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimDefaultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultComplete");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimComplete
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimComplete");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimLearn
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimLearn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimLearn");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimLearn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDeselect
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDeselect");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimSelect
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::OnAnimSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimSelect");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_ICON
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_ICON(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_ICON");

	UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_ICON_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
