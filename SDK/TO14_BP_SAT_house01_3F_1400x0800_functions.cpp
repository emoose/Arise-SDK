
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

// Function TO14_BP_SAT_house01_3F_1400x0800.TO14_BP_SAT_house01_3F_1400x0800_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_SAT_house01_3F_1400x0800_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_SAT_house01_3F_1400x0800.TO14_BP_SAT_house01_3F_1400x0800_C.UserConstructionScript");

	ATO14_BP_SAT_house01_3F_1400x0800_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
