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

// Class ProfilePlugin.ProfileBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UProfileBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProfilePlugin.ProfileBPLibrary");
		return ptr;
	}


	void STATIC_UnregisterOnUpdateProfileCallback(int iHandle);
	void STATIC_UnregisterOnPreUpdateProfileCallback(int iHandle);
	void STATIC_UnregisterAllOnUpdateProfileCallback();
	void STATIC_UnregisterAllOnPreUpdateProfileCallback();
	void STATIC_SetProfileThresholdTime(float iRenderThreadTime, float iGameThreadTime, float iGPUFrameTime, float iFrameTime);
	void STATIC_SetProfileThresholdIntervalTime(float iIntervalTime);
	void STATIC_SetProfileIntervalTime(float iIntervalTime);
	void STATIC_SetEnableProfileInterval(bool iEnable);
	void STATIC_Screenshot(TArray<struct FString> iFolders, const struct FString& iFileName, struct FString* OutFilePath);
	void STATIC_ResetProfileThresholdIntervalTime();
	void STATIC_ResetProfileIntervalTime();
	void STATIC_Reset();
	void STATIC_RequestProfile();
	int STATIC_RegisterOnUpdateProfileCallback(const struct FScriptDelegate& iDelegate);
	int STATIC_RegisterOnPreUpdateProfileCallback(const struct FScriptDelegate& iDelegate);
	void STATIC_OutputJSON(TArray<struct FString> iFolders, const struct FString& iFileName, struct FString* OutOutputPath);
	void STATIC_OutputCSV(TArray<struct FString> iFolders, const struct FString& iFileName, struct FString* OutOutputPath);
	bool STATIC_IsTargetPlatformXboxOne();
	bool STATIC_IsTargetPlatformWIN();
	bool STATIC_IsTargetPlatformPS4();
	bool STATIC_IsEnableToggleDrawEvents();
	bool STATIC_IsEnableStatNamedEvents();
	void STATIC_End();
	void STATIC_Begin();
};


// Class ProfilePlugin.RequestChangeMapReceiver
// 0x0010 (0x0338 - 0x0328)
class ARequestChangeMapReceiver : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProfilePlugin.RequestChangeMapReceiver");
		return ptr;
	}


	void OnRequestReceive(const struct FChangeMapRequest& iRequest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
