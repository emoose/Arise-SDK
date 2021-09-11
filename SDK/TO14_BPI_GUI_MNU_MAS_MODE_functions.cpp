
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

// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.SetOperationMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOperationMode                 InMode                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::SetOperationMode(EOperationMode InMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.SetOperationMode");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_SetOperationMode_Params params;
	params.InMode = InMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.SetGameState
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::SetGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.SetGameState");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_SetGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.GetOperationMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOperationMode                 Mode                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::GetOperationMode(EOperationMode* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.GetOperationMode");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_GetOperationMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mode != nullptr)
		*Mode = params.Mode;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.Change
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.Change");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.ChangeOperationMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOperationMode                 InMode                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::ChangeOperationMode(EOperationMode InMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.ChangeOperationMode");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_ChangeOperationMode_Params params;
	params.InMode = InMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.OnModeChange
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::OnModeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.OnModeChange");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_OnModeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.Destruct");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_MODE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_MODE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_MODE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_MODE.TO14_BPI_GUI_MNU_MAS_MODE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_MODE");

	UTO14_BPI_GUI_MNU_MAS_MODE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_MODE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
