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

// BlueprintGeneratedClass PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C
// 0x0014 (0x00F4 - 0x00E0)
class UPFT_EnSym_UpdateGiveup_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Target;                                                   // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ChaseTime;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C");
		return ptr;
	}


	void GetCookParam(float* Out);
	void CheckChaseDistance(bool* Result);
	void CheckChaseTime(bool* Result);
	void OnExecute();
	void OnTick(float DeltaTime);
	void OnAbort();
	void ExecuteUbergraph_PFT_EnSym_UpdateGiveup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
