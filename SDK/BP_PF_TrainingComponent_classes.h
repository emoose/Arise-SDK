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

// BlueprintGeneratedClass BP_PF_TrainingComponent.BP_PF_TrainingComponent_C
// 0x0014 (0x010C - 0x00F8)
class UBP_PF_TrainingComponent_C : public UActorComponent
{
public:
	TEnumAsByte<EDE_TrainingResult>                    TrainingResult;                                           // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FName                                       TrainingID;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrainingTime;                                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_TrainingComponent.BP_PF_TrainingComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
