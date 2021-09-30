
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

// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.AdventPlayback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          AdventCutName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MonsterID_First                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MonsterID_Second               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_GIN_000_C::AdventPlayback(class ULevelSequence* AdventCutName, const struct FName& MonsterID_First, const struct FName& MonsterID_Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.AdventPlayback");

	UBP_BMS_EGR_010_YOK_GIN_000_C_AdventPlayback_Params params;
	params.AdventCutName = AdventCutName;
	params.MonsterID_First = MonsterID_First;
	params.MonsterID_Second = MonsterID_Second;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.OnPrevMain
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BMS_EGR_010_YOK_GIN_000_C::OnPrevMain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.OnPrevMain");

	UBP_BMS_EGR_010_YOK_GIN_000_C_OnPrevMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.Received_OnFlexibleNotify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_GIN_000_C::Received_OnFlexibleNotify(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.Received_OnFlexibleNotify");

	UBP_BMS_EGR_010_YOK_GIN_000_C_Received_OnFlexibleNotify_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.OnPostCameraInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_GIN_000_C::OnPostCameraInitialize(class ABtl_Camera* BtlCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.OnPostCameraInitialize");

	UBP_BMS_EGR_010_YOK_GIN_000_C_OnPostCameraInitialize_Params params;
	params.BtlCamera = BtlCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_GIN_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_EGR_010_YOK_GIN_000_C::ExecuteUbergraph_BP_BMS_EGR_010_YOK_GIN_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_GIN_000");

	UBP_BMS_EGR_010_YOK_GIN_000_C_ExecuteUbergraph_BP_BMS_EGR_010_YOK_GIN_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
