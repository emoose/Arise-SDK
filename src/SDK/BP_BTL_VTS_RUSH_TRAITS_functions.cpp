
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

// Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_RUSH_TRAITS_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.Received_Begin");

	UBP_BTL_VTS_RUSH_TRAITS_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.OnEndArts
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsHandle          ArtsHandle                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_BTL_VTS_RUSH_TRAITS_C::OnEndArts(const struct FBtlArtsHandle& ArtsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.OnEndArts");

	UBP_BTL_VTS_RUSH_TRAITS_C_OnEndArts_Params params;
	params.ArtsHandle = ArtsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.ExecuteUbergraph_BP_BTL_VTS_RUSH_TRAITS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_RUSH_TRAITS_C::ExecuteUbergraph_BP_BTL_VTS_RUSH_TRAITS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.ExecuteUbergraph_BP_BTL_VTS_RUSH_TRAITS");

	UBP_BTL_VTS_RUSH_TRAITS_C_ExecuteUbergraph_BP_BTL_VTS_RUSH_TRAITS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
