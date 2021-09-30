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

// AnimBlueprintGeneratedClass AB_BTL_SIO_000.AB_BTL_SIO_000_C
// 0x0688 (0x0D28 - 0x06A0)
class UAB_BTL_SIO_000_C : public UBtlAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_55B8BA2B435380DC35E9258DD113DFD2;// 0x06A8(0x0290)
	struct FAnimNode_Root                              AnimGraphNode_Root_35DB7397435A887EA26FD9BAE4FF6591;      // 0x0938(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_35DB228E481CF027BCCF0ABEB49A7BF7;// 0x0980(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D410C0AD47B8BC86F36557B5D1BE6E46;// 0x09C8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2A09EDD9454C263D78B171B66C68569F;// 0x0A10(0x0160)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_BA23F2B94732A682AD8119A74C9819BA;  // 0x0B70(0x0150)
	struct FRotator                                    AimingAddRotation;                                        // 0x0CC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0CCC(0x0004) MISSED OFFSET
	class USkinnedMeshComponent*                       SkinnedMesh;                                              // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_BtlCharacterBase_C*                      BtlUnit;                                                  // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AimWeaponBlend;                                           // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     wl_EX_GUN_00_00_C;                                        // 0x0CE4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     wl_EX_GUN_00_03_C;                                        // 0x0CF0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     wl_Target;                                                // 0x0CFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    GUN_00ToTarget;                                           // 0x0D08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    GUN_00ToGUN_03;                                           // 0x0D14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachGunBlend;                                           // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaAngleSpeed;                                          // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BTL_SIO_000.AB_BTL_SIO_000_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BTL_SIO_000_ASAnimGraphNode_StateMachine_55B8BA2B435380DC35E9258DD113DFD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BTL_SIO_000_AnimGraphNode_ModifyBone_2A09EDD9454C263D78B171B66C68569F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BTL_SIO_000_AnimGraphNode_CopyBone_BA23F2B94732A682AD8119A74C9819BA();
	void ExecuteUbergraph_AB_BTL_SIO_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
