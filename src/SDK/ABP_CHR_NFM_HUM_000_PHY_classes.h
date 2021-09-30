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

// AnimBlueprintGeneratedClass ABP_CHR_NFM_HUM_000_PHY.ABP_CHR_NFM_HUM_000_PHY_C
// 0x3090 (0x35F0 - 0x0560)
class UABP_CHR_NFM_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_400C112B456CCD18D923D48007DD7AE4;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_1D7DDFC24A5A32A6B616B898DF24CC19;  // 0x05B0(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8F2F4EE54EF7764C42B9599645233E1F;// 0x0618(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_76CA4F2D47A724E3A823AF9E8ECC32E5;// 0x0660(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_950D809E43BB79DFEFF819B865E06829;// 0x06B0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5DDD74B24E35506C362C4EA651034283;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_74F66876449A36BDB1637C82A3081006;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2318EC28417115C49C54DF94294B7C8D;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_90B6D9B041867CD690E02C956F84DDE7;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7435F9E04E0AB5313A10A3BF9C0E470B;// 0x1A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AC86BF7C4FC0C7862194D7B9E73461B3;// 0x1E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5B508939424F6D8B440D06969FAC7315;// 0x2240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_07F5C4CD4918A0B3D98A05A952E501A6;// 0x2630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_893DE2C244D84240E50C99BBCF5C4609;// 0x2A20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_66751F2F41A9118431A39B97C288CCAA;// 0x2E10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_000E108E43B21571257A968B88C60CE4;// 0x3200(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NFM_HUM_000_PHY.ABP_CHR_NFM_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_AC86BF7C4FC0C7862194D7B9E73461B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_000E108E43B21571257A968B88C60CE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_66751F2F41A9118431A39B97C288CCAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_7435F9E04E0AB5313A10A3BF9C0E470B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_90B6D9B041867CD690E02C956F84DDE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_893DE2C244D84240E50C99BBCF5C4609();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_2318EC28417115C49C54DF94294B7C8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_74F66876449A36BDB1637C82A3081006();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_07F5C4CD4918A0B3D98A05A952E501A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_5DDD74B24E35506C362C4EA651034283();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_950D809E43BB79DFEFF819B865E06829();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY_AnimGraphNode_AnimDynamics_5B508939424F6D8B440D06969FAC7315();
	void ExecuteUbergraph_ABP_CHR_NFM_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
