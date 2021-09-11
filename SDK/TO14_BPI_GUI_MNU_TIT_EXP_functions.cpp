
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

// Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshAsAlias
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Alias_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT_EXP_C::RefreshAsAlias(int Alias_ID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshAsAlias");

	UTO14_BPI_GUI_MNU_TIT_EXP_C_RefreshAsAlias_Params params;
	params.Alias_ID = Alias_ID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshBySkillID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveSkillID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT_EXP_C::RefreshBySkillID(int ActiveSkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshBySkillID");

	UTO14_BPI_GUI_MNU_TIT_EXP_C_RefreshBySkillID_Params params;
	params.ActiveSkillID = ActiveSkillID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshByAliasID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Alias_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT_EXP_C::RefreshByAliasID(int Alias_ID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshByAliasID");

	UTO14_BPI_GUI_MNU_TIT_EXP_C_RefreshByAliasID_Params params;
	params.Alias_ID = Alias_ID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
