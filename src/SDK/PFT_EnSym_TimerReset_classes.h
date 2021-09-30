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

// BlueprintGeneratedClass PFT_EnSym_TimerReset.PFT_EnSym_TimerReset_C
// 0x0010 (0x00F0 - 0x00E0)
class UPFT_EnSym_TimerReset_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	float                                              Timer;                                                    // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_TimerReset.PFT_EnSym_TimerReset_C");
		return ptr;
	}


	void Respawn();
	void OnExecute();
	void OnAbort();
	void OnTick(float DeltaTime);
	void ExecuteUbergraph_PFT_EnSym_TimerReset(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
