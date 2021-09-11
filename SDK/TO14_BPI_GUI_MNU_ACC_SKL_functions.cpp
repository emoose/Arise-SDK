
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

// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.StopAllAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ACC_SKL_C::StopAllAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.StopAllAnimation");

	UTO14_BPI_GUI_MNU_ACC_SKL_C_StopAllAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.EffectOff
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ACC_SKL_C::EffectOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.EffectOff");

	UTO14_BPI_GUI_MNU_ACC_SKL_C_EffectOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.RankupAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_C::RankupAnimation(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.RankupAnimation");

	UTO14_BPI_GUI_MNU_ACC_SKL_C_RankupAnimation_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.AddAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_C::AddAnimation(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.AddAnimation");

	UTO14_BPI_GUI_MNU_ACC_SKL_C_AddAnimation_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.SetSkillID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ACC_SKL_C::SetSkillID(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.SetSkillID");

	UTO14_BPI_GUI_MNU_ACC_SKL_C_SetSkillID_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
