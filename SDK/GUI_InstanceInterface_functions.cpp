
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

// Function GUI_InstanceInterface.GUI_InstanceInterface_C.GetComLuneAnimInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceInterface_C::GetComLuneAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceInterface.GUI_InstanceInterface_C.GetComLuneAnimInterface");

	UGUI_InstanceInterface_C_GetComLuneAnimInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


// Function GUI_InstanceInterface.GUI_InstanceInterface_C.GetSymbolEnemyIconAnimInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceInterface_C::GetSymbolEnemyIconAnimInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceInterface.GUI_InstanceInterface_C.GetSymbolEnemyIconAnimInterface");

	UGUI_InstanceInterface_C_GetSymbolEnemyIconAnimInterface_Params params;

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
