#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AriseMapPlugin.MapOrderDatabase.IsEnableIndex_FMapOrderArray
struct UMapOrderDatabase_IsEnableIndex_FMapOrderArray_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMapPlugin.AriseMapPluginBPLibrary.GetPhysicalSurfaceName
struct UAriseMapPluginBPLibrary_GetPhysicalSurfaceName_Params
{
	struct FHitResult                                  InHitResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMapPlugin.AriseMapPluginBPLibrary.GetMapEffectSettings
struct UAriseMapPluginBPLibrary_GetMapEffectSettings_Params
{
	EAriseMapEffectSettingsSlot                        Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAriseMapEffectFinalSettings                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AriseMapPlugin.AriseMapPluginProjectSettings.GetPhysicalMaterialOverrideDatabase
struct UAriseMapPluginProjectSettings_GetPhysicalMaterialOverrideDatabase_Params
{
	class UPhysicalMaterialOverrideDatabase*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMapPlugin.AriseMapPluginProjectSettings.GetLandscapeMaterialDatabase
struct UAriseMapPluginProjectSettings_GetLandscapeMaterialDatabase_Params
{
	class ULandscapeMaterialDatabase*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMapPlugin.ArisePostProcessComponent.GetMapEffectSettings
struct UArisePostProcessComponent_GetMapEffectSettings_Params
{
	EAriseMapEffectSettingsSlot                        Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAriseMapEffectSettings                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseMapPlugin.ArisePostProcessVolume.GetMapEffectSettings
struct AArisePostProcessVolume_GetMapEffectSettings_Params
{
	EAriseMapEffectSettingsSlot                        Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAriseMapEffectSettings                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseMapPlugin.FollowingEffectBase.SetForceHide
struct AFollowingEffectBase_SetForceHide_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseMapPlugin.FollowingEffectBase.OnForceHideChanged
struct AFollowingEffectBase_OnForceHideChanged_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseMapPlugin.FollowingEffectBase.GetForceHide
struct AFollowingEffectBase_GetForceHide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMapPlugin.FollowingEffectBase.GetEffectSettings
struct AFollowingEffectBase_GetEffectSettings_Params
{
	struct FAriseMapEffectFinalSettings                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseMapPlugin.MapEffectSpawner.Update
struct AMapEffectSpawner_Update_Params
{
};

// Function AriseMapPlugin.MapLink.GetMapLinkName
struct AMapLink_GetMapLinkName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCellColumnNum
struct UMapLinkClipboardFunctionInterface_GetCellColumnNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_OwnerMapName
struct UMapLinkClipboardFunctionInterface_GetCell_OwnerMapName_Params
{
	int                                                Column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LocalId
struct UMapLinkClipboardFunctionInterface_GetCell_LocalId_Params
{
	int                                                Column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LinkMapName
struct UMapLinkClipboardFunctionInterface_GetCell_LinkMapName_Params
{
	int                                                Column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LinkLocatorName
struct UMapLinkClipboardFunctionInterface_GetCell_LinkLocatorName_Params
{
	int                                                Column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_AreaName
struct UMapLinkClipboardFunctionInterface_GetCell_AreaName_Params
{
	int                                                Column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLocator.GetUniqueName
struct AMapLocator_GetUniqueName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLocator.GetMapLocatorName
struct AMapLocator_GetMapLocatorName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMapPlugin.MapLocator.GetLocalName
struct AMapLocator_GetLocalName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
