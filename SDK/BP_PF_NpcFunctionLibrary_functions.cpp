
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

// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn PFStart
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_NPC_Spawn_PFStart(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn PFStart");

	UBP_PF_NpcFunctionLibrary_C_NPC_Spawn_PFStart_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn By AreaBox
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              InBoxTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InBoxExtent                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FPFNpcDefineID>  ExcludeList                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_NPC_Spawn_By_AreaBox(const struct FTransform& InBoxTransform, const struct FVector& InBoxExtent, TArray<struct FPFNpcDefineID> ExcludeList, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn By AreaBox");

	UBP_PF_NpcFunctionLibrary_C_NPC_Spawn_By_AreaBox_Params params;
	params.InBoxTransform = InBoxTransform;
	params.InBoxExtent = InBoxExtent;
	params.ExcludeList = ExcludeList;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn By Priority
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFNpcSpawnPriority            Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_NPC_Spawn_By_Priority(EPFNpcSpawnPriority Priority, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC Spawn By Priority");

	UBP_PF_NpcFunctionLibrary_C_NPC_Spawn_By_Priority_Params params;
	params.Priority = Priority;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC HideAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_NPC_HideAll(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC HideAll");

	UBP_PF_NpcFunctionLibrary_C_NPC_HideAll_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC VisibleAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_NPC_VisibleAll(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC VisibleAll");

	UBP_PF_NpcFunctionLibrary_C_NPC_VisibleAll_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.GetSkeletalMeshAnimationBP
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AnimClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_GetSkeletalMeshAnimationBP(class USkeletalMesh* Mesh, class UObject* __WorldContext, bool* bValid, class UClass** AnimClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.GetSkeletalMeshAnimationBP");

	UBP_PF_NpcFunctionLibrary_C_GetSkeletalMeshAnimationBP_Params params;
	params.Mesh = Mesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (AnimClass != nullptr)
		*AnimClass = params.AnimClass;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC RemoveAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_NPC_RemoveAll(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC RemoveAll");

	UBP_PF_NpcFunctionLibrary_C_NPC_RemoveAll_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.GetNpcManagerBP
// (Static, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PF_NpcManager_C*     Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_GetNpcManagerBP(class UObject* __WorldContext, class ABP_PF_NpcManager_C** Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.GetNpcManagerBP");

	UBP_PF_NpcFunctionLibrary_C_GetNpcManagerBP_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


// Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC SpawnAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBlock                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_NpcFunctionLibrary_C::STATIC_NPC_SpawnAll(bool bBlock, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C.NPC SpawnAll");

	UBP_PF_NpcFunctionLibrary_C_NPC_SpawnAll_Params params;
	params.bBlock = bBlock;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
