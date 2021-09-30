
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

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.GetListItemObject");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.GetTextSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               OutSize                        (Parm, OutParm, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::GetTextSize(struct FVector2D* OutSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.GetTextSize");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_GetTextSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSize != nullptr)
		*OutSize = params.OutSize;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnEntryReleased");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnItemExpansionChanged");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.BP_OnItemSelectionChanged");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.OnListItemObjectSet");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.Construct");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.Tick");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_Text
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_Text(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE_Text.TO14_BPI_GUI_SYS_TTL_LICENSE_Text_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_Text");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_Text_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_Text_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
