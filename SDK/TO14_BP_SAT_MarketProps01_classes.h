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

// BlueprintGeneratedClass TO14_BP_SAT_MarketProps01.TO14_BP_SAT_MarketProps01_C
// 0x0018 (0x0340 - 0x0328)
class ATO14_BP_SAT_MarketProps01_C : public AActor
{
public:
	class UStaticMeshComponent*                        TO14_SM_MP_SlatsA;                                        // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TO14_SM_SAT_MarketProps01;                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_SAT_MarketProps01.TO14_BP_SAT_MarketProps01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
