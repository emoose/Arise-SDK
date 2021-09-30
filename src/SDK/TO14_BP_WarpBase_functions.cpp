
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

// Function TO14_BP_WarpBase.TO14_BP_WarpBase_C.IsWarpStartFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bFinish                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_WarpBase_C::IsWarpStartFinish(bool* bFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_WarpBase.TO14_BP_WarpBase_C.IsWarpStartFinish");

	ATO14_BP_WarpBase_C_IsWarpStartFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFinish != nullptr)
		*bFinish = params.bFinish;
}


// Function TO14_BP_WarpBase.TO14_BP_WarpBase_C.WarpStart
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_WarpBase_C::WarpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_WarpBase.TO14_BP_WarpBase_C.WarpStart");

	ATO14_BP_WarpBase_C_WarpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_WarpBase.TO14_BP_WarpBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_WarpBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_WarpBase.TO14_BP_WarpBase_C.UserConstructionScript");

	ATO14_BP_WarpBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
