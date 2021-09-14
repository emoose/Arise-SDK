
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

// Function TO14_BPI_GUI_SYS_KEY_HELP_ICON.TO14_BPI_GUI_SYS_KEY_HELP_ICON_C.SetBattleArsIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArts_XmlDatatableLabel ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_KEY_HELP_ICON_C::SetBattleArsIcon(const struct FBtlArts_XmlDatatableLabel& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_KEY_HELP_ICON.TO14_BPI_GUI_SYS_KEY_HELP_ICON_C.SetBattleArsIcon");

	UTO14_BPI_GUI_SYS_KEY_HELP_ICON_C_SetBattleArsIcon_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_KEY_HELP_ICON.TO14_BPI_GUI_SYS_KEY_HELP_ICON_C.GetTargetImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UTO14_BPI_GUI_SYS_KEY_HELP_ICON_C::GetTargetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_KEY_HELP_ICON.TO14_BPI_GUI_SYS_KEY_HELP_ICON_C.GetTargetImage");

	UTO14_BPI_GUI_SYS_KEY_HELP_ICON_C_GetTargetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
