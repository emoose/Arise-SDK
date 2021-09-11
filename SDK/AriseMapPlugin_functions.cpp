
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AriseMapPlugin.MapOrderDatabase.IsEnableIndex_FMapOrderArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapOrderDatabase::IsEnableIndex_FMapOrderArray(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapOrderDatabase.IsEnableIndex_FMapOrderArray");

	UMapOrderDatabase_IsEnableIndex_FMapOrderArray_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.AriseMapPluginBPLibrary.GetPhysicalSurfaceName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              InHitResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAriseMapPluginBPLibrary::STATIC_GetPhysicalSurfaceName(const struct FHitResult& InHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.AriseMapPluginBPLibrary.GetPhysicalSurfaceName");

	UAriseMapPluginBPLibrary_GetPhysicalSurfaceName_Params params;
	params.InHitResult = InHitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.AriseMapPluginBPLibrary.GetMapEffectSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAriseMapEffectSettingsSlot    Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FAriseMapEffectFinalSettings ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAriseMapEffectFinalSettings UAriseMapPluginBPLibrary::STATIC_GetMapEffectSettings(EAriseMapEffectSettingsSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.AriseMapPluginBPLibrary.GetMapEffectSettings");

	UAriseMapPluginBPLibrary_GetMapEffectSettings_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.AriseMapPluginProjectSettings.GetPhysicalMaterialOverrideDatabase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPhysicalMaterialOverrideDatabase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhysicalMaterialOverrideDatabase* UAriseMapPluginProjectSettings::STATIC_GetPhysicalMaterialOverrideDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.AriseMapPluginProjectSettings.GetPhysicalMaterialOverrideDatabase");

	UAriseMapPluginProjectSettings_GetPhysicalMaterialOverrideDatabase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.AriseMapPluginProjectSettings.GetLandscapeMaterialDatabase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULandscapeMaterialDatabase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULandscapeMaterialDatabase* UAriseMapPluginProjectSettings::STATIC_GetLandscapeMaterialDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.AriseMapPluginProjectSettings.GetLandscapeMaterialDatabase");

	UAriseMapPluginProjectSettings_GetLandscapeMaterialDatabase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.ArisePostProcessComponent.GetMapEffectSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAriseMapEffectSettingsSlot    Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FAriseMapEffectSettings ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAriseMapEffectSettings UArisePostProcessComponent::GetMapEffectSettings(EAriseMapEffectSettingsSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.ArisePostProcessComponent.GetMapEffectSettings");

	UArisePostProcessComponent_GetMapEffectSettings_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.ArisePostProcessVolume.GetMapEffectSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAriseMapEffectSettingsSlot    Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FAriseMapEffectSettings ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAriseMapEffectSettings AArisePostProcessVolume::GetMapEffectSettings(EAriseMapEffectSettingsSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.ArisePostProcessVolume.GetMapEffectSettings");

	AArisePostProcessVolume_GetMapEffectSettings_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.FollowingEffectBase.SetForceHide
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)

void AFollowingEffectBase::STATIC_SetForceHide(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.FollowingEffectBase.SetForceHide");

	AFollowingEffectBase_SetForceHide_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMapPlugin.FollowingEffectBase.OnForceHideChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)

void AFollowingEffectBase::OnForceHideChanged(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.FollowingEffectBase.OnForceHideChanged");

	AFollowingEffectBase_OnForceHideChanged_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMapPlugin.FollowingEffectBase.GetForceHide
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFollowingEffectBase::STATIC_GetForceHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.FollowingEffectBase.GetForceHide");

	AFollowingEffectBase_GetForceHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.FollowingEffectBase.GetEffectSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAriseMapEffectFinalSettings ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAriseMapEffectFinalSettings AFollowingEffectBase::GetEffectSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.FollowingEffectBase.GetEffectSettings");

	AFollowingEffectBase_GetEffectSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapEffectSpawner.Update
// (Event, Public, BlueprintEvent)

void AMapEffectSpawner::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapEffectSpawner.Update");

	AMapEffectSpawner_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMapPlugin.MapLink.GetMapLinkName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AMapLink::GetMapLinkName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLink.GetMapLinkName");

	AMapLink_GetMapLinkName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCellColumnNum
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapLinkClipboardFunctionInterface::GetCellColumnNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCellColumnNum");

	UMapLinkClipboardFunctionInterface_GetCellColumnNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_OwnerMapName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            Column                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMapLinkClipboardFunctionInterface::GetCell_OwnerMapName(int Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_OwnerMapName");

	UMapLinkClipboardFunctionInterface_GetCell_OwnerMapName_Params params;
	params.Column = Column;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LocalId
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            Column                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMapLinkClipboardFunctionInterface::GetCell_LocalId(int Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LocalId");

	UMapLinkClipboardFunctionInterface_GetCell_LocalId_Params params;
	params.Column = Column;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LinkMapName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            Column                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMapLinkClipboardFunctionInterface::GetCell_LinkMapName(int Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LinkMapName");

	UMapLinkClipboardFunctionInterface_GetCell_LinkMapName_Params params;
	params.Column = Column;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LinkLocatorName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            Column                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMapLinkClipboardFunctionInterface::GetCell_LinkLocatorName(int Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_LinkLocatorName");

	UMapLinkClipboardFunctionInterface_GetCell_LinkLocatorName_Params params;
	params.Column = Column;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_AreaName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            Column                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMapLinkClipboardFunctionInterface::GetCell_AreaName(int Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLinkClipboardFunctionInterface.GetCell_AreaName");

	UMapLinkClipboardFunctionInterface_GetCell_AreaName_Params params;
	params.Column = Column;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLocator.GetUniqueName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AMapLocator::GetUniqueName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLocator.GetUniqueName");

	AMapLocator_GetUniqueName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLocator.GetMapLocatorName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AMapLocator::GetMapLocatorName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLocator.GetMapLocatorName");

	AMapLocator_GetMapLocatorName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMapPlugin.MapLocator.GetLocalName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AMapLocator::GetLocalName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMapPlugin.MapLocator.GetLocalName");

	AMapLocator_GetLocalName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
