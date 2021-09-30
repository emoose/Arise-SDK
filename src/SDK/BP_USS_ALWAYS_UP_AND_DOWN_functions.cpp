
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

// Function BP_USS_ALWAYS_UP_AND_DOWN.BP_USS_ALWAYS_UP_AND_DOWN_C.GetEffectValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAriseSkillEffect       Effect                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_USS_ALWAYS_UP_AND_DOWN_C::GetEffectValue(const struct FAriseSkillEffect& Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ALWAYS_UP_AND_DOWN.BP_USS_ALWAYS_UP_AND_DOWN_C.GetEffectValue");

	UBP_USS_ALWAYS_UP_AND_DOWN_C_GetEffectValue_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
