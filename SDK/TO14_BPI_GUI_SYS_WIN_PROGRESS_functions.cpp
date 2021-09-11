
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

// Function TO14_BPI_GUI_SYS_WIN_PROGRESS.TO14_BPI_GUI_SYS_WIN_PROGRESS_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PROGRESS_C::SetProgress(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PROGRESS.TO14_BPI_GUI_SYS_WIN_PROGRESS_C.SetProgress");

	UTO14_BPI_GUI_SYS_WIN_PROGRESS_C_SetProgress_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PROGRESS.TO14_BPI_GUI_SYS_WIN_PROGRESS_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROGRESS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PROGRESS_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROGRESS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PROGRESS.TO14_BPI_GUI_SYS_WIN_PROGRESS_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROGRESS");

	UTO14_BPI_GUI_SYS_WIN_PROGRESS_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROGRESS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
