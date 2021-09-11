
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

// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.RefreshEvent
// (Public, BlueprintCallable, BlueprintEvent)

void USymbolEnemyIconBase_C::RefreshEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.RefreshEvent");

	USymbolEnemyIconBase_C_RefreshEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.DisappearState
// (Public, BlueprintCallable, BlueprintEvent)

void USymbolEnemyIconBase_C::DisappearState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.DisappearState");

	USymbolEnemyIconBase_C_DisappearState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetIsShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USymbolEnemyIconBase_C::SetIsShow(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetIsShow");

	USymbolEnemyIconBase_C_SetIsShow_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void USymbolEnemyIconBase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.Initialize");

	USymbolEnemyIconBase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetMistColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           InIsBig                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USymbolEnemyIconBase_C::SetMistColor(const struct FLinearColor& InColor, bool InIsBig)
{
	static auto fn = UObject::FindObject<UFunction>("Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetMistColor");

	USymbolEnemyIconBase_C_SetMistColor_Params params;
	params.InColor = InColor;
	params.InIsBig = InIsBig;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOutLeft                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutTop                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutRight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutBottom                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USymbolEnemyIconBase_C::SetOut(bool IsOutLeft, bool IsOutTop, bool IsOutRight, bool IsOutBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function SymbolEnemyIconBase.SymbolEnemyIconBase_C.SetOut");

	USymbolEnemyIconBase_C_SetOut_Params params;
	params.IsOutLeft = IsOutLeft;
	params.IsOutTop = IsOutTop;
	params.IsOutRight = IsOutRight;
	params.IsOutBottom = IsOutBottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
