
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

// Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.SetEffectInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EffectID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_AFT_INFO_C::SetEffectInfo(const struct FString& EffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.SetEffectInfo");

	UTO14_BPI_GUI_MNU_AFT_INFO_C_SetEffectInfo_Params params;
	params.EffectID = EffectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_INFO_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.Init");

	UTO14_BPI_GUI_MNU_AFT_INFO_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArtifactData           ArtifactData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PartsComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExParts                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_INFO_C::SetInfo(const struct FArtifactData& ArtifactData, bool PartsComp, bool ExParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.SetInfo");

	UTO14_BPI_GUI_MNU_AFT_INFO_C_SetInfo_Params params;
	params.ArtifactData = ArtifactData;
	params.PartsComp = PartsComp;
	params.ExParts = ExParts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_INFO_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.Construct");

	UTO14_BPI_GUI_MNU_AFT_INFO_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_INFO
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_INFO_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_INFO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_INFO.TO14_BPI_GUI_MNU_AFT_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_INFO");

	UTO14_BPI_GUI_MNU_AFT_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_INFO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
