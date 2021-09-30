
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

// Function TO14_BPI_GUI_SYS_WIN_BACK.TO14_BPI_GUI_SYS_WIN_BACK_C.GetReturnValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTO14_BPI_GUI_SYS_WIN_BACK_C::GetReturnValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BACK.TO14_BPI_GUI_SYS_WIN_BACK_C.GetReturnValue");

	UTO14_BPI_GUI_SYS_WIN_BACK_C_GetReturnValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_BACK.TO14_BPI_GUI_SYS_WIN_BACK_C.GetRenderSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UTO14_BPI_GUI_SYS_WIN_BACK_C::GetRenderSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BACK.TO14_BPI_GUI_SYS_WIN_BACK_C.GetRenderSize");

	UTO14_BPI_GUI_SYS_WIN_BACK_C_GetRenderSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_BACK.TO14_BPI_GUI_SYS_WIN_BACK_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BACK
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_BACK_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BACK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_BACK.TO14_BPI_GUI_SYS_WIN_BACK_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BACK");

	UTO14_BPI_GUI_SYS_WIN_BACK_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BACK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
