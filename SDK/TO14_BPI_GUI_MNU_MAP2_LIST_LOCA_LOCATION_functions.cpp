
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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.RefreshQuest
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C::RefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.RefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_RefreshQuest_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubQuestIDs != nullptr)
		*SubQuestIDs = params.SubQuestIDs;
	if (SubStepIndices != nullptr)
		*SubStepIndices = params.SubStepIndices;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.RefreshAsLocation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C::RefreshAsLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.RefreshAsLocation");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_RefreshAsLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.OnRefreshQuest
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C::OnRefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString> SubQuestIDs, TArray<int> SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.OnRefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_OnRefreshQuest_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;
	params.SubQuestIDs = SubQuestIDs;
	params.SubStepIndices = SubStepIndices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.OnRefreshAsLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C::OnRefreshAsLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.OnRefreshAsLocation");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_OnRefreshAsLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
