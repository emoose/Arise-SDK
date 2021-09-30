
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

// Function DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C.GetUMGDebugHudInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UUMG_GameDebugHUD_Interface_C> DebugHUD                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDBP_DebugHudHostInterface_C::GetUMGDebugHudInterface(TScriptInterface<class UUMG_GameDebugHUD_Interface_C>* DebugHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C.GetUMGDebugHudInterface");

	UDBP_DebugHudHostInterface_C_GetUMGDebugHudInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugHUD != nullptr)
		*DebugHUD = params.DebugHUD;
}


// Function DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C.GetDebugHudInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADebugHUD_C*             DebugHUD                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDBP_DebugHudHostInterface_C::GetDebugHudInstance(class ADebugHUD_C** DebugHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C.GetDebugHudInstance");

	UDBP_DebugHudHostInterface_C_GetDebugHudInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugHUD != nullptr)
		*DebugHUD = params.DebugHUD;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
