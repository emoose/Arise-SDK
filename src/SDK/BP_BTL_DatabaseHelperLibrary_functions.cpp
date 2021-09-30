
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

// Function BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C.GetHitStatusRecord
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlHitStatusRecord     OutRow                         (Parm, OutParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_DatabaseHelperLibrary_C::STATIC_GetHitStatusRecord(const struct FName& Label, class UObject* __WorldContext, struct FBtlHitStatusRecord* OutRow, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C.GetHitStatusRecord");

	UBP_BTL_DatabaseHelperLibrary_C_GetHitStatusRecord_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C.GetCurrentEncountDependenceUnitIds
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBtlUnitID>      DependenceList                 (Parm, OutParm, ZeroConstructor)

void UBP_BTL_DatabaseHelperLibrary_C::STATIC_GetCurrentEncountDependenceUnitIds(class UObject* __WorldContext, TArray<struct FBtlUnitID>* DependenceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C.GetCurrentEncountDependenceUnitIds");

	UBP_BTL_DatabaseHelperLibrary_C_GetCurrentEncountDependenceUnitIds_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DependenceList != nullptr)
		*DependenceList = params.DependenceList;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
