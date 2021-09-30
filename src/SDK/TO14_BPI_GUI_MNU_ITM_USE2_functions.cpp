
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

// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetForceSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::SetForceSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetForceSelect");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_SetForceSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.IsBarAnimationPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::IsBarAnimationPlaying(bool* Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.IsBarAnimationPlaying");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_IsBarAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play != nullptr)
		*Play = params.Play;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetBattleArts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::SetBattleArts(const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetBattleArts");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_SetBattleArts_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::UpdateText(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.UpdateText");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_UpdateText_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetUseArts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  UseCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::SetUseArts(EArisePartyID UseCharacter, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetUseArts");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_SetUseArts_Params params;
	params.UseCharacter = UseCharacter;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.AllSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::AllSelect(bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.AllSelect");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_AllSelect_Params params;
	params.Select = Select;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.PlayHPAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::PlayHPAnimation(int PlayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.PlayHPAnimation");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_PlayHPAnimation_Params params;
	params.PlayIndex = PlayIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.repeat
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::repeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.repeat");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_repeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetUseItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::SetUseItem(int ItemType, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetUseItem");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_SetUseItem_Params params;
	params.ItemType = ItemType;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.PadWork");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetCharacterList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    CharacterList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BattleMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::SetCharacterList(bool BattleMode, TArray<int>* CharacterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.SetCharacterList");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_SetCharacterList_Params params;
	params.BattleMode = BattleMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterList != nullptr)
		*CharacterList = params.CharacterList;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.CB_MouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::CB_MouseMove(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.CB_MouseMove");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_CB_MouseMove_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::CB_MouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_CB_MouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.DataConstruct");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE2.TO14_BPI_GUI_MNU_ITM_USE2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2");

	UTO14_BPI_GUI_MNU_ITM_USE2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_USE2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
