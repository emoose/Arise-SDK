
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

// Function BP_PF_InteractInfo_CharaActionBase.BP_PF_InteractInfo_CharaActionBase_C.GetCPCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractInfo_CharaActionBase_C::GetCPCost(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractInfo_CharaActionBase.BP_PF_InteractInfo_CharaActionBase_C.GetCPCost");

	ABP_PF_InteractInfo_CharaActionBase_C_GetCPCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PF_InteractInfo_CharaActionBase.BP_PF_InteractInfo_CharaActionBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractInfo_CharaActionBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractInfo_CharaActionBase.BP_PF_InteractInfo_CharaActionBase_C.UserConstructionScript");

	ABP_PF_InteractInfo_CharaActionBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
