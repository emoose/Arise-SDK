
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

// Function BPI_EncountSymbol.BPI_EncountSymbol_C.GetSphereRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_EncountSymbol_C::GetSphereRadius(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountSymbol.BPI_EncountSymbol_C.GetSphereRadius");

	UBPI_EncountSymbol_C_GetSphereRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPI_EncountSymbol.BPI_EncountSymbol_C.GetRadar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_EncountSymbol_C::GetRadar(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountSymbol.BPI_EncountSymbol_C.GetRadar");

	UBPI_EncountSymbol_C_GetRadar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
