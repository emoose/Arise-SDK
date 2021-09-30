
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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.ClearQuest
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C::ClearQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.ClearQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_ClearQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.GetQuest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ActorIDs                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         QuestIDs                       (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C::GetQuest(const struct FString& LocationName, bool* bFound, TArray<struct FString>* ActorIDs, TArray<struct FString>* QuestIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.GetQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_GetQuest_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (ActorIDs != nullptr)
		*ActorIDs = params.ActorIDs;
	if (QuestIDs != nullptr)
		*QuestIDs = params.QuestIDs;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.CacheQuest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         ActorIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         QuestIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C::CacheQuest(const struct FString& LocationName, TArray<struct FString>* ActorIDs, TArray<struct FString>* QuestIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.CacheQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_CacheQuest_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorIDs != nullptr)
		*ActorIDs = params.ActorIDs;
	if (QuestIDs != nullptr)
		*QuestIDs = params.QuestIDs;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.Term
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C::Term()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.Term");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_Term_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.ClearBeforeSubQuestActorIDs
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C::ClearBeforeSubQuestActorIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.ClearBeforeSubQuestActorIDs");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_ClearBeforeSubQuestActorIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.GetBeforeSubQuest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ActorIDs                       (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C::GetBeforeSubQuest(const struct FString& LocationName, bool* bFound, TArray<struct FString>* ActorIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.GetBeforeSubQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_GetBeforeSubQuest_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (ActorIDs != nullptr)
		*ActorIDs = params.ActorIDs;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.CacheBeforeSubQuest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         ActorIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C::CacheBeforeSubQuest(const struct FString& LocationName, TArray<struct FString>* ActorIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.CacheBeforeSubQuest");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_CacheBeforeSubQuest_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorIDs != nullptr)
		*ActorIDs = params.ActorIDs;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
