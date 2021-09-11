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

// AnimBlueprintGeneratedClass ABP_PF_SearchOwl.ABP_PF_SearchOwl_C
// 0x02E0 (0x0840 - 0x0560)
class UABP_PF_SearchOwl_C : public UAriseAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5C3EB9FA4ECBD1DC6BDCEBBB56F7CC0B;      // 0x0568(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_14AA5E1E4F9030166AE717BBE1A23675;// 0x05B0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PF_SearchOwl.ABP_PF_SearchOwl_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_PF_SearchOwl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
