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

// AnimBlueprintGeneratedClass ABP_EVE_GIN_000.ABP_EVE_GIN_000_C
// 0x00B8 (0x0618 - 0x0560)
class UABP_EVE_GIN_000_C : public UAriseAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54B3C0934F247D3B0B00D7897B2DAB5D;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_62F989C744F9F660CC9CAD9A2364FA38;  // 0x05B0(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_EVE_GIN_000.ABP_EVE_GIN_000_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_EVE_GIN_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
