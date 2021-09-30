
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

// Function BPI_EncountMapObj.BPI_EncountMapObj_C.MakeEncountMapObjParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)

void UBPI_EncountMapObj_C::MakeEncountMapObjParameter(bool* Success, struct FBtlEncountGroupParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EncountMapObj.BPI_EncountMapObj_C.MakeEncountMapObjParameter");

	UBPI_EncountMapObj_C_MakeEncountMapObjParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Param != nullptr)
		*Param = params.Param;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
