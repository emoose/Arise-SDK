
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

// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetAbnormalIcon
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::SetAbnormalIcon(int StartIndex, struct FName* ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetAbnormalIcon");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetAbnormalIcon_Params params;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsLabel != nullptr)
		*ArtsLabel = params.ArtsLabel;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.Refresh");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetMaterial
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::SetMaterial(const struct FName& RowName, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetMaterial");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetMaterial_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.GetData
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_TIT2_SKL_EXP_DATA   Data                           (Parm, OutParm)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::GetData(const struct FName& RowName, bool* Valid, struct FST_TIT2_SKL_EXP_DATA* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.GetData");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_GetData_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_PRE_LEARN
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAliasDataString        Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FModifiedText           CompBonusText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsAlias_PRE_LEARN(const struct FModifiedText& CompBonusText, struct FAliasDataString* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_PRE_LEARN");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_PRE_LEARN_Params params;
	params.CompBonusText = CompBonusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_ICON
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS_IMG_ICON(int IconNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_ICON");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_IMG_ICON_Params params;
	params.IconNo = IconNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetCharaID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::SetCharaID(EArisePartyID CharaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetCharaID");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetCharaID_Params params;
	params.CharaID = CharaID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_TYPE1
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS_FONT_TYPE1(const struct FDictionaryText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_TYPE1");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_TYPE1_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_TYPE2
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  CharaID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS_FONT_TYPE2(EArisePartyID CharaID, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_TYPE2");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_TYPE2_Params params;
	params.CharaID = CharaID;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_TYPE
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS_IMG_TYPE(const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_TYPE");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_IMG_TYPE_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_ELEM
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EBtlElementType>        Elements                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS_IMG_ELEM(TArray<EBtlElementType> Elements, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_IMG_ELEM");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_IMG_ELEM_Params params;
	params.Elements = Elements;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_AEV
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AEV                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS_FONT_AEV(int AEV)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_AEV");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_AEV_Params params;
	params.AEV = AEV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_SP
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS_FONT_SP(int SP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS_FONT_SP");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_FONT_SP_Params params;
	params.SP = SP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetRisePoint
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::SetRisePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.SetRisePoint");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_SetRisePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlSkillData           SkillData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill_MAS(const struct FBtlSkillData& SkillData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill_MAS");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_MAS_Params params;
	params.SkillData = SkillData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_DISABLE
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAliasDataString        Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bScenarioOK                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsAlias_DISABLE(bool bScenarioOK, int AliasID, struct FAliasDataString* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_DISABLE");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_DISABLE_Params params;
	params.bScenarioOK = bScenarioOK;
	params.AliasID = AliasID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_ENABLE
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAliasDataString        Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bScenarioOK                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsAlias_ENABLE(bool bScenarioOK, int AliasID, struct FAliasDataString* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_ENABLE");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_ENABLE_Params params;
	params.bScenarioOK = bScenarioOK;
	params.AliasID = AliasID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_LEARN
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAliasDataString        Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FModifiedText           CompBonusText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsAlias_LEARN(const struct FModifiedText& CompBonusText, struct FAliasDataString* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_LEARN");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_LEARN_Params params;
	params.CompBonusText = CompBonusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_COMP
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAliasDataString        Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FModifiedText           CompBonusText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsAlias_COMP(const struct FModifiedText& CompBonusText, struct FAliasDataString* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias_COMP");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_COMP_Params params;
	params.CompBonusText = CompBonusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Alias_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsAlias(int Alias_ID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsAlias");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsAlias_Params params;
	params.Alias_ID = Alias_ID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Alias_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::RefreshAsSkill(int Alias_ID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.RefreshAsSkill");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_RefreshAsSkill_Params params;
	params.Alias_ID = Alias_ID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestSkillShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Alias_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::CustomEvent_RequestSkillShow(int Alias_ID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestSkillShow");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_CustomEvent_RequestSkillShow_Params params;
	params.Alias_ID = Alias_ID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Alias_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::CustomEvent_RequestHide(int Alias_ID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestHide");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_CustomEvent_RequestHide_Params params;
	params.Alias_ID = Alias_ID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestAliasShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Alias_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::CustomEvent_RequestAliasShow(int Alias_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.CustomEvent_RequestAliasShow");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_CustomEvent_RequestAliasShow_Params params;
	params.Alias_ID = Alias_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.Construct");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_EXP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_EXP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_EXP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_EXP.TO14_BPI_GUI_MNU_TIT2_EXP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_EXP");

	UTO14_BPI_GUI_MNU_TIT2_EXP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_EXP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
