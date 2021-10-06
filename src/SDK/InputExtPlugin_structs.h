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
	None                           = 0,
	A                              = 1,
	B                              = 2,
	C                              = 3,
	D                              = 4,
	E                              = 5,
	F                              = 6,
	G                              = 7,
	H                              = 8,
	I                              = 9,
	J                              = 10,
	K                              = 11,
	L                              = 12,
	M                              = 13,
	N                              = 14,
	O                              = 15,
	P                              = 16,
	Q                              = 17,
	R                              = 18,
	S                              = 19,
	T                              = 20,
	U                              = 21,
	V                              = 22,
	W                              = 23,
	X                              = 24,
	Y                              = 25,
	Z                              = 26,
	Zero                           = 27,
	One                            = 28,
	Two                            = 29,
	Three                          = 30,
	Four                           = 31,
	Five                           = 32,
	Six                            = 33,
	Seven                          = 34,
	Eight                          = 35,
	Nine                           = 36,
	BackSpace                      = 37,
	Tab                            = 38,
	Enter                          = 39,
	Pause                          = 40,
	CapsLock                       = 41,
	Escape                         = 42,
	SpaceBar                       = 43,
	PageUp                         = 44,
	PageDown                       = 45,
	End                            = 46,
	Home                           = 47,
	Left                           = 48,
	Up                             = 49,
	Right                          = 50,
	Down                           = 51,
	Insert                         = 52,
	Delete                         = 53,
	F1                             = 54,
	F2                             = 55,
	F3                             = 56,
	F4                             = 57,
	F5                             = 58,
	F6                             = 59,
	F7                             = 60,
	F8                             = 61,
	F9                             = 62,
	F10                            = 63,
	F11                            = 64,
	F12                            = 65,
	LeftShift                      = 66,
	RightShift                     = 67,
	LeftControl                    = 68,
	RightControl                   = 69,
	LeftAlt                        = 70,
	RightAlt                       = 71,
	LeftCommand                    = 72,
	RightCommand                   = 73,
	NumPadZero                     = 74,
	NumPadOne                      = 75,
	NumPadTwo                      = 76,
	NumPadThree                    = 77,
	NumPadFour                     = 78,
	NumPadFive                     = 79,
	NumPadSix                      = 80,
	NumPadSeven                    = 81,
	NumPadEight                    = 82,
	NumPadNine                     = 83,
	Multiply                       = 84,
	Add                            = 85,
	Subtract                       = 86,
	Decimal                        = 87,
	Divide                         = 88,
	NumLock                        = 89,
	ScrollLock                     = 90,
	Semicolon                      = 91,
	Equals                         = 92,
	Comma                          = 93,
	Underscore                     = 94,
	Hyphen                         = 95,
	Period                         = 96,
	Slash                          = 97,
	Tilde                          = 98,
	LeftBracket                    = 99,
	Backslash                      = 100,
	RightBracket                   = 101,
	Apostrophe                     = 102,
	Ampersand                      = 103,
	Asterix                        = 104,
	Caret                          = 105,
	Colon                          = 106,
	Dollar                         = 107,
	Exclamation                    = 108,
	LeftParantheses                = 109,
	RightParantheses               = 110,
	Quote                          = 111,
	A_AccentGrave                  = 112,
	E_AccentGrave                  = 113,
	E_AccentAigu                   = 114,
	C_Cedille                      = 115,
	Section                        = 116,
	LeftMouseButton                = 117,
	RightMouseButton               = 118,
	MiddleMouseButton              = 119,
	ThumbMouseButton               = 120,
	ThumbMouseButton2              = 121,
	MouseX                         = 122,
	MouseY                         = 123,
	MouseScrollUp                  = 124,
	MouseScrollDown                = 125,
	MouseWheelAxis                 = 126,
	Yen                            = 127,
	AtMark                         = 128,
	NumberSign                     = 129,
	AccentGrave                    = 130,
	U_AccentGrave                  = 131,
	Eszett                         = 132,
	Acute                          = 133,
	U_Umlaut                       = 134,
	O_Umlaut                       = 135,
	A_Umlaut                       = 136,
	I_AccentGrave                  = 137,
	O_AccentGrave                  = 138,
	InvertedExclamation            = 139,
	N_Tilde                        = 140,
	LeftCurlyBraces                = 141,
	RightCurlyBraces               = 142,
	InvertedQuestion               = 143,
	LeftAngleBrackets              = 144,
	Plus                           = 145,
	DeadKeyCaret                   = 146,
	DeadKeyAcute                   = 147,
	DeadKeyAccentGrave             = 148,
	DeadKeyTilde                   = 149,
	Squared                        = 150,
	Ordinal                        = 151,
	Vertical                       = 152,
	EKeyboardKeyId_MAX             = 153
};


// Enum InputExtPlugin.EInputCategory
enum class EInputCategory : uint8_t
{
	INPUT_CATEGORY_COMMON          = 0,
	INPUT_CATEGORY_MAP             = 1,
	INPUT_CATEGORY_BATTLE          = 2,
	INPUT_CATEGORY_MENU            = 3,
	INPUT_CATEGORY_FISHING         = 4,
	INPUT_CATEGORY_MISC            = 5,
	INPUT_CATEGORY_MAX             = 6
};


// Enum InputExtPlugin.EUsedDeviceType
enum class EUsedDeviceType : uint8_t
{
	USED_NONE                      = 0,
	USED_GAMEPAD                   = 1,
	USED_KEYBOARD                  = 2,
	USED_MOUSE                     = 3,
	USED_MAX                       = 4
};


// Enum InputExtPlugin.EInputExtEnterAssignType
enum class EInputExtEnterAssignType : uint8_t
{
	Circle                         = 0,
	Cross                          = 1,
	EInputExtEnterAssignType_MAX   = 2
};


// Enum InputExtPlugin.EPadKeyId
enum class EPadKeyId : uint8_t
{
	Gamepad_None                   = 0,
	Gamepad_DPad_Up                = 1,
	Gamepad_DPad_Down              = 2,
	Gamepad_DPad_Left              = 3,
	Gamepad_DPad_Right             = 4,
	Gamepad_FaceButton_Top         = 5,
	Gamepad_FaceButton_Bottom      = 6,
	Gamepad_FaceButton_Left        = 7,
	Gamepad_FaceButton_Right       = 8,
	Gamepad_LeftStick_Up           = 9,
	Gamepad_LeftStick_Down         = 10,
	Gamepad_LeftStick_Left         = 11,
	Gamepad_LeftStick_Right        = 12,
	Gamepad_RightStick_Up          = 13,
	Gamepad_RightStick_Down        = 14,
	Gamepad_RightStick_Left        = 15,
	Gamepad_RightStick_Right       = 16,
	Gamepad_Special_Left           = 17,
	Gamepad_Special_Right          = 18,
	Gamepad_LeftShoulder           = 19,
	Gamepad_LeftTrigger            = 20,
	Gamepad_LeftThumbstick         = 21,
	Gamepad_RightShoulder          = 22,
	Gamepad_RightTrigger           = 23,
	Gamepad_RightThumbstick        = 24,
	Gamepad_FaceButton_Enter       = 25,
	Gamepad_FaceButton_Cancel      = 26,
	Gamepad_LeftX                  = 27,
	Gamepad_LeftY                  = 28,
	Gamepad_RightX                 = 29,
	Gamepad_RightY                 = 30,
	Gamepad_MAX                    = 31
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
