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

// BlueprintGeneratedClass BP_MGC_CollisionBase.BP_MGC_CollisionBase_C
// 0x0000 (0x0090 - 0x0090)
class UBP_MGC_CollisionBase_C : public UBtlMagicTask_CollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_CollisionBase.BP_MGC_CollisionBase_C");
		return ptr;
	}


	void ConvApplyAttackParam(const struct FAttackSphereParam& AttackParamBase, struct FAttackSphereParam* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
