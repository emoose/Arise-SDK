
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

// Function TO14_BPI_GUI_MNU_AFT_SKL_WIN.TO14_BPI_GUI_MNU_AFT_SKL_WIN_C.SetEffectText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           EffectText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_AFT_SKL_WIN_C::SetEffectText(const struct FModifiedText& EffectText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SKL_WIN.TO14_BPI_GUI_MNU_AFT_SKL_WIN_C.SetEffectText");

	UTO14_BPI_GUI_MNU_AFT_SKL_WIN_C_SetEffectText_Params params;
	params.EffectText = EffectText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_SKL_WIN.TO14_BPI_GUI_MNU_AFT_SKL_WIN_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_SKL_WIN_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_SKL_WIN.TO14_BPI_GUI_MNU_AFT_SKL_WIN_C.Init");

	UTO14_BPI_GUI_MNU_AFT_SKL_WIN_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
