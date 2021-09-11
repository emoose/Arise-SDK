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

// Function BPD_UnitManager.BPD_UnitManager_C.UserConstructionScript
struct ABPD_UnitManager_C_UserConstructionScript_Params
{
};

// Function BPD_UnitManager.BPD_UnitManager_C.ReceiveBeginPlay
struct ABPD_UnitManager_C_ReceiveBeginPlay_Params
{
};

// Function BPD_UnitManager.BPD_UnitManager_C.OnChangeProfile
struct ABPD_UnitManager_C_OnChangeProfile_Params
{
	struct FString                                     ParameterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPD_UnitManager.BPD_UnitManager_C.ReceiveEndPlay
struct ABPD_UnitManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_UnitManager.BPD_UnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSpawnCharacterSignature__DelegateSignature
struct ABPD_UnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSpawnCharacterSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reinforcement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_UnitManager.BPD_UnitManager_C.ExecuteUbergraph_BPD_UnitManager
struct ABPD_UnitManager_C_ExecuteUbergraph_BPD_UnitManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
