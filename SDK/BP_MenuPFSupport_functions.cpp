
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

// Function BP_MenuPFSupport.BP_MenuPFSupport_C.BuildPartyTop
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuPFSupport_C::STATIC_BuildPartyTop(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPFSupport.BP_MenuPFSupport_C.BuildPartyTop");

	UBP_MenuPFSupport_C_BuildPartyTop_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPFSupport.BP_MenuPFSupport_C.IsBuildPartyTop
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBuilded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuPFSupport_C::STATIC_IsBuildPartyTop(class UObject* __WorldContext, bool* bIsBuilded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPFSupport.BP_MenuPFSupport_C.IsBuildPartyTop");

	UBP_MenuPFSupport_C_IsBuildPartyTop_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsBuilded != nullptr)
		*bIsBuilded = params.bIsBuilded;
}


// Function BP_MenuPFSupport.BP_MenuPFSupport_C.IsPartyTopMoving
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutMoving                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuPFSupport_C::STATIC_IsPartyTopMoving(class UObject* __WorldContext, bool* OutMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPFSupport.BP_MenuPFSupport_C.IsPartyTopMoving");

	UBP_MenuPFSupport_C_IsPartyTopMoving_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMoving != nullptr)
		*OutMoving = params.OutMoving;
}


// Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetGaldMax
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GaldMax                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuPFSupport_C::STATIC_GetGaldMax(class UObject* __WorldContext, int* GaldMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetGaldMax");

	UBP_MenuPFSupport_C_GetGaldMax_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GaldMax != nullptr)
		*GaldMax = params.GaldMax;
}


// Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetClampedGald
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Gald                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClampedGald                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuPFSupport_C::STATIC_GetClampedGald(int Gald, class UObject* __WorldContext, int* ClampedGald)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetClampedGald");

	UBP_MenuPFSupport_C_GetClampedGald_Params params;
	params.Gald = Gald;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampedGald != nullptr)
		*ClampedGald = params.ClampedGald;
}


// Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetArenaSelectLabel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UBP_MenuPFSupport_C::STATIC_GetArenaSelectLabel(class UObject* __WorldContext, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPFSupport.BP_MenuPFSupport_C.GetArenaSelectLabel");

	UBP_MenuPFSupport_C_GetArenaSelectLabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
