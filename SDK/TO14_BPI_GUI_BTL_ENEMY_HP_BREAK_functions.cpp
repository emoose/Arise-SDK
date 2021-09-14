
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

// Function TO14_BPI_GUI_BTL_ENEMY_HP_BREAK.TO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C.SetModifiedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           iModText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C::SetModifiedText(const struct FModifiedText& iModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ENEMY_HP_BREAK.TO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C.SetModifiedText");

	UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C_SetModifiedText_Params params;
	params.iModText = iModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ENEMY_HP_BREAK.TO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C.PlayBreakAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C::PlayBreakAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ENEMY_HP_BREAK.TO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C.PlayBreakAnimation");

	UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C_PlayBreakAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ENEMY_HP_BREAK.TO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ENEMY_HP_BREAK
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_ENEMY_HP_BREAK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ENEMY_HP_BREAK.TO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ENEMY_HP_BREAK");

	UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_ENEMY_HP_BREAK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
