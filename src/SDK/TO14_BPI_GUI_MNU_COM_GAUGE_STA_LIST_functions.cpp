
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

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.SetPlayerStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C::SetPlayerStatus(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.SetPlayerStatus");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_SetPlayerStatus_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.GetGaugeWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C::GetGaugeWidget(int Index, class UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.GetGaugeWidget");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_GetGaugeWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.SetGaugeListCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GaugeNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C::SetGaugeListCount(int GaugeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.SetGaugeListCount");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_SetGaugeListCount_Params params;
	params.GaugeNum = GaugeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.Construct");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.InitializeData
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C::InitializeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.InitializeData");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_InitializeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
