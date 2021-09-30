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

// BlueprintGeneratedClass PFT_EnSym_MoveToSoundLocation.PFT_EnSym_MoveToSoundLocation_C
// 0x000F (0x00E8 - 0x00D9)
class UPFT_EnSym_MoveToSoundLocation_C : public UPFT_EnSym_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_MoveToSoundLocation.PFT_EnSym_MoveToSoundLocation_C");
		return ptr;
	}


	void Move();
	void OnExecute();
	void OnFinishMove(TEnumAsByte<EPathFollowingResult> Result);
	void ExecuteUbergraph_PFT_EnSym_MoveToSoundLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
