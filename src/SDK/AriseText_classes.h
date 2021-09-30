#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AriseText.AriseTextChangeStringWidget
// 0x00B0 (0x02B8 - 0x0208)
class UAriseTextChangeStringWidget : public UUserWidget
{
public:
	class UEditableTextBox*                            GroupTextBox;                                             // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            IDTextBox;                                                // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 DropTarget;                                               // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0220(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextChangeStringWidget");
		return ptr;
	}


	void ResetStringDictionaryID();
	void OnTextCommited(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void Close();
	void ApplyCurrentStringDictionaryID();
};


// Class AriseText.AriseTextChangeStringWidgetDropTarget
// 0x0000 (0x0208 - 0x0208)
class UAriseTextChangeStringWidgetDropTarget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextChangeStringWidgetDropTarget");
		return ptr;
	}

};


// Class AriseText.AriseTextWidget
// 0x05E0 (0x06E0 - 0x0100)
class UAriseTextWidget : public UWidget
{
public:
	struct FModifiedText                               ModifiedText;                                             // 0x0100(0x0038)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0138(0x0020) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0158(0x0018) (Edit)
	bool                                               UseDefaultDecoratorsWhenNoDecorators;                     // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RubySpace;                                                // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
	struct FScriptDelegate                             RubySpaceDelegate;                                        // 0x0178(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               RubyDisable;                                              // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FScriptDelegate                             RubyDisableDelegate;                                      // 0x0190(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               AutoXScale;                                               // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	struct FScriptDelegate                             AutoXScaleDelegate;                                       // 0x01A8(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               AutoScroll;                                               // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	struct FScriptDelegate                             AutoScrollDelegate;                                       // 0x01C0(0x0014) (ZeroConstructor, InstancedReference)
	struct FString                                     DictionaryGroup;                                          // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DictionaryID;                                             // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x01F0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0218(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0228(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0278(0x0010) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0290(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x02A0(0x0014) (ZeroConstructor, InstancedReference)
	float                                              MinDesiredWidth;                                          // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x02B4(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x02B7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              DecoratorClasses;                                         // 0x02D8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData08[0x3C8];                                     // 0x02E8(0x03C8) MISSED OFFSET
	TArray<class UAriseTextWidgetDecoratorBase*>       InstanceDecorators;                                       // 0x06B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData09[0x20];                                      // 0x06C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextWidget");
		return ptr;
	}


	void STATIC_UnbindRestructEvent(const struct FRestructEvent& BindEvent);
	void SetTranslatedText(const struct FString& inString, const struct FName& typeFaceName, const struct FString& inIdForDebug);
	void SetText(const struct FText& InText);
	void SetStringDictionaryID(const struct FString& Group, const struct FString& ID);
	void SetString(const struct FString& InText, const struct FString& inIdForDebug);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	bool SetPageIndex(int Index);
	void SetOutlineColor(const struct FLinearColor& InOutlineColor);
	void SetOpacity(float InOpacity);
	void SetModifiedText(const struct FModifiedText& iModText);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetIntegerAsText(int Value);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetFDictionaryText(const struct FDictionaryText& iDicText);
	void SetDictionaryText(const struct FString& Group, const struct FString& ID);
	void STATIC_SetCurrentPlayerController(class AInputExtPlayerController* iController);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetButtonIcon(const struct FString& Button, bool bIsFull);
	void STATIC_RestructAll_Deprecated();
	void STATIC_RestructAll();
	void Restruct();
	void STATIC_RefreshList();
	bool PrevPage();
	bool NextPage();
	void STATIC_LogList();
	bool IsLastPage();
	bool STATIC_IsEnableReplace(const struct FName& ButtonName);
	struct FText GetTextInternal();
	struct FText GetText();
	struct FString GetString__DelegateSignature();
	int GetPageNum();
	int GetPageIndex();
	struct FDictionaryText GetDictionaryText__DelegateSignature();
	int STATIC_GetCurrentButtonIcon();
	void STATIC_BindRestructEvent(const struct FRestructEvent& BindEvent);
};


// Class AriseText.AriseTextWidgetDecoratorBase
// 0x0000 (0x0028 - 0x0028)
class UAriseTextWidgetDecoratorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextWidgetDecoratorBase");
		return ptr;
	}

};


// Class AriseText.AriseTextWidgetDefaultDecorator
// 0x0000 (0x0028 - 0x0028)
class UAriseTextWidgetDefaultDecorator : public UAriseTextWidgetDecoratorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextWidgetDefaultDecorator");
		return ptr;
	}

};


// Class AriseText.AriseTextWidgetPictureDecorator
// 0x0000 (0x0028 - 0x0028)
class UAriseTextWidgetPictureDecorator : public UAriseTextWidgetDecoratorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextWidgetPictureDecorator");
		return ptr;
	}

};


// Class AriseText.AriseTextWidgetPosXDecorator
// 0x0000 (0x0028 - 0x0028)
class UAriseTextWidgetPosXDecorator : public UAriseTextWidgetDecoratorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextWidgetPosXDecorator");
		return ptr;
	}

};


// Class AriseText.AriseTextWidgetPosYDecorator
// 0x0000 (0x0028 - 0x0028)
class UAriseTextWidgetPosYDecorator : public UAriseTextWidgetDecoratorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextWidgetPosYDecorator");
		return ptr;
	}

};


