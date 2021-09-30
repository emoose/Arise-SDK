
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

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_ACT_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.Refresh");

	UTO14_BPI_GUI_SYS_PF_ACT_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.SetIsCPAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsCPAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_ACT_C::SetIsCPAction(bool InIsCPAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.SetIsCPAction");

	UTO14_BPI_GUI_SYS_PF_ACT_C_SetIsCPAction_Params params;
	params.InIsCPAction = InIsCPAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.GetIsCPAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsCPAction                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_ACT_C::GetIsCPAction(bool* OutIsCPAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.GetIsCPAction");

	UTO14_BPI_GUI_SYS_PF_ACT_C_GetIsCPAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsCPAction != nullptr)
		*OutIsCPAction = params.OutIsCPAction;
}


// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.ShowCP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCPPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_ACT_C::ShowCP(int InCPPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.ShowCP");

	UTO14_BPI_GUI_SYS_PF_ACT_C_ShowCP_Params params;
	params.InCPPoint = InCPPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           iModText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Button                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InCPPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_ACT_C::SetInfo(const struct FModifiedText& iModText, const struct FString& Button, bool Condition, int InCPPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.SetInfo");

	UTO14_BPI_GUI_SYS_PF_ACT_C_SetInfo_Params params;
	params.iModText = iModText;
	params.Button = Button;
	params.Condition = Condition;
	params.InCPPoint = InCPPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_ACT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.Construct");

	UTO14_BPI_GUI_SYS_PF_ACT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.EventOnCloseAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_ACT_C::EventOnCloseAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.EventOnCloseAnimationEnd");

	UTO14_BPI_GUI_SYS_PF_ACT_C_EventOnCloseAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_ACT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_ACT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_ACT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_ACT");

	UTO14_BPI_GUI_SYS_PF_ACT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_ACT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
