
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

// Function TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP.TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP.TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C.Init");

	UTO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP.TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C.SetStar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rare                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C::SetStar(int Rare)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP.TO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C.SetStar");

	UTO14_BPI_GUI_MNU_COL_FIS_STAR_GROUP_C_SetStar_Params params;
	params.Rare = Rare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
