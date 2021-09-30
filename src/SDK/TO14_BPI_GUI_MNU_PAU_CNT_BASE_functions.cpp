
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

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetPlatformType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamePlatform                  PlatformType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::GetPlatformType(EGamePlatform* PlatformType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetPlatformType");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_GetPlatformType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformType != nullptr)
		*PlatformType = params.PlatformType;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.IsFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::IsFinish(int* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.IsFinish");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_IsFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::Initialize(bool* Dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.Initialize");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dummy != nullptr)
		*Dummy = params.Dummy;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::PadWork(class AMenuPadProcess* PadProcess, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.PadWork");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetInitialCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EInputCategory                 Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::GetInitialCategory(EInputCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetInitialCategory");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_GetInitialCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.Init");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.PadWorkCore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Processed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::PadWorkCore(class AMenuPadProcess* InputPin, bool* Processed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.PadWorkCore");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_PadWorkCore_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Processed != nullptr)
		*Processed = params.Processed;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ViewClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::ViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ViewClose");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_ViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ViewOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::ViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ViewOpen");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_ViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.SetKeyboardConfigText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetList                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::SetKeyboardConfigText(EInputCategory Category, TArray<class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.SetKeyboardConfigText");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_SetKeyboardConfigText_Params params;
	params.Category = Category;
	params.TargetList = TargetList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetSelectedCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::GetSelectedCategory(EInputCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetSelectedCategory");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_GetSelectedCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.SetPadConfigText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::SetPadConfigText(EInputCategory Category, TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.SetPadConfigText");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_SetPadConfigText_Params params;
	params.Category = Category;
	params.TargetMap = TargetMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.InitializeWidgetMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         WidgetList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EButtonIconSet                 IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::InitializeWidgetMap(TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap1, EButtonIconSet IconType, TArray<class UWidget*>* WidgetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.InitializeWidgetMap");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_InitializeWidgetMap_Params params;
	params.TargetMap1 = TargetMap1;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetList != nullptr)
		*WidgetList = params.WidgetList;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_BASE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_BASE");

	UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
