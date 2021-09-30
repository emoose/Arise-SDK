
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

// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.SetAbnormalIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::SetAbnormalIcon(int StartIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.SetAbnormalIcon");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_SetAbnormalIcon_Params params;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.CheckFlameArts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::CheckFlameArts(bool* ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.CheckFlameArts");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_CheckFlameArts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ok != nullptr)
		*ok = params.ok;
}


// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.MakeArtsText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         BaseName                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDictionaryText         Ruby                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FModifiedText           ArtsText                       (Parm, OutParm)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::MakeArtsText(struct FDictionaryText* BaseName, struct FDictionaryText* Ruby, struct FModifiedText* ArtsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.MakeArtsText");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_MakeArtsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseName != nullptr)
		*BaseName = params.BaseName;
	if (Ruby != nullptr)
		*Ruby = params.Ruby;
	if (ArtsText != nullptr)
		*ArtsText = params.ArtsText;
}


// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.SetArtsLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::SetArtsLabel(const struct FName& Label, int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.SetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_SetArtsLabel_Params params;
	params.Label = Label;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.Initialize");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_DET_000
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_DET_000_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_DET_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_DET_000.TO14_BPI_GUI_MNU_MAS_DET_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_DET_000");

	UTO14_BPI_GUI_MNU_MAS_DET_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_DET_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
