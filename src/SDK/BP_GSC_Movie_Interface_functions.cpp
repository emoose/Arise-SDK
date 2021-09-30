
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

// Function BP_GSC_Movie_Interface.BP_GSC_Movie_Interface_C.SetMovieName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 movieName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Movie_Interface_C::SetMovieName(const struct FString& movieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie_Interface.BP_GSC_Movie_Interface_C.SetMovieName");

	UBP_GSC_Movie_Interface_C_SetMovieName_Params params;
	params.movieName = movieName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
