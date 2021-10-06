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

// AnimBlueprintGeneratedClass ABP_CHR_ZGU_HUM_052_HAIR_PHY.ABP_CHR_ZGU_HUM_052_HAIR_PHY_C
// 0x2938 (0x2E98 - 0x0560)
class UABP_CHR_ZGU_HUM_052_HAIR_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_30D6C46D46CB580D3F3D7AA07F536719;// 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_551831BA4F9B32C85F3B82A0737DE3F8;// 0x05B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_331105AE4EC602F60FC92BB9C6FDC6A6;// 0x09A0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3B9B5586422392B67CD101939F885391;// 0x0D90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A2DF13AD469EA8F7EFB57788F908F0B2;// 0x1180(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1AAADCE448F2A58CC9A2B7BB8F47F046;// 0x1570(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_983108964C1B80EABE4AFFA00BFBF0DD;// 0x1960(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CDA131374550BBEFD05593B575A53B14;// 0x1D50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_69D2F252443E82F78CCBEB8FF34CA32A;// 0x2140(0x03F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_66BDD51E4365F3A8E43C1DBCE4F00547;// 0x2530(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x2578(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_81F5D111465A60CE4225F9B17AD13A35;// 0x2580(0x03F0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_624ED7A04F1D4167F62DEDB3D1DC02DB;// 0x2970(0x00E8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x2A58(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_192810134666C0D84CCEAC845E9EA216;// 0x2A60(0x03F0)
	struct FAnimNode_Root                              AnimGraphNode_Root_917D23034C2F49670DA124BE9548CDB6;      // 0x2E50(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_ZGU_HUM_052_HAIR_PHY.ABP_CHR_ZGU_HUM_052_HAIR_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_192810134666C0D84CCEAC845E9EA216();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_CDA131374550BBEFD05593B575A53B14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_81F5D111465A60CE4225F9B17AD13A35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_69D2F252443E82F78CCBEB8FF34CA32A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_983108964C1B80EABE4AFFA00BFBF0DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_551831BA4F9B32C85F3B82A0737DE3F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_331105AE4EC602F60FC92BB9C6FDC6A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_3B9B5586422392B67CD101939F885391();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_A2DF13AD469EA8F7EFB57788F908F0B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY_AnimGraphNode_AnimDynamics_1AAADCE448F2A58CC9A2B7BB8F47F046();
	void ExecuteUbergraph_ABP_CHR_ZGU_HUM_052_HAIR_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
