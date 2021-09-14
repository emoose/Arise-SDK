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

// BlueprintGeneratedClass BP_MGC_TSK_RotationRoll.BP_MGC_TSK_RotationRoll_C
// 0x0028 (0x0068 - 0x0040)
class UBP_MGC_TSK_RotationRoll_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	struct FBtlSimpleFloatParameter                    Rotation;                                                 // 0x0048(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_RotationRoll.BP_MGC_TSK_RotationRoll_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void ExecuteUbergraph_BP_MGC_TSK_RotationRoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
