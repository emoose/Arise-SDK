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

// BlueprintGeneratedClass BPI_EncountSymbol.BPI_EncountSymbol_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_EncountSymbol_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_EncountSymbol.BPI_EncountSymbol_C");
		return ptr;
	}


	void GetSphereRadius(float* Result);
	void GetRadar(bool* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
