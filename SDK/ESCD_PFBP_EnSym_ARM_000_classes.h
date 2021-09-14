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

// BlueprintGeneratedClass ESCD_PFBP_EnSym_ARM_000.PFBP_EnSym_ARM_000_C
// 0x001C (0x0C28 - 0x0C0C)
class APFBP_EnSym_ARM_000_C : public ABP_EncountSymbolBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C0C(0x0004) MISSED OFFSET
	class UPFC_EnSymSphereCollision_C*                 PFC_EnSymSphereCollision2;                                // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPFC_EnSymSphereCollision_C*                 PFC_EnSymSphereCollision1;                                // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPFC_EnSymSphereCollision_C*                 PFC_EnSymSphereCollision;                                 // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ESCD_PFBP_EnSym_ARM_000.PFBP_EnSym_ARM_000_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
