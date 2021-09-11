
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

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_NPC_CampObject_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.GetOutlinerFolderPath");

	ABP_PF_NPC_CampObject_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_NPC_CampObject_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.GetOutlinerLabelName");

	ABP_PF_NPC_CampObject_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  SpawnActor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampObject_C::SpawnWeapon(const struct FString& WeaponName, const struct FVector& Location, const struct FRotator& Rotation, class AActor** SpawnActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnWeapon");

	ABP_PF_NPC_CampObject_C_SpawnWeapon_Params params;
	params.WeaponName = WeaponName;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnActor != nullptr)
		*SpawnActor = params.SpawnActor;
}


// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpcDefineFacialData  InitOverrideFacial             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FSoftObjectPath         AnimSetPath                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 InitAction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FPFNpcCharacterBuildOptions Options                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  SpawnActor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampObject_C::SpawnCharacter(const struct FPFNpcDefineFacialData& InitOverrideFacial, const struct FString& CharacterID, const struct FSoftObjectPath& AnimSetPath, const struct FString& InitAction, const struct FPFNpcCharacterBuildOptions& Options, const struct FVector& Location, const struct FRotator& Rotation, class AActor** SpawnActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnCharacter");

	ABP_PF_NPC_CampObject_C_SpawnCharacter_Params params;
	params.InitOverrideFacial = InitOverrideFacial;
	params.CharacterID = CharacterID;
	params.AnimSetPath = AnimSetPath;
	params.InitAction = InitAction;
	params.Options = Options;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnActor != nullptr)
		*SpawnActor = params.SpawnActor;
}


// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.ToStringToPartyID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EArisePartyID                  PartyId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampObject_C::ToStringToPartyID(const struct FString& InputPin, EArisePartyID* PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.ToStringToPartyID");

	ABP_PF_NPC_CampObject_C_ToStringToPartyID_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyId != nullptr)
		*PartyId = params.PartyId;
}


// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.DespawnActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_CampObject_C::DespawnActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.DespawnActor");

	ABP_PF_NPC_CampObject_C_DespawnActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InitAction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 LocationOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                RotationOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FSoftObjectPath         AnimSetPath                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPFNpcDefineFacialData  FacialData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPFNpcCharacterBuildOptions Options                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampObject_C::SpawnActor(const struct FString& CharacterID, const struct FString& InitAction, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, const struct FSoftObjectPath& AnimSetPath, const struct FPFNpcDefineFacialData& FacialData, const struct FPFNpcCharacterBuildOptions& Options, class AActor** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnActor");

	ABP_PF_NPC_CampObject_C_SpawnActor_Params params;
	params.CharacterID = CharacterID;
	params.InitAction = InitAction;
	params.LocationOffset = LocationOffset;
	params.RotationOffset = RotationOffset;
	params.AnimSetPath = AnimSetPath;
	params.FacialData = FacialData;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_CampObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.UserConstructionScript");

	ABP_PF_NPC_CampObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
