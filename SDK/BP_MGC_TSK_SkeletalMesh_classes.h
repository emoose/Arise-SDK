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

// BlueprintGeneratedClass BP_MGC_TSK_SkeletalMesh.BP_MGC_TSK_SkeletalMesh_C
// 0x0010 (0x00C0 - 0x00B0)
class UBP_MGC_TSK_SkeletalMesh_C : public UBtlMagicTask_CreateSkeletalMeshBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_SkeletalMesh.BP_MGC_TSK_SkeletalMesh_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_End();
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TSK_SkeletalMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
