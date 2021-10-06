#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SoftBone.ERestoringWeight
enum class ERestoringWeight : uint8_t
{
	RW_Constant                    = 0,
	RW_Linear                      = 1,
	RW_Quadratic                   = 2,
	RW_Custom                      = 3,
	RW_MAX                         = 4
};


// Enum SoftBone.ESimulationHertz
enum class ESimulationHertz : uint8_t
{
	SH_30Hz                        = 0,
	SH_60Hz                        = 1,
	SH_120Hz                       = 2,
	SH_MAX                         = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SoftBone.BonePair
// 0x0030
struct FBonePair
{
	struct FBoneReference                              RootBone;                                                 // 0x0000(0x0018) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0018(0x0018) (Edit)
};

// ScriptStruct SoftBone.AnimNode_SoftBone
// 0x00F0 (0x0208 - 0x0118)
struct FAnimNode_SoftBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 // 0x0118(0x0018) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0130(0x0018) (Edit)
	TArray<struct FBonePair>                           AdditionalChains;                                         // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GravityScale;                                             // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingRatio;                                             // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTipBoneRotation;                                    // 0x0164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERestoringWeight>                      RestoringWeightType;                                      // 0x0165(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWeightCurve;                                          // 0x0166(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0167(0x0001) MISSED OFFSET
	struct FRuntimeFloatCurve                          WeightCurve;                                              // 0x0168(0x0078) (Edit)
	bool                                               bShowDebugBones;                                          // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBoneLengthConstraint;                                    // 0x01E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimulationHertz>                      SimulationHertz;                                          // 0x01E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGuaranteeSameSimulationResult;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x01E4(0x0024) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
