
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

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.PlayBoostStrike_Internal
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StrikeLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPostEventInfoBase*      PostEventInfo                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_PlayBoostStrike_Internal(const struct FName& StrikeLabel, class UObject* __WorldContext, class UPostEventInfoBase** PostEventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.PlayBoostStrike_Internal");

	UBP_BtlFunctionLibrary_C_PlayBoostStrike_Internal_Params params;
	params.StrikeLabel = StrikeLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PostEventInfo != nullptr)
		*PostEventInfo = params.PostEventInfo;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetAimHeight
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_SetCameraOffsetAimHeight(float Offset, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetAimHeight");

	UBP_BtlFunctionLibrary_C_SetCameraOffsetAimHeight_Params params;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.RemoveDotLeftString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UBP_BtlFunctionLibrary_C::STATIC_RemoveDotLeftString(const struct FString& String, class UObject* __WorldContext, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.RemoveDotLeftString");

	UBP_BtlFunctionLibrary_C_RemoveDotLeftString_Params params;
	params.String = String;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LongPathToShortName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 LongPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ShortName                      (Parm, OutParm, ZeroConstructor)

void UBP_BtlFunctionLibrary_C::STATIC_LongPathToShortName(const struct FString& LongPath, class UObject* __WorldContext, struct FString* ShortName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LongPathToShortName");

	UBP_BtlFunctionLibrary_C_LongPathToShortName_Params params;
	params.LongPath = LongPath;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShortName != nullptr)
		*ShortName = params.ShortName;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlUnitListById
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class ABtlCharacterBase*> Unit                           (Parm, OutParm, ZeroConstructor)

void UBP_BtlFunctionLibrary_C::STATIC_GetBtlUnitListById(const struct FName& UnitID, class UObject* __WorldContext, bool* IsValid, TArray<class ABtlCharacterBase*>* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlUnitListById");

	UBP_BtlFunctionLibrary_C_GetBtlUnitListById_Params params;
	params.UnitID = UnitID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Unit != nullptr)
		*Unit = params.Unit;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlUnitById
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Unit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_GetBtlUnitById(const struct FName& UnitID, class UObject* __WorldContext, bool* IsValid, class ABtlCharacterBase** Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlUnitById");

	UBP_BtlFunctionLibrary_C_GetBtlUnitById_Params params;
	params.UnitID = UnitID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Unit != nullptr)
		*Unit = params.Unit;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ShowDamageCollision
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_ShowDamageCollision(bool Show, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ShowDamageCollision");

	UBP_BtlFunctionLibrary_C_ShowDamageCollision_Params params;
	params.Show = Show;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetRotation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_SetCameraOffsetRotation(const struct FRotator& Offset, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetRotation");

	UBP_BtlFunctionLibrary_C_SetCameraOffsetRotation_Params params;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetLocation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_SetCameraOffsetLocation(const struct FVector& Offset, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetLocation");

	UBP_BtlFunctionLibrary_C_SetCameraOffsetLocation_Params params;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetSpecialStrikeLabel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_GetSpecialStrikeLabel(class UObject* __WorldContext, struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetSpecialStrikeLabel");

	UBP_BtlFunctionLibrary_C_GetSpecialStrikeLabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.IsReadySpecialStrike
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_IsReadySpecialStrike(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.IsReadySpecialStrike");

	UBP_BtlFunctionLibrary_C_IsReadySpecialStrike_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.NotReadySpecialStrike
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_NotReadySpecialStrike(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.NotReadySpecialStrike");

	UBP_BtlFunctionLibrary_C_NotReadySpecialStrike_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ReadySpecialStrike
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSpecialStrike               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_ReadySpecialStrike(const struct FName& NewSpecialStrike, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ReadySpecialStrike");

	UBP_BtlFunctionLibrary_C_ReadySpecialStrike_Params params;
	params.NewSpecialStrike = NewSpecialStrike;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetBBArtsTarget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_SetBBArtsTarget(class UBlackboardComponent* Blackboard, class ABtlCharacterBase* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetBBArtsTarget");

	UBP_BtlFunctionLibrary_C_SetBBArtsTarget_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetBBRequestArts
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_SetBBRequestArts(class UBlackboardComponent* Blackboard, const struct FName& Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetBBRequestArts");

	UBP_BtlFunctionLibrary_C_SetBBRequestArts_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetHoldMouse
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_SetHoldMouse(bool Hold, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetHoldMouse");

	UBP_BtlFunctionLibrary_C_SetHoldMouse_Params params;
	params.Hold = Hold;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LerpAngleValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_LerpAngleValue(float From, float To, float Value, class UObject* __WorldContext, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LerpAngleValue");

	UBP_BtlFunctionLibrary_C_LerpAngleValue_Params params;
	params.From = From;
	params.To = To;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LerpFloatValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_LerpFloatValue(float From, float To, float Value, class UObject* __WorldContext, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LerpFloatValue");

	UBP_BtlFunctionLibrary_C_LerpFloatValue_Params params;
	params.From = From;
	params.To = To;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ChangeControlCharacter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       ChangeCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_ChangeControlCharacter(class ABtlCharacterBase* ChangeCharacter, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ChangeControlCharacter");

	UBP_BtlFunctionLibrary_C_ChangeControlCharacter_Params params;
	params.ChangeCharacter = ChangeCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ConvertElementToMPC
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBtlElementType                Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_ConvertElementToMPC(EBtlElementType Element, class UObject* __WorldContext, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ConvertElementToMPC");

	UBP_BtlFunctionLibrary_C_ConvertElementToMPC_Params params;
	params.Element = Element;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SpawnElementEmitterAttached
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UBP_BtlFunctionLibrary_C::STATIC_SpawnElementEmitterAttached(const struct FName& Element, class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SpawnElementEmitterAttached");

	UBP_BtlFunctionLibrary_C_SpawnElementEmitterAttached_Params params;
	params.Element = Element;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SpawnElementEmitterAtLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UBP_BtlFunctionLibrary_C::STATIC_SpawnElementEmitterAtLocation(const struct FName& Element, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SpawnElementEmitterAtLocation");

	UBP_BtlFunctionLibrary_C_SpawnElementEmitterAtLocation_Params params;
	params.Element = Element;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetMarkerLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 returnValue                    (Parm, OutParm, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_GetMarkerLocation(const struct FName& marker, class UObject* __WorldContext, struct FVector* returnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetMarkerLocation");

	UBP_BtlFunctionLibrary_C_GetMarkerLocation_Params params;
	params.marker = marker;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (returnValue != nullptr)
		*returnValue = params.returnValue;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetUnitData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlUnitData            returnValue                    (Parm, OutParm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_GetUnitData(const struct FName& ID, class UObject* __WorldContext, struct FBtlUnitData* returnValue, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetUnitData");

	UBP_BtlFunctionLibrary_C_GetUnitData_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (returnValue != nullptr)
		*returnValue = params.returnValue;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 returnValue                    (Parm, OutParm, ZeroConstructor)

void UBP_BtlFunctionLibrary_C::STATIC_GetName(const struct FString& Group, const struct FString& Label, class UObject* __WorldContext, struct FString* returnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetName");

	UBP_BtlFunctionLibrary_C_GetName_Params params;
	params.Group = Group;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (returnValue != nullptr)
		*returnValue = params.returnValue;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetArtsData
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            returnValue                    (Parm, OutParm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_GetArtsData(const struct FName& ID, class UObject* __WorldContext, struct FBtlArtsData* returnValue, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetArtsData");

	UBP_BtlFunctionLibrary_C_GetArtsData_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (returnValue != nullptr)
		*returnValue = params.returnValue;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlStateEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlStateEvent*          BtlStateEvent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_GetBtlStateEvent(class UObject* __WorldContext, class UBtlStateEvent** BtlStateEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlStateEvent");

	UBP_BtlFunctionLibrary_C_GetBtlStateEvent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlStateEvent != nullptr)
		*BtlStateEvent = params.BtlStateEvent;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetPCController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AInputExtPlayerController* PCController                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_GetPCController(class UObject* __WorldContext, class AInputExtPlayerController** PCController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetPCController");

	UBP_BtlFunctionLibrary_C_GetPCController_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PCController != nullptr)
		*PCController = params.PCController;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.PlayBattleSE
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   SystemEffectLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_PlayBattleSE(const struct FName& SystemEffectLabel, const struct FVector& Location, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.PlayBattleSE");

	UBP_BtlFunctionLibrary_C_PlayBattleSE_Params params;
	params.SystemEffectLabel = SystemEffectLabel;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.CollectUsableArtsList
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ResultList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlFunctionLibrary_C::STATIC_CollectUsableArtsList(class ABtlCharacterBase* BtlCharacter, class ABtlCharacterBase* TargetCharacter, class UObject* __WorldContext, TArray<struct FName>* ResultList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.CollectUsableArtsList");

	UBP_BtlFunctionLibrary_C_CollectUsableArtsList_Params params;
	params.BtlCharacter = BtlCharacter;
	params.TargetCharacter = TargetCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultList != nullptr)
		*ResultList = params.ResultList;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
