
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

// Function BP_BattleManager.BP_BattleManager_C.LineTraceForWall
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleManager_C::LineTraceForWall(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.LineTraceForWall");

	ABP_BattleManager_C_LineTraceForWall_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleManager.BP_BattleManager_C.ScreenMaskCaptchImpl
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlScreenCaptchaWidget_DatabaseLabel Label                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_ScreenEncountEffectWidgetBase_C* ScreenMask                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManager_C::ScreenMaskCaptchImpl(const struct FBtlScreenCaptchaWidget_DatabaseLabel& Label, class ABP_ScreenEncountEffectWidgetBase_C** ScreenMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.ScreenMaskCaptchImpl");

	ABP_BattleManager_C_ScreenMaskCaptchImpl_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenMask != nullptr)
		*ScreenMask = params.ScreenMask;
}


// Function BP_BattleManager.BP_BattleManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.UserConstructionScript");

	ABP_BattleManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManager.BP_BattleManager_C.ScreenCaptchaAddViewport
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBtlScreenCaptchaWidget_DatabaseLabel WidgetLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManager_C::ScreenCaptchaAddViewport(const struct FBtlScreenCaptchaWidget_DatabaseLabel& WidgetLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.ScreenCaptchaAddViewport");

	ABP_BattleManager_C_ScreenCaptchaAddViewport_Params params;
	params.WidgetLabel = WidgetLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManager.BP_BattleManager_C.ScreenCaptchaFadeOut
// (Event, Public, BlueprintEvent)

void ABP_BattleManager_C::ScreenCaptchaFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.ScreenCaptchaFadeOut");

	ABP_BattleManager_C_ScreenCaptchaFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManager.BP_BattleManager_C.ReceiveFinalize
// (Event, Public, BlueprintEvent)

void ABP_BattleManager_C::ReceiveFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.ReceiveFinalize");

	ABP_BattleManager_C_ReceiveFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManager.BP_BattleManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BattleManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.ReceiveBeginPlay");

	ABP_BattleManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManager.BP_BattleManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.ReceiveEndPlay");

	ABP_BattleManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManager.BP_BattleManager_C.OnChangeEquipmentEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManager_C::OnChangeEquipmentEvent(EArisePartyID Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.OnChangeEquipmentEvent");

	ABP_BattleManager_C_OnChangeEquipmentEvent_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManager.BP_BattleManager_C.ExecuteUbergraph_BP_BattleManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManager_C::ExecuteUbergraph_BP_BattleManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManager.BP_BattleManager_C.ExecuteUbergraph_BP_BattleManager");

	ABP_BattleManager_C_ExecuteUbergraph_BP_BattleManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
