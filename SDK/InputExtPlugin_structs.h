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

// Enum InputExtPlugin.EKeyboardKeyId
enum class EKeyboardKeyId : uint8_t
{
	EKeyboardKeyId__None           = 0,
	EKeyboardKeyId__A              = 1,
	EKeyboardKeyId__B              = 2,
	EKeyboardKeyId__C              = 3,
	EKeyboardKeyId__D              = 4,
	EKeyboardKeyId__E              = 5,
	EKeyboardKeyId__F              = 6,
	EKeyboardKeyId__G              = 7,
	EKeyboardKeyId__H              = 8,
	EKeyboardKeyId__I              = 9,
	EKeyboardKeyId__J              = 10,
	EKeyboardKeyId__K              = 11,
	EKeyboardKeyId__L              = 12,
	EKeyboardKeyId__M              = 13,
	EKeyboardKeyId__N              = 14,
	EKeyboardKeyId__O              = 15,
	EKeyboardKeyId__P              = 16,
	EKeyboardKeyId__Q              = 17,
	EKeyboardKeyId__R              = 18,
	EKeyboardKeyId__S              = 19,
	EKeyboardKeyId__T              = 20,
	EKeyboardKeyId__U              = 21,
	EKeyboardKeyId__V              = 22,
	EKeyboardKeyId__W              = 23,
	EKeyboardKeyId__X              = 24,
	EKeyboardKeyId__Y              = 25,
	EKeyboardKeyId__Z              = 26,
	EKeyboardKeyId__Zero           = 27,
	EKeyboardKeyId__One            = 28,
	EKeyboardKeyId__Two            = 29,
	EKeyboardKeyId__Three          = 30,
	EKeyboardKeyId__Four           = 31,
	EKeyboardKeyId__Five           = 32,
	EKeyboardKeyId__Six            = 33,
	EKeyboardKeyId__Seven          = 34,
	EKeyboardKeyId__Eight          = 35,
	EKeyboardKeyId__Nine           = 36,
	EKeyboardKeyId__BackSpace      = 37,
	EKeyboardKeyId__Tab            = 38,
	EKeyboardKeyId__Enter          = 39,
	EKeyboardKeyId__Pause          = 40,
	EKeyboardKeyId__CapsLock       = 41,
	EKeyboardKeyId__Escape         = 42,
	EKeyboardKeyId__SpaceBar       = 43,
	EKeyboardKeyId__PageUp         = 44,
	EKeyboardKeyId__PageDown       = 45,
	EKeyboardKeyId__End            = 46,
	EKeyboardKeyId__Home           = 47,
	EKeyboardKeyId__Left           = 48,
	EKeyboardKeyId__Up             = 49,
	EKeyboardKeyId__Right          = 50,
	EKeyboardKeyId__Down           = 51,
	EKeyboardKeyId__Insert         = 52,
	EKeyboardKeyId__Delete         = 53,
	EKeyboardKeyId__F1             = 54,
	EKeyboardKeyId__F2             = 55,
	EKeyboardKeyId__F3             = 56,
	EKeyboardKeyId__F4             = 57,
	EKeyboardKeyId__F5             = 58,
	EKeyboardKeyId__F6             = 59,
	EKeyboardKeyId__F7             = 60,
	EKeyboardKeyId__F8             = 61,
	EKeyboardKeyId__F9             = 62,
	EKeyboardKeyId__F10            = 63,
	EKeyboardKeyId__F11            = 64,
	EKeyboardKeyId__F12            = 65,
	EKeyboardKeyId__LeftShift      = 66,
	EKeyboardKeyId__RightShift     = 67,
	EKeyboardKeyId__LeftControl    = 68,
	EKeyboardKeyId__RightControl   = 69,
	EKeyboardKeyId__LeftAlt        = 70,
	EKeyboardKeyId__RightAlt       = 71,
	EKeyboardKeyId__LeftCommand    = 72,
	EKeyboardKeyId__RightCommand   = 73,
	EKeyboardKeyId__NumPadZero     = 74,
	EKeyboardKeyId__NumPadOne      = 75,
	EKeyboardKeyId__NumPadTwo      = 76,
	EKeyboardKeyId__NumPadThree    = 77,
	EKeyboardKeyId__NumPadFour     = 78,
	EKeyboardKeyId__NumPadFive     = 79,
	EKeyboardKeyId__NumPadSix      = 80,
	EKeyboardKeyId__NumPadSeven    = 81,
	EKeyboardKeyId__NumPadEight    = 82,
	EKeyboardKeyId__NumPadNine     = 83,
	EKeyboardKeyId__Multiply       = 84,
	EKeyboardKeyId__Add            = 85,
	EKeyboardKeyId__Subtract       = 86,
	EKeyboardKeyId__Decimal        = 87,
	EKeyboardKeyId__Divide         = 88,
	EKeyboardKeyId__NumLock        = 89,
	EKeyboardKeyId__ScrollLock     = 90,
	EKeyboardKeyId__Semicolon      = 91,
	EKeyboardKeyId__Equals         = 92,
	EKeyboardKeyId__Comma          = 93,
	EKeyboardKeyId__Underscore     = 94,
	EKeyboardKeyId__Hyphen         = 95,
	EKeyboardKeyId__Period         = 96,
	EKeyboardKeyId__Slash          = 97,
	EKeyboardKeyId__Tilde          = 98,
	EKeyboardKeyId__LeftBracket    = 99,
	EKeyboardKeyId__Backslash      = 100,
	EKeyboardKeyId__RightBracket   = 101,
	EKeyboardKeyId__Apostrophe     = 102,
	EKeyboardKeyId__Ampersand      = 103,
	EKeyboardKeyId__Asterix        = 104,
	EKeyboardKeyId__Caret          = 105,
	EKeyboardKeyId__Colon          = 106,
	EKeyboardKeyId__Dollar         = 107,
	EKeyboardKeyId__Exclamation    = 108,
	EKeyboardKeyId__LeftParantheses = 109,
	EKeyboardKeyId__RightParantheses = 110,
	EKeyboardKeyId__Quote          = 111,
	EKeyboardKeyId__A_AccentGrave  = 112,
	EKeyboardKeyId__E_AccentGrave  = 113,
	EKeyboardKeyId__E_AccentAigu   = 114,
	EKeyboardKeyId__C_Cedille      = 115,
	EKeyboardKeyId__Section        = 116,
	EKeyboardKeyId__LeftMouseButton = 117,
	EKeyboardKeyId__RightMouseButton = 118,
	EKeyboardKeyId__MiddleMouseButton = 119,
	EKeyboardKeyId__ThumbMouseButton = 120,
	EKeyboardKeyId__ThumbMouseButton2 = 121,
	EKeyboardKeyId__MouseX         = 122,
	EKeyboardKeyId__MouseY         = 123,
	EKeyboardKeyId__MouseScrollUp  = 124,
	EKeyboardKeyId__MouseScrollDown = 125,
	EKeyboardKeyId__MouseWheelAxis = 126,
	EKeyboardKeyId__Yen            = 127,
	EKeyboardKeyId__AtMark         = 128,
	EKeyboardKeyId__NumberSign     = 129,
	EKeyboardKeyId__AccentGrave    = 130,
	EKeyboardKeyId__U_AccentGrave  = 131,
	EKeyboardKeyId__Eszett         = 132,
	EKeyboardKeyId__Acute          = 133,
	EKeyboardKeyId__U_Umlaut       = 134,
	EKeyboardKeyId__O_Umlaut       = 135,
	EKeyboardKeyId__A_Umlaut       = 136,
	EKeyboardKeyId__I_AccentGrave  = 137,
	EKeyboardKeyId__O_AccentGrave  = 138,
	EKeyboardKeyId__InvertedExclamation = 139,
	EKeyboardKeyId__N_Tilde        = 140,
	EKeyboardKeyId__LeftCurlyBraces = 141,
	EKeyboardKeyId__RightCurlyBraces = 142,
	EKeyboardKeyId__InvertedQuestion = 143,
	EKeyboardKeyId__LeftAngleBrackets = 144,
	EKeyboardKeyId__Plus           = 145,
	EKeyboardKeyId__DeadKeyCaret   = 146,
	EKeyboardKeyId__DeadKeyAcute   = 147,
	EKeyboardKeyId__DeadKeyAccentGrave = 148,
	EKeyboardKeyId__DeadKeyTilde   = 149,
	EKeyboardKeyId__Squared        = 150,
	EKeyboardKeyId__Ordinal        = 151,
	EKeyboardKeyId__Vertical       = 152,
	EKeyboardKeyId__EKeyboardKeyId_MAX = 153
};


