
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

// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.SkillTextVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_WIN_C::SkillTextVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.SkillTextVisibility");

	UTO14_BPI_GUI_MNU_STA_WIN_C_SkillTextVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.InitStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuStatusSceneData    StatusParam                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_STA_WIN_C::InitStatus(int PlayerID, const struct FMenuStatusSceneData& StatusParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.InitStatus");

	UTO14_BPI_GUI_MNU_STA_WIN_C_InitStatus_Params params;
	params.PlayerID = PlayerID;
	params.StatusParam = StatusParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_STA_WIN_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_STA_WIN_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.OnCharaChanged
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_STA_WIN_C::OnCharaChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.OnCharaChanged");

	UTO14_BPI_GUI_MNU_STA_WIN_C_OnCharaChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_STA_WIN
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_STA_WIN_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_STA_WIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_STA_WIN");

	UTO14_BPI_GUI_MNU_STA_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_STA_WIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
