
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

// Function TO14_BPI_GUI_MNU_MAS_ICN_STAR.TO14_BPI_GUI_MNU_MAS_ICN_STAR_C.SetAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_ICN_STAR_C::SetAnimation(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_ICN_STAR.TO14_BPI_GUI_MNU_MAS_ICN_STAR_C.SetAnimation");

	UTO14_BPI_GUI_MNU_MAS_ICN_STAR_C_SetAnimation_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_ICN_STAR.TO14_BPI_GUI_MNU_MAS_ICN_STAR_C.SetStarEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_ICN_STAR_C::SetStarEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_ICN_STAR.TO14_BPI_GUI_MNU_MAS_ICN_STAR_C.SetStarEnable");

	UTO14_BPI_GUI_MNU_MAS_ICN_STAR_C_SetStarEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
