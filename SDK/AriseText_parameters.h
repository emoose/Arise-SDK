#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AriseText.AriseTextChangeStringWidget.ResetStringDictionaryID
struct UAriseTextChangeStringWidget_ResetStringDictionaryID_Params
{
};

// Function AriseText.AriseTextChangeStringWidget.OnTextCommited
struct UAriseTextChangeStringWidget_OnTextCommited_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseText.AriseTextChangeStringWidget.Close
struct UAriseTextChangeStringWidget_Close_Params
{
};

// Function AriseText.AriseTextChangeStringWidget.ApplyCurrentStringDictionaryID
struct UAriseTextChangeStringWidget_ApplyCurrentStringDictionaryID_Params
{
};

// Function AriseText.AriseTextWidget.UnbindRestructEvent
struct UAriseTextWidget_UnbindRestructEvent_Params
{
	struct FRestructEvent                              BindEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AriseText.AriseTextWidget.SetTranslatedText
struct UAriseTextWidget_SetTranslatedText_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	struct FName                                       typeFaceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     inIdForDebug;                                             // (Parm, ZeroConstructor)
};

// Function AriseText.AriseTextWidget.SetText
struct UAriseTextWidget_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function AriseText.AriseTextWidget.SetStringDictionaryID
struct UAriseTextWidget_SetStringDictionaryID_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function AriseText.AriseTextWidget.SetString
struct UAriseTextWidget_SetString_Params
{
	struct FString                                     InText;                                                   // (Parm, ZeroConstructor)
	struct FString                                     inIdForDebug;                                             // (Parm, ZeroConstructor)
};

