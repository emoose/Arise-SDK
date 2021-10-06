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

// AnimBlueprintGeneratedClass ABP_CHR_MNK_HUM_072_PHY.ABP_CHR_MNK_HUM_072_PHY_C
// 0x3110 (0x3670 - 0x0560)
class UABP_CHR_MNK_HUM_072_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F3117581477ED7230BDBDCB5FA3E95C2;      // 0x0568(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72C1A15548B5D44B490F9FAE193D4286;// 0x05B0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_09B7F48E4A710FB5069AB6B1169B869E;// 0x05F8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_60EFD401480FB5FCCA4B8C96065A4073;// 0x0640(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A352B09B4123E88AB7CF059895C5D6BA;// 0x0A30(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_31087A90434CC9D2E0933BAC3E8DC0D3;// 0x0E20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F338E323455C6753707D5C8A3C7D44E1;// 0x1210(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1D5FB2344C7C3C3A660145A4239774C4;// 0x1600(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_329BE25845FF9DBE0FE7E2BB916142DA;// 0x19F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_08E4C4DE4E821A8549C9799BDB4390F8;// 0x1DE0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B6FCB59F4C26D16647E133B2C31980FA;// 0x21D0(0x03F0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_C1F01AF74DB3BA8D6E5DC8B712E5E31C;// 0x25C0(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x26A8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7020C7E541D0A072217CD38BD1C695A1;// 0x26B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F9CF163473BC9E2B2DE42BEA10F1018;// 0x2AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F9A4C2241070DF85F7609A491A67A5A;// 0x2E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C98A4EC647DDB9D3A00034B57697DB2D;// 0x3280(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_MNK_HUM_072_PHY.ABP_CHR_MNK_HUM_072_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_329BE25845FF9DBE0FE7E2BB916142DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_C98A4EC647DDB9D3A00034B57697DB2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_5F9A4C2241070DF85F7609A491A67A5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_5F9CF163473BC9E2B2DE42BEA10F1018();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_1D5FB2344C7C3C3A660145A4239774C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_F338E323455C6753707D5C8A3C7D44E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_31087A90434CC9D2E0933BAC3E8DC0D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_7020C7E541D0A072217CD38BD1C695A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_A352B09B4123E88AB7CF059895C5D6BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_08E4C4DE4E821A8549C9799BDB4390F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_60EFD401480FB5FCCA4B8C96065A4073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY_AnimGraphNode_AnimDynamics_B6FCB59F4C26D16647E133B2C31980FA();
	void ExecuteUbergraph_ABP_CHR_MNK_HUM_072_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
