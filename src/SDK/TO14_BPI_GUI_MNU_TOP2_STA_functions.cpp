
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

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::Activate(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Activate");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_Activate_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.BindOnRequestMovePFFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::BindOnRequestMovePFFlag(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.BindOnRequestMovePFFlag");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_BindOnRequestMovePFFlag_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.RequestMovePFFlag
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::RequestMovePFFlag(int PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.RequestMovePFFlag");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_RequestMovePFFlag_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Refresh");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.HealPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EArisePartyID, int>       HealHP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::HealPreview(TMap<EArisePartyID, int> HealHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.HealPreview");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_HealPreview_Params params;
	params.HealHP = HealHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.IsSetuped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bSetuped                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::IsSetuped(bool* bSetuped)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.IsSetuped");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_IsSetuped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSetuped != nullptr)
		*bSetuped = params.bSetuped;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.MovePFFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChanged                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CharacterID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::MovePFFlag(int Move, bool* bChanged, int* CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.MovePFFlag");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_MovePFFlag_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChanged != nullptr)
		*bChanged = params.bChanged;
	if (CharacterID != nullptr)
		*CharacterID = params.CharacterID;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EArisePartyID, int>       HealHPMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::UpdateHP(TMap<EArisePartyID, int> HealHPMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.UpdateHP");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_UpdateHP_Params params;
	params.HealHPMap = HealHPMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.PlayAnimClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::PlayAnimClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.PlayAnimClose");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_PlayAnimClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.PlayAnimOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::PlayAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.PlayAnimOpen");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_PlayAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.SetPartyTopFlag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::SetPartyTopFlag(int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.SetPartyTopFlag");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_SetPartyTopFlag_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::Setup(int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Setup");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_Setup_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::OnSetup(int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnSetup");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_OnSetup_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnViewClose");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_STA
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_STA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_STA");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_STA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnRequestMovePFFlag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP2_STA_C::OnRequestMovePFFlag__DelegateSignature(int Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnRequestMovePFFlag__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP2_STA_C_OnRequestMovePFFlag__DelegateSignature_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
