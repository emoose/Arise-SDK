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

// BlueprintGeneratedClass DebMenu_Map_Interface.DebMenu_Map_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UDebMenu_Map_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebMenu_Map_Interface.DebMenu_Map_Interface_C");
		return ptr;
	}


	void SetEditLevelNames(TArray<struct FString> EditLevelNames);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
