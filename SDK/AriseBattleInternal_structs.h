#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseBattleInternal.BtlVisualTask_MaterialConstructParameter
// 0x0028
struct FBtlVisualTask_MaterialConstructParameter
{
	TArray<TEnumAsByte<EAchCharacterBuildComponent>>   BuildTypes;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseAllMaterial;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBuildComponentOnly;                                    // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FScriptDelegate                             CustomRebuildingMaterials;                                // 0x0018(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
