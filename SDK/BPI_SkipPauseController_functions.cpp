
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

// Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_DisplayEndSkipGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkipPauseController_C::IF_DisplayEndSkipGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_DisplayEndSkipGuide");

	UBPI_SkipPauseController_C_IF_DisplayEndSkipGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_PauseManagement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPause                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OffPause                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Skipped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_SkipPauseController_C::IF_PauseManagement(bool* OnPause, bool* OffPause, bool* Skipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_PauseManagement");

	UBPI_SkipPauseController_C_IF_PauseManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnPause != nullptr)
		*OnPause = params.OnPause;
	if (OffPause != nullptr)
		*OffPause = params.OffPause;
	if (Skipped != nullptr)
		*Skipped = params.Skipped;
}


// Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_EventSkipMangement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DoEventSkip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_SkipPauseController_C::IF_EventSkipMangement(float Tick, bool* DoEventSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_EventSkipMangement");

	UBPI_SkipPauseController_C_IF_EventSkipMangement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoEventSkip != nullptr)
		*DoEventSkip = params.DoEventSkip;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
