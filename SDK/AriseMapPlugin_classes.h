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

// Class AriseMapPlugin.MapOrderDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UMapOrderDatabase : public UXmlDatabaseBase
{
public:
	struct FMapOrderList                               Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapOrderDatabase");
		return ptr;
	}


	bool IsEnableIndex_FMapOrderArray(int Index);
};


// Class AriseMapPlugin.AriseMapPluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UAriseMapPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.AriseMapPluginBPLibrary");
		return ptr;
	}


	struct FName STATIC_GetPhysicalSurfaceName(const struct FHitResult& InHitResult);
	struct FAriseMapEffectFinalSettings STATIC_GetMapEffectSettings(EAriseMapEffectSettingsSlot Slot);
};


// Class AriseMapPlugin.AriseMapPluginProjectSettings
// 0x0030 (0x0058 - 0x0028)
class UAriseMapPluginProjectSettings : public UObject
{
public:
	struct FSoftObjectPath                             LandscapeMaterialDatabasePath;                            // 0x0028(0x0018) (Edit, Config)
	struct FSoftObjectPath                             PhysicalMaterialOverrideDatabasePath;                     // 0x0040(0x0018) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.AriseMapPluginProjectSettings");
		return ptr;
	}


	class UPhysicalMaterialOverrideDatabase* STATIC_GetPhysicalMaterialOverrideDatabase();
	class ULandscapeMaterialDatabase* STATIC_GetLandscapeMaterialDatabase();
};


// Class AriseMapPlugin.ArisePostProcessComponent
// 0x0060 (0x0FA0 - 0x0F40)
class UArisePostProcessComponent : public UPostProcessComponent
{
public:
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot1;                                  // 0x0F40(0x0018) (Edit, BlueprintVisible)
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot2;                                  // 0x0F58(0x0018) (Edit, BlueprintVisible)
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot3;                                  // 0x0F70(0x0018) (Edit, BlueprintVisible)
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot4;                                  // 0x0F88(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.ArisePostProcessComponent");
		return ptr;
	}


	struct FAriseMapEffectSettings GetMapEffectSettings(EAriseMapEffectSettingsSlot Slot);
};


// Class AriseMapPlugin.ArisePostProcessVolume
// 0x0070 (0x10C0 - 0x1050)
class AArisePostProcessVolume : public APostProcessVolume
{
public:
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot1;                                  // 0x1050(0x0018) (Edit, BlueprintVisible)
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot2;                                  // 0x1068(0x0018) (Edit, BlueprintVisible)
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot3;                                  // 0x1080(0x0018) (Edit, BlueprintVisible)
	struct FAriseMapEffectSettings                     MapEffectSettings_Slot4;                                  // 0x1098(0x0018) (Edit, BlueprintVisible)
	bool                                               bToggleIndoorCamera;                                      // 0x10B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x10B1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.ArisePostProcessVolume");
		return ptr;
	}


	struct FAriseMapEffectSettings GetMapEffectSettings(EAriseMapEffectSettingsSlot Slot);
};


// Class AriseMapPlugin.ArisePostProcessWorldTimeManager
// 0x0100 (0x0438 - 0x0338)
class AArisePostProcessWorldTimeManager : public AWorldTimeActor
{
public:
	TArray<struct FArisePostProcessWorldTime_SceneColor> SceneColorParameters;                                     // 0x0338(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArisePostProcessWorldTime_ShadowColor> ShadowColorParameters;                                    // 0x0348(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArisePostProcessWorldTime_GlobalIllumination> GlobalIlluminationParameters;                             // 0x0358(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArisePostProcessWorldTime_VolumetricLighting> VolumetricLightingParameters;                             // 0x0368(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArisePostProcessWorldTime_VolumetricCloudShading> VolumetricCloudShadingParameters;                         // 0x0378(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArisePostProcessWorldTime_HeightFogColorModulation> HeightFogColorModulationParameters;                       // 0x0388(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArisePostProcessWorldTime_DirectionalLight> DirectionalLightParameters;                               // 0x0398(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArisePostProcessWorldTime_PanoramaPara> PanoramaParaParameters;                                   // 0x03A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x03B8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.ArisePostProcessWorldTimeManager");
		return ptr;
	}

};


// Class AriseMapPlugin.FollowingEffectBase
// 0x0008 (0x0330 - 0x0328)
class AFollowingEffectBase : public AActor
{
public:
	EAriseMapEffectSettingsSlot                        Slot;                                                     // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Visibility;                                               // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.FollowingEffectBase");
		return ptr;
	}


	void STATIC_SetForceHide(bool Hidden);
	void OnForceHideChanged(bool Hidden);
	bool STATIC_GetForceHide();
	struct FAriseMapEffectFinalSettings GetEffectSettings();
};


