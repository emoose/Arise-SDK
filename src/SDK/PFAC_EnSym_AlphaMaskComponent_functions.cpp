
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

// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.CollectSphereRadius
// (Public, BlueprintCallable, BlueprintEvent)

void UPFAC_EnSym_AlphaMaskComponent_C::CollectSphereRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.CollectSphereRadius");

	UPFAC_EnSym_AlphaMaskComponent_C_CollectSphereRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.IsIntersect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPFAC_EnSym_AlphaMaskComponent_C::IsIntersect(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.IsIntersect");

	UPFAC_EnSym_AlphaMaskComponent_C_IsIntersect_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.DistanceFade
// (Public, BlueprintCallable, BlueprintEvent)

void UPFAC_EnSym_AlphaMaskComponent_C::DistanceFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.DistanceFade");

	UPFAC_EnSym_AlphaMaskComponent_C_DistanceFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.SetInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UPFAC_EnSym_AlphaMaskComponent_C::SetInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.SetInvisible");

	UPFAC_EnSym_AlphaMaskComponent_C_SetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.CollectMesh
// (Public, BlueprintCallable, BlueprintEvent)

void UPFAC_EnSym_AlphaMaskComponent_C::CollectMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.CollectMesh");

	UPFAC_EnSym_AlphaMaskComponent_C_CollectMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_E340A8B84DEE6DEAA15756BE41C0C4C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnFailed_E340A8B84DEE6DEAA15756BE41C0C4C1(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_E340A8B84DEE6DEAA15756BE41C0C4C1");

	UPFAC_EnSym_AlphaMaskComponent_C_OnFailed_E340A8B84DEE6DEAA15756BE41C0C4C1_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_E340A8B84DEE6DEAA15756BE41C0C4C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnComplete_E340A8B84DEE6DEAA15756BE41C0C4C1(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_E340A8B84DEE6DEAA15756BE41C0C4C1");

	UPFAC_EnSym_AlphaMaskComponent_C_OnComplete_E340A8B84DEE6DEAA15756BE41C0C4C1_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_B61777A34D8DF53D19D955B9FD0E8838
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnFailed_B61777A34D8DF53D19D955B9FD0E8838(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_B61777A34D8DF53D19D955B9FD0E8838");

	UPFAC_EnSym_AlphaMaskComponent_C_OnFailed_B61777A34D8DF53D19D955B9FD0E8838_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_B61777A34D8DF53D19D955B9FD0E8838
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnComplete_B61777A34D8DF53D19D955B9FD0E8838(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_B61777A34D8DF53D19D955B9FD0E8838");

	UPFAC_EnSym_AlphaMaskComponent_C_OnComplete_B61777A34D8DF53D19D955B9FD0E8838_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_FFB16CED4D497B73236A6C93F3F3B8B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnFailed_FFB16CED4D497B73236A6C93F3F3B8B4(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_FFB16CED4D497B73236A6C93F3F3B8B4");

	UPFAC_EnSym_AlphaMaskComponent_C_OnFailed_FFB16CED4D497B73236A6C93F3F3B8B4_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_FFB16CED4D497B73236A6C93F3F3B8B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnComplete_FFB16CED4D497B73236A6C93F3F3B8B4(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_FFB16CED4D497B73236A6C93F3F3B8B4");

	UPFAC_EnSym_AlphaMaskComponent_C_OnComplete_FFB16CED4D497B73236A6C93F3F3B8B4_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_4F9BA9B7463682F8C1A9149DFC299512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnFailed_4F9BA9B7463682F8C1A9149DFC299512(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnFailed_4F9BA9B7463682F8C1A9149DFC299512");

	UPFAC_EnSym_AlphaMaskComponent_C_OnFailed_4F9BA9B7463682F8C1A9149DFC299512_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_4F9BA9B7463682F8C1A9149DFC299512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAlphaMask>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnComplete_4F9BA9B7463682F8C1A9149DFC299512(TEnumAsByte<EAlphaMask> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnComplete_4F9BA9B7463682F8C1A9149DFC299512");

	UPFAC_EnSym_AlphaMaskComponent_C_OnComplete_4F9BA9B7463682F8C1A9149DFC299512_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeInImpl
// (BlueprintCallable, BlueprintEvent)

void UPFAC_EnSym_AlphaMaskComponent_C::FadeInImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeInImpl");

	UPFAC_EnSym_AlphaMaskComponent_C_FadeInImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ReceiveEndPlay");

	UPFAC_EnSym_AlphaMaskComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeOutImpl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotDelete                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::FadeOutImpl(bool NotDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeOutImpl");

	UPFAC_EnSym_AlphaMaskComponent_C_FadeOutImpl_Params params;
	params.NotDelete = NotDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ReceiveTick");

	UPFAC_EnSym_AlphaMaskComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeInDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::FadeInDistance(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeInDistance");

	UPFAC_EnSym_AlphaMaskComponent_C_FadeInDistance_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeOutDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::FadeOutDistance(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.FadeOutDistance");

	UPFAC_EnSym_AlphaMaskComponent_C_FadeOutDistance_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UPFAC_EnSym_AlphaMaskComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ReceiveBeginPlay");

	UPFAC_EnSym_AlphaMaskComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ExecuteUbergraph_PFAC_EnSym_AlphaMaskComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::ExecuteUbergraph_PFAC_EnSym_AlphaMaskComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.ExecuteUbergraph_PFAC_EnSym_AlphaMaskComponent");

	UPFAC_EnSym_AlphaMaskComponent_C_ExecuteUbergraph_PFAC_EnSym_AlphaMaskComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnCompleteFadeOutEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotDelete                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFAC_EnSym_AlphaMaskComponent_C::OnCompleteFadeOutEvent__DelegateSignature(bool NotDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnCompleteFadeOutEvent__DelegateSignature");

	UPFAC_EnSym_AlphaMaskComponent_C_OnCompleteFadeOutEvent__DelegateSignature_Params params;
	params.NotDelete = NotDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnCompleteFadeInEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPFAC_EnSym_AlphaMaskComponent_C::OnCompleteFadeInEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAC_EnSym_AlphaMaskComponent.PFAC_EnSym_AlphaMaskComponent_C.OnCompleteFadeInEvent__DelegateSignature");

	UPFAC_EnSym_AlphaMaskComponent_C_OnCompleteFadeInEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
