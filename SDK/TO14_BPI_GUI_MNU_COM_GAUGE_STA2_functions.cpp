
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

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA2.TO14_BPI_GUI_MNU_COM_GAUGE_STA2_C.SetNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA2_C::SetNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA2.TO14_BPI_GUI_MNU_COM_GAUGE_STA2_C.SetNum");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA2_C_SetNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA2.TO14_BPI_GUI_MNU_COM_GAUGE_STA2_C.SetDictionaryText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         DicText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA2_C::SetDictionaryText(const struct FDictionaryText& DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA2.TO14_BPI_GUI_MNU_COM_GAUGE_STA2_C.SetDictionaryText");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA2_C_SetDictionaryText_Params params;
	params.DicText = DicText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
