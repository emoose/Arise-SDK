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

// BlueprintGeneratedClass PFT_EnSym_SetHomeLocation.PFT_EnSym_SetHomeLocation_C
// 0x0014 (0x00F4 - 0x00E0)
class UPFT_EnSym_SetHomeLocation_C : public UPFT_EnSym_Base2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     HomeLocation;                                             // 0x00E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_SetHomeLocation.PFT_EnSym_SetHomeLocation_C");
		return ptr;
	}


	void OnExecute();
	void ExecuteUbergraph_PFT_EnSym_SetHomeLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
