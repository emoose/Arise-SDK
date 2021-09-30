
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

// Function TO14_BPI_ICN_SKL_SLOT.TO14_BPI_ICN_SKL_SLOT_C.SetSlotData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_ICN_SKL_SLOT_C::SetSlotData(int SlotNum, int SkillNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_ICN_SKL_SLOT.TO14_BPI_ICN_SKL_SLOT_C.SetSlotData");

	UTO14_BPI_ICN_SKL_SLOT_C_SetSlotData_Params params;
	params.SlotNum = SlotNum;
	params.SkillNum = SkillNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
