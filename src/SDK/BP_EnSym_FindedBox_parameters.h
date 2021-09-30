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

// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetOutlinerFolderPath
struct ABP_EnSym_FindedBox_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetOutlinerLabelName
struct ABP_EnSym_FindedBox_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.GetBoxParameter
struct ABP_EnSym_FindedBox_C_GetBoxParameter_Params
{
	struct FString                                     actorId;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     BoxSize;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.UserConstructionScript
struct ABP_EnSym_FindedBox_C_UserConstructionScript_Params
{
};

// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.ReceiveBeginPlay
struct ABP_EnSym_FindedBox_C_ReceiveBeginPlay_Params
{
};

// Function BP_EnSym_FindedBox.BP_EnSym_FindedBox_C.ExecuteUbergraph_BP_EnSym_FindedBox
struct ABP_EnSym_FindedBox_C_ExecuteUbergraph_BP_EnSym_FindedBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
