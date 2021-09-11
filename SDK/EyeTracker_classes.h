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

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}


	void STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController);
	bool STATIC_IsStereoGazeDataAvailable();
	bool STATIC_IsEyeTrackerConnected();
	bool STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	bool STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
