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

// AnimBlueprintGeneratedClass ABP_ATT_HEAD_CAT_00_PHY.ABP_ATT_HEAD_CAT_00_PHY_C
// 0x0930 (0x0E90 - 0x0560)
class UABP_ATT_HEAD_CAT_00_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FABB333D4CFB1E8DAAAEBA80C4A9011E;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_32399C4E4522F14E2FA0589AED071E3B;  // 0x05B0(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_08A0238244CA8E866267D99DCF925163;// 0x0620(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7AB075434E1E10260221EE93172EF595;// 0x0A10(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72378E394CCED04BF3DC8EBC4C32A0B8;// 0x0A58(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BC6F37A14C16E42EC50EBD986C45E8F9;// 0x0AA0(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ATT_HEAD_CAT_00_PHY.ABP_ATT_HEAD_CAT_00_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ATT_HEAD_CAT_00_PHY_AnimGraphNode_AnimDynamics_08A0238244CA8E866267D99DCF925163();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ATT_HEAD_CAT_00_PHY_AnimGraphNode_AnimDynamics_BC6F37A14C16E42EC50EBD986C45E8F9();
	void ExecuteUbergraph_ABP_ATT_HEAD_CAT_00_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
