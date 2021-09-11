
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

// Function IconLayer_SE.IconLayer_SE_C.CreateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_SE_C::CreateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.CreateIcon");

	UIconLayer_SE_C_CreateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_SE.IconLayer_SE_C.IsSymbolChak
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InSymbol                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsHitRange                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsHitShortRange             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIconLayer_SE_C::IsSymbolChak(class AActor* InSymbol, bool* OutIsHitRange, bool* OutIsHitShortRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.IsSymbolChak");

	UIconLayer_SE_C_IsSymbolChak_Params params;
	params.InSymbol = InSymbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsHitRange != nullptr)
		*OutIsHitRange = params.OutIsHitRange;
	if (OutIsHitShortRange != nullptr)
		*OutIsHitShortRange = params.OutIsHitShortRange;
}


// Function IconLayer_SE.IconLayer_SE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_SE_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.Refresh");

	UIconLayer_SE_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_SE.IconLayer_SE_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_SE_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.Update");

	UIconLayer_SE_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_SE.IconLayer_SE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_SE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.Construct");

	UIconLayer_SE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_SE.IconLayer_SE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_SE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.Tick");

	UIconLayer_SE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_SE.IconLayer_SE_C.OnLoadNewLocation
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_SE_C::OnLoadNewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.OnLoadNewLocation");

	UIconLayer_SE_C_OnLoadNewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_SE.IconLayer_SE_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_SE_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.Destruct");

	UIconLayer_SE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_SE.IconLayer_SE_C.ExecuteUbergraph_IconLayer_SE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_SE_C::ExecuteUbergraph_IconLayer_SE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_SE.IconLayer_SE_C.ExecuteUbergraph_IconLayer_SE");

	UIconLayer_SE_C_ExecuteUbergraph_IconLayer_SE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
