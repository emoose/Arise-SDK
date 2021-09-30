
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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR.TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconPictureEnum            IconPicture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDictionaryText         Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C::SetData(EMapIconPictureEnum IconPicture, const struct FDictionaryText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR.TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C.SetData");

	UTO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C_SetData_Params params;
	params.IconPicture = IconPicture;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR.TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR.TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR");

	UTO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_ICN_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
