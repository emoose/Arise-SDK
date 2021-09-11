
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

// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopLockBreakPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetRepopLockBreakPoint(const struct FString& actorId, bool bLock, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopLockBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopLockBreakPoint_Params params;
	params.actorId = actorId;
	params.bLock = bLock;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopLockSearchPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetRepopLockSearchPoint(const struct FString& actorId, bool bLock, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopLockSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopLockSearchPoint_Params params;
	params.actorId = actorId;
	params.bLock = bLock;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetUseRecovery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RepopTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetUseRecovery(const struct FString& actorId, int RepopTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetUseRecovery");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetUseRecovery_Params params;
	params.actorId = actorId;
	params.RepopTime = RepopTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetUsedRecovery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_GetUsedRecovery(const struct FString& actorId, class UObject* __WorldContext, bool* bUsed, int* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetUsedRecovery");

	UBP_PF_MAPOBJ_FunctionLibrary_C_GetUsedRecovery_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsed != nullptr)
		*bUsed = params.bUsed;
	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetSearchableObjectVisibilityAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetSearchableObjectVisibilityAll(bool bVisible, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetSearchableObjectVisibilityAll");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetSearchableObjectVisibilityAll_Params params;
	params.bVisible = bVisible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.ResetRepopTimeBreakPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_ResetRepopTimeBreakPoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.ResetRepopTimeBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_ResetRepopTimeBreakPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.ResetRepopTimeSearchPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_ResetRepopTimeSearchPoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.ResetRepopTimeSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_ResetRepopTimeSearchPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetAcquireOnceBreakPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetAcquireOnceBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetAcquireOnceBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetAcquireOnceBreakPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetAcquireOnceSearchPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetAcquireOnceSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetAcquireOnceSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetAcquireOnceSearchPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsSearchMapGimmick
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapGimmickActorID              (Parm, OutParm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsSearchMapGimmick(const struct FString& actorId, class UObject* __WorldContext, struct FString* MapGimmickActorID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsSearchMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsSearchMapGimmick_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapGimmickActorID != nullptr)
		*MapGimmickActorID = params.MapGimmickActorID;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetHideMapGimmick
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetHideMapGimmick(const struct FString& actorId, bool Enable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetHideMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetHideMapGimmick_Params params;
	params.actorId = actorId;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsHideMapGimmick
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnlock                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsHideMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* bUnlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsHideMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsHideMapGimmick_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnlock != nullptr)
		*bUnlock = params.bUnlock;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsValidMapGimmick
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsValidMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsValidMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsValidMapGimmick_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverCampPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetDiscoverCampPoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverCampPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverCampPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverCampPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDiscover                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsDiscoverCampPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverCampPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverCampPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDiscover != nullptr)
		*bDiscover = params.bDiscover;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetOwlCharacterID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESearchOwlType                 InOwlType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutCharacterID                 (Parm, OutParm, ZeroConstructor)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_GetOwlCharacterID(ESearchOwlType InOwlType, class UObject* __WorldContext, struct FString* OutCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetOwlCharacterID");

	UBP_PF_MAPOBJ_FunctionLibrary_C_GetOwlCharacterID_Params params;
	params.InOwlType = InOwlType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCharacterID != nullptr)
		*OutCharacterID = params.OutCharacterID;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetOwlModelID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESearchOwlType                 InOwlType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutModelID                     (Parm, OutParm, ZeroConstructor)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_GetOwlModelID(ESearchOwlType InOwlType, class UObject* __WorldContext, struct FString* OutModelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetOwlModelID");

	UBP_PF_MAPOBJ_FunctionLibrary_C_GetOwlModelID_Params params;
	params.InOwlType = InOwlType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutModelID != nullptr)
		*OutModelID = params.OutModelID;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.RefreshIconBreakPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_RefreshIconBreakPoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.RefreshIconBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_RefreshIconBreakPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.RefreshIconSearchPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_RefreshIconSearchPoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.RefreshIconSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_RefreshIconSearchPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetUnlockMapGimmick
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetUnlockMapGimmick(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetUnlockMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetUnlockMapGimmick_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsUnlockMapGimmick
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnlock                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsUnlockMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* bUnlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsUnlockMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsUnlockMapGimmick_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnlock != nullptr)
		*bUnlock = params.bUnlock;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverMapGimmick
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetDiscoverMapGimmick(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverMapGimmick_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverMapGimmick
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDiscover                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsDiscoverMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverMapGimmick");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverMapGimmick_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDiscover != nullptr)
		*bDiscover = params.bDiscover;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetOpenTreasurePoint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetOpenTreasurePoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetOpenTreasurePoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetOpenTreasurePoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsOpenTreasurePoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOpen                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsOpenTreasurePoint(const struct FString& actorId, class UObject* __WorldContext, bool* bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsOpenTreasurePoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsOpenTreasurePoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOpen != nullptr)
		*bOpen = params.bOpen;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverTreasurePoint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetDiscoverTreasurePoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverTreasurePoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverTreasurePoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverTreasurePoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDiscover                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsDiscoverTreasurePoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverTreasurePoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverTreasurePoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDiscover != nullptr)
		*bDiscover = params.bDiscover;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopTimeBreakPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RepopTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetRepopTimeBreakPoint(const struct FString& actorId, int RepopTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopTimeBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopTimeBreakPoint_Params params;
	params.actorId = actorId;
	params.RepopTime = RepopTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopTimeSearchPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RepopTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetRepopTimeSearchPoint(const struct FString& actorId, int RepopTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetRepopTimeSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetRepopTimeSearchPoint_Params params;
	params.actorId = actorId;
	params.RepopTime = RepopTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverBreakPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetDiscoverBreakPoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverBreakPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverSearchPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_SetDiscoverSearchPoint(const struct FString& actorId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.SetDiscoverSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_SetDiscoverSearchPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsPopBreakPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsPopBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsPopBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsPopBreakPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsPopSearchPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsPopSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsPopSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsPopSearchPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetPopStatusBreakPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_GetPopStatusBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bPop, int* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetPopStatusBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_GetPopStatusBreakPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPop != nullptr)
		*bPop = params.bPop;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverBreakPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDiscover                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsDiscoverBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverBreakPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverBreakPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDiscover != nullptr)
		*bDiscover = params.bDiscover;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetPopStatusSearchPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_GetPopStatusSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bPop, int* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.GetPopStatusSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_GetPopStatusSearchPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPop != nullptr)
		*bPop = params.bPop;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverSearchPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDiscover                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_MAPOBJ_FunctionLibrary_C::STATIC_IsDiscoverSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C.IsDiscoverSearchPoint");

	UBP_PF_MAPOBJ_FunctionLibrary_C_IsDiscoverSearchPoint_Params params;
	params.actorId = actorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDiscover != nullptr)
		*bDiscover = params.bDiscover;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
