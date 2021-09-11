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

// BlueprintGeneratedClass BP_GSC_TitleInterface.BP_GSC_TitleInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GSC_TitleInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_TitleInterface.BP_GSC_TitleInterface_C");
		return ptr;
	}


	void GetGSCTitle_IsTitleMoviePlay(bool* OutIsTitleMoviePlay);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
