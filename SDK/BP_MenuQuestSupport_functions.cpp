
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

// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.NotifyOnQuestUpdate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_NotifyOnQuestUpdate(class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.NotifyOnQuestUpdate");

	UBP_MenuQuestSupport_C_NotifyOnQuestUpdate_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetPF_PlayerLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_MenuQuestSupport_C::STATIC_GetPF_PlayerLocation(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetPF_PlayerLocation");

	UBP_MenuQuestSupport_C_GetPF_PlayerLocation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestLocationDataMulti
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         LocationNameArray              (Parm, OutParm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_GetQuestLocationDataMulti(const struct FString& QuestID, class UObject* __WorldContext, TArray<struct FString>* LocationNameArray, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestLocationDataMulti");

	UBP_MenuQuestSupport_C_GetQuestLocationDataMulti_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationNameArray != nullptr)
		*LocationNameArray = params.LocationNameArray;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestIdFromLocatorInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            LocatorInfo                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 QuestID                        (Parm, OutParm, ZeroConstructor)

void UBP_MenuQuestSupport_C::STATIC_GetQuestIdFromLocatorInfo(const struct FLocatorInfo& LocatorInfo, class UObject* __WorldContext, struct FString* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestIdFromLocatorInfo");

	UBP_MenuQuestSupport_C_GetQuestIdFromLocatorInfo_Params params;
	params.LocatorInfo = LocatorInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestID != nullptr)
		*QuestID = params.QuestID;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestLocationData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LocationName                   (Parm, OutParm, ZeroConstructor)
// struct FModifiedText           Area                           (Parm, OutParm)
// struct FModifiedText           Location                       (Parm, OutParm)

void UBP_MenuQuestSupport_C::STATIC_GetQuestLocationData(const struct FString& QuestID, class UObject* __WorldContext, struct FString* LocationName, struct FModifiedText* Area, struct FModifiedText* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestLocationData");

	UBP_MenuQuestSupport_C_GetQuestLocationData_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationName != nullptr)
		*LocationName = params.LocationName;
	if (Area != nullptr)
		*Area = params.Area;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetNearQuestLocator
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLocatorInfo>    ioLocatorList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_GetNearQuestLocator(const struct FString& LocationName, const struct FString& QuestID, int Step, class UObject* __WorldContext, TArray<struct FLocatorInfo>* ioLocatorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetNearQuestLocator");

	UBP_MenuQuestSupport_C_GetNearQuestLocator_Params params;
	params.LocationName = LocationName;
	params.QuestID = QuestID;
	params.Step = Step;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ioLocatorList != nullptr)
		*ioLocatorList = params.ioLocatorList;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.SetSubQuestMarkByID
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Quest_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_SetSubQuestMarkByID(const struct FString& Quest_ID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.SetSubQuestMarkByID");

	UBP_MenuQuestSupport_C_SetSubQuestMarkByID_Params params;
	params.Quest_ID = Quest_ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.IsSubQuestMarked
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMarked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_IsSubQuestMarked(class UObject* __WorldContext, bool* IsMarked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.IsSubQuestMarked");

	UBP_MenuQuestSupport_C_IsSubQuestMarked_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMarked != nullptr)
		*IsMarked = params.IsMarked;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetOpenedSteps
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Steps1                         (Parm, OutParm, ZeroConstructor)

void UBP_MenuQuestSupport_C::STATIC_GetOpenedSteps(const struct FString& ID, class UObject* __WorldContext, TArray<int>* Steps1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetOpenedSteps");

	UBP_MenuQuestSupport_C_GetOpenedSteps_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Steps1 != nullptr)
		*Steps1 = params.Steps1;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestOwnerPosition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)
// EMapIconType                   IconType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_GetQuestOwnerPosition(const struct FString& LocationName, const struct FString& QuestID, int Step, class UObject* __WorldContext, struct FVector* Position, EMapIconType* IconType, float* Radius, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetQuestOwnerPosition");

	UBP_MenuQuestSupport_C_GetQuestOwnerPosition_Params params;
	params.LocationName = LocationName;
	params.QuestID = QuestID;
	params.Step = Step;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (IconType != nullptr)
		*IconType = params.IconType;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentSubQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         RetSubQuestIDs                 (Parm, OutParm, ZeroConstructor)
// TArray<int>                    retSubStepIndices              (Parm, OutParm, ZeroConstructor)

void UBP_MenuQuestSupport_C::STATIC_GetCurrentSubQuest(class UObject* __WorldContext, bool* IsFound, TArray<struct FString>* RetSubQuestIDs, TArray<int>* retSubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentSubQuest");

	UBP_MenuQuestSupport_C_GetCurrentSubQuest_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (RetSubQuestIDs != nullptr)
		*RetSubQuestIDs = params.RetSubQuestIDs;
	if (retSubStepIndices != nullptr)
		*retSubStepIndices = params.retSubStepIndices;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentMainQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 retMainQuestID                 (Parm, OutParm, ZeroConstructor)
// int                            retMainStepIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_GetCurrentMainQuest(class UObject* __WorldContext, bool* IsFound, struct FString* retMainQuestID, int* retMainStepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentMainQuest");

	UBP_MenuQuestSupport_C_GetCurrentMainQuest_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (retMainQuestID != nullptr)
		*retMainQuestID = params.retMainQuestID;
	if (retMainStepIndex != nullptr)
		*retMainStepIndex = params.retMainStepIndex;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.AddQuestIcon
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuQuestSupport_C::STATIC_AddQuestIcon(const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.AddQuestIcon");

	UBP_MenuQuestSupport_C_AddQuestIcon_Params params;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 MainQuestID                    (Parm, OutParm, ZeroConstructor)
// int                            MainStepIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (Parm, OutParm, ZeroConstructor)
// TArray<int>                    SubStepIndices                 (Parm, OutParm, ZeroConstructor)

void UBP_MenuQuestSupport_C::STATIC_GetCurrentQuest(class UObject* __WorldContext, bool* found, struct FString* MainQuestID, int* MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuQuestSupport.BP_MenuQuestSupport_C.GetCurrentQuest");

	UBP_MenuQuestSupport_C_GetCurrentQuest_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (MainQuestID != nullptr)
		*MainQuestID = params.MainQuestID;
	if (MainStepIndex != nullptr)
		*MainStepIndex = params.MainStepIndex;
	if (SubQuestIDs != nullptr)
		*SubQuestIDs = params.SubQuestIDs;
	if (SubStepIndices != nullptr)
		*SubStepIndices = params.SubStepIndices;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
