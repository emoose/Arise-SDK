
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

// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.ChangedQuestGuidFlag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FlagName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_LocationMapFunction_C::STATIC_ChangedQuestGuidFlag(const struct FString& FlagName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.ChangedQuestGuidFlag");

	UBPF_LocationMapFunction_C_ChangedQuestGuidFlag_Params params;
	params.FlagName = FlagName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.RemoveLocator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocatorName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_LocationMapFunction_C::STATIC_RemoveLocator(const struct FString& LocatorName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.RemoveLocator");

	UBPF_LocationMapFunction_C_RemoveLocator_Params params;
	params.LocatorName = LocatorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.AddLocator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocatorName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMapIconType                   IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_LocationMapFunction_C::STATIC_AddLocator(const struct FString& LocatorName, EMapIconType IconType, const struct FVector& Location, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.AddLocator");

	UBPF_LocationMapFunction_C_AddLocator_Params params;
	params.LocatorName = LocatorName;
	params.IconType = IconType;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.GetLocationMapManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_LocationMapManager_C* LocationMapManager             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LocationMapFunction_C::STATIC_GetLocationMapManager(class UObject* __WorldContext, class ABP_LocationMapManager_C** LocationMapManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LocationMapFunction.BPF_LocationMapFunction_C.GetLocationMapManager");

	UBPF_LocationMapFunction_C_GetLocationMapManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationMapManager != nullptr)
		*LocationMapManager = params.LocationMapManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
