
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

// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.SetBehavior
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBehaviorTree*           BehaviorAsset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APFAIC_EnSym_Common_C::SetBehavior(const struct FGameplayTag& Tag, class UBehaviorTree* BehaviorAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.SetBehavior");

	APFAIC_EnSym_Common_C_SetBehavior_Params params;
	params.Tag = Tag;
	params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.Terminate
// (Protected, BlueprintCallable, BlueprintEvent)

void APFAIC_EnSym_Common_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.Terminate");

	APFAIC_EnSym_Common_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.StartAI
// (Protected, BlueprintCallable, BlueprintEvent)

void APFAIC_EnSym_Common_C::StartAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.StartAI");

	APFAIC_EnSym_Common_C_StartAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APFAIC_EnSym_Common_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFAIC_EnSym_Common.PFAIC_EnSym_Common_C.UserConstructionScript");

	APFAIC_EnSym_Common_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
