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

// Function GUI_InstanceInterface.GUI_InstanceInterface_C.GetComLuneAnimInterface
struct UGUI_InstanceInterface_C_GetComLuneAnimInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_SYS_COM_LUNE_ANIM_Interface_C> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUI_InstanceInterface.GUI_InstanceInterface_C.GetSymbolEnemyIconAnimInterface
struct UGUI_InstanceInterface_C_GetSymbolEnemyIconAnimInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_ANIM_Interface_C> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
