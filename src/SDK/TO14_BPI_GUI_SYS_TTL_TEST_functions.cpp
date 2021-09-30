
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

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Restart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Restart");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.MenuInput
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::MenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.MenuInput");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_MenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.ChangeSelectedMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewMenuID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::ChangeSelectedMenu(int NewMenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.ChangeSelectedMenu");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_ChangeSelectedMenu_Params params;
	params.NewMenuID = NewMenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.CheckKeyDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPush                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::CheckKeyDown(bool* IsPush)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.CheckKeyDown");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_CheckKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPush != nullptr)
		*IsPush = params.IsPush;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.CheckAnyKeyDown
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsPressed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::CheckAnyKeyDown(struct FKey* InputKey, bool* IsPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.CheckAnyKeyDown");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_CheckAnyKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputKey != nullptr)
		*InputKey = params.InputKey;
	if (IsPressed != nullptr)
		*IsPressed = params.IsPressed;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTO14_BPI_GUI_SYS_TTL_TEST_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.OnKeyDown");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Tick");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Construct");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.OnAnimationFinished");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_TEST
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_TEST_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_TEST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_TEST");

	UTO14_BPI_GUI_SYS_TTL_TEST_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_TEST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
