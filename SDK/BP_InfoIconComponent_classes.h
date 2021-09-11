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

// BlueprintGeneratedClass BP_InfoIconComponent.BP_InfoIconComponent_C
// 0x0020 (0x06F0 - 0x06D0)
class UBP_InfoIconComponent_C : public UWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     BillboardTarget;                                          // 0x06D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	class AActor*                                      BillboardActor;                                           // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfoIconComponent.BP_InfoIconComponent_C");
		return ptr;
	}


	void IsEndFinish(bool* IsFinished);
	void SetBillboardActor(class AActor* TargetActor);
	void SetBillboardLocation(const struct FVector& CameraLocation);
	void End();
	void Stop();
	void Play(bool IsOpen);
	void SetIconType(TEnumAsByte<ETO14_InfoIconType> IconType);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_InfoIconComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
