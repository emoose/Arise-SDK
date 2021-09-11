
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

// Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.IsCloseAnimaPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C::IsCloseAnimaPlay(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.IsCloseAnimaPlay");

	UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C_IsCloseAnimaPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.ClosePlayAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C::ClosePlayAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.ClosePlayAnima");

	UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C_ClosePlayAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.LoopPlayAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C::LoopPlayAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.LoopPlayAnima");

	UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C_LoopPlayAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.Construct");

	UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_PressAnyBtn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_PressAnyBtn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_PressAnyBtn.TO14_BPI_GUI_SYS_TTL_PressAnyBtn_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_PressAnyBtn");

	UTO14_BPI_GUI_SYS_TTL_PressAnyBtn_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_PressAnyBtn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
