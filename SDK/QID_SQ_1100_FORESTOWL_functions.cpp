
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

// Function QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQID_SQ_1100_FORESTOWL_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.Main");

	UQID_SQ_1100_FORESTOWL_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.ExecuteUbergraph_QID_SQ_1100_FORESTOWL
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQID_SQ_1100_FORESTOWL_C::ExecuteUbergraph_QID_SQ_1100_FORESTOWL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QID_SQ_1100_FORESTOWL.QID_SQ_1100_FORESTOWL_C.ExecuteUbergraph_QID_SQ_1100_FORESTOWL");

	UQID_SQ_1100_FORESTOWL_C_ExecuteUbergraph_QID_SQ_1100_FORESTOWL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
