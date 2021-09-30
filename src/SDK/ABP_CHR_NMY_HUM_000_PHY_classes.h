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

// AnimBlueprintGeneratedClass ABP_CHR_NMY_HUM_000_PHY.ABP_CHR_NMY_HUM_000_PHY_C
// 0x20D0 (0x2630 - 0x0560)
class UABP_CHR_NMY_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_03CDFAEA4A2F2CF4ABEB119FAFF8C1F8;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_F8E3523B4B3CE80526E28380DA6A8FE6;  // 0x05B0(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_68EBC4CF4709C5F42F04349E14EAF29E;// 0x0620(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0F2F16F54AF8D81DE0A43BB970F448B7;// 0x0A10(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F89D533F4BE054774CAA349209261D2E;// 0x0A58(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C1796757446E4B8BBA1520A863FF0951;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2B192BF5455D7FE1672F02BF8AFC6850;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A0939FE34F46267E8B069B8A6E5610E3;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9AE115B441890DFD5432D1AEE99B96D3;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4944504344BD22C14F7B5A9B78936FDB;// 0x1A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_689A16F141EE201E5868E9AF31205601;// 0x1E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8F3E46E347D0FF60DB806C9F6E2A5D4A;// 0x2240(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NMY_HUM_000_PHY.ABP_CHR_NMY_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_A0939FE34F46267E8B069B8A6E5610E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_2B192BF5455D7FE1672F02BF8AFC6850();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_9AE115B441890DFD5432D1AEE99B96D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_C1796757446E4B8BBA1520A863FF0951();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_8F3E46E347D0FF60DB806C9F6E2A5D4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_689A16F141EE201E5868E9AF31205601();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_68EBC4CF4709C5F42F04349E14EAF29E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY_AnimGraphNode_AnimDynamics_4944504344BD22C14F7B5A9B78936FDB();
	void ExecuteUbergraph_ABP_CHR_NMY_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
