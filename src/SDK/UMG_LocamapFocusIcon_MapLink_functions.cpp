
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

// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.BindOnMapLinkEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_LocamapFocusIcon_MapLink_C::BindOnMapLinkEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.BindOnMapLinkEvent");

	UUMG_LocamapFocusIcon_MapLink_C_BindOnMapLinkEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.GetMapLinkInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMapLinkInfo            MapLinkInfo                    (Parm, OutParm)

void UUMG_LocamapFocusIcon_MapLink_C::GetMapLinkInfo(struct FMapLinkInfo* MapLinkInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.GetMapLinkInfo");

	UUMG_LocamapFocusIcon_MapLink_C_GetMapLinkInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLinkInfo != nullptr)
		*MapLinkInfo = params.MapLinkInfo;
}


// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.SetMapLinkInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLinkInfo            InMapLinkInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_LocamapFocusIcon_MapLink_C::SetMapLinkInfo(const struct FMapLinkInfo& InMapLinkInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.SetMapLinkInfo");

	UUMG_LocamapFocusIcon_MapLink_C_SetMapLinkInfo_Params params;
	params.InMapLinkInfo = InMapLinkInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.OnDecide
// (BlueprintCallable, BlueprintEvent)

void UUMG_LocamapFocusIcon_MapLink_C::OnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.OnDecide");

	UUMG_LocamapFocusIcon_MapLink_C_OnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.ExecuteUbergraph_UMG_LocamapFocusIcon_MapLink
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_MapLink_C::ExecuteUbergraph_UMG_LocamapFocusIcon_MapLink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.ExecuteUbergraph_UMG_LocamapFocusIcon_MapLink");

	UUMG_LocamapFocusIcon_MapLink_C_ExecuteUbergraph_UMG_LocamapFocusIcon_MapLink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.OnMapLinkEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_LocamapFocusIcon_MapLink_C::OnMapLinkEvent__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.OnMapLinkEvent__DelegateSignature");

	UUMG_LocamapFocusIcon_MapLink_C_OnMapLinkEvent__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
