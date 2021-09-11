
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

// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.SetBaseAccessory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::SetBaseAccessory(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.SetBaseAccessory");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_SetBaseAccessory_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.PadWork");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.SetTargetCookRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::SetTargetCookRecipe(int RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.SetTargetCookRecipe");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_SetTargetCookRecipe_Params params;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.SetTargetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::SetTargetItem(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.SetTargetItem");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_SetTargetItem_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.CB_OnMouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::CB_OnMouseMove(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.CB_OnMouseMove");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_CB_OnMouseMove_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.CB_OnMouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::CB_OnMouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.CB_OnMouseEnter");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_CB_OnMouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.DataConstruct");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.OnViewClose");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SKL
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SKL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL.TO14_BPI_GUI_MNU_EQU_SKL_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SKL");

	UTO14_BPI_GUI_MNU_EQU_SKL_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SKL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
