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

// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.RefreshEvent
struct USymbolEnemyIconBase_C_RefreshEvent_Params
{
};

// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.DisappearState
struct USymbolEnemyIconBase_C_DisappearState_Params
{
};

// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetIsShow
struct USymbolEnemyIconBase_C_SetIsShow_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.Initialize
struct USymbolEnemyIconBase_C_Initialize_Params
{
};

// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetMistColor
struct USymbolEnemyIconBase_C_SetMistColor_Params
{
	struct FLinearColor                                InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               InIsBig;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetOut
struct USymbolEnemyIconBase_C_SetOut_Params
{
	bool                                               IsOutLeft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutTop;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutRight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutBottom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
