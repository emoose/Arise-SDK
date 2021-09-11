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

// BlueprintGeneratedClass BP_WindControl.BP_WindControl_C
// 0x0050 (0x0378 - 0x0328)
class ABP_WindControl_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Wind_Strength_Scale;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wind_Speed_Scale;                                         // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AWindDirectionalSource*                      Wind_Actor;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Strength;                                                 // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Min_Gust_Amount;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max_Gust_Amount;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Point_Wind;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class UCurveFloat*                                 WindStrength_Curve;                                       // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WindSpeed_Curve;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WindControl.BP_WindControl_C");
		return ptr;
	}


	void GetWindDirectional(class UWindDirectionalSourceComponent** WindDirectional);
	void GetWindStrengthScale(float* StrengthScale);
	void UserConstructionScript();
	void SetWindStrengthScale(float StrengthScale);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WindControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
