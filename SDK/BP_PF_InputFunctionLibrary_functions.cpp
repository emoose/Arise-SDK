
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

// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCharacterAction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_PlayerInputCharacterAction(class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCharacterAction");

	UBP_PF_InputFunctionLibrary_C_PlayerInputCharacterAction_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.GetPlayerMovementDirection
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_GetPlayerMovementDirection(class APlayerController* PlayerController, class UObject* __WorldContext, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.GetPlayerMovementDirection");

	UBP_PF_InputFunctionLibrary_C_GetPlayerMovementDirection_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCameraReset
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_PlayerInputCameraReset(class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCameraReset");

	UBP_PF_InputFunctionLibrary_C_PlayerInputCameraReset_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCameraChangeDistance
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_PlayerInputCameraChangeDistance(class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCameraChangeDistance");

	UBP_PF_InputFunctionLibrary_C_PlayerInputCameraChangeDistance_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCameraRotation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_PlayerInputCameraRotation(class APlayerController* PlayerController, float DeltaTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputCameraRotation");

	UBP_PF_InputFunctionLibrary_C_PlayerInputCameraRotation_Params params;
	params.PlayerController = PlayerController;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputInteraction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_PlayerInputInteraction(class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputInteraction");

	UBP_PF_InputFunctionLibrary_C_PlayerInputInteraction_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputJump
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_PlayerInputJump(class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputJump");

	UBP_PF_InputFunctionLibrary_C_PlayerInputJump_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputMovement
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InputFunctionLibrary_C::STATIC_PlayerInputMovement(class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C.PlayerInputMovement");

	UBP_PF_InputFunctionLibrary_C_PlayerInputMovement_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
