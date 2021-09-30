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

// BlueprintGeneratedClass BP_SkyDome_YOK_Master.BP_SkyDome_YOK_Master_C
// 0x0014 (0x04E8 - 0x04D4)
class ABP_SkyDome_YOK_Master_C : public ABP_SkyDome_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                     // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArisePostProcessComponent*                  ArisePostProcess;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkyDome_YOK_Master.BP_SkyDome_YOK_Master_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
