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

// BlueprintGeneratedClass PFT_EnSym_TurnTarget.PFT_EnSym_TurnTarget_C
// 0x0010 (0x00F0 - 0x00E0)
class UPFT_EnSym_TurnTarget_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Target;                                                   // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_TurnTarget.PFT_EnSym_TurnTarget_C");
		return ptr;
	}


	void OnExecute();
	void OnTick(float DeltaTime);
	void OnAbort();
	void ExecuteUbergraph_PFT_EnSym_TurnTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
