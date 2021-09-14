
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

// Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_OVERLIMIT_C::Start(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.Start");

	UTO14_BPI_GUI_BTL_OVERLIMIT_C_Start_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_OVERLIMIT_C::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.SetPercent");

	UTO14_BPI_GUI_BTL_OVERLIMIT_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.End
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_OVERLIMIT_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.End");

	UTO14_BPI_GUI_BTL_OVERLIMIT_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_OVERLIMIT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_OVERLIMIT_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_OVERLIMIT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_OVERLIMIT.TO14_BPI_GUI_BTL_OVERLIMIT_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_OVERLIMIT");

	UTO14_BPI_GUI_BTL_OVERLIMIT_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_OVERLIMIT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
