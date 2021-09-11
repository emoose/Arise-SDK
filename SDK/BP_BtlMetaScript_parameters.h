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

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsPlayingScenarioVoice
struct UBP_BtlMetaScript_C_IsPlayingScenarioVoice_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.RequestVoiceByCondition
struct UBP_BtlMetaScript_C_RequestVoiceByCondition_Params
{
	EBtlVoiceCondition                                 Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsBattleLossCondition
struct UBP_BtlMetaScript_C_IsBattleLossCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsBattleWinCondition
struct UBP_BtlMetaScript_C_IsBattleWinCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Unregister_BattleWinCheck
struct UBP_BtlMetaScript_C_Unregister_BattleWinCheck_Params
{
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Register_BattleWinCheck
struct UBP_BtlMetaScript_C_Register_BattleWinCheck_Params
{
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnWinCheck_DeadCharater
struct UBP_BtlMetaScript_C_OnWinCheck_DeadCharater_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnLossCheck_DeadCharater
struct UBP_BtlMetaScript_C_OnLossCheck_DeadCharater_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Unregister_BattleLossCheck
struct UBP_BtlMetaScript_C_Unregister_BattleLossCheck_Params
{
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Register_BattleLossCheck
struct UBP_BtlMetaScript_C_Register_BattleLossCheck_Params
{
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.RequestOpenHelpWindow
struct UBP_BtlMetaScript_C_RequestOpenHelpWindow_Params
{
	struct FCollectionHelp_XmlDatabaseLabel            HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnComplateHelpWindow
struct UBP_BtlMetaScript_C_OnComplateHelpWindow_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.ExecuteUbergraph_BP_BtlMetaScript
struct UBP_BtlMetaScript_C_ExecuteUbergraph_BP_BtlMetaScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
