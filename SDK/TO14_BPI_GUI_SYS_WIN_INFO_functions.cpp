
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

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SetValueClamp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::SetValueClamp(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SetValueClamp");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_SetValueClamp_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.Tick");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SetValueInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::SetValueInt(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SetValueInt");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_SetValueInt_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.AddValueInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimationTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::AddValueInt(int Value, float AnimationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.AddValueInt");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_AddValueInt_Params params;
	params.Value = Value;
	params.AnimationTime = AnimationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SkipAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::SkipAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SkipAnimation");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_SkipAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.CountUpAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::CountUpAnimation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.CountUpAnimation");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_CountUpAnimation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_INFO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_INFO_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_INFO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_INFO");

	UTO14_BPI_GUI_SYS_WIN_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_INFO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
