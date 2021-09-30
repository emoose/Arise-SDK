
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

// Function TO14_MenuSCHTBase.TO14_MenuSCHTBase_C.GetSCHTRoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_SCHT_ROOT_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_MenuSCHTBase_C::GetSCHTRoot(class UTO14_BPI_GUI_SYS_SCHT_ROOT_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_MenuSCHTBase.TO14_MenuSCHTBase_C.GetSCHTRoot");

	UTO14_MenuSCHTBase_C_GetSCHTRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
