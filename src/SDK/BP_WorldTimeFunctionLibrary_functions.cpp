
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

// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.Deshitf24h
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          inHour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          outOur                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_WorldTimeFunctionLibrary_C::STATIC_Deshitf24h(float inHour, class UObject* __WorldContext, float* outOur)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.Deshitf24h");

	UBP_WorldTimeFunctionLibrary_C_Deshitf24h_Params params;
	params.inHour = inHour;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outOur != nullptr)
		*outOur = params.outOur;
}


// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.Shitf24h
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          inHour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          outOur                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_WorldTimeFunctionLibrary_C::STATIC_Shitf24h(float inHour, class UObject* __WorldContext, float* outOur)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.Shitf24h");

	UBP_WorldTimeFunctionLibrary_C_Shitf24h_Params params;
	params.inHour = inHour;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outOur != nullptr)
		*outOur = params.outOur;
}


// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetBattleEndMapTimeSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WorldTimeFunctionLibrary_C::STATIC_SetBattleEndMapTimeSettings(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetBattleEndMapTimeSettings");

	UBP_WorldTimeFunctionLibrary_C_SetBattleEndMapTimeSettings_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetBattleMapTimeSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WorldTimeFunctionLibrary_C::STATIC_SetBattleMapTimeSettings(const struct FString& MapName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetBattleMapTimeSettings");

	UBP_WorldTimeFunctionLibrary_C_SetBattleMapTimeSettings_Params params;
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetMapTimeSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WorldTimeFunctionLibrary_C::STATIC_SetMapTimeSettings(const struct FString& MapName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetMapTimeSettings");

	UBP_WorldTimeFunctionLibrary_C_SetMapTimeSettings_Params params;
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
