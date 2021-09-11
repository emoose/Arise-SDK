
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

// Function BP_AriseGameInstance.BP_AriseGameInstance_C.BootScenePostLoadFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseGameInstance_C::BootScenePostLoadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.BootScenePostLoadFinished");

	UBP_AriseGameInstance_C_BootScenePostLoadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.LoadStringDictionary
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseGameInstance_C::LoadStringDictionary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.LoadStringDictionary");

	UBP_AriseGameInstance_C_LoadStringDictionary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.OpenAriseMasterLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseGameInstance_C::OpenAriseMasterLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.OpenAriseMasterLevel");

	UBP_AriseGameInstance_C_OpenAriseMasterLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.StopLoadScreem
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseGameInstance_C::StopLoadScreem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.StopLoadScreem");

	UBP_AriseGameInstance_C_StopLoadScreem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.IsLoadedStringDictionary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLoaded                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseGameInstance_C::IsLoadedStringDictionary(bool* IsLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.IsLoadedStringDictionary");

	UBP_AriseGameInstance_C_IsLoadedStringDictionary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLoaded != nullptr)
		*IsLoaded = params.IsLoaded;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.8^Ð™‡eW[Ržøfn0í0ü0É0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStringDictionaryListDatabase* ResidentStringDictionary       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseGameInstance_C::_8_Ð™‡eW_Ržøfn0í0ü0É0(class UStringDictionaryListDatabase* ResidentStringDictionary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.8^Ð™‡eW[Ržøfn0í0ü0É0");

	UBP_AriseGameInstance_C__8_Ð™‡eW_Ržøfn0í0ü0É0_Params params;
	params.ResidentStringDictionary = ResidentStringDictionary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_AriseGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.ReceiveInit");

	UBP_AriseGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)

void UBP_AriseGameInstance_C::ReceiveShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.ReceiveShutdown");

	UBP_AriseGameInstance_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameInstance.BP_AriseGameInstance_C.ExecuteUbergraph_BP_AriseGameInstance
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseGameInstance_C::ExecuteUbergraph_BP_AriseGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameInstance.BP_AriseGameInstance_C.ExecuteUbergraph_BP_AriseGameInstance");

	UBP_AriseGameInstance_C_ExecuteUbergraph_BP_AriseGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
