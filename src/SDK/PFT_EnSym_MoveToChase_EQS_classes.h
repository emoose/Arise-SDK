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

// BlueprintGeneratedClass PFT_EnSym_MoveToChase_EQS.PFT_EnSym_MoveToChase_EQS_C
// 0x0008 (0x0138 - 0x0130)
class UPFT_EnSym_MoveToChase_EQS_C : public UPFT_EnSym_MoveToEQS_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_MoveToChase_EQS.PFT_EnSym_MoveToChase_EQS_C");
		return ptr;
	}


	void OnExecute();
	void ExecuteUbergraph_PFT_EnSym_MoveToChase_EQS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
