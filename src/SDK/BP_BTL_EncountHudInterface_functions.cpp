
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

// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.SetEncountInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> NewEncountArray                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_BTL_EncountHudInterface_C::SetEncountInfo(TArray<struct FBtlEncountGroupParam> NewEncountArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.SetEncountInfo");

	UBP_BTL_EncountHudInterface_C_SetEncountInfo_Params params;
	params.NewEncountArray = NewEncountArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.ShowLastEncountRequest
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BTL_EncountHudInterface_C::ShowLastEncountRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.ShowLastEncountRequest");

	UBP_BTL_EncountHudInterface_C_ShowLastEncountRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.BattleStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BTL_EncountHudInterface_C::BattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.BattleStart");

	UBP_BTL_EncountHudInterface_C_BattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.ShowEncountRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> NewEncountArray                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_BTL_EncountHudInterface_C::ShowEncountRequest(TArray<struct FBtlEncountGroupParam> NewEncountArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.ShowEncountRequest");

	UBP_BTL_EncountHudInterface_C_ShowEncountRequest_Params params;
	params.NewEncountArray = NewEncountArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
