
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

// Function IconRegistrar.IconRegistrar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIconRegistrar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.UserConstructionScript");

	AIconRegistrar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterSearch
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterSearch(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterSearch");

	AIconRegistrar_C_EventRegisterSearch_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterBreakable
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterBreakable(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterBreakable");

	AIconRegistrar_C_EventRegisterBreakable_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterTreasure
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterTreasure(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterTreasure");

	AIconRegistrar_C_EventRegisterTreasure_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterOwl
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterOwl(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterOwl");

	AIconRegistrar_C_EventRegisterOwl_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterFastTravel
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterFastTravel(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterFastTravel");

	AIconRegistrar_C_EventRegisterFastTravel_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterCamp
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterCamp(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterCamp");

	AIconRegistrar_C_EventRegisterCamp_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterFishingPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterFishingPoint(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterFishingPoint");

	AIconRegistrar_C_EventRegisterFishingPoint_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterMapGimmick
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterMapGimmick(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterMapGimmick");

	AIconRegistrar_C_EventRegisterMapGimmick_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterNPC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPlacementFoundNpcPointCondition cond                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AIconRegistrar_C::EventRegisterNPC(const struct FString& actorId, const struct FVector& Position, const struct FPlacementFoundNpcPointCondition& cond)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterNPC");

	AIconRegistrar_C_EventRegisterNPC_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.cond = cond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterPitFall
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterPitFall(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterPitFall");

	AIconRegistrar_C_EventRegisterPitFall_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterLadder
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterLadder(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterLadder");

	AIconRegistrar_C_EventRegisterLadder_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.RegisterIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AIconRegistrar_C::RegisterIcons(const struct FString& LevelName, const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.RegisterIcons");

	AIconRegistrar_C_RegisterIcons_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.EventRegisterStarShip
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IsSatisfy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::EventRegisterStarShip(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.EventRegisterStarShip");

	AIconRegistrar_C_EventRegisterStarShip_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.IsSatisfy = IsSatisfy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRegistrar.IconRegistrar_C.ExecuteUbergraph_IconRegistrar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRegistrar_C::ExecuteUbergraph_IconRegistrar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrar.IconRegistrar_C.ExecuteUbergraph_IconRegistrar");

	AIconRegistrar_C_ExecuteUbergraph_IconRegistrar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
