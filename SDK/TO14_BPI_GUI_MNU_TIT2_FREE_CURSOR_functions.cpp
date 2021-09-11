
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

// Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.DeReaction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           EndReaction                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C::DeReaction(class UWidget* Widget, bool* EndReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.DeReaction");

	UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C_DeReaction_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndReaction != nullptr)
		*EndReaction = params.EndReaction;
}


// Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.Reaction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           StartReaction                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C::Reaction(class UWidget* Widget, bool* StartReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.Reaction");

	UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C_Reaction_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartReaction != nullptr)
		*StartReaction = params.StartReaction;
}


// Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.GetEntityWidget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C::GetEntityWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.GetEntityWidget");

	UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C_GetEntityWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
