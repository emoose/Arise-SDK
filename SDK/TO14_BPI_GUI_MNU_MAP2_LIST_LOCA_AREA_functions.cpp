
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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.GetHierarchyCount
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLocationTreeData> LocationTreeDataArray          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::GetHierarchyCount(TArray<struct FLocationTreeData>* LocationTreeDataArray, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.GetHierarchyCount");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_GetHierarchyCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationTreeDataArray != nullptr)
		*LocationTreeDataArray = params.LocationTreeDataArray;
	if (Count != nullptr)
		*Count = params.Count;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshAsRegion
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::RefreshAsRegion(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshAsRegion");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_RefreshAsRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshQuest
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::RefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString> SubQuestIDs, TArray<int> SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_RefreshQuest_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;
	params.SubQuestIDs = SubQuestIDs;
	params.SubStepIndices = SubStepIndices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshAsLocation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::RefreshAsLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshAsLocation");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_RefreshAsLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshQuest
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::OnRefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString> SubQuestIDs, TArray<int> SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_OnRefreshQuest_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;
	params.SubQuestIDs = SubQuestIDs;
	params.SubStepIndices = SubStepIndices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshAsRegion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::OnRefreshAsRegion(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshAsRegion");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_OnRefreshAsRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshAsLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::OnRefreshAsLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshAsLocation");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_OnRefreshAsLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
