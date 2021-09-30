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

// BlueprintGeneratedClass BP_DebugMapStartScrip.BP_DebugMapStartScrip_C
// 0x0009 (0x0389 - 0x0380)
class ABP_DebugMapStartScrip_C : public ABP_GameStartScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	bool                                               bIsClose;                                                 // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugMapStartScrip.BP_DebugMapStartScrip_C");
		return ptr;
	}


	void GetScriptState(struct FString* CurrentState);
	void GetScriptName(struct FString* MyName);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void 񣌘򠳾񍯐�0�0_1();
	void ExecuteUbergraph_BP_DebugMapStartScrip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
