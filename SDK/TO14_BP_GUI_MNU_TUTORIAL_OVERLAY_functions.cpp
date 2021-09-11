
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

// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.IsClosed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C::IsClosed(bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.IsClosed");

	UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_IsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.Tick");

	UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.OpenFirst
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TutorialLabel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C::OpenFirst(const struct FString& TutorialLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.OpenFirst");

	UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_OpenFirst_Params params;
	params.TutorialLabel = TutorialLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.OpenMulti
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         TutorialLabelList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C::OpenMulti(TArray<struct FString>* TutorialLabelList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.OpenMulti");

	UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_OpenMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TutorialLabelList != nullptr)
		*TutorialLabelList = params.TutorialLabelList;
}


// Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.ExecuteUbergraph_TO14_BP_GUI_MNU_TUTORIAL_OVERLAY
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C::ExecuteUbergraph_TO14_BP_GUI_MNU_TUTORIAL_OVERLAY(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C.ExecuteUbergraph_TO14_BP_GUI_MNU_TUTORIAL_OVERLAY");

	UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C_ExecuteUbergraph_TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
