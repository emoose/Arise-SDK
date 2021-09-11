
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ImageFileUtility.ImageFileUtilityBPLibrary.CreateTexturePngFileFromBinary
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          FileBinary                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              OutTexture                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UImageFileUtilityBPLibrary::STATIC_CreateTexturePngFileFromBinary(TArray<unsigned char> FileBinary, class UTexture2D** OutTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImageFileUtility.ImageFileUtilityBPLibrary.CreateTexturePngFileFromBinary");

	UImageFileUtilityBPLibrary_CreateTexturePngFileFromBinary_Params params;
	params.FileBinary = FileBinary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTexture != nullptr)
		*OutTexture = params.OutTexture;

	return params.ReturnValue;
}


// Function ImageFileUtility.ImageFileUtilityBPLibrary.CreateTexturePngFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// class UTexture2D*              OutTexture                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UImageFileUtilityBPLibrary::STATIC_CreateTexturePngFile(const struct FString& FilePath, class UTexture2D** OutTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImageFileUtility.ImageFileUtilityBPLibrary.CreateTexturePngFile");

	UImageFileUtilityBPLibrary_CreateTexturePngFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTexture != nullptr)
		*OutTexture = params.OutTexture;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
