
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

// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.GetDialogMessage
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapAreaData            MapAreaData                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FMapLocationData        MapLocationData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 MsgId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MsgIdWhenNoLocation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FModifiedText           Message                        (Parm, OutParm)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::GetDialogMessage(const struct FMapAreaData& MapAreaData, const struct FString& MsgId, const struct FString& MsgIdWhenNoLocation, struct FMapLocationData* MapLocationData, struct FModifiedText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.GetDialogMessage");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_GetDialogMessage_Params params;
	params.MapAreaData = MapAreaData;
	params.MsgId = MsgId;
	params.MsgIdWhenNoLocation = MsgIdWhenNoLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLocationData != nullptr)
		*MapLocationData = params.MapLocationData;
	if (Message != nullptr)
		*Message = params.Message;
}


// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.SetLocationName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InLocationName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::SetLocationName(const struct FString& InLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.SetLocationName");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_SetLocationName_Params params;
	params.InLocationName = InLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.BindOnFastTravelEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnFastTravel                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::BindOnFastTravelEvent(const struct FScriptDelegate& OnFastTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.BindOnFastTravelEvent");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_BindOnFastTravelEvent_Params params;
	params.OnFastTravel = OnFastTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.GetFastTravelPointInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFastTravelPointInfo    FastTravelPointInfo            (Parm, OutParm)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::GetFastTravelPointInfo(struct FFastTravelPointInfo* FastTravelPointInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.GetFastTravelPointInfo");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_GetFastTravelPointInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FastTravelPointInfo != nullptr)
		*FastTravelPointInfo = params.FastTravelPointInfo;
}


// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.SetFastTravelPointInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFastTravelPointInfo    InFastTravelPointInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::SetFastTravelPointInfo(const struct FFastTravelPointInfo& InFastTravelPointInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.SetFastTravelPointInfo");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_SetFastTravelPointInfo_Params params;
	params.InFastTravelPointInfo = InFastTravelPointInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.OnDecide
// (BlueprintCallable, BlueprintEvent)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::OnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.OnDecide");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_OnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.ExecuteUbergraph_UMG_LocamapFocusIcon_FastTravelPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::ExecuteUbergraph_UMG_LocamapFocusIcon_FastTravelPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.ExecuteUbergraph_UMG_LocamapFocusIcon_FastTravelPoint");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_ExecuteUbergraph_UMG_LocamapFocusIcon_FastTravelPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.OnFastTravelEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_LocamapFocusIcon_FastTravelPoint_C::OnFastTravelEvent__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C.OnFastTravelEvent__DelegateSignature");

	UUMG_LocamapFocusIcon_FastTravelPoint_C_OnFastTravelEvent__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
