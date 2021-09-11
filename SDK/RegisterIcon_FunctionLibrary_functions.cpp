
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

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_StarShip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_StarShip(const struct FString& actorId, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_StarShip");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_StarShip_Params params;
	params.actorId = actorId;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.DebugIconLog
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_DebugIconLog(const struct FString& Text, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.DebugIconLog");

	URegisterIcon_FunctionLibrary_C_DebugIconLog_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_PitFall
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_PitFall(const struct FString& actorId, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_PitFall");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_PitFall_Params params;
	params.actorId = actorId;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Ladder
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Ladder(const struct FString& actorId, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Ladder");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Ladder_Params params;
	params.actorId = actorId;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_NPC
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlacementFoundNpcPointCondition NPC_Condition                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_NPC(const struct FString& actorId, bool Condition, const struct FPlacementFoundNpcPointCondition& NPC_Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_NPC");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_NPC_Params params;
	params.actorId = actorId;
	params.Condition = Condition;
	params.NPC_Condition = NPC_Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_MapGimmick
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_MapGimmick(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_MapGimmick");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_MapGimmick_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Cooking
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Cooking(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Cooking");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Cooking_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Fishing
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Fishing(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Fishing");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Fishing_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Camp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Camp(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Camp");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Camp_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_FastTravel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_FastTravel(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_FastTravel");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_FastTravel_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Owl
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Owl(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Owl");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Owl_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Treasure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Treasure(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Treasure");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Treasure_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Breakable
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Breakable(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Breakable");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Breakable_Params params;
	params.InputPin = InputPin;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Search
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_SpecifyIcon_Search(const struct FString& InputPin2, bool Condition, class UObject* __WorldContext, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Search");

	URegisterIcon_FunctionLibrary_C_SpecifyIcon_Search_Params params;
	params.InputPin2 = InputPin2;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register(const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register");

	URegisterIcon_FunctionLibrary_C_Register_Params params;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Cooking
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_Cooking(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Cooking");

	URegisterIcon_FunctionLibrary_C_Register_Cooking_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_StrongEnemy
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_StrongEnemy(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_StrongEnemy");

	URegisterIcon_FunctionLibrary_C_Register_StrongEnemy_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Fishing
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_Fishing(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Fishing");

	URegisterIcon_FunctionLibrary_C_Register_Fishing_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Camp
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_Camp(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Camp");

	URegisterIcon_FunctionLibrary_C_Register_Camp_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_FastTravel
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_FastTravel(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_FastTravel");

	URegisterIcon_FunctionLibrary_C_Register_FastTravel_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Owl
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_Owl(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Owl");

	URegisterIcon_FunctionLibrary_C_Register_Owl_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Breakable
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_Breakable(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Breakable");

	URegisterIcon_FunctionLibrary_C_Register_Breakable_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Search
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_Search(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Search");

	URegisterIcon_FunctionLibrary_C_Register_Search_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Treasure
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_Treasure(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Treasure");

	URegisterIcon_FunctionLibrary_C_Register_Treasure_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_MapLink
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URegisterIcon_FunctionLibrary_C::STATIC_Register_MapLink(const struct FString& LocationName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_MapLink");

	URegisterIcon_FunctionLibrary_C_Register_MapLink_Params params;
	params.LocationName = LocationName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
