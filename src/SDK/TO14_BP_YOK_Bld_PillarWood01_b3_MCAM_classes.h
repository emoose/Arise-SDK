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

// BlueprintGeneratedClass TO14_BP_YOK_Bld_PillarWood01_b3_MCAM.TO14_BP_YOK_Bld_PillarWood01_b3_MCAM_C
// 0x0030 (0x0358 - 0x0328)
class ATO14_BP_YOK_Bld_PillarWood01_b3_MCAM_C : public AActor
{
public:
	class UCameraFadeComponent*                        CameraFade2;                                              // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraFadeComponent*                        CameraFade1;                                              // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraFadeComponent*                        CameraFade;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_AlphaMaskComponent_C*                    BP_AlphaMaskComponent;                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TO14_SM_YOK_Bld_PillarWood01_b3;                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_YOK_Bld_PillarWood01_b3_MCAM.TO14_BP_YOK_Bld_PillarWood01_b3_MCAM_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
