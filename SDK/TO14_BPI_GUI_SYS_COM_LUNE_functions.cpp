
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

// Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.StopOpenAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_COM_LUNE_C::StopOpenAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.StopOpenAnima");

	UTO14_BPI_GUI_SYS_COM_LUNE_C_StopOpenAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.OpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_COM_LUNE_C::OpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.OpenAnimation");

	UTO14_BPI_GUI_SYS_COM_LUNE_C_OpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_COM_LUNE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.Construct");

	UTO14_BPI_GUI_SYS_COM_LUNE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_COM_LUNE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_COM_LUNE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_COM_LUNE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_COM_LUNE");

	UTO14_BPI_GUI_SYS_COM_LUNE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_COM_LUNE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
