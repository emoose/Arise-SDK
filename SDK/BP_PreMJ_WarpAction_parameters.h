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

// Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.GetNearWarpActor
struct UBP_PreMJ_WarpAction_C_GetNearWarpActor_Params
{
	struct FVector                                     BascLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ATO14_BP_WarpBase_C*                         WarpActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.Main
struct UBP_PreMJ_WarpAction_C_Main_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PreMJ_WarpAction.BP_PreMJ_WarpAction_C.ExecuteUbergraph_BP_PreMJ_WarpAction
struct UBP_PreMJ_WarpAction_C_ExecuteUbergraph_BP_PreMJ_WarpAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
