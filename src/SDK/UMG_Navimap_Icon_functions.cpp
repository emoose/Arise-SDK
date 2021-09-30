
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

// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.Init2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            LocatorInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Navimap_Icon_C::Init2(const struct FLocatorInfo& LocatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.Init2");

	UUMG_Navimap_Icon_C_Init2_Params params;
	params.LocatorInfo = LocatorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.SetIconImageData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Navimap_Icon_C::SetIconImageData(EMapIconType RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.SetIconImageData");

	UUMG_Navimap_Icon_C_SetIconImageData_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.SetIconIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Navimap_Icon_C::SetIconIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.SetIconIndex");

	UUMG_Navimap_Icon_C_SetIconIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.GetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UUMG_Navimap_Icon_C::GetLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.GetLocation");

	UUMG_Navimap_Icon_C_GetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Navimap_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.Construct");

	UUMG_Navimap_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.ExecuteUbergraph_UMG_Navimap_Icon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Navimap_Icon_C::ExecuteUbergraph_UMG_Navimap_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_Icon.UMG_Navimap_Icon_C.ExecuteUbergraph_UMG_Navimap_Icon");

	UUMG_Navimap_Icon_C_ExecuteUbergraph_UMG_Navimap_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
