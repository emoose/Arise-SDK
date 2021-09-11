
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

// Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.SetImagePath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TextureFullPath                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C::SetImagePath(const struct FString& TextureFullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.SetImagePath");

	UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C_SetImagePath_Params params;
	params.TextureFullPath = TextureFullPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_IMG_LOCA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_IMG_LOCA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_IMG_LOCA.TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_IMG_LOCA");

	UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_IMG_LOCA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
