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

// AnimBlueprintGeneratedClass ABP_CHR_NMO_HUM_000_PHY.ABP_CHR_NMO_HUM_000_PHY_C
// 0x18F0 (0x1E50 - 0x0560)
class UABP_CHR_NMO_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2E5017B1419B931A3F118594D5ECB6C8;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_84DE13A144F1F66569EBBB8CB5BA11FB;  // 0x05B0(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7784482C45233687BDB6F19523585B43;// 0x0618(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_818561164EA78C2E883DCDB43B8AA7BA;// 0x0660(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EDFA48FC4C1F61AED388F0BF52B5C450;// 0x06B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_375C27B74B4736C7F5AC98A04877C686;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4190E02F48EAE9A8CCC709AE02B3B225;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_122D2A954366D1FF134C3FAF610BF7CD;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_84E7045E4E03A9CAA00970A71B9E6B7C;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6149C64F44AE5CC5BF9EBA8EAAF01E23;// 0x1A60(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NMO_HUM_000_PHY.ABP_CHR_NMO_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMO_HUM_000_PHY_AnimGraphNode_AnimDynamics_122D2A954366D1FF134C3FAF610BF7CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMO_HUM_000_PHY_AnimGraphNode_AnimDynamics_4190E02F48EAE9A8CCC709AE02B3B225();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMO_HUM_000_PHY_AnimGraphNode_AnimDynamics_375C27B74B4736C7F5AC98A04877C686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMO_HUM_000_PHY_AnimGraphNode_AnimDynamics_6149C64F44AE5CC5BF9EBA8EAAF01E23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMO_HUM_000_PHY_AnimGraphNode_AnimDynamics_EDFA48FC4C1F61AED388F0BF52B5C450();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NMO_HUM_000_PHY_AnimGraphNode_AnimDynamics_84E7045E4E03A9CAA00970A71B9E6B7C();
	void ExecuteUbergraph_ABP_CHR_NMO_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
