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

// BlueprintGeneratedClass BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C
// 0x005C (0x009C - 0x0040)
class UBP_MGC_TSK_MoveCircle_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              Radius;                                                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OriginalLocation;                                         // 0x004C(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x005C(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0068(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bNodeTime;                                                // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FVector                                     PrevLocation;                                             // 0x0078(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentLocation;                                          // 0x0084(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RuntimeOffset;                                            // 0x0090(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C");
		return ptr;
	}


	void Received_DebugRender(float FrameDeltaTime);
	struct FString Received_GetTaskName();
	void GetLerpAlpha(float Elapsed, float* Alpha);
	void Received_Begin();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void ExecuteUbergraph_BP_MGC_TSK_MoveCircle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
