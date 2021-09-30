
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

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.SetSearchOwlReceiveRewardFlag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InRewardID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInNew                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_SetSearchOwlReceiveRewardFlag(int InRewardID, bool bInNew, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.SetSearchOwlReceiveRewardFlag");

	UBP_SearchOwlFunctionLibrary_C_SetSearchOwlReceiveRewardFlag_Params params;
	params.InRewardID = InRewardID;
	params.bInNew = bInNew;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetReceivableSearchOwlReward
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutRewardID                    (Parm, OutParm, ZeroConstructor)

void UBP_SearchOwlFunctionLibrary_C::STATIC_GetReceivableSearchOwlReward(class UObject* __WorldContext, TArray<int>* OutRewardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetReceivableSearchOwlReward");

	UBP_SearchOwlFunctionLibrary_C_GetReceivableSearchOwlReward_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRewardID != nullptr)
		*OutRewardID = params.OutRewardID;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.DiscoverSearchOwl
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InOwlPointID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_DiscoverSearchOwl(const struct FString& InOwlPointID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.DiscoverSearchOwl");

	UBP_SearchOwlFunctionLibrary_C_DiscoverSearchOwl_Params params;
	params.InOwlPointID = InOwlPointID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetDiscoveredSearchOwlNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 InRegionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutNum                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_GetDiscoveredSearchOwlNum(const struct FString& InRegionName, class UObject* __WorldContext, int* OutNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetDiscoveredSearchOwlNum");

	UBP_SearchOwlFunctionLibrary_C_GetDiscoveredSearchOwlNum_Params params;
	params.InRegionName = InRegionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNum != nullptr)
		*OutNum = params.OutNum;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetCompletedSearchOwlNum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutNum                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_GetCompletedSearchOwlNum(class UObject* __WorldContext, int* OutNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetCompletedSearchOwlNum");

	UBP_SearchOwlFunctionLibrary_C_GetCompletedSearchOwlNum_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNum != nullptr)
		*OutNum = params.OutNum;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetDiscoveredSearchOwlRate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutRate                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_GetDiscoveredSearchOwlRate(class UObject* __WorldContext, int* OutRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetDiscoveredSearchOwlRate");

	UBP_SearchOwlFunctionLibrary_C_GetDiscoveredSearchOwlRate_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRate != nullptr)
		*OutRate = params.OutRate;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetCompletedSearchOwlRate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutRate                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_GetCompletedSearchOwlRate(class UObject* __WorldContext, int* OutRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetCompletedSearchOwlRate");

	UBP_SearchOwlFunctionLibrary_C_GetCompletedSearchOwlRate_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRate != nullptr)
		*OutRate = params.OutRate;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.IsReceiveSearchOwlReward
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_IsReceiveSearchOwlReward(class UObject* __WorldContext, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.IsReceiveSearchOwlReward");

	UBP_SearchOwlFunctionLibrary_C_IsReceiveSearchOwlReward_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.ReceiveSearchOwlReward
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutReceiveRewardID             (Parm, OutParm, ZeroConstructor)

void UBP_SearchOwlFunctionLibrary_C::STATIC_ReceiveSearchOwlReward(class UObject* __WorldContext, TArray<int>* OutReceiveRewardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.ReceiveSearchOwlReward");

	UBP_SearchOwlFunctionLibrary_C_ReceiveSearchOwlReward_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReceiveRewardID != nullptr)
		*OutReceiveRewardID = params.OutReceiveRewardID;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.BindOnSearchOwlDiscoveryStateChanged
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_BindOnSearchOwlDiscoveryStateChanged(class UObject* __WorldContext, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.BindOnSearchOwlDiscoveryStateChanged");

	UBP_SearchOwlFunctionLibrary_C_BindOnSearchOwlDiscoveryStateChanged_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.FillDiscoverySearchOwl
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InDiscovery                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InWithEx                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_FillDiscoverySearchOwl(bool InDiscovery, bool InWithEx, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.FillDiscoverySearchOwl");

	UBP_SearchOwlFunctionLibrary_C_FillDiscoverySearchOwl_Params params;
	params.InDiscovery = InDiscovery;
	params.InWithEx = InWithEx;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.IsDiscoverySearchOwl (From ActorID)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bInDiscoverPoint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlFunctionLibrary_C::STATIC_IsDiscoverySearchOwl__From_ActorID_(const struct FString& InActorID, bool bInDiscoverPoint, class UObject* __WorldContext, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.IsDiscoverySearchOwl (From ActorID)");

	UBP_SearchOwlFunctionLibrary_C_IsDiscoverySearchOwl__From_ActorID__Params params;
	params.InActorID = InActorID;
	params.bInDiscoverPoint = bInDiscoverPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
