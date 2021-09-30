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

// BlueprintGeneratedClass BP_MGC_TSK_SendUnitScriptMessage.BP_MGC_TSK_SendUnitScriptMessage_C
// 0x0020 (0x0060 - 0x0040)
class UBP_MGC_TSK_SendUnitScriptMessage_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	int                                                UserInteger;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_SendUnitScriptMessage.BP_MGC_TSK_SendUnitScriptMessage_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TSK_SendUnitScriptMessage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
