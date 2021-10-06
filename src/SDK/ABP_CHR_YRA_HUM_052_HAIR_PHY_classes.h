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

// AnimBlueprintGeneratedClass ABP_CHR_YRA_HUM_052_HAIR_PHY.ABP_CHR_YRA_HUM_052_HAIR_PHY_C
// 0x2540 (0x2AA0 - 0x0560)
class UABP_CHR_YRA_HUM_052_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2FFE92D44C6D32CE668388A495038DF2;      // 0x0568(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E1C14F55478E51A94871A0BBD6DE4ADC;// 0x05B0(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_F1073A454F33B019C1304D84B32F3214;// 0x05F8(0x00E8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6142B49C465DB54426808C94386135E8;// 0x06E0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0728(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_153071354AA6EFCFD8FABC9E0FCA4014;// 0x0730(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9AB9BAF04CA1B73504513D8AFBD32FCB;// 0x0B20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0FFA6E1A402282926462E2A5FEE3BDD1;// 0x0F10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22D9727B40D2D90E76E6A685831F6828;// 0x1300(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6E7332824A5AD9472A0F699C85F54246;// 0x16F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F68CBBE744AA9CFB9825DABCE0BF78E7;// 0x1AE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CC33FCB24EF5B078B338BA8BA1307067;// 0x1ED0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F13FDA944F018A3E2102128F47C2A167;// 0x22C0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1117548D46BC5DC0DEE9FD92230F554D;// 0x26B0(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_YRA_HUM_052_HAIR_PHY.ABP_CHR_YRA_HUM_052_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_F68CBBE744AA9CFB9825DABCE0BF78E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_1117548D46BC5DC0DEE9FD92230F554D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_F13FDA944F018A3E2102128F47C2A167();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_6E7332824A5AD9472A0F699C85F54246();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_22D9727B40D2D90E76E6A685831F6828();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_0FFA6E1A402282926462E2A5FEE3BDD1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_9AB9BAF04CA1B73504513D8AFBD32FCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_153071354AA6EFCFD8FABC9E0FCA4014();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_CC33FCB24EF5B078B338BA8BA1307067();
	void ExecuteUbergraph_ABP_CHR_YRA_HUM_052_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