// Class AriseMapPlugin.LandscapeMaterialDatabase
// 0x0010 (0x01C8 - 0x01B8)
class ULandscapeMaterialDatabase : public UXmlDatabaseBase
{
public:
	struct FLandscapeMaterialDatabaseRow               Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.LandscapeMaterialDatabase");
		return ptr;
	}

};


// Class AriseMapPlugin.MapEffectManager
// 0x0018 (0x0040 - 0x0028)
class UMapEffectManager : public UObject
{
public:
	TArray<struct FStrMapEffectSpawnerRef>             ActiveUser;                                               // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapEffectManager");
		return ptr;
	}

};


// Class AriseMapPlugin.MapEffectSpawner
// 0x0008 (0x0330 - 0x0328)
class AMapEffectSpawner : public AActor
{
public:
	bool                                               bSpawned;                                                 // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoScattering;                                            // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapEffectSpawner");
		return ptr;
	}


	void Update();
};


// Class AriseMapPlugin.MapEnvBreathEmitterComponent
// 0x0020 (0x0270 - 0x0250)
class UMapEnvBreathEmitterComponent : public USceneComponent
{
public:
	bool                                               bEmitBreath;                                              // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0251(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapEnvBreathEmitterComponent");
		return ptr;
	}

};


// Class AriseMapPlugin.MapEnvSettingsActor
// 0x00E8 (0x0410 - 0x0328)
class AMapEnvSettingsActor : public AActor
{
public:
	TMap<struct FName, struct FMapEnvSurfaceSettings>  SurfaceSettings;                                          // 0x0328(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          FootmarkMaterial;                                         // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootmarkLife;                                             // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootmarkFadeTime;                                         // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BreathEffect;                                             // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathEffectInterval;                                     // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TMap<struct FName, struct FMapEnvWaterEffectSettings> WaterEffectSettings;                                      // 0x0398(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             WetEffect[0x3];                                           // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeterRippleEffect;                                        // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterDeepHeight;                                          // 0x0408(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayBreathEffect;                                        // 0x040C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapEnvSettingsActor");
		return ptr;
	}

};


// Class AriseMapPlugin.MapLink
// 0x0078 (0x03A0 - 0x0328)
class AMapLink : public AActor
{
public:
	struct FString                                     OwnerMapName;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LocalID;                                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FString                                     LinkMapName;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LinkLocatorName;                                          // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LinkLocatorUniqueName;                                    // 0x0360(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LocationName;                                             // 0x0370(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLinkUniqueName;                                        // 0x0380(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               PreloadEnable;                                            // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	float                                              PreloadDistance;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreloadAngle;                                             // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnloadOffset;                                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapLink");
		return ptr;
	}


	struct FString GetMapLinkName();
};


// Class AriseMapPlugin.MapLinkClipboardFunctionInterface
// 0x0000 (0x0028 - 0x0028)
class UMapLinkClipboardFunctionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapLinkClipboardFunctionInterface");
		return ptr;
	}


	int GetCellColumnNum();
	struct FString GetCell_OwnerMapName(int Column);
	struct FString GetCell_LocalId(int Column);
	struct FString GetCell_LinkMapName(int Column);
	struct FString GetCell_LinkLocatorName(int Column);
	struct FString GetCell_AreaName(int Column);
};


// Class AriseMapPlugin.MapLocator
// 0x0060 (0x0388 - 0x0328)
class AMapLocator : public AActor
{
public:
	struct FString                                     OwnerMapName;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LocalID;                                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FString                                     UniqueName;                                               // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EMapLocatorType                                    LocatorType;                                              // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FString                                     LocationName;                                             // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NaviMeshAssetPath;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FreeLocatorName;                                          // 0x0378(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.MapLocator");
		return ptr;
	}


	struct FString GetUniqueName();
	struct FString GetMapLocatorName();
	struct FString GetLocalName();
};


// Class AriseMapPlugin.PhysicalMaterialOverrideDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UPhysicalMaterialOverrideDatabase : public UXmlDatabaseBase
{
public:
	struct FPhysicalMaterialOverrideDatabaseRow        Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.PhysicalMaterialOverrideDatabase");
		return ptr;
	}

};


// Class AriseMapPlugin.PhysicsMaterialOverrideVolume
// 0x0000 (0x0360 - 0x0360)
class APhysicsMaterialOverrideVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.PhysicsMaterialOverrideVolume");
		return ptr;
	}

};


// Class AriseMapPlugin.SwimVolume
// 0x0008 (0x0378 - 0x0370)
class ASwimVolume : public APhysicsVolume
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0370(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.SwimVolume");
		return ptr;
	}

};


// Class AriseMapPlugin.WaterReactionParticleComponent
// 0x0010 (0x07E0 - 0x07D0)
class UWaterReactionParticleComponent : public UParticleSystemComponent
{
public:
	class USceneComponent*                             TraceTarget;                                              // 0x07D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseMapPlugin.WaterReactionParticleComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
