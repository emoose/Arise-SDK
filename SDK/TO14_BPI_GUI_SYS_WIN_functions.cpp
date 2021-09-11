
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

// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_C::IsClose(bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.IsClose");

	UTO14_BPI_GUI_SYS_WIN_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_C::Open(int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Open");

	UTO14_BPI_GUI_SYS_WIN_C_Open_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Tick");

	UTO14_BPI_GUI_SYS_WIN_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.OnAnimationFinished");

	UTO14_BPI_GUI_SYS_WIN_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN");

	UTO14_BPI_GUI_SYS_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
