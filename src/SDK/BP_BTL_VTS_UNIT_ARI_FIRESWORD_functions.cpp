
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

// Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.OnChargeRankChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C::OnChargeRankChanged(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.OnChargeRankChanged");

	UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C_OnChargeRankChanged_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.Received_EndPlay
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C::Received_EndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.Received_EndPlay");

	UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C_Received_EndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.Received_Begin");

	UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.Received_OnReceiveMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 UserMessage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 UserData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C::Received_OnReceiveMessage(const struct FString& UserMessage, class UObject* UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.Received_OnReceiveMessage");

	UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C_Received_OnReceiveMessage_Params params;
	params.UserMessage = UserMessage;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.ExecuteUbergraph_BP_BTL_VTS_UNIT_ARI_FIRESWORD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C::ExecuteUbergraph_BP_BTL_VTS_UNIT_ARI_FIRESWORD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_UNIT_ARI_FIRESWORD.BP_BTL_VTS_UNIT_ARI_FIRESWORD_C.ExecuteUbergraph_BP_BTL_VTS_UNIT_ARI_FIRESWORD");

	UBP_BTL_VTS_UNIT_ARI_FIRESWORD_C_ExecuteUbergraph_BP_BTL_VTS_UNIT_ARI_FIRESWORD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
