
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

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ChangeLocator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_ChangeLocator(const struct FString& MapLocatorName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ChangeLocator");

	UBP_GameFunctionLibrary_C_GameFunc_ChangeLocator_Params params;
	params.MapLocatorName = MapLocatorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_IsDuringMapChanging
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChanging                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_IsDuringMapChanging(class UObject* __WorldContext, bool* bChanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_IsDuringMapChanging");

	UBP_GameFunctionLibrary_C_GameFunc_IsDuringMapChanging_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanging != nullptr)
		*bChanging = params.bChanging;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ShowNowloading
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_ShowNowloading(bool bInShow, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ShowNowloading");

	UBP_GameFunctionLibrary_C_GameFunc_ShowNowloading_Params params;
	params.bInShow = bInShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ShowPF_HUD
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_ShowPF_HUD(bool bInShow, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ShowPF_HUD");

	UBP_GameFunctionLibrary_C_GameFunc_ShowPF_HUD_Params params;
	params.bInShow = bInShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_LockPlayerFree
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_LockPlayerFree(bool bLock, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_LockPlayerFree");

	UBP_GameFunctionLibrary_C_GameFunc_LockPlayerFree_Params params;
	params.bLock = bLock;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_BindWorldWind
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_BindWorldWind(class UParticleSystemComponent* Particle, float Rate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_BindWorldWind");

	UBP_GameFunctionLibrary_C_GameFunc_BindWorldWind_Params params;
	params.Particle = Particle;
	params.Rate = Rate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_GetCurrentMapName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_GetCurrentMapName(class UObject* __WorldContext, struct FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_GetCurrentMapName");

	UBP_GameFunctionLibrary_C_GameFunc_GetCurrentMapName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_PostDataLoad
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_PostDataLoad(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_PostDataLoad");

	UBP_GameFunctionLibrary_C_GameFunc_PostDataLoad_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_MapChange
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_MapChange(const struct FString& MapName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_MapChange");

	UBP_GameFunctionLibrary_C_GameFunc_MapChange_Params params;
	params.MapName = MapName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_IsBattelScene
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInBattle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_IsBattelScene(class UObject* __WorldContext, bool* bInBattle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_IsBattelScene");

	UBP_GameFunctionLibrary_C_GameFunc_IsBattelScene_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInBattle != nullptr)
		*bInBattle = params.bInBattle;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_PartyStatusRefresh
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GameFunc_PartyStatusRefresh(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_PartyStatusRefresh");

	UBP_GameFunctionLibrary_C_GameFunc_PartyStatusRefresh_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
