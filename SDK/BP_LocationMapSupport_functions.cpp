
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

// Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsFishingEnabled
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LocationMapSupport_C::STATIC_IsFishingEnabled(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsFishingEnabled");

	UBP_LocationMapSupport_C_IsFishingEnabled_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsLocationOpened
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LocationMapSupport_C::STATIC_IsLocationOpened(const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsLocationOpened");

	UBP_LocationMapSupport_C_IsLocationOpened_Params params;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetLocamapOnCursorText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           Text                           (Parm, OutParm)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocationMapSupport_C::STATIC_GetLocamapOnCursorText(const struct FLocatorInfo& Info, class UObject* __WorldContext, struct FModifiedText* Text, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetLocamapOnCursorText");

	UBP_LocationMapSupport_C_GetLocamapOnCursorText_Params params;
	params.Info = Info;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (found != nullptr)
		*found = params.found;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.FindAreaPicturePath
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PicturePath                    (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_FindAreaPicturePath(const struct FString& AreaName, class UObject* __WorldContext, struct FString* PicturePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.FindAreaPicturePath");

	UBP_LocationMapSupport_C_FindAreaPicturePath_Params params;
	params.AreaName = AreaName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PicturePath != nullptr)
		*PicturePath = params.PicturePath;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconList_OnlyShowList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<unsigned char>          OnMapIconTypeIconArray         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EMapIconType>           List                           (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_GetMapIconList_OnlyShowList(class UObject* __WorldContext, TArray<unsigned char>* OnMapIconTypeIconArray, TArray<EMapIconType>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconList_OnlyShowList");

	UBP_LocationMapSupport_C_GetMapIconList_OnlyShowList_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnMapIconTypeIconArray != nullptr)
		*OnMapIconTypeIconArray = params.OnMapIconTypeIconArray;
	if (List != nullptr)
		*List = params.List;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetCurrentLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CurrentMapLocation             (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_GetCurrentLocation(class UObject* __WorldContext, struct FString* CurrentMapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetCurrentLocation");

	UBP_LocationMapSupport_C_GetCurrentLocation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMapLocation != nullptr)
		*CurrentMapLocation = params.CurrentMapLocation;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetAreaData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMapAreaData            Data                           (Parm, OutParm)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocationMapSupport_C::STATIC_GetAreaData(const struct FString& AreaName, class UObject* __WorldContext, struct FMapAreaData* Data, bool* IsFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetAreaData");

	UBP_LocationMapSupport_C_GetAreaData_Params params;
	params.AreaName = AreaName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetNextLocationName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LocationName                   (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_GetNextLocationName(class UObject* __WorldContext, struct FString* LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetNextLocationName");

	UBP_LocationMapSupport_C_GetNextLocationName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationName != nullptr)
		*LocationName = params.LocationName;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.DoFastTravel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TargetLocator                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocationMapSupport_C::STATIC_DoFastTravel(const struct FString& TargetLocator, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.DoFastTravel");

	UBP_LocationMapSupport_C_DoFastTravel_Params params;
	params.TargetLocator = TargetLocator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetFastTravelPoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFastTravelPointInfo> InfoList                       (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_GetFastTravelPoint(const struct FString& LocationName, class UObject* __WorldContext, TArray<struct FFastTravelPointInfo>* InfoList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetFastTravelPoint");

	UBP_LocationMapSupport_C_GetFastTravelPoint_Params params;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InfoList != nullptr)
		*InfoList = params.InfoList;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetVerifiedMapIconList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EMapIconType, bool>       Verified                       (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_GetVerifiedMapIconList(class UObject* __WorldContext, TMap<EMapIconType, bool>* Verified)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetVerifiedMapIconList");

	UBP_LocationMapSupport_C_GetVerifiedMapIconList_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Verified != nullptr)
		*Verified = params.Verified;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMapIconData            Output                         (Parm, OutParm)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocationMapSupport_C::STATIC_GetMapIconData(EMapIconType IconType, class UObject* __WorldContext, struct FMapIconData* Output, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconData");

	UBP_LocationMapSupport_C_GetMapIconData_Params params;
	params.IconType = IconType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
	if (found != nullptr)
		*found = params.found;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.LoadAndVerifyMapIconList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EMapIconType, bool>       Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EMapIconType, bool>       Verified                       (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_LoadAndVerifyMapIconList(class UObject* __WorldContext, TMap<EMapIconType, bool>* Loaded, TMap<EMapIconType, bool>* Verified)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.LoadAndVerifyMapIconList");

	UBP_LocationMapSupport_C_LoadAndVerifyMapIconList_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loaded != nullptr)
		*Loaded = params.Loaded;
	if (Verified != nullptr)
		*Verified = params.Verified;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.EnableMapIcon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocationMapSupport_C::STATIC_EnableMapIcon(EMapIconType IconType, bool sw, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.EnableMapIcon");

	UBP_LocationMapSupport_C_EnableMapIcon_Params params;
	params.IconType = IconType;
	params.sw = sw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EMapIconType>           List                           (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_GetMapIconList(class UObject* __WorldContext, TArray<EMapIconType>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetMapIconList");

	UBP_LocationMapSupport_C_GetMapIconList_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsShow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EMapIconType, bool>       EnabledMap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocationMapSupport_C::STATIC_IsShow(EMapIconType IconType, TMap<EMapIconType, bool> EnabledMap, class UObject* __WorldContext, bool* IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.IsShow");

	UBP_LocationMapSupport_C_IsShow_Params params;
	params.IconType = IconType;
	params.EnabledMap = EnabledMap;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsShow != nullptr)
		*IsShow = params.IsShow;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetRegionData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapRegionData          RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_RegionData          RegionData                     (Parm, OutParm)

void UBP_LocationMapSupport_C::STATIC_GetRegionData(const struct FMapRegionData& RegionName, class UObject* __WorldContext, struct FST_RegionData* RegionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetRegionData");

	UBP_LocationMapSupport_C_GetRegionData_Params params;
	params.RegionName = RegionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RegionData != nullptr)
		*RegionData = params.RegionData;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetLocationData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMapLocationData        Data                           (Parm, OutParm)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocationMapSupport_C::STATIC_GetLocationData(const struct FString& LocationName, class UObject* __WorldContext, struct FMapLocationData* Data, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetLocationData");

	UBP_LocationMapSupport_C_GetLocationData_Params params;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (found != nullptr)
		*found = params.found;
}


// Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetRegionList
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_RegionData>  RegionList                     (Parm, OutParm, ZeroConstructor)

void UBP_LocationMapSupport_C::STATIC_GetRegionList(class UObject* __WorldContext, TArray<struct FST_RegionData>* RegionList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapSupport.BP_LocationMapSupport_C.GetRegionList");

	UBP_LocationMapSupport_C_GetRegionList_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RegionList != nullptr)
		*RegionList = params.RegionList;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
