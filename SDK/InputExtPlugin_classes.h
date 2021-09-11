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

// Class InputExtPlugin.InputDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UInputDatabase : public UXmlDatabaseBase
{
public:
	struct FInputDataCollection                        Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InputExtPlugin.InputDatabase");
		return ptr;
	}

};


// Class InputExtPlugin.InputExtInputProcessBase
// 0x0010 (0x0338 - 0x0328)
class AInputExtInputProcessBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InputExtPlugin.InputExtInputProcessBase");
		return ptr;
	}


	void SetLayer(int Value);
	void SetCurrentProcess(bool Enable);
	void ReceiveSuspendProcess();
	void ReceiveResumeProcess();
	void ReceiveEndProcess();
	void ReceiveBeginProcess();
	bool K2_IsButtonRepeated(const struct FName& InButtonName);
	bool K2_IsButtonPressed(const struct FName& InButtonName);
	bool K2_IsButtonJustReleased(const struct FName& InButtonName);
	bool K2_IsButtonJustPressed(const struct FName& InButtonName);
	class AInputExtPlayerController* K2_GetPlayerController();
	struct FVector2D K2_GetMousePosition();
	struct FVector2D K2_GetMouseDelta();
	float K2_GetAxisValue(const struct FName& InAxisName);
	void K2_ExecuteProcess(float DeltaTime);
	int GetLayer();
};


// Class InputExtPlugin.InputExtPlayerController
// 0x0150 (0x07C8 - 0x0678)
class AInputExtPlayerController : public APlayerController
{
public:
	bool                                               bIsValid;                                                 // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12F];                                     // 0x0679(0x012F) MISSED OFFSET
	TArray<class AInputExtInputProcessBase*>           InputProcessStackLayer0;                                  // 0x07A8(0x0010) (ZeroConstructor)
	TArray<class AInputExtInputProcessBase*>           InputProcessStackLayer1;                                  // 0x07B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InputExtPlugin.InputExtPlayerController");
		return ptr;
	}


	bool K2_ShowSteamBindingPanel();
	void K2_ShowMouseCursor(bool iShow);
	void K2_SetPadAssignList(TMap<struct FName, int> OutAssignList);
	void K2_SetKeyboardAssignList(TMap<struct FName, int> OutAssignList);
	void K2_SetInputModeArise(bool bMouseHold);
	void K2_SetInputAnalogButtonThreshold(float Value);
	void K2_SetHoldMousePosition(bool iHold);
	void K2_SetHasWindowFocus(bool iHold);
	void K2_SetCategoryFilter(int CategoryFilter);
	void K2_ResetPadAssignList();
	void K2_ResetKeyboardAssignList();
	void K2_ResetKeyboardAndMouseAssignList();
	void K2_ResetCategoryFilter();
	void K2_Reset();
	void K2_RemoveAssign();
	void K2_PushInputProcess2(class UClass* Class);
	void K2_PushInputProcess(class AInputExtInputProcessBase* NewProcess);
	void K2_PushInputLayer(const struct FString& Name, TArray<struct FName> ButtonNames, bool BlockAll);
	void K2_PopInputProcessLayer(int Layer, bool bDestroyProcess);
	void K2_PopInputProcess(bool bDestroyProcess);
	void K2_PopInputLayer(const struct FString& Name);
	bool K2_IsSteamControllerEnable();
	bool K2_IsShowMouseCursor();
	bool K2_IsMouseMove();
	bool K2_IsHoldMousePosition();
	bool K2_IsButtonRepeated(const struct FName& ButtonName);
	bool K2_IsButtonPressed(const struct FName& ButtonName);
	bool K2_IsButtonJustReleased(const struct FName& ButtonName);
	bool K2_IsButtonJustPressed(const struct FName& ButtonName);
	bool K2_IsButtonDefined(const struct FName& ButtonName);
	bool K2_IsAxisDefined(const struct FName& AxisName);
	bool K2_IsAnyMouseButtonPressed();
	bool K2_IsAnyKeyboardPressed();
	bool K2_IsAnyGamepadPressed();
	bool K2_InputActivate(class APlayerController* OldPlayerController);
	bool K2_HasWindowFocus();
	void K2_GetSteamControllerKeys(const struct FName& ButtonName, TArray<struct FInputAssignKeyInfo>* OutInfos);
	void K2_GetPadKeys_DEPRECATED(const struct FName& ButtonName, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts);
	void K2_GetPadKeys(const struct FName& ButtonName, TArray<struct FInputAssignKeyInfo>* OutInfos);
	void K2_GetPadGuideList(EInputCategory Category, TMap<EPadKeyId, struct FName>* OutAssignList);
	void K2_GetPadFixedList(TMap<struct FName, int>* OutAssignList);
	void K2_GetPadAssignList(TMap<struct FName, int>* OutAssignList);
	struct FVector2D K2_GetMousePosition();
	struct FVector2D K2_GetMouseDelta();
	void K2_GetKeyboardKeys_DEPRECATED(const struct FName& ButtonName, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts);
	void K2_GetKeyboardKeys(const struct FName& ButtonName, TArray<struct FInputAssignKeyInfo>* OutInfos);
	void K2_GetKeyboardAssignList(TMap<struct FName, int>* OutAssignList);
	float K2_GetInputAnalogButtonThreshold();
	void K2_GetDebugMouseState(struct FDebugMouseState* State);
	class AInputExtInputProcessBase* K2_GetCurrentInputProcess();
	unsigned char K2_GetCategoryFilter();
	float K2_GetAxisValue(const struct FName& AxisName);
	void K2_DumpAssign();
	void K2_AddThresholdTime(const struct FName& Name, float Time);
	void K2_AddShift_DEPRECATED(const struct FName& Name, const struct FKey& Key);
	void K2_AddButtonFromDataTable(class UDataTable* Table);
	void K2_AddButton(const struct FName& ButtonName, const struct FKey& Key);
	void K2_AddAxisFromDataTable(class UDataTable* Table);
	void K2_AddAxis(const struct FName& AxisName, const struct FKey& Key, float Scale);
};


// Class InputExtPlugin.InputExtProjectSettings
// 0x0018 (0x0040 - 0x0028)
class UInputExtProjectSettings : public UObject
{
public:
	struct FSoftObjectPath                             InputDatabaseAssetReference;                              // 0x0028(0x0018) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InputExtPlugin.InputExtProjectSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
