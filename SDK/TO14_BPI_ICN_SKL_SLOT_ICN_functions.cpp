
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

// Function TO14_BPI_ICN_SKL_SLOT_ICN.TO14_BPI_ICN_SKL_SLOT_ICN_C.SetSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_ICN_SKL_SLOT_ICN_C::SetSlot(int Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_ICN_SKL_SLOT_ICN.TO14_BPI_ICN_SKL_SLOT_ICN_C.SetSlot");

	UTO14_BPI_ICN_SKL_SLOT_ICN_C_SetSlot_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
