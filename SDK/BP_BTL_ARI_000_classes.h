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

// BlueprintGeneratedClass BP_BTL_ARI_000.BP_BTL_ARI_000_C
// 0x0040 (0x0F90 - 0x0F50)
class ABP_BTL_ARI_000_C : public ABP_BtlUnitBase_C
{
public:
	class UBP_BtlSelfCapsule_C*                        BP_BtlSelfCapsule;                                        // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraFadeComponent*                        CameraFade;                                               // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlTargetCursorComponent*                   BtlTargetCursor;                                          // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlDefaultAttackCollision*                  DefaultAttackCollision_SwordPoint;                        // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlDefaultAttackCollision*                  DefaultAttackCollision_SwordRoot;                         // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_SpineMiddle;                                          // 0x0F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_SpineLow;                                             // 0x0F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageSphereCollision_C*                    DSC_Head;                                                 // 0x0F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_ARI_000.BP_BTL_ARI_000_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
