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

// BlueprintGeneratedClass BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C
// 0x0019 (0x0071 - 0x0058)
class UBP_BtlChangeOrderHandlePolicy_C : public UBtlChangeOrderHandlePolicy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0058(0x0008) (Transient, DuplicateTransient)
	class ABtlCharacterBase*                           Front2Back;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABtlCharacterBase*                           Back2Front;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableInput;                                            // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C");
		return ptr;
	}


	class ABtlCharacterBase* GetBack2Front();
	class ABtlCharacterBase* GetFront2Back();
	void SetVisibleChangeFormation(bool bEnable);
	bool IsChangeable();
	void IsImmediateChangeCheck(bool* ImmediateChange);
	void Init();
	void SetVanguardFlags(class ABtlCharacterBase* Target, bool Enable);
	void OnEscapeSuccess();
	void DoChangeOrder();
	void ExecuteUbergraph_BP_BtlChangeOrderHandlePolicy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
