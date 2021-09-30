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

// BlueprintGeneratedClass BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C
// 0x0008 (0x0060 - 0x0058)
class UBP_BtlOpenHelpWindowTask_C : public UBtlAsyncLabelTaskProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0058(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C");
		return ptr;
	}


	bool Received_IsComplate();
	void Received_End();
	void Received_Begin();
	void Received_Tick(float FrameDeltaTime);
	void ExecuteUbergraph_BP_BtlOpenHelpWindowTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
