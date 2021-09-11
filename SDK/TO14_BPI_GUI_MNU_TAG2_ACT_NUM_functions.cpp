
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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_NUM.TO14_BPI_GUI_MNU_TAG2_ACT_NUM_C.SetNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_NUM_C::SetNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_NUM.TO14_BPI_GUI_MNU_TAG2_ACT_NUM_C.SetNum");

	UTO14_BPI_GUI_MNU_TAG2_ACT_NUM_C_SetNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
