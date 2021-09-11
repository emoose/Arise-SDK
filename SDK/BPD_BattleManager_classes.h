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

// BlueprintGeneratedClass BPD_BattleManager.BPD_BattleManager_C
// 0x0008 (0x0B48 - 0x0B40)
class ABPD_BattleManager_C : public ABP_BattleManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B40(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPD_BattleManager.BPD_BattleManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnComplete_14AF256D4E9CA85F82CCC2BF15003C1D();
	void ReceiveInitialize();
	void DebugOnBeginBattle();
	void ReceiveBeginPlay();
	void ReceiveFinalize();
	void ExecuteUbergraph_BPD_BattleManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
