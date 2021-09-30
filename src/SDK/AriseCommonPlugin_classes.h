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

// Class AriseCommonPlugin.AreaComponent
// 0x0020 (0x05A0 - 0x0580)
class UAreaComponent : public UPrimitiveComponent
{
public:
	float                                              AreaHalfHeight;                                           // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRadius;                                               // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaAngle;                                                // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      AreaColor;                                                // 0x058C(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AreaOffset;                                               // 0x0590(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x059C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AreaComponent");
		return ptr;
	}

};


// Class AriseCommonPlugin.AreaPriorityComponent
// 0x0010 (0x0108 - 0x00F8)
class UAreaPriorityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F8(0x0002) MISSED OFFSET
	EAreaPriority                                      DefaultPriority;                                          // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OverridePriority;                                         // 0x00FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LocalPriority;                                            // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x00FD(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AreaPriorityComponent");
		return ptr;
	}


	void SetOverridPriorityInt(unsigned char _overridePriority);
	void SetLocalPriority(int _localPriority);
	void SetDefaultPriority(EAreaPriority _defaultPriority);
	bool IsOverraped();
	void EndAreaOverlap();
	bool CanAction();
	void BeginAreaOverlap();
};


// Class AriseCommonPlugin.AreaPriorityManager
// 0x0010 (0x0038 - 0x0028)
class UAreaPriorityManager : public UObject
{
public:
	TArray<struct FStrAreaPriorityComponentRef>        ActiveUser;                                               // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AreaPriorityManager");
		return ptr;
	}

};


// Class AriseCommonPlugin.AriseBasePlayerController
// 0x0000 (0x07C8 - 0x07C8)
class AAriseBasePlayerController : public AInputExtPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseBasePlayerController");
		return ptr;
	}


	void K2_ResetAssign();
	bool K2_IsMouseMove_Arise();
	bool K2_IsButtonRepeated_Arise(const struct FName& InButton);
	bool K2_IsButtonPressed_Arise(const struct FName& InButton);
	bool K2_IsButtonJustReleased_Arise(const struct FName& InButton);
	bool K2_IsButtonJustPressed_Arise(const struct FName& InButton);
	bool K2_IsAnyMouseButtonPressed_Arise();
	bool K2_IsAnyKeyboardPressed_Arise();
	bool K2_IsAnyGamepadPressed_Arise();
	float K2_GetCameraAngleYaw();
	float K2_GetCameraAnglePitch();
	float K2_GetAxisValue_Arise(const struct FName& InAxis);
};


// Class AriseCommonPlugin.AriseCommonFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAriseCommonFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseCommonFunctionLibrary");
		return ptr;
	}


	void STATIC_TakeScreenshot(const struct FString& DirectoryPath, const struct FString& Filename, bool bAddFilenameSuffix);
	bool STATIC_IsSimulateInEditor();
};


// Class AriseCommonPlugin.AriseConfigProfileDelegate
// 0x0000 (0x0028 - 0x0028)
class UAriseConfigProfileDelegate : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseConfigProfileDelegate");
		return ptr;
	}


	void STATIC_AriseConfigProfileDelegate_Test();
};


// Class AriseCommonPlugin.AriseEntitlement
// 0x0000 (0x0028 - 0x0028)
class UAriseEntitlement : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseEntitlement");
		return ptr;
	}

};


// Class AriseCommonPlugin.AriseGameModeBase
// 0x0008 (0x0418 - 0x0410)
class AAriseGameModeBase : public AGameMode
{
public:
	class AStreamLevelLoader*                          StreamLevelLoader;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseGameModeBase");
		return ptr;
	}


	void UnloadStreamLevels(TArray<struct FName> names);
	void RemoveStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names);
	void LoadStreamLevels(TArray<struct FName> names);
	class ULevel* GetPersistantLevel();
	void AddStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names, TArray<struct FString> Paths);
};


// Class AriseCommonPlugin.AriseGameViewportClient
// 0x0020 (0x0308 - 0x02E8)
class UAriseGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseGameViewportClient");
		return ptr;
	}


	void OnBeforeLostFocus();
	void OnAfterReceivedFocus();
};


