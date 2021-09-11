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

// AnimBlueprintGeneratedClass ABP_CHR_NFC_HUM_000_PHY.ABP_CHR_NFC_HUM_000_PHY_C
// 0x4050 (0x45B0 - 0x0560)
class UABP_CHR_NFC_HUM_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_13AC1D744DA355CA2FA26E98C0A50976;      // 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F6FA07FB4FFFED6EC0BD95B5DE046324;// 0x05B0(0x03F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0133CB9147C63F6E4E940BAA7A83E501;// 0x09A0(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_D58D13774D73035080AC56827792ECD1;  // 0x09E8(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_891723094263327D48E39AAB598BF183;// 0x0A50(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A98(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5106E7004FC903A1FBE9518880EF7325;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_62B0D0834169DF2258A5479B39A61175;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_52AEC4E94453004FE4725F9EF01E19B0;// 0x1280(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0C102E7E4B96AC4F02AFABADBFE06E69;// 0x1670(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15E5DC1145982BBAC804FDAE31F9089C;// 0x1A60(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_99D02078470730432D47D3A46881AFF9;// 0x1E50(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E425A96545A8D02D63CDE198840C9437;// 0x2240(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21D165CA471D7E5210EA62931BCD24DC;// 0x2630(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D32C3BB548F7C55A283BB5B8CF769CA4;// 0x2A20(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C07D544644D2A5DC8B2E838F3D383C16;// 0x2E10(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4EBFBA974ED7668A05785B9B91B660DE;// 0x3200(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4BDCB09A4AD7B91A11133C89CAE8A941;// 0x35F0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BF2A32E04159E4D84918608E311F8A41;// 0x39E0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_02E6244A4A6DC192D02627951082D513;// 0x3DD0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6610ADDB4CCFA129B9B6CA963140EB2C;// 0x41C0(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_NFC_HUM_000_PHY.ABP_CHR_NFC_HUM_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_6610ADDB4CCFA129B9B6CA963140EB2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_21D165CA471D7E5210EA62931BCD24DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_02E6244A4A6DC192D02627951082D513();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_BF2A32E04159E4D84918608E311F8A41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_4BDCB09A4AD7B91A11133C89CAE8A941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_E425A96545A8D02D63CDE198840C9437();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_99D02078470730432D47D3A46881AFF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_15E5DC1145982BBAC804FDAE31F9089C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_4EBFBA974ED7668A05785B9B91B660DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_0C102E7E4B96AC4F02AFABADBFE06E69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_52AEC4E94453004FE4725F9EF01E19B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_62B0D0834169DF2258A5479B39A61175();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_5106E7004FC903A1FBE9518880EF7325();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_C07D544644D2A5DC8B2E838F3D383C16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_F6FA07FB4FFFED6EC0BD95B5DE046324();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY_AnimGraphNode_AnimDynamics_D32C3BB548F7C55A283BB5B8CF769CA4();
	void ExecuteUbergraph_ABP_CHR_NFC_HUM_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
