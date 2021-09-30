
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

// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.SetInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPopupInfoData          InInfoData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<EArisePartyID>          InPartyIDs                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_SYS_PF_INFO_C::SetInfo(const struct FPopupInfoData& InInfoData, TArray<EArisePartyID>* InPartyIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.SetInfo");

	UTO14_BPI_GUI_SYS_PF_INFO_C_SetInfo_Params params;
	params.InInfoData = InInfoData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPartyIDs != nullptr)
		*InPartyIDs = params.InPartyIDs;
}


// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.Tick");

	UTO14_BPI_GUI_SYS_PF_INFO_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.EventShow
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_C::EventShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.EventShow");

	UTO14_BPI_GUI_SYS_PF_INFO_C_EventShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.Construct");

	UTO14_BPI_GUI_SYS_PF_INFO_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.EventHido
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_C::EventHido()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.EventHido");

	UTO14_BPI_GUI_SYS_PF_INFO_C_EventHido_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO");

	UTO14_BPI_GUI_SYS_PF_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
