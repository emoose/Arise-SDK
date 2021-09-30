
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

// Function TO14_BPI_GUI_SYS_PF_ACT_BTN.TO14_BPI_GUI_SYS_PF_ACT_BTN_C.SetButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Button                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_ACT_BTN_C::SetButton(const struct FString& Button, bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT_BTN.TO14_BPI_GUI_SYS_PF_ACT_BTN_C.SetButton");

	UTO14_BPI_GUI_SYS_PF_ACT_BTN_C_SetButton_Params params;
	params.Button = Button;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
