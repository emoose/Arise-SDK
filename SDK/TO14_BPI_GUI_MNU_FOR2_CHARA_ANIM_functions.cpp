
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

// Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.Tick");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.OnMouseDeselect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C::OnMouseDeselect__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.OnMouseDeselect__DelegateSignature");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C_OnMouseDeselect__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.OnMouseSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C::OnMouseSelect__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.OnMouseSelect__DelegateSignature");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C_OnMouseSelect__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.OnAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C::OnAnimationFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM.TO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C.OnAnimationFinish__DelegateSignature");

	UTO14_BPI_GUI_MNU_FOR2_CHARA_ANIM_C_OnAnimationFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
