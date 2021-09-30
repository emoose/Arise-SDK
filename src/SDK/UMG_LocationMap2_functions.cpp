
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

// Function UMG_LocationMap2.UMG_LocationMap2_C.CheckGarbageCollection
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LocationMap2_C::CheckGarbageCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.CheckGarbageCollection");

	UUMG_LocationMap2_C_CheckGarbageCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.AdjustIconScaling
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         Widgets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocationMap2_C::AdjustIconScaling(float Scale, TArray<class UWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.AdjustIconScaling");

	UUMG_LocationMap2_C_AdjustIconScaling_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.SetPositionLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HalfWidth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Center                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_LocationMap2_C::SetPositionLimit(float HalfWidth, const struct FVector2D& Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.SetPositionLimit");

	UUMG_LocationMap2_C_SetPositionLimit_Params params;
	params.HalfWidth = HalfWidth;
	params.Center = Center;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MapLink                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FastTravel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocationMap2_C::Activate(bool MapLink, bool FastTravel, bool Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.Activate");

	UUMG_LocationMap2_C_Activate_Params params;
	params.MapLink = MapLink;
	params.FastTravel = FastTravel;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.Pad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocationMap2_C::Pad(class AMenuPadProcess* PadProcess, float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.Pad");

	UUMG_LocationMap2_C_Pad_Params params;
	params.PadProcess = PadProcess;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.EventMapMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               In                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_LocationMap2_C::EventMapMove(const struct FVector2D& In)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.EventMapMove");

	UUMG_LocationMap2_C_EventMapMove_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.EventOnDestroy
// (BlueprintCallable, BlueprintEvent)

void UUMG_LocationMap2_C::EventOnDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.EventOnDestroy");

	UUMG_LocationMap2_C_EventOnDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UUMG_LocationMap2_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.CustomEvent_2");

	UUMG_LocationMap2_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UUMG_LocationMap2_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.Initialize");

	UUMG_LocationMap2_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.EventLocationChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_LocationMap2_C::EventLocationChange(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.EventLocationChange");

	UUMG_LocationMap2_C_EventLocationChange_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.EventMapMove2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Move                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_LocationMap2_C::EventMapMove2(const struct FVector& Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.EventMapMove2");

	UUMG_LocationMap2_C_EventMapMove2_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocationMap2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.Tick");

	UUMG_LocationMap2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.ExecuteUbergraph_UMG_LocationMap2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocationMap2_C::ExecuteUbergraph_UMG_LocationMap2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.ExecuteUbergraph_UMG_LocationMap2");

	UUMG_LocationMap2_C_ExecuteUbergraph_UMG_LocationMap2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocationMap2.UMG_LocationMap2_C.OnChangedDefaultScale__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocationMap2_C::OnChangedDefaultScale__DelegateSignature(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocationMap2.UMG_LocationMap2_C.OnChangedDefaultScale__DelegateSignature");

	UUMG_LocationMap2_C_OnChangedDefaultScale__DelegateSignature_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
