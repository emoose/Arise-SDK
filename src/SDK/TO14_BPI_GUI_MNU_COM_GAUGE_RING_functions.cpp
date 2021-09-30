
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

// Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetMaxBarDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C::SetMaxBarDisplay(bool InIsMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetMaxBarDisplay");

	UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C_SetMaxBarDisplay_Params params;
	params.InIsMax = InIsMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetValueBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C::SetValueBar(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetValueBar");

	UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C_SetValueBar_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetBarStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Now                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InMaxLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C::SetBarStatus(int Now, int Max, bool InMaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetBarStatus");

	UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C_SetBarStatus_Params params;
	params.Now = Now;
	params.Max = Max;
	params.InMaxLevel = InMaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
