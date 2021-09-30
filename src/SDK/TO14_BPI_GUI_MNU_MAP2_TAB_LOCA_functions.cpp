
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

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.IsClosing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClosing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::IsClosing(bool* IsClosing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.IsClosing");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_IsClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosing != nullptr)
		*IsClosing = params.IsClosing;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.BindChangedSelectEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnChangedSelect                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::BindChangedSelectEvent(const struct FScriptDelegate& OnChangedSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.BindChangedSelectEvent");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_BindChangedSelectEvent_Params params;
	params.OnChangedSelect = OnChangedSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Refresh_FontLoc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::Refresh_FontLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Refresh_FontLoc");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Refresh_FontLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMove
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::RunMove(int Move, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMove");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_RunMove_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMoveNext
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::RunMoveNext(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMoveNext");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_RunMoveNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMovePrev
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Suceess                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::RunMovePrev(bool* Suceess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMovePrev");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_RunMovePrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Suceess != nullptr)
		*Suceess = params.Suceess;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CheckMoveNext
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::CheckMoveNext(class AMenuPadProcess* PadProcess, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CheckMoveNext");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_CheckMoveNext_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CheckMovePrev
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::CheckMovePrev(class AMenuPadProcess* PadProcess, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CheckMovePrev");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_CheckMovePrev_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::Exec(class AMenuPadProcess* PadProcess, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Exec");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Exec_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.ExecPad
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::ExecPad(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.ExecPad");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_ExecPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::Refresh(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Refresh");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Refresh_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Close");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Open");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnSelect_Str
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnSelect_Str(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnSelect_Str");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnSelect_Str_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnDeselect_Str
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnDeselect_Str(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnDeselect_Str");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnDeselect_Str_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CustomEvent_Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::CustomEvent_Refresh(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CustomEvent_Refresh");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_CustomEvent_Refresh_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseFinished");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Construct");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_LOCA
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_LOCA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_LOCA");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnChangedSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnChangedSelect__DelegateSignature(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnChangedSelect__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnChangedSelect__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewCloseFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewCloseFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewOpenFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpenFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C::OnViewOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
