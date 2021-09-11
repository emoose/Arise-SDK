
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

// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.GetDynamicMaterialInstance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ABP_GetAliasScreenMask_C::GetDynamicMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.GetDynamicMaterialInstance");

	ABP_GetAliasScreenMask_C_GetDynamicMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GetAliasScreenMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.UserConstructionScript");

	ABP_GetAliasScreenMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GetAliasScreenMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.ReceiveBeginPlay");

	ABP_GetAliasScreenMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.SetVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GetAliasScreenMask_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.SetVisible");

	ABP_GetAliasScreenMask_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.DoScreenFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantry                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GetAliasScreenMask_C::DoScreenFade(bool FadeWhite, bool FadeOut, bool bInstantry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.DoScreenFade");

	ABP_GetAliasScreenMask_C_DoScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;
	params.bInstantry = bInstantry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.ExecuteUbergraph_BP_GetAliasScreenMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GetAliasScreenMask_C::ExecuteUbergraph_BP_GetAliasScreenMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GetAliasScreenMask.BP_GetAliasScreenMask_C.ExecuteUbergraph_BP_GetAliasScreenMask");

	ABP_GetAliasScreenMask_C_ExecuteUbergraph_BP_GetAliasScreenMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
