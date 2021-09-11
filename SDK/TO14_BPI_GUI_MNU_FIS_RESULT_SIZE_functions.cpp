
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

// Function TO14_BPI_GUI_MNU_FIS_RESULT_SIZE.TO14_BPI_GUI_MNU_FIS_RESULT_SIZE_C.SetFishSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SizeCm                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewRecode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BigSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_RESULT_SIZE_C::SetFishSize(float SizeCm, bool NewRecode, bool BigSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT_SIZE.TO14_BPI_GUI_MNU_FIS_RESULT_SIZE_C.SetFishSize");

	UTO14_BPI_GUI_MNU_FIS_RESULT_SIZE_C_SetFishSize_Params params;
	params.SizeCm = SizeCm;
	params.NewRecode = NewRecode;
	params.BigSize = BigSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
