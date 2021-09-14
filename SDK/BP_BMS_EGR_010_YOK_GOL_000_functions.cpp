
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

// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnPostCameraInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_GOL_000_C::OnPostCameraInitialize(class ABtl_Camera* BtlCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnPostCameraInitialize");

	UBP_BMS_EGR_010_YOK_GOL_000_C_OnPostCameraInitialize_Params params;
	params.BtlCamera = BtlCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnFinalize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_EGR_010_YOK_GOL_000_C::OnFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnFinalize");

	UBP_BMS_EGR_010_YOK_GOL_000_C_OnFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnPrevMainProduction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_EGR_010_YOK_GOL_000_C::OnPrevMainProduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnPrevMainProduction");

	UBP_BMS_EGR_010_YOK_GOL_000_C_OnPrevMainProduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnCoreBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_GOL_000_C::OnCoreBreak(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnCoreBreak");

	UBP_BMS_EGR_010_YOK_GOL_000_C_OnCoreBreak_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnDecideWin
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_EGR_010_YOK_GOL_000_C::OnDecideWin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnDecideWin");

	UBP_BMS_EGR_010_YOK_GOL_000_C_OnDecideWin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_GOL_000
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_GOL_000_C::ExecuteUbergraph_BP_BMS_EGR_010_YOK_GOL_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_GOL_000");

	UBP_BMS_EGR_010_YOK_GOL_000_C_ExecuteUbergraph_BP_BMS_EGR_010_YOK_GOL_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
