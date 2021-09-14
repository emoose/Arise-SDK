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

// BlueprintGeneratedClass BP_BTL_GOL_000.BP_BTL_GOL_000_C
// 0x0090 (0x0FE0 - 0x0F50)
class ABP_BTL_GOL_000_C : public ABP_BtlUnitBase_C
{
public:
	class UDamageSphereCollision_C*                    DSC_Hand_R_3;                                             // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlDamageArrowComponent*                    BtlDamageArrow;                                           // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlTargetCursorComponent*                   BtlTargetCursorCore;                                      // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BtlSelfCapsule_C*                        BP_BtlSelfCapsule;                                        // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraFadeComponent*                        CameraFade3;                                              // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraFadeComponent*                        CameraFade2;                                              // 0x0F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraFadeComponent*                        CameraFade1;                                              // 0x0F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraFadeComponent*                        CameraFade;                                               // 0x0F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlTargetCursorComponent*                   BtlTargetCursor;                                          // 0x0F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Leg_L;                                                // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Leg_R;                                                // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DamageSphereCollisionCore;                                // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Head1_C;                                              // 0x0FB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Hand_R;                                               // 0x0FB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Hand_L;                                               // 0x0FC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Arm_R;                                                // 0x0FC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Arm_L;                                                // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Spine2_C;                                             // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_GOL_000.BP_BTL_GOL_000_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