// Enum InputExtPlugin.EPadKeyId
enum class EPadKeyId : uint8_t
{
	EPadKeyId__Gamepad_None        = 0,
	EPadKeyId__Gamepad_DPad_Up     = 1,
	EPadKeyId__Gamepad_DPad_Down   = 2,
	EPadKeyId__Gamepad_DPad_Left   = 3,
	EPadKeyId__Gamepad_DPad_Right  = 4,
	EPadKeyId__Gamepad_FaceButton_Top = 5,
	EPadKeyId__Gamepad_FaceButton_Bottom = 6,
	EPadKeyId__Gamepad_FaceButton_Left = 7,
	EPadKeyId__Gamepad_FaceButton_Right = 8,
	EPadKeyId__Gamepad_LeftStick_Up = 9,
	EPadKeyId__Gamepad_LeftStick_Down = 10,
	EPadKeyId__Gamepad_LeftStick_Left = 11,
	EPadKeyId__Gamepad_LeftStick_Right = 12,
	EPadKeyId__Gamepad_RightStick_Up = 13,
	EPadKeyId__Gamepad_RightStick_Down = 14,
	EPadKeyId__Gamepad_RightStick_Left = 15,
	EPadKeyId__Gamepad_RightStick_Right = 16,
	EPadKeyId__Gamepad_Special_Left = 17,
	EPadKeyId__Gamepad_Special_Right = 18,
	EPadKeyId__Gamepad_LeftShoulder = 19,
	EPadKeyId__Gamepad_LeftTrigger = 20,
	EPadKeyId__Gamepad_LeftThumbstick = 21,
	EPadKeyId__Gamepad_RightShoulder = 22,
	EPadKeyId__Gamepad_RightTrigger = 23,
	EPadKeyId__Gamepad_RightThumbstick = 24,
	EPadKeyId__Gamepad_FaceButton_Enter = 25,
	EPadKeyId__Gamepad_FaceButton_Cancel = 26,
	EPadKeyId__Gamepad_LeftX       = 27,
	EPadKeyId__Gamepad_LeftY       = 28,
	EPadKeyId__Gamepad_RightX      = 29,
	EPadKeyId__Gamepad_RightY      = 30,
	EPadKeyId__Gamepad_MAX         = 31
};


