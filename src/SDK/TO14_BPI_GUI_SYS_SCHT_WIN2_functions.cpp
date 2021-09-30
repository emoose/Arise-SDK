
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

// Function TO14_BPI_GUI_SYS_SCHT_WIN2.TO14_BPI_GUI_SYS_SCHT_WIN2_C.SetMessageText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_SCHT_WIN2_C::SetMessageText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_WIN2.TO14_BPI_GUI_SYS_SCHT_WIN2_C.SetMessageText");

	UTO14_BPI_GUI_SYS_SCHT_WIN2_C_SetMessageText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
