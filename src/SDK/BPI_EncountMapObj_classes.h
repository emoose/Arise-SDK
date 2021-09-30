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

// BlueprintGeneratedClass BPI_EncountMapObj.BPI_EncountMapObj_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_EncountMapObj_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_EncountMapObj.BPI_EncountMapObj_C");
		return ptr;
	}


	void MakeEncountMapObjParameter(bool* Success, struct FBtlEncountGroupParam* Param);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
