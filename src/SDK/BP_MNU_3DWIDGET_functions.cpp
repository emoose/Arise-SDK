
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

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Get3DWidgetActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MNU_3DWIDGET_BaseActor_C* _3DWidgetActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DWIDGET_C::Get3DWidgetActor(class ABP_MNU_3DWIDGET_BaseActor_C** _3DWidgetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Get3DWidgetActor");

	UBP_MNU_3DWIDGET_C_Get3DWidgetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3DWidgetActor != nullptr)
		*_3DWidgetActor = params._3DWidgetActor;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.GetWidgetComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_3DWIDGET_C::GetWidgetComponent(class UWidgetComponent** WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.GetWidgetComponent");

	UBP_MNU_3DWIDGET_C_GetWidgetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetComponent != nullptr)
		*WidgetComponent = params.WidgetComponent;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.PlayAnimCloseActor
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MNU_3DWIDGET_C::PlayAnimCloseActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.PlayAnimCloseActor");

	UBP_MNU_3DWIDGET_C_PlayAnimCloseActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.PlayAnimOpenActor
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MNU_3DWIDGET_C::PlayAnimOpenActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.PlayAnimOpenActor");

	UBP_MNU_3DWIDGET_C_PlayAnimOpenActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MNU_3DWIDGET_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Terminate");

	UBP_MNU_3DWIDGET_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MNU_3DWIDGET_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Construct");

	UBP_MNU_3DWIDGET_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DWIDGET_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Tick");

	UBP_MNU_3DWIDGET_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.ExecuteUbergraph_BP_MNU_3DWIDGET
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MNU_3DWIDGET_C::ExecuteUbergraph_BP_MNU_3DWIDGET(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.ExecuteUbergraph_BP_MNU_3DWIDGET");

	UBP_MNU_3DWIDGET_C_ExecuteUbergraph_BP_MNU_3DWIDGET_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.OnCreatedWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MNU_3DWIDGET_C::OnCreatedWidget__DelegateSignature(bool Success, class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.OnCreatedWidget__DelegateSignature");

	UBP_MNU_3DWIDGET_C_OnCreatedWidget__DelegateSignature_Params params;
	params.Success = Success;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
