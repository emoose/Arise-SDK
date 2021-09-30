
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

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::ButtonHovered(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ButtonHovered");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ButtonHovered_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetPlatformType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamePlatform                  PlatformType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::GetPlatformType(EGamePlatform* PlatformType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetPlatformType");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetPlatformType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformType != nullptr)
		*PlatformType = params.PlatformType;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.PadWorkCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::PadWorkCategory(class AMenuPadProcess* PadProcess, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.PadWorkCategory");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_PadWorkCategory_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::ButtonClicked(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ButtonClicked");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ButtonClicked_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.Initialize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::Initialize(bool* Dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.Initialize");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dummy != nullptr)
		*Dummy = params.Dummy;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::PadWork(class AMenuPadProcess* PadProcess, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.PadWork");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetSelectedDevice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType               DeviceType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::GetSelectedDevice(EInputDeviceType* DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetSelectedDevice");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetSelectedDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceType != nullptr)
		*DeviceType = params.DeviceType;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetSelectedCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::GetSelectedCategory(EInputCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetSelectedCategory");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetSelectedCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> WidgetMap                      (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::GetMap(TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*>* WidgetMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetMap");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetMap != nullptr)
		*WidgetMap = params.WidgetMap;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.SetConfigText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::SetConfigText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.SetConfigText");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_SetConfigText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ViewOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::ViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ViewOpen");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ViewClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::ViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ViewClose");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.Construct");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_WIN
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_WIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_WIN");

	UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_WIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
