
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

// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.GetQuestID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 QuestID                        (Parm, OutParm, ZeroConstructor)

void UUMG_NavimapCircleArea_C::GetQuestID(struct FString* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.GetQuestID");

	UUMG_NavimapCircleArea_C_GetQuestID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestID != nullptr)
		*QuestID = params.QuestID;
}


// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            LocatorInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_NavimapCircleArea_C::Initialize(const struct FLocatorInfo& LocatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.Initialize");

	UUMG_NavimapCircleArea_C_Initialize_Params params;
	params.LocatorInfo = LocatorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.SetIconIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_NavimapCircleArea_C::SetIconIndex(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.SetIconIndex");

	UUMG_NavimapCircleArea_C_SetIconIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.ExecuteUbergraph_UMG_NavimapCircleArea
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_NavimapCircleArea_C::ExecuteUbergraph_UMG_NavimapCircleArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.ExecuteUbergraph_UMG_NavimapCircleArea");

	UUMG_NavimapCircleArea_C_ExecuteUbergraph_UMG_NavimapCircleArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
