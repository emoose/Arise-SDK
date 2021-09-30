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

// BlueprintGeneratedClass TO14_BP_CMN_Light01.TO14_BP_CMN_Light01_C
// 0x0008 (0x03C0 - 0x03B8)
class ATO14_BP_CMN_Light01_C : public ATO14_BP_WT_Base_C
{
public:
	class UStaticMeshComponent*                        TO14_SM_CMN_LightStand03;                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_CMN_Light01.TO14_BP_CMN_Light01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
