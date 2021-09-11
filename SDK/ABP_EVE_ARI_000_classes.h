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

// AnimBlueprintGeneratedClass ABP_EVE_ARI_000.ABP_EVE_ARI_000_C
// 0x00B8 (0x0618 - 0x0560)
class UABP_EVE_ARI_000_C : public UAriseAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AD2BFF9A40BBCB1D9FFAC9B3B7C63819;      // 0x0568(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_10552CD84061E1549B77E78B465079DB;  // 0x05B0(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_EVE_ARI_000.ABP_EVE_ARI_000_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_EVE_ARI_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
