
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

// Function BP_PF_InteractEventScript_Perch.BP_PF_InteractEventScript_Perch_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PF_InteractEventScript_Perch_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_Perch.BP_PF_InteractEventScript_Perch_C.Main");

	UBP_PF_InteractEventScript_Perch_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_Perch.BP_PF_InteractEventScript_Perch_C.ExecuteUbergraph_BP_PF_InteractEventScript_Perch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_Perch_C::ExecuteUbergraph_BP_PF_InteractEventScript_Perch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_Perch.BP_PF_InteractEventScript_Perch_C.ExecuteUbergraph_BP_PF_InteractEventScript_Perch");

	UBP_PF_InteractEventScript_Perch_C_ExecuteUbergraph_BP_PF_InteractEventScript_Perch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
