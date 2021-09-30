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

// BlueprintGeneratedClass BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C
// 0x0011 (0x0051 - 0x0040)
class UBP_MGC_CON_HeightCheck_C : public UBtlMagicCondition_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              Height;                                                   // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BattleLocationZ;                                          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLowCheck;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C");
		return ptr;
	}


	bool Received_Condition();
	struct FString Received_GetConditionName();
	void Received_Activated();
	void ExecuteUbergraph_BP_MGC_CON_HeightCheck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
