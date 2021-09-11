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

// BlueprintGeneratedClass CompassIconInterface.CompassIconInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCompassIconInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompassIconInterface.CompassIconInterface_C");
		return ptr;
	}


	void SetAlpha(float A);
	void SetDistance(float Distance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
