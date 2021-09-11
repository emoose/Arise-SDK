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

// BlueprintGeneratedClass IconRegistrarInterface.IconRegistrarInterface_C
// 0x0000 (0x0028 - 0x0028)
class UIconRegistrarInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IconRegistrarInterface.IconRegistrarInterface_C");
		return ptr;
	}


	void RegisterIcons(const struct FString& LevelName, const struct FString& LocationName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
