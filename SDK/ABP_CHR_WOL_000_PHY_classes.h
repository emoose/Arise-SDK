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

// AnimBlueprintGeneratedClass ABP_CHR_WOL_000_PHY.ABP_CHR_WOL_000_PHY_C
// 0x1110 (0x1670 - 0x0560)
class UABP_CHR_WOL_000_PHY_C : public UArisePhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_83BD6C144527E770BDC77DA3457F8D06;      // 0x0568(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4C195C84433F6EB2B39B569CA0837EBC;// 0x05B0(0x03F0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_9D2568334DBC388CF291E381810DD317;  // 0x09A0(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5BF4BE704364CE37AAAA4095DE26C94D;// 0x0A08(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DB1F7DEF4AF542D78116CEBDE92D74A1;// 0x0A50(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A98(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_275B89914D5845908D5312A2360CFE9F;// 0x0AA0(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5DDA5E7B4DAF266492194E9A12BB8899;// 0x0E90(0x03F0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_70F6939645FB8DC682C08196459009CD;// 0x1280(0x03F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CHR_WOL_000_PHY.ABP_CHR_WOL_000_PHY_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_WOL_000_PHY_AnimGraphNode_AnimDynamics_5DDA5E7B4DAF266492194E9A12BB8899();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_WOL_000_PHY_AnimGraphNode_AnimDynamics_70F6939645FB8DC682C08196459009CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_WOL_000_PHY_AnimGraphNode_AnimDynamics_275B89914D5845908D5312A2360CFE9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHR_WOL_000_PHY_AnimGraphNode_AnimDynamics_4C195C84433F6EB2B39B569CA0837EBC();
	void ExecuteUbergraph_ABP_CHR_WOL_000_PHY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
