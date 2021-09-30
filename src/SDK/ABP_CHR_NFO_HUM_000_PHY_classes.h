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

// AnimBlueprintGeneratedClass ABP_CHR_NFO_HUM_000_PHY.ABP_CHR_NFO_HUM_000_PHY_C
// 0x1CE0 (0x2240 - 0x0560)
class UABP_CHR_NFO_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_933F04124D355F11DF84C989D420B637;      // 0x0568(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4DF7048E40B27C8E8AB82BAD959D6529;// 0x05B0(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_AB9005DD43EBCA2DE84D65BDA330C956;  // 0x05F8(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17E152A840D27CDD7C1969AC9B263F46;// 0x0660(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6B391AB34CA240FFF132158B39CDC070;// 0x06B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EA997AEA4621C054F22652960DFE6F85;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_84C7E7204BC7D2B7D627EAB81DE05E30;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7F9E667F40620571753C03808D0EBF76;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9B13C5354CBD9C8D07B8D88C212B17E1;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E05735A144CF2A8BD264769798CC26AC;// 0x1A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_65B1A5E94CC84C466EDDC286ACE705CF;// 0x1E50(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NFO_HUM_000_PHY.ABP_CHR_NFO_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY_AnimGraphNode_AnimDynamics_65B1A5E94CC84C466EDDC286ACE705CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY_AnimGraphNode_AnimDynamics_7F9E667F40620571753C03808D0EBF76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY_AnimGraphNode_AnimDynamics_84C7E7204BC7D2B7D627EAB81DE05E30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY_AnimGraphNode_AnimDynamics_E05735A144CF2A8BD264769798CC26AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY_AnimGraphNode_AnimDynamics_EA997AEA4621C054F22652960DFE6F85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY_AnimGraphNode_AnimDynamics_6B391AB34CA240FFF132158B39CDC070();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY_AnimGraphNode_AnimDynamics_9B13C5354CBD9C8D07B8D88C212B17E1();
	void ExecuteUbergraph_ABP_CHR_NFO_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
