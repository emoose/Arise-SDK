
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

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.IsCanDecide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           UnuseFocus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::IsCanDecide(bool* UnuseFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.IsCanDecide");

	UUMG_LocamapFocusIcon_C_IsCanDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnuseFocus != nullptr)
		*UnuseFocus = params.UnuseFocus;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetCanDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanDecide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::SetCanDecide(bool bCanDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetCanDecide");

	UUMG_LocamapFocusIcon_C_SetCanDecide_Params params;
	params.bCanDecide = bCanDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetUnuseFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUnuseFocus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::SetUnuseFocus(bool bUnuseFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetUnuseFocus");

	UUMG_LocamapFocusIcon_C_SetUnuseFocus_Params params;
	params.bUnuseFocus = bUnuseFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.IsUnuseFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           UnuseFocus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::IsUnuseFocus(bool* UnuseFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.IsUnuseFocus");

	UUMG_LocamapFocusIcon_C_IsUnuseFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnuseFocus != nullptr)
		*UnuseFocus = params.UnuseFocus;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.GetAdsorbArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_MenuFreeCursorAdsorbArea_C* AdsorbArea                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::GetAdsorbArea(class UBP_MenuFreeCursorAdsorbArea_C** AdsorbArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.GetAdsorbArea");

	UUMG_LocamapFocusIcon_C_GetAdsorbArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdsorbArea != nullptr)
		*AdsorbArea = params.AdsorbArea;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.GetClickArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_MenuFreeCursorClickArea_C* ClickArea                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::GetClickArea(class UBP_MenuFreeCursorClickArea_C** ClickArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.GetClickArea");

	UUMG_LocamapFocusIcon_C_GetClickArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClickArea != nullptr)
		*ClickArea = params.ClickArea;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            LocatorInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_LocamapFocusIcon_C::Initialize(const struct FLocatorInfo& LocatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.Initialize");

	UUMG_LocamapFocusIcon_C_Initialize_Params params;
	params.LocatorInfo = LocatorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LocamapFocusIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.Construct");

	UUMG_LocamapFocusIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnDecide
// (BlueprintCallable, BlueprintEvent)

void UUMG_LocamapFocusIcon_C::OnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnDecide");

	UUMG_LocamapFocusIcon_C_OnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnDeselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::OnDeselect(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnDeselect");

	UUMG_LocamapFocusIcon_C_OnDeselect_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetIconIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::SetIconIndex(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetIconIndex");

	UUMG_LocamapFocusIcon_C_SetIconIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::OnSelect(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnSelect");

	UUMG_LocamapFocusIcon_C_OnSelect_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.ExecuteUbergraph_UMG_LocamapFocusIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_C::ExecuteUbergraph_UMG_LocamapFocusIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.ExecuteUbergraph_UMG_LocamapFocusIcon");

	UUMG_LocamapFocusIcon_C_ExecuteUbergraph_UMG_LocamapFocusIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
