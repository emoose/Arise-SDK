#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ImageFileUtility.ImageFileUtilityBPLibrary.CreateTexturePngFileFromBinary
struct UImageFileUtilityBPLibrary_CreateTexturePngFileFromBinary_Params
{
	TArray<unsigned char>                              FileBinary;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  OutTexture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ImageFileUtility.ImageFileUtilityBPLibrary.CreateTexturePngFile
struct UImageFileUtilityBPLibrary_CreateTexturePngFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	class UTexture2D*                                  OutTexture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
