#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_StarShip
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_StarShip_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.DebugIconLog
struct URegisterIcon_FunctionLibrary_C_DebugIconLog_Params
{
	struct FString                                     Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_PitFall
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_PitFall_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Ladder
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Ladder_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_NPC
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_NPC_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlacementFoundNpcPointCondition            NPC_Condition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_MapGimmick
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_MapGimmick_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Cooking
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Cooking_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Fishing
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Fishing_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Camp
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Camp_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_FastTravel
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_FastTravel_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Owl
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Owl_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Treasure
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Treasure_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Breakable
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Breakable_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.SpecifyIcon_Search
struct URegisterIcon_FunctionLibrary_C_SpecifyIcon_Search_Params
{
	struct FString                                     InputPin2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapIconType                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register
struct URegisterIcon_FunctionLibrary_C_Register_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Cooking
struct URegisterIcon_FunctionLibrary_C_Register_Cooking_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_StrongEnemy
struct URegisterIcon_FunctionLibrary_C_Register_StrongEnemy_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Fishing
struct URegisterIcon_FunctionLibrary_C_Register_Fishing_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Camp
struct URegisterIcon_FunctionLibrary_C_Register_Camp_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_FastTravel
struct URegisterIcon_FunctionLibrary_C_Register_FastTravel_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Owl
struct URegisterIcon_FunctionLibrary_C_Register_Owl_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Breakable
struct URegisterIcon_FunctionLibrary_C_Register_Breakable_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Search
struct URegisterIcon_FunctionLibrary_C_Register_Search_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_Treasure
struct URegisterIcon_FunctionLibrary_C_Register_Treasure_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C.Register_MapLink
struct URegisterIcon_FunctionLibrary_C_Register_MapLink_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
