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

// BlueprintGeneratedClass BP_MGC_TSK_SetDirectLocation.BP_MGC_TSK_SetDirectLocation_C
// 0x0054 (0x0094 - 0x0040)
class UBP_MGC_TSK_SetDirectLocation_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	struct FBtlSimpleVectorParameter                   Location;                                                 // 0x0048(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     BeginLocation;                                            // 0x0070(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x007C(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BeginRotation;                                            // 0x0088(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_SetDirectLocation.BP_MGC_TSK_SetDirectLocation_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TSK_SetDirectLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
