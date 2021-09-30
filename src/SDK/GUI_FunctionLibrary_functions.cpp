
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

// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetComLuneAnim_ANM
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetComLuneAnim_ANM(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetComLuneAnim_ANM");

	UGUI_FunctionLibrary_C_GUI_GetComLuneAnim_ANM_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetComLuneAnimInterface
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetComLuneAnimInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetComLuneAnimInterface");

	UGUI_FunctionLibrary_C_GUI_GetComLuneAnimInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Show
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetSymbolEnemyIconAnim_Show(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Show");

	UGUI_FunctionLibrary_C_GUI_GetSymbolEnemyIconAnim_Show_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Vanish
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetSymbolEnemyIconAnim_Vanish(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Vanish");

	UGUI_FunctionLibrary_C_GUI_GetSymbolEnemyIconAnim_Vanish_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Disappear_Big
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetSymbolEnemyIconAnim_Disappear_Big(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Disappear_Big");

	UGUI_FunctionLibrary_C_GUI_GetSymbolEnemyIconAnim_Disappear_Big_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Disappear_Small
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetSymbolEnemyIconAnim_Disappear_Small(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Disappear_Small");

	UGUI_FunctionLibrary_C_GUI_GetSymbolEnemyIconAnim_Disappear_Small_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Big
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Big(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Big");

	UGUI_FunctionLibrary_C_GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Big_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Small
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Small(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Small");

	UGUI_FunctionLibrary_C_GUI_GetSymbolEnemyIconAnim_Mist_Non_to_Small_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_SymbolEnemyIconAnim_Mist_Big_to_Small
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_SymbolEnemyIconAnim_Mist_Big_to_Small(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_SymbolEnemyIconAnim_Mist_Big_to_Small");

	UGUI_FunctionLibrary_C_GUI_SymbolEnemyIconAnim_Mist_Big_to_Small_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_SymbolEnemyIconAnim_Mist_Small_to_Big
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_SymbolEnemyIconAnim_Mist_Small_to_Big(class UObject* __WorldContext, class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_SymbolEnemyIconAnim_Mist_Small_to_Big");

	UGUI_FunctionLibrary_C_GUI_SymbolEnemyIconAnim_Mist_Small_to_Big_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnimInterface
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_FunctionLibrary_C::STATIC_GUI_GetSymbolEnemyIconAnimInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_FunctionLibrary.GUI_FunctionLibrary_C.GUI_GetSymbolEnemyIconAnimInterface");

	UGUI_FunctionLibrary_C_GUI_GetSymbolEnemyIconAnimInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
