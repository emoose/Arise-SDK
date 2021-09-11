
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

// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PostMenuSoundEvent
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 in_EventName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuSEFunctionLibrary_C::STATIC_PostMenuSoundEvent(const struct FString& in_EventName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PostMenuSoundEvent");

	UMenuSEFunctionLibrary_C_PostMenuSoundEvent_Params params;
	params.in_EventName = in_EventName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSEfromDB
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuSoundLabel         MenuSoundLabel                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuSEFunctionLibrary_C::STATIC_PlayMenuSEfromDB(const struct FMenuSoundLabel& MenuSoundLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSEfromDB");

	UMenuSEFunctionLibrary_C_PlayMenuSEfromDB_Params params;
	params.MenuSoundLabel = MenuSoundLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSEByLabel
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuSEFunctionLibrary_C::STATIC_PlayMenuSEByLabel(const struct FString& Label, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSEByLabel");

	UMenuSEFunctionLibrary_C_PlayMenuSEByLabel_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSE
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMENU_SE_LABEL>    Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuSEFunctionLibrary_C::STATIC_PlayMenuSE(TEnumAsByte<EMENU_SE_LABEL> Label, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSE");

	UMenuSEFunctionLibrary_C_PlayMenuSE_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
