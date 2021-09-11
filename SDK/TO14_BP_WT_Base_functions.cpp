
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

// Function TO14_BP_WT_Base.TO14_BP_WT_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_WT_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_WT_Base.TO14_BP_WT_Base_C.UserConstructionScript");

	ATO14_BP_WT_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_WT_Base.TO14_BP_WT_Base_C.UpdateTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_WT_Base_C::UpdateTime(float CurrentHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_WT_Base.TO14_BP_WT_Base_C.UpdateTime");

	ATO14_BP_WT_Base_C_UpdateTime_Params params;
	params.CurrentHour = CurrentHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_WT_Base.TO14_BP_WT_Base_C.ExecuteUbergraph_TO14_BP_WT_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_WT_Base_C::ExecuteUbergraph_TO14_BP_WT_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_WT_Base.TO14_BP_WT_Base_C.ExecuteUbergraph_TO14_BP_WT_Base");

	ATO14_BP_WT_Base_C_ExecuteUbergraph_TO14_BP_WT_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
