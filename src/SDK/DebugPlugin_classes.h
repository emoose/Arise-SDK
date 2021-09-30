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

// Class DebugPlugin.DebugUtility
// 0x0000 (0x0028 - 0x0028)
class UDebugUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugPlugin.DebugUtility");
		return ptr;
	}


	void STATIC_K2_SetScreenMessageEnable(bool bNewValue);
	bool STATIC_K2_IsScreenMessageEnable();
	void STATIC_K2_DebugWarningString(const struct FString& Text, float Duration);
	void STATIC_K2_DebugWarning(const struct FText& Text, float Duration);
	void STATIC_K2_DebugPrintString(const struct FString& Text, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void STATIC_K2_DebugPrint(const struct FText& Text, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void STATIC_K2_DebugErrorString(const struct FString& Text, float Duration);
	void STATIC_K2_DebugError(const struct FText& Text, float Duration);
	void STATIC_K2_DBP_UnregisterDebugValueChangedCallback(const struct FName& Name, const struct FString& Key);
	void STATIC_K2_DBP_SetDebugValue_string(const struct FName& Name, const struct FString& Value);
	void STATIC_K2_DBP_SetDebugValue_int32(const struct FName& Name, int Value);
	void STATIC_K2_DBP_SetDebugValue_float(const struct FName& Name, float Value);
	void STATIC_K2_DBP_SetDebugValue_color(const struct FName& Name, const struct FLinearColor& Value);
	void STATIC_K2_DBP_SetDebugValue_bool(const struct FName& Name, bool Value);
	void STATIC_K2_DBP_RegisterDebugValueChangedCallback(const struct FName& Name, const struct FString& Key, const struct FScriptDelegate& Event);
	struct FString STATIC_K2_DBP_GetDebugValue_string(const struct FName& Name, const struct FString& FallOffValue);
	int STATIC_K2_DBP_GetDebugValue_int32(const struct FName& Name, int FallOffValue);
	float STATIC_K2_DBP_GetDebugValue_float(const struct FName& Name, float FallOffValue);
	struct FLinearColor STATIC_K2_DBP_GetDebugValue_color(const struct FName& Name, const struct FLinearColor& FallOffValue);
	bool STATIC_K2_DBP_GetDebugValue_bool(const struct FName& Name, bool FallOffValue);
	void STATIC_K2_DBP_AddDebugValue(const struct FDebugParamDesc& Parameter);
	void STATIC_K2_DBM_ValueStringWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide);
	void STATIC_K2_DBM_ValueStringReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide);
	void STATIC_K2_DBM_ValueStringReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue);
	void STATIC_K2_DBM_ValueString(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue);
	void STATIC_K2_DBM_ValueIntWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide, int Min, int Max, int Step, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar);
	void STATIC_K2_DBM_ValueIntReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar);
	void STATIC_K2_DBM_ValueIntReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar);
	void STATIC_K2_DBM_ValueInt(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, int Min, int Max, int Step, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar);
	void STATIC_K2_DBM_ValueGroup(const struct FName& Name);
	void STATIC_K2_DBM_ValueFloatWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide, float Min, float Max, float Step);
	void STATIC_K2_DBM_ValueFloatReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide);
	void STATIC_K2_DBM_ValueFloatReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue);
	void STATIC_K2_DBM_ValueFloat(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, float Min, float Max, float Step);
	void STATIC_K2_DBM_ValueEnum(const struct FString& Title, const struct FString& Enum, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue);
	void STATIC_K2_DBM_ValueColor(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue);
	void STATIC_K2_DBM_ValueBoolWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide);
	void STATIC_K2_DBM_ValueBoolReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide);
	void STATIC_K2_DBM_ValueBoolReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue);
	void STATIC_K2_DBM_ValueBool(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue);
	void STATIC_K2_DBM_Value(const struct FName& Name);
	void STATIC_K2_DBM_Text(const struct FString& Title);
	void STATIC_K2_DBM_SubMenu(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GenerateSubMenu);
	void STATIC_K2_DBM_SetEditGroup(const struct FName& GroupName);
	void STATIC_K2_DBM_Open(const struct FName& Group);
	void STATIC_K2_DBM_ListWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetList, const struct FScriptDelegate& Decide);
	void STATIC_K2_DBM_List(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetList);
	struct FName STATIC_K2_DBM_GetEditGroup();
	void STATIC_K2_DBM_Button(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& Decide);
	void STATIC_K2_DBM_Bracket(const struct FString& Title, const struct FName& GroupName);
	void STATIC_DBM_Show();
	bool STATIC_DBM_IsOpened();
	void STATIC_DBM_Hide();
	void STATIC_DBM_CurrentWindowClose();
	void STATIC_DBM_Close();
	void STATIC_DBM_ClearAll();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
