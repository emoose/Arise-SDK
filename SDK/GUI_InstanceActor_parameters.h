#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GUI_InstanceActor.GUI_InstanceActor_C.GetComLuneAnimInterface
struct AGUI_InstanceActor_C_GetComLuneAnimInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceActor.GUI_InstanceActor_C.GetSymbolEnemyIconAnimInterface
struct AGUI_InstanceActor_C_GetSymbolEnemyIconAnimInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceActor.GUI_InstanceActor_C.GetIconRegistrar
struct AGUI_InstanceActor_C_GetIconRegistrar_Params
{
	TScriptInterface<class UIconRegistrarInterface_C>  IconRegistrar;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceActor.GUI_InstanceActor_C.UserConstructionScript
struct AGUI_InstanceActor_C_UserConstructionScript_Params
{
};

// Function GUI_InstanceActor.GUI_InstanceActor_C.ReceiveBeginPlay
struct AGUI_InstanceActor_C_ReceiveBeginPlay_Params
{
};

// Function GUI_InstanceActor.GUI_InstanceActor_C.Terminate
struct AGUI_InstanceActor_C_Terminate_Params
{
};

// Function GUI_InstanceActor.GUI_InstanceActor_C.ExecuteUbergraph_GUI_InstanceActor
struct AGUI_InstanceActor_C_ExecuteUbergraph_GUI_InstanceActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
