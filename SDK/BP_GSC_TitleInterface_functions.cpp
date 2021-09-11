
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

// Function BP_GSC_TitleInterface.BP_GSC_TitleInterface_C.GetGSCTitle_IsTitleMoviePlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsTitleMoviePlay            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_TitleInterface_C::GetGSCTitle_IsTitleMoviePlay(bool* OutIsTitleMoviePlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_TitleInterface.BP_GSC_TitleInterface_C.GetGSCTitle_IsTitleMoviePlay");

	UBP_GSC_TitleInterface_C_GetGSCTitle_IsTitleMoviePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsTitleMoviePlay != nullptr)
		*OutIsTitleMoviePlay = params.OutIsTitleMoviePlay;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
