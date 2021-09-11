
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

// Function TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PROG_INST_C::PadWork(class AMenuPadProcess* PadProcess, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C.PadWork");

	UTO14_BPI_GUI_SYS_WIN_PROG_INST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PROG_INST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_PROG_INST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROG_INST
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PROG_INST_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROG_INST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROG_INST");

	UTO14_BPI_GUI_SYS_WIN_PROG_INST_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROG_INST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
