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

// BlueprintGeneratedClass TO14_BP_YOK_Bld_FloorStair01Set_400x100.TO14_BP_YOK_Bld_FloorStair01Set_400x100_C
// 0x0010 (0x0338 - 0x0328)
class ATO14_BP_YOK_Bld_FloorStair01Set_400x100_C : public AActor
{
public:
	class UStaticMeshComponent*                        TO14_SM_YOK_Bld_FloorStair01Set_400x100;                  // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_YOK_Bld_FloorStair01Set_400x100.TO14_BP_YOK_Bld_FloorStair01Set_400x100_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
