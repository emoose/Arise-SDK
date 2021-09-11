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

// BlueprintGeneratedClass BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PFPartyTopCharacterInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PFPartyTopCharacterInterface.BP_PFPartyTopCharacterInterface_C");
		return ptr;
	}


	void IF_ReconstPartyTop(bool bLock);
	void IsBuildCharacter(bool* Out);
	void BuildCharacter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
