
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

// Function TO14_BPI_GUI_ICN_MNU_ANIM.TO14_BPI_GUI_ICN_MNU_ANIM_C.GetANM_FONT
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_ANIM_C::GetANM_FONT(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_ANIM.TO14_BPI_GUI_ICN_MNU_ANIM_C.GetANM_FONT");

	UTO14_BPI_GUI_ICN_MNU_ANIM_C_GetANM_FONT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function TO14_BPI_GUI_ICN_MNU_ANIM.TO14_BPI_GUI_ICN_MNU_ANIM_C.GetANM_NAME
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_ANIM_C::GetANM_NAME(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_ANIM.TO14_BPI_GUI_ICN_MNU_ANIM_C.GetANM_NAME");

	UTO14_BPI_GUI_ICN_MNU_ANIM_C_GetANM_NAME_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
