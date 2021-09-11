#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AriseText.EFontRenderType
enum class EFontRenderType : uint8_t
{
	EFontRenderType__DEFAULT       = 0,
	EFontRenderType__OUTLINE       = 1,
	EFontRenderType__SHADOW        = 2,
	EFontRenderType__EFontRenderType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseText.ModifiedText
// 0x0038
struct FModifiedText
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AriseText.RestructEvent
// 0x0010
struct FRestructEvent
{
	struct FScriptDelegate                             Event;                                                    // 0x0000(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
};

// ScriptStruct AriseText.ButtonIconName
// 0x0018
struct FButtonIconName
{
	struct FName                                       mKeyLabel;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     mName;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseText.ButtonIconNameList
// 0x0010
struct FButtonIconNameList
{
	TArray<struct FButtonIconName>                     mData;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseText.PictureDrawParam
// 0x000C
struct FPictureDrawParam
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AsWord;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct AriseText.PictureDrawUV
// 0x0010
struct FPictureDrawUV
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Width;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Height;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseText.PictureIDData
// 0x0058
struct FPictureIDData
{
	int                                                PictureID;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     FilePath;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Filename;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FPictureDrawParam                           DrawSize;                                                 // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FPictureDrawUV                              UV;                                                       // 0x0044(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AriseText.PictureIDDataList
// 0x0010
struct FPictureIDDataList
{
	TArray<struct FPictureIDData>                      Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseText.SteamPictureIDData
// 0x0018
struct FSteamPictureIDData
{
	int                                                mActionOrigin;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     mIcon;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseText.SteamReplaceTextData
// 0x0010
struct FSteamReplaceTextData
{
	struct FString                                     mLabel;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseText.SteamPictureIDDataList
// 0x0020
struct FSteamPictureIDDataList
{
	TArray<struct FSteamPictureIDData>                 Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FSteamReplaceTextData>               Text;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseText.TextTagColor
// 0x0020
struct FTextTagColor
{
	struct FString                                     ColorName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              R;                                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              G;                                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              B;                                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              A;                                                        // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseText.TextTagColorList
// 0x0010
struct FTextTagColorList
{
	TArray<struct FTextTagColor>                       Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseText.AriseFontExtension
// 0x0038
struct FAriseFontExtension
{
	struct FString                                     AssetName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FamilyName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              TrimTop;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrimBottom;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrimRuby;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AddBottomRenderSpace;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AriseText.AriseFontFaceExtension
// 0x0018 (0x0020 - 0x0008)
struct FAriseFontFaceExtension : public FTableRowBase
{
	float                                              TrimTop;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrimBottom;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrimRuby;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LetterSpacing;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
