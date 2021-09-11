
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

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.BuildRequestByLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFCampWeaponData       Layout                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_NPC_CampWeapon_C::BuildRequestByLayout(const struct FPFCampWeaponData& Layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.BuildRequestByLayout");

	ABP_PF_NPC_CampWeapon_C_BuildRequestByLayout_Params params;
	params.Layout = Layout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.SetLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_CampWeapon_C::SetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.SetLayout");

	ABP_PF_NPC_CampWeapon_C_SetLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.BuildRequestByWeaponID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_NPC_CampWeapon_C::BuildRequestByWeaponID(const struct FString& WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.BuildRequestByWeaponID");

	ABP_PF_NPC_CampWeapon_C_BuildRequestByWeaponID_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_CampWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.UserConstructionScript");

	ABP_PF_NPC_CampWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NPC_CampWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ReceiveBeginPlay");

	ABP_PF_NPC_CampWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampWeapon_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ReceiveEndPlay");

	ABP_PF_NPC_CampWeapon_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ExecuteUbergraph_BP_PF_NPC_CampWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_CampWeapon_C::ExecuteUbergraph_BP_PF_NPC_CampWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ExecuteUbergraph_BP_PF_NPC_CampWeapon");

	ABP_PF_NPC_CampWeapon_C_ExecuteUbergraph_BP_PF_NPC_CampWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
