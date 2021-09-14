
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

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.Received_Begin");

	UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.FadeOut_Complete
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C::FadeOut_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.FadeOut_Complete");

	UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_FadeOut_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnEndArts
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsHandle          ArtsHandle                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C::OnEndArts(const struct FBtlArtsHandle& ArtsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnEndArts");

	UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_OnEndArts_Params params;
	params.ArtsHandle = ArtsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.Received_EndPlay
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C::Received_EndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.Received_EndPlay");

	UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_Received_EndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnArtsRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlArtsQuery*           ArtsQuery                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C::OnArtsRequest(class UBtlArtsQuery* ArtsQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnArtsRequest");

	UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_OnArtsRequest_Params params;
	params.ArtsQuery = ArtsQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnNotAccept
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlActionQuery*         ActionQuery                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C::OnNotAccept(class UBtlActionQuery* ActionQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnNotAccept");

	UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_OnNotAccept_Params params;
	params.ActionQuery = ActionQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.ExecuteUbergraph_BP_BTL_VTS_SYS_FLASH_RAID_FADE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C::ExecuteUbergraph_BP_BTL_VTS_SYS_FLASH_RAID_FADE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.ExecuteUbergraph_BP_BTL_VTS_SYS_FLASH_RAID_FADE");

	UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_ExecuteUbergraph_BP_BTL_VTS_SYS_FLASH_RAID_FADE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
