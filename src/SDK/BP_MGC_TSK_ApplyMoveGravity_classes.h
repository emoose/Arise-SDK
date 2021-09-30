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

// BlueprintGeneratedClass BP_MGC_TSK_ApplyMoveGravity.BP_MGC_TSK_ApplyMoveGravity_C
// 0x0010 (0x0050 - 0x0040)
class UBP_MGC_TSK_ApplyMoveGravity_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              Gravity;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_ApplyMoveGravity.BP_MGC_TSK_ApplyMoveGravity_C");
		return ptr;
	}


	void Received_DebugRender(float FrameDeltaTime);
	struct FString Received_GetTaskName();
	void Received_Tick(float FrameDeltaTime, float ElapsedTime);
	void ExecuteUbergraph_BP_MGC_TSK_ApplyMoveGravity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
