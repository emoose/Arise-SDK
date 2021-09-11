
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

// Function TO14_BPI_GUI_SYS_CURSOR.TO14_BPI_GUI_SYS_CURSOR_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_CURSOR_C::Select(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_CURSOR.TO14_BPI_GUI_SYS_CURSOR_C.Select");

	UTO14_BPI_GUI_SYS_CURSOR_C_Select_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
