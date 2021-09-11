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

// BlueprintGeneratedClass BP_GSC_Movie_Interface.BP_GSC_Movie_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GSC_Movie_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Movie_Interface.BP_GSC_Movie_Interface_C");
		return ptr;
	}


	void SetMovieName(const struct FString& movieName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
