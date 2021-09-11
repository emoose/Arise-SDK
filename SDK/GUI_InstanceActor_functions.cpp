
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

// Function GUI_InstanceActor.GUI_InstanceActor_C.GetComLuneAnimInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGUI_InstanceActor_C::GetComLuneAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceActor.GUI_InstanceActor_C.GetComLuneAnimInterface");

	AGUI_InstanceActor_C_GetComLuneAnimInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


// Function GUI_InstanceActor.GUI_InstanceActor_C.GetSymbolEnemyIconAnimInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGUI_InstanceActor_C::GetSymbolEnemyIconAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceActor.GUI_InstanceActor_C.GetSymbolEnemyIconAnimInterface");

	AGUI_InstanceActor_C_GetSymbolEnemyIconAnimInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


// Function GUI_InstanceActor.GUI_InstanceActor_C.GetIconRegistrar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UIconRegistrarInterface_C> IconRegistrar                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGUI_InstanceActor_C::GetIconRegistrar(TScriptInterface<class UIconRegistrarInterface_C>* IconRegistrar)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceActor.GUI_InstanceActor_C.GetIconRegistrar");

	AGUI_InstanceActor_C_GetIconRegistrar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconRegistrar != nullptr)
		*IconRegistrar = params.IconRegistrar;
}


// Function GUI_InstanceActor.GUI_InstanceActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGUI_InstanceActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceActor.GUI_InstanceActor_C.UserConstructionScript");

	AGUI_InstanceActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceActor.GUI_InstanceActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGUI_InstanceActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceActor.GUI_InstanceActor_C.ReceiveBeginPlay");

	AGUI_InstanceActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceActor.GUI_InstanceActor_C.Terminate
// (BlueprintCallable, BlueprintEvent)

void AGUI_InstanceActor_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceActor.GUI_InstanceActor_C.Terminate");

	AGUI_InstanceActor_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceActor.GUI_InstanceActor_C.ExecuteUbergraph_GUI_InstanceActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGUI_InstanceActor_C::ExecuteUbergraph_GUI_InstanceActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceActor.GUI_InstanceActor_C.ExecuteUbergraph_GUI_InstanceActor");

	AGUI_InstanceActor_C_ExecuteUbergraph_GUI_InstanceActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
