
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

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_ChangePartyTopTransformLocator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_ChangePartyTopTransformLocator(const struct FString& MapLocatorName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_ChangePartyTopTransformLocator");

	UBP_PF_SystemFunctionLibrary_C_PF_ChangePartyTopTransformLocator_Params params;
	params.MapLocatorName = MapLocatorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_CastToPFPlayerCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PFPlayerCharacter_C* PFPlayer                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_CastToPFPlayerCharacter(class AActor* Actor, class UObject* __WorldContext, class ABP_PFPlayerCharacter_C** PFPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_CastToPFPlayerCharacter");

	UBP_PF_SystemFunctionLibrary_C_PF_CastToPFPlayerCharacter_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PFPlayer != nullptr)
		*PFPlayer = params.PFPlayer;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_Get_BP_PF_QuestManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PF_QuestManager_C*   BP_PF_Quest_Manager            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_Get_BP_PF_QuestManager(class UObject* __WorldContext, class ABP_PF_QuestManager_C** BP_PF_Quest_Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_Get_BP_PF_QuestManager");

	UBP_PF_SystemFunctionLibrary_C_PF_Get_BP_PF_QuestManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_PF_Quest_Manager != nullptr)
		*BP_PF_Quest_Manager = params.BP_PF_Quest_Manager;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_PlayerLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_PF_SystemFunctionLibrary_C::STATIC_PF_PlayerLocation(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_PlayerLocation");

	UBP_PF_SystemFunctionLibrary_C_PF_PlayerLocation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_UpdatePlayerLocationInfo
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_UpdatePlayerLocationInfo(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_UpdatePlayerLocationInfo");

	UBP_PF_SystemFunctionLibrary_C_PF_UpdatePlayerLocationInfo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.AddPrePFStartOperation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PrePFStartOperation PreOperation                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_AddPrePFStartOperation(const struct FSTR_PrePFStartOperation& PreOperation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.AddPrePFStartOperation");

	UBP_PF_SystemFunctionLibrary_C_AddPrePFStartOperation_Params params;
	params.PreOperation = PreOperation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsChangePartyTopCompleted
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_IsChangePartyTopCompleted(class UObject* __WorldContext, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsChangePartyTopCompleted");

	UBP_PF_SystemFunctionLibrary_C_PF_IsChangePartyTopCompleted_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_ChangePartyTop
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_ChangePartyTop(EArisePartyID PartyId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_ChangePartyTop");

	UBP_PF_SystemFunctionLibrary_C_PF_ChangePartyTop_Params params;
	params.PartyId = PartyId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsPartyTopMoving
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutMoving                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_IsPartyTopMoving(class UObject* __WorldContext, bool* OutMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsPartyTopMoving");

	UBP_PF_SystemFunctionLibrary_C_PF_IsPartyTopMoving_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMoving != nullptr)
		*OutMoving = params.OutMoving;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_SetPartyTopVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_SetPartyTopVisibility(bool bInValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_SetPartyTopVisibility");

	UBP_PF_SystemFunctionLibrary_C_PF_SetPartyTopVisibility_Params params;
	params.bInValue = bInValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_GetPlayerCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APFPlayerCamera*         OutCamera                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_GetPlayerCamera(class UObject* __WorldContext, class APFPlayerCamera** OutCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_GetPlayerCamera");

	UBP_PF_SystemFunctionLibrary_C_PF_GetPlayerCamera_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCamera != nullptr)
		*OutCamera = params.OutCamera;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_GetPartyTopCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PFPartyTopCharacterBase_C* OutCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_GetPartyTopCharacter(class UObject* __WorldContext, class ABP_PFPartyTopCharacterBase_C** OutCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_GetPartyTopCharacter");

	UBP_PF_SystemFunctionLibrary_C_PF_GetPartyTopCharacter_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCharacter != nullptr)
		*OutCharacter = params.OutCharacter;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsBuildPartyTop
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBuilded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_IsBuildPartyTop(class UObject* __WorldContext, bool* bIsBuilded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsBuildPartyTop");

	UBP_PF_SystemFunctionLibrary_C_PF_IsBuildPartyTop_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsBuilded != nullptr)
		*bIsBuilded = params.bIsBuilded;
}


// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_BuildPartyTop
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_SystemFunctionLibrary_C::STATIC_PF_BuildPartyTop(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_BuildPartyTop");

	UBP_PF_SystemFunctionLibrary_C_PF_BuildPartyTop_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
