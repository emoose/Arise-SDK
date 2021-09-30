#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_NpcFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcFunctionLibrary.BP_PF_NpcFunctionLibrary_C");
		return ptr;
	}


	void STATIC_NPC_Spawn_PFStart(class UObject* __WorldContext);
	void STATIC_NPC_Spawn_By_AreaBox(const struct FTransform& InBoxTransform, const struct FVector& InBoxExtent, TArray<struct FPFNpcDefineID> ExcludeList, class UObject* __WorldContext);
	void STATIC_NPC_Spawn_By_Priority(EPFNpcSpawnPriority Priority, class UObject* __WorldContext);
	void STATIC_NPC_HideAll(class UObject* __WorldContext);
	void STATIC_NPC_VisibleAll(class UObject* __WorldContext);
	void STATIC_GetSkeletalMeshAnimationBP(class USkeletalMesh* Mesh, class UObject* __WorldContext, bool* bValid, class UClass** AnimClass);
	void STATIC_NPC_RemoveAll(class UObject* __WorldContext);
	void STATIC_GetNpcManagerBP(class UObject* __WorldContext, class ABP_PF_NpcManager_C** Manager);
	void STATIC_NPC_SpawnAll(bool bBlock, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
