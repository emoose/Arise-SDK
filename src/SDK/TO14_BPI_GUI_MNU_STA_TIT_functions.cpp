
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

// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.CB_MouseOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_TIT_C::CB_MouseOver(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.CB_MouseOver");

	UTO14_BPI_GUI_MNU_STA_TIT_C_CB_MouseOver_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.OpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_STA_TIT_C::OpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.OpenAnimation");

	UTO14_BPI_GUI_MNU_STA_TIT_C_OpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.GetAliasCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_TIT_C::GetAliasCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.GetAliasCount");

	UTO14_BPI_GUI_MNU_STA_TIT_C_GetAliasCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.PageChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_TIT_C::PageChange(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.PageChange");

	UTO14_BPI_GUI_MNU_STA_TIT_C_PageChange_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_TIT_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.PadWork");

	UTO14_BPI_GUI_MNU_STA_TIT_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.GetSelectAliasID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliasID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_TIT_C::GetSelectAliasID(int* AliasID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.GetSelectAliasID");

	UTO14_BPI_GUI_MNU_STA_TIT_C_GetSelectAliasID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AliasID != nullptr)
		*AliasID = params.AliasID;
}


// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.SetCharacterID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_TIT_C::SetCharacterID(int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.SetCharacterID");

	UTO14_BPI_GUI_MNU_STA_TIT_C_SetCharacterID_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_STA_TIT_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_TIT.TO14_BPI_GUI_MNU_STA_TIT_C.DataConstruct");

	UTO14_BPI_GUI_MNU_STA_TIT_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
