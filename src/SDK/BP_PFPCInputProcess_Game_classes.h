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

// BlueprintGeneratedClass BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C
// 0x0008 (0x0350 - 0x0348)
class ABP_PFPCInputProcess_Game_C : public ABP_PFPCInputProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C");
		return ptr;
	}


	void IsDebugInputEnable(bool* bOut);
	void IsExecuteProcess(bool* Is);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteGamePause();
	void ExecuteSwitchPartyTop(bool CW);
	void ExecuteUbergraph_BP_PFPCInputProcess_Game(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
