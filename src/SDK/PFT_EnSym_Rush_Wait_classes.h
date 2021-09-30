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

// BlueprintGeneratedClass PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C
// 0x0008 (0x00E8 - 0x00E0)
class UPFT_EnSym_Rush_Wait_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_Rush_Wait.PFT_EnSym_Rush_Wait_C");
		return ptr;
	}


	void SetRootMotion(bool bEnable);
	void OnExecute();
	void ExecuteUbergraph_PFT_EnSym_Rush_Wait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
