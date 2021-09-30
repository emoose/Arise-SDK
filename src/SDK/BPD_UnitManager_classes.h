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

// BlueprintGeneratedClass BPD_UnitManager.BPD_UnitManager_C
// 0x0008 (0x0418 - 0x0410)
class ABPD_UnitManager_C : public ABP_BtlUnitManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPD_UnitManager.BPD_UnitManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnChangeProfile(const struct FString& ParameterName);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement);
	void ExecuteUbergraph_BPD_UnitManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