// Enum InputExtPlugin.EInputCategory
enum class EInputCategory : uint8_t
{
	EInputCategory__INPUT_CATEGORY_COMMON = 0,
	EInputCategory__INPUT_CATEGORY_MAP = 1,
	EInputCategory__INPUT_CATEGORY_BATTLE = 2,
	EInputCategory__INPUT_CATEGORY_MENU = 3,
	EInputCategory__INPUT_CATEGORY_FISHING = 4,
	EInputCategory__INPUT_CATEGORY_MISC = 5,
	EInputCategory__INPUT_CATEGORY_MAX = 6
};


// Enum InputExtPlugin.EUsedDeviceType
enum class EUsedDeviceType : uint8_t
{
	EUsedDeviceType__USED_NONE     = 0,
	EUsedDeviceType__USED_GAMEPAD  = 1,
	EUsedDeviceType__USED_KEYBOARD = 2,
	EUsedDeviceType__USED_MOUSE    = 3,
	EUsedDeviceType__USED_MAX      = 4
};


// Enum InputExtPlugin.EInputExtEnterAssignType
enum class EInputExtEnterAssignType : uint8_t
{
	EInputExtEnterAssignType__Circle = 0,
	EInputExtEnterAssignType__Cross = 1,
	EInputExtEnterAssignType__EInputExtEnterAssignType_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputExtPlugin.InputPairData
// 0x0028
struct FInputPairData
{
	int                                                mKeyId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                mShiftId;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                mReferenceButtonId;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                mReferenceShiftId;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       mReferenceButtonName;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       mReferenceShiftName;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              mScale;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct InputExtPlugin.InputKeyData
// 0x0018
struct FInputKeyData
{
	bool                                               mCustomize;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FInputPairData>                      mPair;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct InputExtPlugin.InputData
// 0x0068
struct FInputData
{
	int                                                Mid;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       mButton;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                mCategory;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               mDebug;                                                   // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               mAxis;                                                    // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               mCombine;                                                 // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               mSteam;                                                   // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               mShowGuide;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               mShowGuideKB;                                             // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                mGuideOrder;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                mGuideOrderKB;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                mCustomizeOrder;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FInputKeyData                               mPad;                                                     // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FInputKeyData                               mKeyboard;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     mNameId;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct InputExtPlugin.InputDataCollection
// 0x0010
struct FInputDataCollection
{
	TArray<struct FInputData>                          mData;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct InputExtPlugin.InputAssignKeyInfo
// 0x0040
struct FInputAssignKeyInfo
{
	TArray<struct FKey>                                Keys;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FKey>                                Shifts;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        KeyIds;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ShiftIds;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct InputExtPlugin.DebugMouseState
// 0x0040
struct FDebugMouseState
{
	bool                                               Capture;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Focus;                                                    // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     Lock;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CaptureMode;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CaptureOnClick;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IgnoreInput;                                              // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HideDuringCapture;                                        // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowCursorReq;                                            // 0x003A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
};

// ScriptStruct InputExtPlugin.InputExtAxis
// 0x0038
struct FInputExtAxis
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Shift;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct InputExtPlugin.InputExtAxisTableRow
// 0x0010 (0x0018 - 0x0008)
struct FInputExtAxisTableRow : public FTableRowBase
{
	TArray<struct FInputExtAxis>                       Keys;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct InputExtPlugin.InputExtButton
// 0x0030
struct FInputExtButton
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Shift;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct InputExtPlugin.InputExtButtonTableRow
// 0x0010 (0x0018 - 0x0008)
struct FInputExtButtonTableRow : public FTableRowBase
{
	TArray<struct FInputExtButton>                     Keys;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