// Class AriseText.AriseTextWidgetRubyDecorator
// 0x0000 (0x0028 - 0x0028)
class UAriseTextWidgetRubyDecorator : public UAriseTextWidgetDecoratorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.AriseTextWidgetRubyDecorator");
		return ptr;
	}

};


// Class AriseText.ButtonIconNameDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UButtonIconNameDatabase : public UXmlDatabaseBase
{
public:
	struct FButtonIconNameList                         Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.ButtonIconNameDatabase");
		return ptr;
	}

};


// Class AriseText.ModifiedTextLibrary
// 0x0000 (0x0028 - 0x0028)
class UModifiedTextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.ModifiedTextLibrary");
		return ptr;
	}


	void STATIC_SetStringByID(const struct FString& iGroup, const struct FString& iId, struct FModifiedText* inModText1);
	void STATIC_SetString(const struct FString& iString, const struct FString& iDebugId, struct FModifiedText* inModText1);
	struct FModifiedText STATIC_SetIntValue(int Value);
	struct FModifiedText STATIC_SetIntPlacedValue(int Value, int numberOfDigits);
	void STATIC_SetDictionaryText(const struct FDictionaryText& iDicText, struct FModifiedText* inModText1);
	struct FModifiedText STATIC_SetButtonIcon(const struct FString& Button, bool bIsFull);
	struct FModifiedText STATIC_ReplaceString(const struct FModifiedText& InText, const struct FString& inPlacement, const struct FModifiedText& Value);
	struct FModifiedText STATIC_ReplaceIntPlaced(const struct FModifiedText& InText, const struct FString& inPlacement, int Value, int numberOfDigits);
	struct FModifiedText STATIC_ReplaceInt(const struct FModifiedText& InText, const struct FString& inPlacement, int Value);
	struct FModifiedText STATIC_ReplaceFloatPlaced(const struct FModifiedText& InText, const struct FString& inPlacement, float Value, int numberOfDigits, int decimalPlaces);
	struct FModifiedText STATIC_ReplaceFloat(const struct FModifiedText& InText, const struct FString& inPlacement, float Value);
	struct FModifiedText STATIC_ReplaceBool(const struct FModifiedText& InText, const struct FString& inPlacement, bool Value, const struct FModifiedText& inTrueString, const struct FModifiedText& inFalseString);
	struct FModifiedText STATIC_RemoveLineFeed(const struct FModifiedText& iText);
	struct FModifiedText STATIC_MakeModifiedText(const struct FString& iString, const struct FString& iDebugId);
	bool STATIC_IsValid(const struct FModifiedText& inModText1);
	void STATIC_GetString(const struct FModifiedText& inModText1, struct FString* oString, struct FString* oDebugId);
	int STATIC_GetPageNum(const struct FModifiedText& iText);
	struct FModifiedText STATIC_DictionaryTextToModifiedText(const struct FDictionaryText& InText);
	struct FModifiedText STATIC_CombineWithPage(const struct FModifiedText& inModText1, const struct FModifiedText& inModText2);
	struct FModifiedText STATIC_Combine(const struct FModifiedText& inModText1, const struct FModifiedText& inModText2);
	void STATIC_ClearModifiedText(struct FModifiedText* iText);
};


// Class AriseText.PictureIDDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UPictureIDDatabase : public UXmlDatabaseBase
{
public:
	struct FPictureIDDataList                          Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.PictureIDDatabase");
		return ptr;
	}

};


// Class AriseText.DynamicSteamPictureData
// 0x0078 (0x00A0 - 0x0028)
class UDynamicSteamPictureData : public UObject
{
public:
	struct FString                                     Path;                                                     // 0x0028(0x0010) (ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPictureIDData                              PictureData;                                              // 0x0048(0x0058)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.DynamicSteamPictureData");
		return ptr;
	}

};


// Class AriseText.SteamPictureIDDatabase
// 0x0020 (0x01D8 - 0x01B8)
class USteamPictureIDDatabase : public UXmlDatabaseBase
{
public:
	struct FSteamPictureIDDataList                     Database;                                                 // 0x01B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.SteamPictureIDDatabase");
		return ptr;
	}

};


// Class AriseText.FontColorTableDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UFontColorTableDatabase : public UXmlDatabaseBase
{
public:
	struct FTextTagColorList                           Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.FontColorTableDatabase");
		return ptr;
	}

};


// Class AriseText.TextWidgetRuntimeSettings
// 0x00C8 (0x00F0 - 0x0028)
class UTextWidgetRuntimeSettings : public UObject
{
public:
	struct FString                                     DatabaseFilePath;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     PictureTagMaterialFilePath;                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     PictureTagDatabaseFilePath;                               // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     SteamPictureTagDatabaseFilePath;                          // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             FontFaceExtensionDataTablePath;                           // 0x0068(0x0018) (Edit, Config)
	TArray<struct FAriseFontExtension>                 FontExtension;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	float                                              ScrollTextSpace;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ScrollSpeed;                                              // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ScrollWaitSeconds;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TMap<struct FString, bool>                         RubyEnableUseInLanguage;                                  // 0x00A0(0x0050) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseText.TextWidgetRuntimeSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
