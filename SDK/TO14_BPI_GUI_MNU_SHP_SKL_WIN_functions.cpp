
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

// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.SkillTextVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C::SkillTextVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.SkillTextVisibility");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C_SkillTextVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C::SetItem(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.SetItem");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C_SetItem_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.Construct");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.InitializeEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C::InitializeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.InitializeEvent");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C_InitializeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SHP_SKL_WIN.TO14_BPI_GUI_MNU_SHP_SKL_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN");

	UTO14_BPI_GUI_MNU_SHP_SKL_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
