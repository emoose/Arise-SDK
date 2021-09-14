
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

// Function QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQID_SQ_0010_SIZAI_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C.Main");

	UQID_SQ_0010_SIZAI_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C.Quest Post
// (BlueprintCallable, BlueprintEvent)

void UQID_SQ_0010_SIZAI_C::Quest_Post()
{
	static auto fn = UObject::FindObject<UFunction>("Function QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C.Quest Post");

	UQID_SQ_0010_SIZAI_C_Quest_Post_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C.ExecuteUbergraph_QID_SQ_0010_SIZAI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQID_SQ_0010_SIZAI_C::ExecuteUbergraph_QID_SQ_0010_SIZAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QID_SQ_0010_SIZAI.QID_SQ_0010_SIZAI_C.ExecuteUbergraph_QID_SQ_0010_SIZAI");

	UQID_SQ_0010_SIZAI_C_ExecuteUbergraph_QID_SQ_0010_SIZAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
