
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

// Function TO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface.TO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C.GetANM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C::GetANM(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface.TO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C.GetANM");

	UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C_GetANM_Params params;

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
