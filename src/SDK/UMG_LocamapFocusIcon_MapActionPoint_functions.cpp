
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

// Function UMG_LocamapFocusIcon_MapActionPoint.UMG_LocamapFocusIcon_MapActionPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LocamapFocusIcon_MapActionPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapActionPoint.UMG_LocamapFocusIcon_MapActionPoint_C.Construct");

	UUMG_LocamapFocusIcon_MapActionPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_MapActionPoint.UMG_LocamapFocusIcon_MapActionPoint_C.ExecuteUbergraph_UMG_LocamapFocusIcon_MapActionPoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_MapActionPoint_C::ExecuteUbergraph_UMG_LocamapFocusIcon_MapActionPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_MapActionPoint.UMG_LocamapFocusIcon_MapActionPoint_C.ExecuteUbergraph_UMG_LocamapFocusIcon_MapActionPoint");

	UUMG_LocamapFocusIcon_MapActionPoint_C_ExecuteUbergraph_UMG_LocamapFocusIcon_MapActionPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
