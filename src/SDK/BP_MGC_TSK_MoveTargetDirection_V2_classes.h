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

// BlueprintGeneratedClass BP_MGC_TSK_MoveTargetDirection_V2.BP_MGC_TSK_MoveTargetDirection_V2_C
// 0x0050 (0x0090 - 0x0040)
class UBP_MGC_TSK_MoveTargetDirection_V2_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     Direction;                                                // 0x0048(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FName                                       MonsterSocektName;                                        // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HumanSocektName;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBtlSimpleFloatParameter                    Velocity;                                                 // 0x0070(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_MoveTargetDirection_V2.BP_MGC_TSK_MoveTargetDirection_V2_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TSK_MoveTargetDirection_V2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
