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

// BlueprintGeneratedClass BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn.BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C
// 0x0008 (0x0098 - 0x0090)
class UBP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C : public UBtlVisualRootTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn.BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C");
		return ptr;
	}


	void Received_EndPlay();
	void «0¹0¿0à0¤0Ù0ó0È0_2(EBattleActionState NowState, EBattleActionState PreState);
	void «0¹0¿0à0¤0Ù0ó0È0_1(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue);
	void Received_Begin();
	void ExecuteUbergraph_BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
