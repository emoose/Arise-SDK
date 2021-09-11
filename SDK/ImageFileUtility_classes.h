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

// Class ImageFileUtility.ImageFileUtilityBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UImageFileUtilityBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImageFileUtility.ImageFileUtilityBPLibrary");
		return ptr;
	}


	bool STATIC_CreateTexturePngFileFromBinary(TArray<unsigned char> FileBinary, class UTexture2D** OutTexture);
	bool STATIC_CreateTexturePngFile(const struct FString& FilePath, class UTexture2D** OutTexture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
