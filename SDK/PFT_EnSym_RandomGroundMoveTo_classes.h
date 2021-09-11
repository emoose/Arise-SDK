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

// BlueprintGeneratedClass PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C
// 0x0014 (0x0114 - 0x0100)
class UPFT_EnSym_RandomGroundMoveTo_C : public UPFT_EnSym_MoveTo_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     EndPoint;                                                 // 0x0108(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C");
		return ptr;
	}


	void GetLocation(bool AIMoved, struct FVector* Location);
	void GetFirstEndPoint(struct FVector* Point);
	struct FVector GetActorLocation();
	void OnExecute();
	void ExecuteUbergraph_PFT_EnSym_RandomGroundMoveTo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
