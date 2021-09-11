
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

// Function UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C.BindDebugParameterCallback
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_GameDebugHUD_Interface_C::BindDebugParameterCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C.BindDebugParameterCallback");

	UUMG_GameDebugHUD_Interface_C_BindDebugParameterCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_GameDebugHUD_Interface_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C.Hide");

	UUMG_GameDebugHUD_Interface_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C.ToggleVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_GameDebugHUD_Interface_C::ToggleVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GameDebugHUD_Interface.UMG_GameDebugHUD_Interface_C.ToggleVisible");

	UUMG_GameDebugHUD_Interface_C_ToggleVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
