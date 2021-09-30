
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

// Function TO14_BPI_GUI_MNU_INF_STR_GROUP.TO14_BPI_GUI_MNU_INF_STR_GROUP_C.SetReward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestRewardData        QuestRewardData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_INF_STR_GROUP_C::SetReward(const struct FQuestRewardData& QuestRewardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_STR_GROUP.TO14_BPI_GUI_MNU_INF_STR_GROUP_C.SetReward");

	UTO14_BPI_GUI_MNU_INF_STR_GROUP_C_SetReward_Params params;
	params.QuestRewardData = QuestRewardData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_STR_GROUP.TO14_BPI_GUI_MNU_INF_STR_GROUP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_INF_STR_GROUP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_STR_GROUP.TO14_BPI_GUI_MNU_INF_STR_GROUP_C.Construct");

	UTO14_BPI_GUI_MNU_INF_STR_GROUP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_INF_STR_GROUP.TO14_BPI_GUI_MNU_INF_STR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_STR_GROUP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_INF_STR_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_STR_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_STR_GROUP.TO14_BPI_GUI_MNU_INF_STR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_STR_GROUP");

	UTO14_BPI_GUI_MNU_INF_STR_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_INF_STR_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
