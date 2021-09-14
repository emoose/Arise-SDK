
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

// Function BP_MGC_CollisionBase.BP_MGC_CollisionBase_C.ConvApplyAttackParam
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAttackSphereParam      AttackParamBase                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAttackSphereParam      Result                         (Parm, OutParm)

void UBP_MGC_CollisionBase_C::ConvApplyAttackParam(const struct FAttackSphereParam& AttackParamBase, struct FAttackSphereParam* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CollisionBase.BP_MGC_CollisionBase_C.ConvApplyAttackParam");

	UBP_MGC_CollisionBase_C_ConvApplyAttackParam_Params params;
	params.AttackParamBase = AttackParamBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
