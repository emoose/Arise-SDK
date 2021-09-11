
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

// Function UMG_SceneFade.UMG_SceneFade_C.SetAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SceneFade_C::SetAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SceneFade.UMG_SceneFade_C.SetAlpha");

	UUMG_SceneFade_C_SetAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SceneFade.UMG_SceneFade_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ColorName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_SceneFade_C::SetColor(const struct FString& ColorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SceneFade.UMG_SceneFade_C.SetColor");

	UUMG_SceneFade_C_SetColor_Params params;
	params.ColorName = ColorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
