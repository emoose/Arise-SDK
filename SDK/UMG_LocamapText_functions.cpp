
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

// Function UMG_LocamapText.UMG_LocamapText_C.SetPositionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 PositionWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_LocamapText_C::SetPositionWidget(class UWidget* PositionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.SetPositionWidget");

	UUMG_LocamapText_C_SetPositionWidget_Params params;
	params.PositionWidget = PositionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapText.UMG_LocamapText_C.UpdatePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_LocamapText_C::UpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.UpdatePosition");

	UUMG_LocamapText_C_UpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapText.UMG_LocamapText_C.SetWidgetComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_LocamapText_C::SetWidgetComponent(class UWidgetComponent* WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.SetWidgetComponent");

	UUMG_LocamapText_C_SetWidgetComponent_Params params;
	params.WidgetComponent = WidgetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapText.UMG_LocamapText_C.SetPosition_LinkLine
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENamePlatePositionType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapText_C::SetPosition_LinkLine(ENamePlatePositionType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.SetPosition_LinkLine");

	UUMG_LocamapText_C_SetPosition_LinkLine_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapText.UMG_LocamapText_C.SetPosition_Align
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENamePlatePositionType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapText_C::SetPosition_Align(ENamePlatePositionType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.SetPosition_Align");

	UUMG_LocamapText_C_SetPosition_Align_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapText.UMG_LocamapText_C.SetPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENamePlatePositionType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapText_C::SetPosition(ENamePlatePositionType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.SetPosition");

	UUMG_LocamapText_C_SetPosition_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapText.UMG_LocamapText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapText_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.PreConstruct");

	UUMG_LocamapText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapText.UMG_LocamapText_C.ExecuteUbergraph_UMG_LocamapText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapText_C::ExecuteUbergraph_UMG_LocamapText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapText.UMG_LocamapText_C.ExecuteUbergraph_UMG_LocamapText");

	UUMG_LocamapText_C_ExecuteUbergraph_UMG_LocamapText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
