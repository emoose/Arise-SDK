
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

// Function TO14_BPI_GUI_SYS_WIN_GALD.TO14_BPI_GUI_SYS_WIN_GALD_C.SetGald
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Gald                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Loss                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_GALD_C::SetGald(int Gald, bool Loss)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_GALD.TO14_BPI_GUI_SYS_WIN_GALD_C.SetGald");

	UTO14_BPI_GUI_SYS_WIN_GALD_C_SetGald_Params params;
	params.Gald = Gald;
	params.Loss = Loss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
