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

// Enum AriseMapPlugin.EAriseMapEffectSettingsSlot
enum class EAriseMapEffectSettingsSlot : uint8_t
{
	None                           = 0,
	Slot1                          = 1,
	Slot2                          = 2,
	Slot3                          = 3,
	Slot4                          = 4,
	EAriseMapEffectSettingsSlot_MAX = 5
};


// Enum AriseMapPlugin.EInDoorType
enum class EInDoorType : uint8_t
{
	OutDoor                        = 0,
	InDoor1                        = 1,
	InDoor2                        = 2,
	InDoor3                        = 3,
	InDoor4                        = 4,
	InDoor5                        = 5,
	InDoor6                        = 6,
	InDoor7                        = 7,
	InDoor8                        = 8,
	InDoorAll                      = 9,
	EInDoorType_MAX                = 10
};


// Enum AriseMapPlugin.ELevelRequiredSetting
enum class ELevelRequiredSetting : uint8_t
{
	Required                       = 0,
	NoRequired                     = 1,
	ELevelRequiredSetting_MAX      = 2
};


// Enum AriseMapPlugin.ELevelShowSetting
enum class ELevelShowSetting : uint8_t
{
	Show                           = 0,
	Hide                           = 1,
	ELevelShowSetting_MAX          = 2
};


// Enum AriseMapPlugin.EMapOrderType
enum class EMapOrderType : uint8_t
{
	Default                        = 0,
	BackGround                     = 1,
	Light                          = 2,
	Effect                         = 3,
	WhiteBox                       = 4,
	Enemy                          = 5,
	GeneralObject                  = 6,
	PickupItem                     = 7,
	CollectItem                    = 8,
	Collision                      = 9,
	System                         = 10,
	Gimmick                        = 11,
	Npc                            = 12,
	Navi                           = 13,
	MapLink                        = 14,
	Event                          = 15,
	Sound                          = 16,
	Environment                    = 17,
	GameFlags                      = 18,
	Battle                         = 19,
	Chat                           = 20,
	Quest                          = 21,
	Sequencer                      = 22,
	BasePoint                      = 23,
	Test                           = 24,
	EMapOrderType_MAX              = 25
};


// Enum AriseMapPlugin.EMapEnvWetEffect
enum class EMapEnvWetEffect : uint8_t
{
	Top                            = 0,
	Bottom                         = 1,
	Leg                            = 2,
	EMapEnvWetEffect_MAX           = 3
};


// Enum AriseMapPlugin.ENamePlatePositionType
enum class ENamePlatePositionType : uint8_t
{
	MAP_LINK_NAME_PLATE_RIGHT_TOP  = 0,
	MAP_LINK_NAME_PLATE_RIGHT_BOTTOM = 1,
	MAP_LINK_NAME_PLATE_LEFT_TOP   = 2,
	MAP_LINK_NAME_PLATE_LEFT_BOTTOM = 3,
	MAP_LINK_NAME_PLATE_NONE       = 4,
	MAP_LINK_NAME_PLATE_MAX        = 5
};


// Enum AriseMapPlugin.EMinimapIconType
enum class EMinimapIconType : uint8_t
{
	MAP_LINK_MINIMAP_ICON_NONE     = 0,
	MAP_LINK_MINIMAP_ICON_DEFAULT  = 1,
	MAP_LINK_MINIMAP_ICON_SHOP     = 2,
	MAP_LINK_MINIMAP_ICON_INN      = 3,
	MAP_LINK_MINIMAP_ICON_BAR      = 4,
	MAP_LINK_MINIMAP_ICON_IGNORE   = 5,
	MAP_LINK_MINIMAP_ICON_MAX      = 6
};


// Enum AriseMapPlugin.EGuideNameType
enum class EGuideNameType : uint8_t
{
	MAP_LINK_GUIDE_AUTO            = 0,
	MAP_LINK_GUIDE_LINE            = 1,
	MAP_LINK_GUIDE_ARC             = 2,
	MAP_LINK_GUIDE_CIRCLE          = 3,
	MAP_LINK_GUIDE_NONE            = 4,
	MAP_LINK_GUIDE_MAX             = 5
};


// Enum AriseMapPlugin.EMapLinkExecType
enum class EMapLinkExecType : uint8_t
{
	MAP_LINK_TYPE_AUTO             = 0,
	MAP_LINK_TYPE_INPUT            = 1,
	MAP_LINK_TYPE_CLOSED           = 2,
	MAP_LINK_TYPE_SCRIPT           = 3,
	MAP_LINK_TYPE_INVALID          = 4,
	MAP_LINK_TYPE_MAX              = 5
};


// Enum AriseMapPlugin.EMapLinkPriority
enum class EMapLinkPriority : uint8_t
{
	MAP_LINK_PRIORITY_HIGH         = 0,
	MAP_LINK_PRIORITY_MIDDLE       = 1,
	MAP_LINK_PRIORITY_LOW          = 2,
	MAP_LINK_PRIORITY_MAX          = 3
};


