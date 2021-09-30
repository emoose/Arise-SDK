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

// BlueprintGeneratedClass BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C
// 0x0016 (0x0358 - 0x0342)
class ABP_FollowingEffect_SAT1_GrassAndFlowe_C : public ABP_FollowingEffect_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateEffect(const struct FAriseMapEffectFinalSettings& Settings);
	void ExecuteUbergraph_BP_FollowingEffect_SAT1_GrassAndFlowe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
