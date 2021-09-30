
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

// Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadConfigOverridePictureID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EButtonIconSet                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EPadKeyId, struct FName>  Map                            (Parm, OutParm, ZeroConstructor)

void UBP_ConfigSupport_C::STATIC_GetPadConfigOverridePictureID(EInputCategory Category, EButtonIconSet Icon, class UObject* __WorldContext, TMap<EPadKeyId, struct FName>* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadConfigOverridePictureID");

	UBP_ConfigSupport_C_GetPadConfigOverridePictureID_Params params;
	params.Category = Category;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadConfigOverride
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EPadKeyId, struct FName>  Map                            (Parm, OutParm, ZeroConstructor)

void UBP_ConfigSupport_C::STATIC_GetPadConfigOverride(EInputCategory Category, class UObject* __WorldContext, TMap<EPadKeyId, struct FName>* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadConfigOverride");

	UBP_ConfigSupport_C_GetPadConfigOverride_Params params;
	params.Category = Category;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function BP_ConfigSupport.BP_ConfigSupport_C.GetInputConfigActionString
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDictionaryText         DictionaryText                 (Parm, OutParm)

void UBP_ConfigSupport_C::STATIC_GetInputConfigActionString(const struct FName& Button, class UObject* __WorldContext, struct FDictionaryText* DictionaryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConfigSupport.BP_ConfigSupport_C.GetInputConfigActionString");

	UBP_ConfigSupport_C_GetInputConfigActionString_Params params;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DictionaryText != nullptr)
		*DictionaryText = params.DictionaryText;
}


// Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadKeyIds
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EPadKeyId, struct FName>  ButtonList1                    (Parm, OutParm, ZeroConstructor)

void UBP_ConfigSupport_C::STATIC_GetPadKeyIds(EInputCategory Category, class UObject* __WorldContext, TMap<EPadKeyId, struct FName>* ButtonList1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadKeyIds");

	UBP_ConfigSupport_C_GetPadKeyIds_Params params;
	params.Category = Category;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonList1 != nullptr)
		*ButtonList1 = params.ButtonList1;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
