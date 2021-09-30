
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

// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BattleUnitSpawner_C::SetColor(const struct FVector& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetColor");

	ABP_BattleUnitSpawner_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetUnitIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUnitSpawner_C::SetUnitIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetUnitIndex");

	ABP_BattleUnitSpawner_C_SetUnitIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetUnitGroupColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlUnitGroup                  UnitGroup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUnitSpawner_C::SetUnitGroupColor(EBtlUnitGroup UnitGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetUnitGroupColor");

	ABP_BattleUnitSpawner_C_SetUnitGroupColor_Params params;
	params.UnitGroup = UnitGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BattleUnitSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.UserConstructionScript");

	ABP_BattleUnitSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
