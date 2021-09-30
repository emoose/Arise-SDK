
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

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_PAR.TO14_BPI_GUI_BTL_ABNORMAL_BAR_PAR_C.GetAbnormalIconList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*> Array                          (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_BTL_ABNORMAL_BAR_PAR_C::GetAbnormalIconList(TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_PAR.TO14_BPI_GUI_BTL_ABNORMAL_BAR_PAR_C.GetAbnormalIconList");

	UTO14_BPI_GUI_BTL_ABNORMAL_BAR_PAR_C_GetAbnormalIconList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
