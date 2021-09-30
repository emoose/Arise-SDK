
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

// Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.SetArtsRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C::SetArtsRank(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.SetArtsRank");

	UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C_SetArtsRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.Initialize");

	UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP.TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP");

	UTO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_ICN_STAR_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
