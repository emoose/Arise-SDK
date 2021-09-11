
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

// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.Refresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C::Refresh(const struct FMapLocationData& Location, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.Refresh");

	UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_Refresh_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.CustomEvent_OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C::CustomEvent_OnSelect(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.CustomEvent_OnSelect");

	UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_CustomEvent_OnSelect_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.CustomEvent_OnDeselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C::CustomEvent_OnDeselect(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.CustomEvent_OnDeselect");

	UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_CustomEvent_OnDeselect_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.PreConstruct");

	UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_ICON
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_ICON(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_ICON");

	UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_ICON_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
