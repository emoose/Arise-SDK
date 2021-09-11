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

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0358 - 0x0328)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CranePitch;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x0335(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0336(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x0340(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x0350(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x0348 - 0x0328)
class ACameraRig_Rail : public AActor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOrientationToRail;                                   // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x0340(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0050 (0x1080 - 0x1030)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x1030(0x0038) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x1068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x00E0 (0x1080 - 0x0FA0)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0FA0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FCameraLensSettings                         LensSettings;                                             // 0x0FAC(0x0018) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0FC4(0x0004) MISSED OFFSET
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x0FC8(0x0038) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x1004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x1008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x100C(0x000C) MISSED OFFSET
	class UStaticMesh*                                 FocusPlaneVisualizationMesh;                              // 0x1018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterial*                                   FocusPlaneVisualizationMaterial;                          // 0x1020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMeshComponent*                        DebugFocusPlaneComponent;                                 // 0x1028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DebugFocusPlaneMID;                                       // 0x1030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x1038(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x1048(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x1058(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x1068(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x1078(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x107C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
