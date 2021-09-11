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

// BlueprintGeneratedClass BP_LocationMapSupport.BP_LocationMapSupport_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LocationMapSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocationMapSupport.BP_LocationMapSupport_C");
		return ptr;
	}


	bool STATIC_IsFishingEnabled(class UObject* __WorldContext);
	bool STATIC_IsLocationOpened(const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_GetLocamapOnCursorText(const struct FLocatorInfo& Info, class UObject* __WorldContext, struct FModifiedText* Text, bool* found);
	void STATIC_FindAreaPicturePath(const struct FString& AreaName, class UObject* __WorldContext, struct FString* PicturePath);
	void STATIC_GetMapIconList_OnlyShowList(class UObject* __WorldContext, TArray<unsigned char>* OnMapIconTypeIconArray, TArray<EMapIconType>* List);
	void STATIC_GetCurrentLocation(class UObject* __WorldContext, struct FString* CurrentMapLocation);
	void STATIC_GetAreaData(const struct FString& AreaName, class UObject* __WorldContext, struct FMapAreaData* Data, bool* IsFound);
	void STATIC_GetNextLocationName(class UObject* __WorldContext, struct FString* LocationName);
	void STATIC_DoFastTravel(const struct FString& TargetLocator, class UObject* __WorldContext);
	void STATIC_GetFastTravelPoint(const struct FString& LocationName, class UObject* __WorldContext, TArray<struct FFastTravelPointInfo>* InfoList);
	void STATIC_GetVerifiedMapIconList(class UObject* __WorldContext, TMap<EMapIconType, bool>* Verified);
	void STATIC_GetMapIconData(EMapIconType IconType, class UObject* __WorldContext, struct FMapIconData* Output, bool* found);
	void STATIC_LoadAndVerifyMapIconList(class UObject* __WorldContext, TMap<EMapIconType, bool>* Loaded, TMap<EMapIconType, bool>* Verified);
	void STATIC_EnableMapIcon(EMapIconType IconType, bool sw, class UObject* __WorldContext);
	void STATIC_GetMapIconList(class UObject* __WorldContext, TArray<EMapIconType>* List);
	void STATIC_IsShow(EMapIconType IconType, TMap<EMapIconType, bool> EnabledMap, class UObject* __WorldContext, bool* IsShow);
	void STATIC_GetRegionData(const struct FMapRegionData& RegionName, class UObject* __WorldContext, struct FST_RegionData* RegionData);
	void STATIC_GetLocationData(const struct FString& LocationName, class UObject* __WorldContext, struct FMapLocationData* Data, bool* found);
	void STATIC_GetRegionList(class UObject* __WorldContext, TArray<struct FST_RegionData>* RegionList);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
