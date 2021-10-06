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

// AnimBlueprintGeneratedClass ABP_CHR_NNA_HUM_ALL_BOOK_PHY.ABP_CHR_NNA_HUM_ALL_BOOK_PHY_C
// 0x0D20 (0x1280 - 0x0560)
class UABP_CHR_NNA_HUM_ALL_BOOK_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DA43A5A541B00F8A52F551A97601128E;      // 0x0568(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B5FC49E9458A6E860B49499FBC29E307;// 0x05B0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4424B6A34FC51AF5958828ABBC22E7E9;// 0x0600(0x03F0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_4C30D30B41CAC821EF1274AA7FEF1F7F;  // 0x09F0(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_339EE74644BAF34185A19C9A281361AD;// 0x0A58(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_07C51D28454C1AC207B25B8A9B0AFFC8;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1D27DE1C439D581E36E41BBA657BED09;// 0x0E90(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NNA_HUM_ALL_BOOK_PHY.ABP_CHR_NNA_HUM_ALL_BOOK_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NNA_HUM_ALL_BOOK_PHY_AnimGraphNode_AnimDynamics_07C51D28454C1AC207B25B8A9B0AFFC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NNA_HUM_ALL_BOOK_PHY_AnimGraphNode_AnimDynamics_4424B6A34FC51AF5958828ABBC22E7E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NNA_HUM_ALL_BOOK_PHY_AnimGraphNode_AnimDynamics_1D27DE1C439D581E36E41BBA657BED09();
	void ExecuteUbergraph_ABP_CHR_NNA_HUM_ALL_BOOK_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
