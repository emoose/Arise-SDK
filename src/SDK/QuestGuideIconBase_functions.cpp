
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

// Function QuestGuideIconBase.QuestGuideIconBase_C.ApplyConfig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowMain                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowSub                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestGuideIconBase_C::ApplyConfig(bool ShowMain, bool ShowSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestGuideIconBase.QuestGuideIconBase_C.ApplyConfig");

	UQuestGuideIconBase_C_ApplyConfig_Params params;
	params.ShowMain = ShowMain;
	params.ShowSub = ShowSub;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestGuideIconBase.QuestGuideIconBase_C.SetOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOutLeft                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutTop                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutRight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutBottom                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestGuideIconBase_C::SetOut(bool IsOutLeft, bool IsOutTop, bool IsOutRight, bool IsOutBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestGuideIconBase.QuestGuideIconBase_C.SetOut");

	UQuestGuideIconBase_C_SetOut_Params params;
	params.IsOutLeft = IsOutLeft;
	params.IsOutTop = IsOutTop;
	params.IsOutRight = IsOutRight;
	params.IsOutBottom = IsOutBottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
