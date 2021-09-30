
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

// Function AriseText.AriseTextChangeStringWidget.ResetStringDictionaryID
// (Final, Native, Private)

void UAriseTextChangeStringWidget::ResetStringDictionaryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextChangeStringWidget.ResetStringDictionaryID");

	UAriseTextChangeStringWidget_ResetStringDictionaryID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextChangeStringWidget.OnTextCommited
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UAriseTextChangeStringWidget::OnTextCommited(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextChangeStringWidget.OnTextCommited");

	UAriseTextChangeStringWidget_OnTextCommited_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextChangeStringWidget.Close
// (Final, Native, Private)

void UAriseTextChangeStringWidget::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextChangeStringWidget.Close");

	UAriseTextChangeStringWidget_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextChangeStringWidget.ApplyCurrentStringDictionaryID
// (Final, Native, Private)

void UAriseTextChangeStringWidget::ApplyCurrentStringDictionaryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextChangeStringWidget.ApplyCurrentStringDictionaryID");

	UAriseTextChangeStringWidget_ApplyCurrentStringDictionaryID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.UnbindRestructEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRestructEvent          BindEvent                      (ConstParm, Parm, OutParm, ReferenceParm)

void UAriseTextWidget::STATIC_UnbindRestructEvent(const struct FRestructEvent& BindEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.UnbindRestructEvent");

	UAriseTextWidget_UnbindRestructEvent_Params params;
	params.BindEvent = BindEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetTranslatedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 inString                       (Parm, ZeroConstructor)
// struct FName                   typeFaceName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 inIdForDebug                   (Parm, ZeroConstructor)

void UAriseTextWidget::SetTranslatedText(const struct FString& inString, const struct FName& typeFaceName, const struct FString& inIdForDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetTranslatedText");

	UAriseTextWidget_SetTranslatedText_Params params;
	params.inString = inString;
	params.typeFaceName = typeFaceName;
	params.inIdForDebug = inIdForDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UAriseTextWidget::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetText");

	UAriseTextWidget_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetStringDictionaryID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UAriseTextWidget::SetStringDictionaryID(const struct FString& Group, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetStringDictionaryID");

	UAriseTextWidget_SetStringDictionaryID_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InText                         (Parm, ZeroConstructor)
// struct FString                 inIdForDebug                   (Parm, ZeroConstructor)

void UAriseTextWidget::SetString(const struct FString& InText, const struct FString& inIdForDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetString");

	UAriseTextWidget_SetString_Params params;
	params.InText = InText;
	params.inIdForDebug = inIdForDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InShadowOffset                 (Parm, IsPlainOldData)

void UAriseTextWidget::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetShadowOffset");

	UAriseTextWidget_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (Parm, IsPlainOldData)

void UAriseTextWidget::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetShadowColorAndOpacity");

	UAriseTextWidget_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetPageIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseTextWidget::SetPageIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetPageIndex");

	UAriseTextWidget_SetPageIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.SetOutlineColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InOutlineColor                 (Parm, IsPlainOldData)

void UAriseTextWidget::SetOutlineColor(const struct FLinearColor& InOutlineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetOutlineColor");

	UAriseTextWidget_SetOutlineColor_Params params;
	params.InOutlineColor = InOutlineColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)

void UAriseTextWidget::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetOpacity");

	UAriseTextWidget_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetModifiedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModifiedText           iModText                       (Parm)

void UAriseTextWidget::SetModifiedText(const struct FModifiedText& iModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetModifiedText");

	UAriseTextWidget_SetModifiedText_Params params;
	params.iModText = iModText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextJustify>      InJustification                (Parm, ZeroConstructor, IsPlainOldData)

void UAriseTextWidget::SetJustification(TEnumAsByte<ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetJustification");

	UAriseTextWidget_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetIntegerAsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAriseTextWidget::SetIntegerAsText(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetIntegerAsText");

	UAriseTextWidget_SetIntegerAsText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (Parm)

void UAriseTextWidget::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetFont");

	UAriseTextWidget_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetFDictionaryText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDictionaryText         iDicText                       (Parm)

void UAriseTextWidget::SetFDictionaryText(const struct FDictionaryText& iDicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetFDictionaryText");

	UAriseTextWidget_SetFDictionaryText_Params params;
	params.iDicText = iDicText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetDictionaryText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UAriseTextWidget::SetDictionaryText(const struct FString& Group, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetDictionaryText");

	UAriseTextWidget_SetDictionaryText_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetCurrentPlayerController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AInputExtPlayerController* iController                    (Parm, ZeroConstructor, IsPlainOldData)

void UAriseTextWidget::STATIC_SetCurrentPlayerController(class AInputExtPlayerController* iController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetCurrentPlayerController");

	UAriseTextWidget_SetCurrentPlayerController_Params params;
	params.iController = iController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor             InColorAndOpacity              (Parm)

void UAriseTextWidget::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetColorAndOpacity");

	UAriseTextWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.SetButtonIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Button                         (Parm, ZeroConstructor)
// bool                           bIsFull                        (Parm, ZeroConstructor, IsPlainOldData)

void UAriseTextWidget::SetButtonIcon(const struct FString& Button, bool bIsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.SetButtonIcon");

	UAriseTextWidget_SetButtonIcon_Params params;
	params.Button = Button;
	params.bIsFull = bIsFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.RestructAll_Deprecated
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseTextWidget::STATIC_RestructAll_Deprecated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.RestructAll_Deprecated");

	UAriseTextWidget_RestructAll_Deprecated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.RestructAll
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseTextWidget::STATIC_RestructAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.RestructAll");

	UAriseTextWidget_RestructAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.Restruct
// (Final, Native, Public, BlueprintCallable)

void UAriseTextWidget::Restruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.Restruct");

	UAriseTextWidget_Restruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.RefreshList
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseTextWidget::STATIC_RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.RefreshList");

	UAriseTextWidget_RefreshList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.PrevPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseTextWidget::PrevPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.PrevPage");

	UAriseTextWidget_PrevPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.NextPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseTextWidget::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.NextPage");

	UAriseTextWidget_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.LogList
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseTextWidget::STATIC_LogList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.LogList");

	UAriseTextWidget_LogList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.AriseTextWidget.IsLastPage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseTextWidget::IsLastPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.IsLastPage");

	UAriseTextWidget_IsLastPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.IsEnableReplace
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ButtonName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseTextWidget::STATIC_IsEnableReplace(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.IsEnableReplace");

	UAriseTextWidget_IsEnableReplace_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.GetTextInternal
// (Final, Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAriseTextWidget::GetTextInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.GetTextInternal");

	UAriseTextWidget_GetTextInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAriseTextWidget::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.GetText");

	UAriseTextWidget_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction AriseText.AriseTextWidget.GetString__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAriseTextWidget::GetString__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AriseText.AriseTextWidget.GetString__DelegateSignature");

	UAriseTextWidget_GetString__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.GetPageNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseTextWidget::GetPageNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.GetPageNum");

	UAriseTextWidget_GetPageNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.GetPageIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseTextWidget::GetPageIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.GetPageIndex");

	UAriseTextWidget_GetPageIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction AriseText.AriseTextWidget.GetDictionaryText__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FDictionaryText         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDictionaryText UAriseTextWidget::GetDictionaryText__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AriseText.AriseTextWidget.GetDictionaryText__DelegateSignature");

	UAriseTextWidget_GetDictionaryText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.GetCurrentButtonIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseTextWidget::STATIC_GetCurrentButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.GetCurrentButtonIcon");

	UAriseTextWidget_GetCurrentButtonIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.AriseTextWidget.BindRestructEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRestructEvent          BindEvent                      (ConstParm, Parm, OutParm, ReferenceParm)

void UAriseTextWidget::STATIC_BindRestructEvent(const struct FRestructEvent& BindEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.AriseTextWidget.BindRestructEvent");

	UAriseTextWidget_BindRestructEvent_Params params;
	params.BindEvent = BindEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseText.ModifiedTextLibrary.SetStringByID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           inModText1                     (Parm, OutParm)
// struct FString                 iGroup                         (Parm, ZeroConstructor)
// struct FString                 iId                            (Parm, ZeroConstructor)

void UModifiedTextLibrary::STATIC_SetStringByID(const struct FString& iGroup, const struct FString& iId, struct FModifiedText* inModText1)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.SetStringByID");

	UModifiedTextLibrary_SetStringByID_Params params;
	params.iGroup = iGroup;
	params.iId = iId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModText1 != nullptr)
		*inModText1 = params.inModText1;
}


// Function AriseText.ModifiedTextLibrary.SetString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           inModText1                     (Parm, OutParm)
// struct FString                 iString                        (Parm, ZeroConstructor)
// struct FString                 iDebugId                       (Parm, ZeroConstructor)

void UModifiedTextLibrary::STATIC_SetString(const struct FString& iString, const struct FString& iDebugId, struct FModifiedText* inModText1)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.SetString");

	UModifiedTextLibrary_SetString_Params params;
	params.iString = iString;
	params.iDebugId = iDebugId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModText1 != nullptr)
		*inModText1 = params.inModText1;
}


// Function AriseText.ModifiedTextLibrary.SetIntValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_SetIntValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.SetIntValue");

	UModifiedTextLibrary_SetIntValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.SetIntPlacedValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            numberOfDigits                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_SetIntPlacedValue(int Value, int numberOfDigits)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.SetIntPlacedValue");

	UModifiedTextLibrary_SetIntPlacedValue_Params params;
	params.Value = Value;
	params.numberOfDigits = numberOfDigits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.SetDictionaryText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           inModText1                     (Parm, OutParm)
// struct FDictionaryText         iDicText                       (ConstParm, Parm, OutParm, ReferenceParm)

void UModifiedTextLibrary::STATIC_SetDictionaryText(const struct FDictionaryText& iDicText, struct FModifiedText* inModText1)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.SetDictionaryText");

	UModifiedTextLibrary_SetDictionaryText_Params params;
	params.iDicText = iDicText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModText1 != nullptr)
		*inModText1 = params.inModText1;
}


// Function AriseText.ModifiedTextLibrary.SetButtonIcon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Button                         (ConstParm, Parm, ZeroConstructor)
// bool                           bIsFull                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_SetButtonIcon(const struct FString& Button, bool bIsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.SetButtonIcon");

	UModifiedTextLibrary_SetButtonIcon_Params params;
	params.Button = Button;
	params.bIsFull = bIsFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.ReplaceString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 inPlacement                    (ConstParm, Parm, ZeroConstructor)
// struct FModifiedText           Value                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_ReplaceString(const struct FModifiedText& InText, const struct FString& inPlacement, const struct FModifiedText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.ReplaceString");

	UModifiedTextLibrary_ReplaceString_Params params;
	params.InText = InText;
	params.inPlacement = inPlacement;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.ReplaceIntPlaced
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 inPlacement                    (ConstParm, Parm, ZeroConstructor)
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            numberOfDigits                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_ReplaceIntPlaced(const struct FModifiedText& InText, const struct FString& inPlacement, int Value, int numberOfDigits)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.ReplaceIntPlaced");

	UModifiedTextLibrary_ReplaceIntPlaced_Params params;
	params.InText = InText;
	params.inPlacement = inPlacement;
	params.Value = Value;
	params.numberOfDigits = numberOfDigits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.ReplaceInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 inPlacement                    (ConstParm, Parm, ZeroConstructor)
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_ReplaceInt(const struct FModifiedText& InText, const struct FString& inPlacement, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.ReplaceInt");

	UModifiedTextLibrary_ReplaceInt_Params params;
	params.InText = InText;
	params.inPlacement = inPlacement;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.ReplaceFloatPlaced
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 inPlacement                    (ConstParm, Parm, ZeroConstructor)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            numberOfDigits                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            decimalPlaces                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_ReplaceFloatPlaced(const struct FModifiedText& InText, const struct FString& inPlacement, float Value, int numberOfDigits, int decimalPlaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.ReplaceFloatPlaced");

	UModifiedTextLibrary_ReplaceFloatPlaced_Params params;
	params.InText = InText;
	params.inPlacement = inPlacement;
	params.Value = Value;
	params.numberOfDigits = numberOfDigits;
	params.decimalPlaces = decimalPlaces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.ReplaceFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 inPlacement                    (ConstParm, Parm, ZeroConstructor)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_ReplaceFloat(const struct FModifiedText& InText, const struct FString& inPlacement, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.ReplaceFloat");

	UModifiedTextLibrary_ReplaceFloat_Params params;
	params.InText = InText;
	params.inPlacement = inPlacement;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.ReplaceBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 inPlacement                    (ConstParm, Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           inTrueString                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           inFalseString                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_ReplaceBool(const struct FModifiedText& InText, const struct FString& inPlacement, bool Value, const struct FModifiedText& inTrueString, const struct FModifiedText& inFalseString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.ReplaceBool");

	UModifiedTextLibrary_ReplaceBool_Params params;
	params.InText = InText;
	params.inPlacement = inPlacement;
	params.Value = Value;
	params.inTrueString = inTrueString;
	params.inFalseString = inFalseString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.RemoveLineFeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           iText                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_RemoveLineFeed(const struct FModifiedText& iText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.RemoveLineFeed");

	UModifiedTextLibrary_RemoveLineFeed_Params params;
	params.iText = iText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.MakeModifiedText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 iString                        (Parm, ZeroConstructor)
// struct FString                 iDebugId                       (Parm, ZeroConstructor)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_MakeModifiedText(const struct FString& iString, const struct FString& iDebugId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.MakeModifiedText");

	UModifiedTextLibrary_MakeModifiedText_Params params;
	params.iString = iString;
	params.iDebugId = iDebugId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModifiedText           inModText1                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifiedTextLibrary::STATIC_IsValid(const struct FModifiedText& inModText1)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.IsValid");

	UModifiedTextLibrary_IsValid_Params params;
	params.inModText1 = inModText1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.GetString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           inModText1                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 oString                        (Parm, OutParm, ZeroConstructor)
// struct FString                 oDebugId                       (Parm, OutParm, ZeroConstructor)

void UModifiedTextLibrary::STATIC_GetString(const struct FModifiedText& inModText1, struct FString* oString, struct FString* oDebugId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.GetString");

	UModifiedTextLibrary_GetString_Params params;
	params.inModText1 = inModText1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oString != nullptr)
		*oString = params.oString;
	if (oDebugId != nullptr)
		*oDebugId = params.oDebugId;
}


// Function AriseText.ModifiedTextLibrary.GetPageNum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           iText                          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UModifiedTextLibrary::STATIC_GetPageNum(const struct FModifiedText& iText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.GetPageNum");

	UModifiedTextLibrary_GetPageNum_Params params;
	params.iText = iText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.DictionaryTextToModifiedText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDictionaryText         InText                         (Parm)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_DictionaryTextToModifiedText(const struct FDictionaryText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.DictionaryTextToModifiedText");

	UModifiedTextLibrary_DictionaryTextToModifiedText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.CombineWithPage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           inModText1                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           inModText2                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_CombineWithPage(const struct FModifiedText& inModText1, const struct FModifiedText& inModText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.CombineWithPage");

	UModifiedTextLibrary_CombineWithPage_Params params;
	params.inModText1 = inModText1;
	params.inModText2 = inModText2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.Combine
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           inModText1                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           inModText2                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FModifiedText           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifiedText UModifiedTextLibrary::STATIC_Combine(const struct FModifiedText& inModText1, const struct FModifiedText& inModText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.Combine");

	UModifiedTextLibrary_Combine_Params params;
	params.inModText1 = inModText1;
	params.inModText2 = inModText2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseText.ModifiedTextLibrary.ClearModifiedText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModifiedText           iText                          (Parm, OutParm, ReferenceParm)

void UModifiedTextLibrary::STATIC_ClearModifiedText(struct FModifiedText* iText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseText.ModifiedTextLibrary.ClearModifiedText");

	UModifiedTextLibrary_ClearModifiedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (iText != nullptr)
		*iText = params.iText;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