// Enum AriseMapPlugin.EMapLocatorType
enum class EMapLocatorType : uint8_t
{
	MAP_LOCATOR_TYPE_FREE          = 0,
	MAP_LOCATOR_TYPE_MAPLINK       = 1,
	MAP_LOCATOR_TYPE_PLAYERDEF     = 2,
	MAP_LOCATOR_TYPE_EVENT         = 3,
	MAP_LOCATOR_TYPE_LONGCHAT      = 4,
	MAP_LOCATOR_TYPE_FASTTRAVEL    = 5,
	MAP_LOCATOR_TYPE_DIRECTION     = 6,
	MAP_LOCATOR_TYPE_RES3          = 7,
	MAP_LOCATOR_TYPE_MAX           = 8
};


// Enum AriseMapPlugin.ELevelLoadSetting
enum class ELevelLoadSetting : uint8_t
{
	Always                         = 0,
	Manual                         = 1,
	ELevelLoadSetting_MAX          = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseMapPlugin.MapOrder
// 0x0078
struct FMapOrder
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     LevelPath;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EMapOrderType                                      LevelType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     DlcName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EWorldWeatherType                                  Weather;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ELevelLoadSetting                                  LoadSetting;                                              // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ELevelShowSetting                                  ShowSetting;                                              // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ELevelRequiredSetting                              ShowRequired;                                             // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               ShowEvent;                                                // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               MenuVisible;                                              // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CampVisible;                                              // 0x003E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	struct FString                                     NaviMap;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EInDoorType                                        InDoorType;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FScenarioCondition                          Scenario;                                                 // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseMapPlugin.MapOrderList
// 0x0010
struct FMapOrderList
{
	TArray<struct FMapOrder>                           FMapOrderArray;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseMapPlugin.AriseMapEffectFinalSettings
// 0x0014
struct FAriseMapEffectFinalSettings
{
	bool                                               Visibility;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.AriseMapEffectSettings
// 0x0018
struct FAriseMapEffectSettings
{
	unsigned char                                      bOverride_Visibility : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Kill : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Color : 1;                                      // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	bool                                               Visibility;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Kill;                                                     // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_SceneColor
// 0x0018
struct FArisePostProcessWorldTime_SceneColor
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ColorGradingIntensityCurve;                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CharaSkyLightMinIntensityCurve;                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_ShadowColor
// 0x0030
struct FArisePostProcessWorldTime_ShadowColor
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           ShadowColorCurve;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FoligeShadowColorCurve;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PenumbraShadowColorCurve;                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FoligePenumbraShadowColorCurve;                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ShadowGiPaintIntensityCurve;                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_GlobalIllumination
// 0x0010
struct FArisePostProcessWorldTime_GlobalIllumination
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           LightColorCurve;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_VolumetricLighting
// 0x0018
struct FArisePostProcessWorldTime_VolumetricLighting
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           VolumetricLightFogColorCurve;                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VolumetricLightIntensityCurve;                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_VolumetricCloudShading
// 0x0020
struct FArisePostProcessWorldTime_VolumetricCloudShading
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           VolumetricCloudBaseColorCurve;                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           VolumetricCloudShadowColor0Curve;                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           VolumetricCloudShadowColor1Curve;                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_HeightFogColorModulation
// 0x0010
struct FArisePostProcessWorldTime_HeightFogColorModulation
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           HeightFogModulationColor;                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_DirectionalLight
// 0x0010
struct FArisePostProcessWorldTime_DirectionalLight
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 IntensityCharaScaleCurve;                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.ArisePostProcessWorldTime_PanoramaPara
// 0x0010
struct FArisePostProcessWorldTime_PanoramaPara
{
	class AActor*                                      PostProcessVolume;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PanoramaParaIntensityCurve;                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.LandscapeMaterialData
// 0x0020
struct FLandscapeMaterialData
{
	struct FName                                       MaterialName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Planar_PhysMaterialName;                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Slope_PhysMaterialName;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Side_PhysMaterialName;                                    // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.LandscapeMaterialDatabaseRow
// 0x0010
struct FLandscapeMaterialDatabaseRow
{
	TArray<struct FLandscapeMaterialData>              DataArray;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseMapPlugin.StrMapEffectSpawnerRef
// 0x0010
struct FStrMapEffectSpawnerRef
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AriseMapPlugin.MapEnvSurfaceSettings
// 0x0048
struct FMapEnvSurfaceSettings
{
	class UParticleSystem*                             FootPutReactionEffectWalk;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FootPutReactionEffect;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FootReactionEffectWalk;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FootReactionEffect;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Footmark[0x4];                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SurfaceColor;                                             // 0x0040(0x0004) (Edit, IsPlainOldData)
	bool                                               bFitCharacterDirection;                                   // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPutFootmark;                                             // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
};

// ScriptStruct AriseMapPlugin.MapEnvWaterEffectSettings
// 0x0008
struct FMapEnvWaterEffectSettings
{
	class UParticleSystem*                             Effect;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.PhysicalMaterialOverrideData
// 0x0020
struct FPhysicalMaterialOverrideData
{
	struct FString                                     Label;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       BaseMaterialName;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       OverrideMaterialName;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseMapPlugin.PhysicalMaterialOverrideDatabaseRow
// 0x0010
struct FPhysicalMaterialOverrideDatabaseRow
{
	TArray<struct FPhysicalMaterialOverrideData>       DataArray;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