// Function AriseText.AriseTextWidget.SetShadowOffset
struct UAriseTextWidget_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           // (Parm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetShadowColorAndOpacity
struct UAriseTextWidget_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (Parm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetPageIndex
struct UAriseTextWidget_SetPageIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetOutlineColor
struct UAriseTextWidget_SetOutlineColor_Params
{
	struct FLinearColor                                InOutlineColor;                                           // (Parm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetOpacity
struct UAriseTextWidget_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetModifiedText
struct UAriseTextWidget_SetModifiedText_Params
{
	struct FModifiedText                               iModText;                                                 // (Parm)
};

// Function AriseText.AriseTextWidget.SetJustification
struct UAriseTextWidget_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetIntegerAsText
struct UAriseTextWidget_SetIntegerAsText_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetFont
struct UAriseTextWidget_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               // (Parm)
};

// Function AriseText.AriseTextWidget.SetFDictionaryText
struct UAriseTextWidget_SetFDictionaryText_Params
{
	struct FDictionaryText                             iDicText;                                                 // (Parm)
};

// Function AriseText.AriseTextWidget.SetDictionaryText
struct UAriseTextWidget_SetDictionaryText_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function AriseText.AriseTextWidget.SetCurrentPlayerController
struct UAriseTextWidget_SetCurrentPlayerController_Params
{
	class AInputExtPlayerController*                   iController;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.SetColorAndOpacity
struct UAriseTextWidget_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                        // (Parm)
};

// Function AriseText.AriseTextWidget.SetButtonIcon
struct UAriseTextWidget_SetButtonIcon_Params
{
	struct FString                                     Button;                                                   // (Parm, ZeroConstructor)
	bool                                               bIsFull;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.RestructAll_Deprecated
struct UAriseTextWidget_RestructAll_Deprecated_Params
{
};

// Function AriseText.AriseTextWidget.RestructAll
struct UAriseTextWidget_RestructAll_Params
{
};

// Function AriseText.AriseTextWidget.Restruct
struct UAriseTextWidget_Restruct_Params
{
};

// Function AriseText.AriseTextWidget.RefreshList
struct UAriseTextWidget_RefreshList_Params
{
};

// Function AriseText.AriseTextWidget.PrevPage
struct UAriseTextWidget_PrevPage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.NextPage
struct UAriseTextWidget_NextPage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.LogList
struct UAriseTextWidget_LogList_Params
{
};

// Function AriseText.AriseTextWidget.IsLastPage
struct UAriseTextWidget_IsLastPage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.IsEnableReplace
struct UAriseTextWidget_IsEnableReplace_Params
{
	struct FName                                       ButtonName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.GetTextInternal
struct UAriseTextWidget_GetTextInternal_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.AriseTextWidget.GetText
struct UAriseTextWidget_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction AriseText.AriseTextWidget.GetString__DelegateSignature
struct UAriseTextWidget_GetString__DelegateSignature_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseText.AriseTextWidget.GetPageNum
struct UAriseTextWidget_GetPageNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.GetPageIndex
struct UAriseTextWidget_GetPageIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction AriseText.AriseTextWidget.GetDictionaryText__DelegateSignature
struct UAriseTextWidget_GetDictionaryText__DelegateSignature_Params
{
	struct FDictionaryText                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.AriseTextWidget.GetCurrentButtonIcon
struct UAriseTextWidget_GetCurrentButtonIcon_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.AriseTextWidget.BindRestructEvent
struct UAriseTextWidget_BindRestructEvent_Params
{
	struct FRestructEvent                              BindEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AriseText.ModifiedTextLibrary.SetStringByID
struct UModifiedTextLibrary_SetStringByID_Params
{
	struct FModifiedText                               inModText1;                                               // (Parm, OutParm)
	struct FString                                     iGroup;                                                   // (Parm, ZeroConstructor)
	struct FString                                     iId;                                                      // (Parm, ZeroConstructor)
};

// Function AriseText.ModifiedTextLibrary.SetString
struct UModifiedTextLibrary_SetString_Params
{
	struct FModifiedText                               inModText1;                                               // (Parm, OutParm)
	struct FString                                     iString;                                                  // (Parm, ZeroConstructor)
	struct FString                                     iDebugId;                                                 // (Parm, ZeroConstructor)
};

// Function AriseText.ModifiedTextLibrary.SetIntValue
struct UModifiedTextLibrary_SetIntValue_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.SetIntPlacedValue
struct UModifiedTextLibrary_SetIntPlacedValue_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberOfDigits;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.SetDictionaryText
struct UModifiedTextLibrary_SetDictionaryText_Params
{
	struct FModifiedText                               inModText1;                                               // (Parm, OutParm)
	struct FDictionaryText                             iDicText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AriseText.ModifiedTextLibrary.SetButtonIcon
struct UModifiedTextLibrary_SetButtonIcon_Params
{
	struct FString                                     Button;                                                   // (ConstParm, Parm, ZeroConstructor)
	bool                                               bIsFull;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.ReplaceString
struct UModifiedTextLibrary_ReplaceString_Params
{
	struct FModifiedText                               InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     inPlacement;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FModifiedText                               Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.ReplaceIntPlaced
struct UModifiedTextLibrary_ReplaceIntPlaced_Params
{
	struct FModifiedText                               InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     inPlacement;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberOfDigits;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.ReplaceInt
struct UModifiedTextLibrary_ReplaceInt_Params
{
	struct FModifiedText                               InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     inPlacement;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.ReplaceFloatPlaced
struct UModifiedTextLibrary_ReplaceFloatPlaced_Params
{
	struct FModifiedText                               InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     inPlacement;                                              // (ConstParm, Parm, ZeroConstructor)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberOfDigits;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                decimalPlaces;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.ReplaceFloat
struct UModifiedTextLibrary_ReplaceFloat_Params
{
	struct FModifiedText                               InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     inPlacement;                                              // (ConstParm, Parm, ZeroConstructor)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.ReplaceBool
struct UModifiedTextLibrary_ReplaceBool_Params
{
	struct FModifiedText                               InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     inPlacement;                                              // (ConstParm, Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               inTrueString;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               inFalseString;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.RemoveLineFeed
struct UModifiedTextLibrary_RemoveLineFeed_Params
{
	struct FModifiedText                               iText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.MakeModifiedText
struct UModifiedTextLibrary_MakeModifiedText_Params
{
	struct FString                                     iString;                                                  // (Parm, ZeroConstructor)
	struct FString                                     iDebugId;                                                 // (Parm, ZeroConstructor)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.IsValid
struct UModifiedTextLibrary_IsValid_Params
{
	struct FModifiedText                               inModText1;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.ModifiedTextLibrary.GetString
struct UModifiedTextLibrary_GetString_Params
{
	struct FModifiedText                               inModText1;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     oString;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     oDebugId;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function AriseText.ModifiedTextLibrary.GetPageNum
struct UModifiedTextLibrary_GetPageNum_Params
{
	struct FModifiedText                               iText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseText.ModifiedTextLibrary.DictionaryTextToModifiedText
struct UModifiedTextLibrary_DictionaryTextToModifiedText_Params
{
	struct FDictionaryText                             InText;                                                   // (Parm)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.CombineWithPage
struct UModifiedTextLibrary_CombineWithPage_Params
{
	struct FModifiedText                               inModText1;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               inModText2;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.Combine
struct UModifiedTextLibrary_Combine_Params
{
	struct FModifiedText                               inModText1;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               inModText2;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseText.ModifiedTextLibrary.ClearModifiedText
struct UModifiedTextLibrary_ClearModifiedText_Params
{
	struct FModifiedText                               iText;                                                    // (Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
