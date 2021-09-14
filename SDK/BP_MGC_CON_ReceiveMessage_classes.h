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

// BlueprintGeneratedClass BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C
// 0x0019 (0x0059 - 0x0040)
class UBP_MGC_CON_ReceiveMessage_C : public UBtlMagicCondition_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	TArray<struct FString>                             CheckMessages;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsMessage;                                               // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C");
		return ptr;
	}


	bool Received_Condition();
	struct FString Received_GetConditionName();
	void Received_Deactivated();
	void Received_Activated();
	void Received_ReceiveMessage(const struct FString& Message, class UObject* Data);
	void ExecuteUbergraph_BP_MGC_CON_ReceiveMessage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
