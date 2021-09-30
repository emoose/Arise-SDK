
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

// Function TO14_BPI_GUI_SYS_SCHT_ROOT.TO14_BPI_GUI_SYS_SCHT_ROOT_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT.TO14_BPI_GUI_SYS_SCHT_ROOT_C.PreConstruct");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT_ROOT.TO14_BPI_GUI_SYS_SCHT_ROOT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT_ROOT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT_ROOT.TO14_BPI_GUI_SYS_SCHT_ROOT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT");

	UTO14_BPI_GUI_SYS_SCHT_ROOT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
