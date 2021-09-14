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

// BlueprintGeneratedClass BP_BtlUnitBase.BP_BtlUnitBase_C
// 0x0008 (0x0F50 - 0x0F48)
class ABP_BtlUnitBase_C : public ABP_BtlCharacterBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F48(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlUnitBase.BP_BtlUnitBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeadEvent();
	void ExecuteUbergraph_BP_BtlUnitBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
