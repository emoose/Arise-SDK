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

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn PFStart
struct UBP_PF_NpcFunctionLibrary_C_NPC_Spawn_PFStart_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn By AreaBox
struct UBP_PF_NpcFunctionLibrary_C_NPC_Spawn_By_AreaBox_Params
{
	struct FTransform                                  InBoxTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InBoxExtent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FPFNpcDefineID>                      ExcludeList;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn By Priority
struct UBP_PF_NpcFunctionLibrary_C_NPC_Spawn_By_Priority_Params
{
	EPFNpcSpawnPriority                                Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC HideAll
struct UBP_PF_NpcFunctionLibrary_C_NPC_HideAll_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC VisibleAll
struct UBP_PF_NpcFunctionLibrary_C_NPC_VisibleAll_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.GetSkeletalMeshAnimationBP
struct UBP_PF_NpcFunctionLibrary_C_GetSkeletalMeshAnimationBP_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC RemoveAll
struct UBP_PF_NpcFunctionLibrary_C_NPC_RemoveAll_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.GetNpcManagerBP
struct UBP_PF_NpcFunctionLibrary_C_GetNpcManagerBP_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PF_NpcManager_C*                         Manager;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC SpawnAll
struct UBP_PF_NpcFunctionLibrary_C_NPC_SpawnAll_Params
{
	bool                                               bBlock;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
