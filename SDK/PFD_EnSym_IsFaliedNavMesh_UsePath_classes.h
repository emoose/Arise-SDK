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

// BlueprintGeneratedClass PFD_EnSym_IsFaliedNavMesh_UsePath.PFD_EnSym_IsFaliedNavMesh_UsePath_C
// 0x0000 (0x00A0 - 0x00A0)
class UPFD_EnSym_IsFaliedNavMesh_UsePath_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFD_EnSym_IsFaliedNavMesh_UsePath.PFD_EnSym_IsFaliedNavMesh_UsePath_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
