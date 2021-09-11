
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

// Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            LocatorInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_NavimapSimpleIcon_C::Initialize(const struct FLocatorInfo& LocatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.Initialize");

	UUMG_NavimapSimpleIcon_C_Initialize_Params params;
	params.LocatorInfo = LocatorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_NavimapSimpleIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.Construct");

	UUMG_NavimapSimpleIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.SetIconIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_NavimapSimpleIcon_C::SetIconIndex(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.SetIconIndex");

	UUMG_NavimapSimpleIcon_C_SetIconIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.ExecuteUbergraph_UMG_NavimapSimpleIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_NavimapSimpleIcon_C::ExecuteUbergraph_UMG_NavimapSimpleIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C.ExecuteUbergraph_UMG_NavimapSimpleIcon");

	UUMG_NavimapSimpleIcon_C_ExecuteUbergraph_UMG_NavimapSimpleIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