// Class AriseCommonPlugin.AriseKeyConfig
// 0x0010 (0x0038 - 0x0028)
class UAriseKeyConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseKeyConfig");
		return ptr;
	}


	void K2_SetPadKeys(int InButtonId, TArray<struct FKey> InKeys, TArray<struct FKey> InShifts);
	void K2_SetKeyboardKeys(int InButtonId, TArray<struct FKey> InKeys, TArray<struct FKey> InShifts);
	void K2_Reset();
	void K2_GetPadKeys(int InButtonId, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts);
	void K2_GetKeyboardKeys(int InButtonId, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts);
	void K2_GetButtons(TArray<int>* OutButtons);
	void K2_Apply(class AInputExtPlayerController* InController);
};


// Class AriseCommonPlugin.AriseUIViewportBase
// 0x0000 (0x0028 - 0x0028)
class UAriseUIViewportBase : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseUIViewportBase");
		return ptr;
	}

};


// Class AriseCommonPlugin.AriseVibrationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAriseVibrationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseVibrationFunctionLibrary");
		return ptr;
	}


	void STATIC_StopVibrationAll();
	void STATIC_StopVibration(const struct FName& Tag);
	void STATIC_PlayVibration(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, const struct FName& Tag, float LargePow, float SmallPow);
	void STATIC_EnableVibration(bool bNewEnable);
};


// Class AriseCommonPlugin.AriseVibrationManager
// 0x0058 (0x0080 - 0x0028)
class UAriseVibrationManager : public UObject
{
public:
	TMap<struct FName, float>                          WatchList;                                                // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseVibrationManager");
		return ptr;
	}

};


// Class AriseCommonPlugin.BlueprintBridgeInterface
// 0x0000 (0x0028 - 0x0028)
class UBlueprintBridgeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.BlueprintBridgeInterface");
		return ptr;
	}


	bool BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params);
};


// Class AriseCommonPlugin.AriseDLCPackageDatabase
// 0x0030 (0x01E8 - 0x01B8)
class UAriseDLCPackageDatabase : public UXmlDatabaseBase
{
public:
	struct FDLCPackageDataCollection                   Database;                                                 // 0x01B8(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseDLCPackageDatabase");
		return ptr;
	}

};


// Class AriseCommonPlugin.AriseDLCPackagePlatformDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAriseDLCPackagePlatformDatabase : public UXmlDatabaseBase
{
public:
	struct FDLCPackagePlatformDataCollection           Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.AriseDLCPackagePlatformDatabase");
		return ptr;
	}

};


// Class AriseCommonPlugin.StreamLevelLoader
// 0x0048 (0x0370 - 0x0328)
class AStreamLevelLoader : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	TArray<struct FStreamLevelInfo>                    ArrayStreamLevel;                                         // 0x0330(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FStreamLevelInfo>                    ArrayLoadStreamLevel;                                     // 0x0340(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FStreamLevelInfo>                    ArrayUnloadStreamLevel;                                   // 0x0350(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    UnloadAllFinished;                                        // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.StreamLevelLoader");
		return ptr;
	}


	void UnloadStreamLevels(TArray<struct FName> names, bool bForced);
	void UnloadAllStreamLevels();
	void RemoveStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names);
	void LoadStreamLevels(TArray<struct FName> names);
	int GetUserConut(const struct FName& Name);
	void DoUnloadStreamLevels();
	void DoUnloadAll();
	void DoLoadStreamLevels();
	void BPE_DoUnloadStreamLevel();
	void BPE_DoUnloadAll();
	void BPE_DoLoadStreamLevel();
	void AddStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names, TArray<struct FString> Paths);
};


// Class AriseCommonPlugin.TextWidgetActor
// 0x0008 (0x0330 - 0x0328)
class ATextWidgetActor : public AActor
{
public:
	class UTextWidgetComponent*                        TextWidgetComponent;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.TextWidgetActor");
		return ptr;
	}

};


// Class AriseCommonPlugin.TextWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UTextWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.TextWidgetInterface");
		return ptr;
	}


	void SetTextColor(const struct FSlateColor& NewColor);
	void SetText(const struct FText& NewText);
	void SetBgColor(const struct FLinearColor& NewColor);
};


// Class AriseCommonPlugin.TextWidgetComponent
// 0x0050 (0x0720 - 0x06D0)
class UTextWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET
	struct FSlateColor                                 TextColor;                                                // 0x06E0(0x0028) (Edit, BlueprintVisible)
	struct FLinearColor                                BgColor;                                                  // 0x0708(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0718(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCommonPlugin.TextWidgetComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
