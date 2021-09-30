
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

// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.GetPlatformType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamePlatform                  PlatformType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_PauseMenuInterface_C::GetPlatformType(EGamePlatform* PlatformType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.GetPlatformType");

	UTO14_BPI_PauseMenuInterface_C_GetPlatformType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformType != nullptr)
		*PlatformType = params.PlatformType;
}


// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.IsFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_PauseMenuInterface_C::IsFinish(int* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.IsFinish");

	UTO14_BPI_PauseMenuInterface_C_IsFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_PauseMenuInterface_C::PadWork(class AMenuPadProcess* PadProcess, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.PadWork");

	UTO14_BPI_PauseMenuInterface_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_PauseMenuInterface_C::Initialize(bool* Dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.Initialize");

	UTO14_BPI_PauseMenuInterface_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dummy != nullptr)
		*Dummy = params.Dummy;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
