
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

// Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.FindVoiceSpeaker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InCharacterID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  OutSpeaker                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_OwlPoint_C::FindVoiceSpeaker(const struct FString& InCharacterID, class AActor** OutSpeaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.FindVoiceSpeaker");

	UBP_PF_InteractEventScript_OwlPoint_C_FindVoiceSpeaker_Params params;
	params.InCharacterID = InCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSpeaker != nullptr)
		*OutSpeaker = params.OutSpeaker;
}


// Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.Main
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PF_InteractEventScript_OwlPoint_C::Main(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.Main");

	UBP_PF_InteractEventScript_OwlPoint_C_Main_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.ExecuteUbergraph_BP_PF_InteractEventScript_OwlPoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_InteractEventScript_OwlPoint_C::ExecuteUbergraph_BP_PF_InteractEventScript_OwlPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.ExecuteUbergraph_BP_PF_InteractEventScript_OwlPoint");

	UBP_PF_InteractEventScript_OwlPoint_C_ExecuteUbergraph_BP_PF_InteractEventScript_OwlPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
