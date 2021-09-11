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

// BlueprintGeneratedClass PFT_EnSym_MoveTo_BackHome_Direct.PFT_EnSym_MoveTo_BackHome_Direct_C
// 0x0008 (0x0108 - 0x0100)
class UPFT_EnSym_MoveTo_BackHome_Direct_C : public UPFT_EnSym_MoveTo_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_MoveTo_BackHome_Direct.PFT_EnSym_MoveTo_BackHome_Direct_C");
		return ptr;
	}


	void OnExecute();
	void ExecuteUbergraph_PFT_EnSym_MoveTo_BackHome_Direct(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
