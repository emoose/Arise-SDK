
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

// Function TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG.TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C.CloseAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C::CloseAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG.TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C.CloseAnime");

	UTO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C_CloseAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG.TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C.OpenAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C::OpenAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG.TO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C.OpenAnime");

	UTO14_BPI_GUI_SYS_TTL_LANGUAGE_DIALOG_C_OpenAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
