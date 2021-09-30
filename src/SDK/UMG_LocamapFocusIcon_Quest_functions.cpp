
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

// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.GetQuestID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (Parm, OutParm, ZeroConstructor)

void UUMG_LocamapFocusIcon_Quest_C::GetQuestID(struct FString* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.GetQuestID");

	UUMG_LocamapFocusIcon_Quest_C_GetQuestID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestID != nullptr)
		*QuestID = params.QuestID;
}


// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.BindOnGotoQuestEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnGotoQuest                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_LocamapFocusIcon_Quest_C::BindOnGotoQuestEvent(const struct FScriptDelegate& OnGotoQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.BindOnGotoQuestEvent");

	UUMG_LocamapFocusIcon_Quest_C_BindOnGotoQuestEvent_Params params;
	params.OnGotoQuest = OnGotoQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.OnDecide
// (BlueprintCallable, BlueprintEvent)

void UUMG_LocamapFocusIcon_Quest_C::OnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.OnDecide");

	UUMG_LocamapFocusIcon_Quest_C_OnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.ExecuteUbergraph_UMG_LocamapFocusIcon_Quest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_LocamapFocusIcon_Quest_C::ExecuteUbergraph_UMG_LocamapFocusIcon_Quest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.ExecuteUbergraph_UMG_LocamapFocusIcon_Quest");

	UUMG_LocamapFocusIcon_Quest_C_ExecuteUbergraph_UMG_LocamapFocusIcon_Quest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.OnGotoQuestEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_LocamapFocusIcon_Quest_C::OnGotoQuestEvent__DelegateSignature(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.OnGotoQuestEvent__DelegateSignature");

	UUMG_LocamapFocusIcon_Quest_C_OnGotoQuestEvent__DelegateSignature_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
