
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

// Function BP_PF_DelegateManagerInterface.BP_PF_DelegateManagerInterface_C.SetFishingResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InPointName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         InTypes                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_PF_DelegateManagerInterface_C::SetFishingResult(const struct FString& InPointName, TArray<struct FString> InTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManagerInterface.BP_PF_DelegateManagerInterface_C.SetFishingResult");

	UBP_PF_DelegateManagerInterface_C_SetFishingResult_Params params;
	params.InPointName = InPointName;
	params.InTypes = InTypes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
