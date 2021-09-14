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

// BlueprintGeneratedClass TO14_BP_SAT_house01_3F_1200x1200.TO14_BP_SAT_house01_3F_1200x1200_C
// 0x0040 (0x0368 - 0x0328)
class ATO14_BP_SAT_house01_3F_1200x1200_C : public AActor
{
public:
	class UStaticMeshComponent*                        TO14_SM_SAT_house01_3F_1200x1200;                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FVector>                             IconColor;                                                // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                BaseColor;                                                // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NewVar_1;                                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_SAT_house01_3F_1200x1200.TO14_BP_SAT_house01_3F_1200x1200_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
