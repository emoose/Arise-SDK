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

// AnimBlueprintGeneratedClass ABP_CHR_NNA_HUM_072_HAIR_PHY.ABP_CHR_NNA_HUM_072_HAIR_PHY_C
// 0x1190 (0x16F0 - 0x0560)
class UABP_CHR_NNA_HUM_072_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5D515ECC45226E6B992716BF0ACF90E2;      // 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A4FBE26D448F252D8F475F9B9FEFF702;// 0x05B0(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C21AFCE749497B81044C0AB6498E53B2;// 0x09A0(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_C61D394043FF4C2E7E76AABE7884DB76;// 0x09E8(0x00E8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_540EABD84CA5C03A660E8BB80727C82D;// 0x0AD0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B18(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_401153784A312CCDA65DD385EA01A33C;// 0x0B20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_95B1E02340DD26522ED967962784711C;// 0x0F10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9349F79E4146D25C48F681AB404071E3;// 0x1300(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NNA_HUM_072_HAIR_PHY.ABP_CHR_NNA_HUM_072_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NNA_HUM_072_HAIR_PHY_AnimGraphNode_AnimDynamics_401153784A312CCDA65DD385EA01A33C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NNA_HUM_072_HAIR_PHY_AnimGraphNode_AnimDynamics_95B1E02340DD26522ED967962784711C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NNA_HUM_072_HAIR_PHY_AnimGraphNode_AnimDynamics_A4FBE26D448F252D8F475F9B9FEFF702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NNA_HUM_072_HAIR_PHY_AnimGraphNode_AnimDynamics_9349F79E4146D25C48F681AB404071E3();
	void ExecuteUbergraph_ABP_CHR_NNA_HUM_072_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
