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

// BlueprintGeneratedClass BP_MGC_TSK_AttackInstallationCollision.BP_MGC_TSK_AttackInstallationCollision_C
// 0x0070 (0x0100 - 0x0090)
class UBP_MGC_TSK_AttackInstallationCollision_C : public UBP_MGC_CollisionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	struct FSTR_AttackCollisionParam                   AttackParam;                                              // 0x0098(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBtlSphereCollisionInfo>             CollisionInfos;                                           // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UBtlAttackSphereComponent*>           AttackCollisionArray;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_AttackInstallationCollision.BP_MGC_TSK_AttackInstallationCollision_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Begin();
	void Received_End();
	void ExecuteUbergraph_BP_MGC_TSK_AttackInstallationCollision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
