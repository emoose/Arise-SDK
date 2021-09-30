
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

// Function TO14_BPI_ICN_SP.TO14_BPI_ICN_SP_C.InitAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_ICN_SP_C::InitAnimation(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_ICN_SP.TO14_BPI_ICN_SP_C.InitAnimation");

	UTO14_BPI_ICN_SP_C_InitAnimation_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_ICN_SP.TO14_BPI_ICN_SP_C.UpdateAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimeScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_ICN_SP_C::UpdateAnimation(float AnimeScale, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_ICN_SP.TO14_BPI_ICN_SP_C.UpdateAnimation");

	UTO14_BPI_ICN_SP_C_UpdateAnimation_Params params;
	params.AnimeScale = AnimeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
