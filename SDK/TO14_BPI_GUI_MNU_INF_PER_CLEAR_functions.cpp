
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

// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.AddGald
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::AddGald(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.AddGald");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_AddGald_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.OpenGald
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::OpenGald()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.OpenGald");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_OpenGald_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.SetQuestData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              QuestData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::SetQuestData(const struct FQuestData& QuestData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.SetQuestData");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_SetQuestData_Params params;
	params.QuestData = QuestData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.Tick");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.EventAnimationEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::EventAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.EventAnimationEnd");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_EventAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.Construct");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.EventAnimationStarted
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::EventAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.EventAnimationStarted");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_EventAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_CLEAR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_CLEAR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_PER_CLEAR.TO14_BPI_GUI_MNU_INF_PER_CLEAR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_CLEAR");

	UTO14_BPI_GUI_MNU_INF_PER_CLEAR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_PER_CLEAR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
