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

// BlueprintGeneratedClass BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C
// 0x000C (0x004C - 0x0040)
class UBP_MGC_TSK_SceneDarknessEnd_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              Interval_InDarkness;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TSK_SceneDarknessEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
