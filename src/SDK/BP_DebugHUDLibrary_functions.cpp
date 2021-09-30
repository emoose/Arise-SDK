
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

// Function BP_DebugHUDLibrary.BP_DebugHUDLibrary_C.GetUMGDebugHudInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UUMG_GameDebugHUD_Interface_C> DebugHUD                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugHUDLibrary_C::STATIC_GetUMGDebugHudInterface(class UObject* __WorldContext, TScriptInterface<class UUMG_GameDebugHUD_Interface_C>* DebugHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugHUDLibrary.BP_DebugHUDLibrary_C.GetUMGDebugHudInterface");

	UBP_DebugHUDLibrary_C_GetUMGDebugHudInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugHUD != nullptr)
		*DebugHUD = params.DebugHUD;
}


// Function BP_DebugHUDLibrary.BP_DebugHUDLibrary_C.GetDebugHUD
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADebugHUD_C*             DebugHUD                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugHUDLibrary_C::STATIC_GetDebugHUD(class UObject* __WorldContext, class ADebugHUD_C** DebugHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugHUDLibrary.BP_DebugHUDLibrary_C.GetDebugHUD");

	UBP_DebugHUDLibrary_C_GetDebugHUD_Params params;
	params.__WorldContext = __WorldContext;

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
