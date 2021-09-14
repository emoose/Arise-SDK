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

// BlueprintGeneratedClass TO14_BP_FX_MAP_SGD_WaterFall_sw_02.TO14_BP_FX_MAP_SGD_WaterFall_sw_02_C
// 0x0030 (0x0358 - 0x0328)
class ATO14_BP_FX_MAP_SGD_WaterFall_sw_02_C : public AActor
{
public:
	class UParticleSystemComponent*                    TO14_PS_FX_MAP_WaterFall_sw_10_3;                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TO14_PS_FX_MAP_WaterFall_sw_11;                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TO14_SM_FX_Plane256_tk_01;                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TO14_SM_FX_AUGF03_Waterfall_under_tk_02;                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TO14_PS_FX_MAP_WaterFall_Under_sw_01;                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_FX_MAP_SGD_WaterFall_sw_02.TO14_BP_FX_MAP_SGD_WaterFall_sw_02_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
