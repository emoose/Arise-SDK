
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

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.PlayAnimOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::PlayAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.PlayAnimOpen");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_PlayAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetCursorAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::SetCursorAnimation(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetCursorAnimation");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetCursorAnimation_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetCursorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::SetCursorIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetCursorIndex");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetCursorIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.GetSelectValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::GetSelectValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.GetSelectValue");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_GetSelectValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.GetCursorIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ListIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::GetCursorIndex(int* ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.GetCursorIndex");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_GetCursorIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListIndex != nullptr)
		*ListIndex = params.ListIndex;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetItemIDList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    SkillList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ListTop                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::SetItemIDList(int Select, int ListTop, TArray<int>* SkillList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetItemIDList");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetItemIDList_Params params;
	params.Select = Select;
	params.ListTop = ListTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillList != nullptr)
		*SkillList = params.SkillList;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::PadWork(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.PadWork");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_PadWork_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.MoveCursorWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MoveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScrollRequest                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::MoveCursorWork(int MoveIndex, int ScrollRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.MoveCursorWork");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_MoveCursorWork_Params params;
	params.MoveIndex = MoveIndex;
	params.ScrollRequest = ScrollRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetMouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::SetMouseMove(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetMouseMove");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetMouseMove_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetMouseResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::SetMouseResult(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.SetMouseResult");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_SetMouseResult_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.RegistCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::RegistCallback(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.RegistCallback");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_RegistCallback_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Restruct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    SkillList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ListTop                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::Restruct(int Index, int ListTop, TArray<int>* SkillList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Restruct");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Restruct_Params params;
	params.Index = Index;
	params.ListTop = ListTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillList != nullptr)
		*SkillList = params.SkillList;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Initialize");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Construct");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.Tick");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_000.TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_000");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
