
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

// Function TO14_BPI_GUI_ICN_CHARA.TO14_BPI_GUI_ICN_CHARA_C.GetTargetImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UTO14_BPI_GUI_ICN_CHARA_C::GetTargetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CHARA.TO14_BPI_GUI_ICN_CHARA_C.GetTargetImage");

	UTO14_BPI_GUI_ICN_CHARA_C_GetTargetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_ICN_CHARA.TO14_BPI_GUI_ICN_CHARA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_ICN_CHARA_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CHARA.TO14_BPI_GUI_ICN_CHARA_C.Construct");

	UTO14_BPI_GUI_ICN_CHARA_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CHARA.TO14_BPI_GUI_ICN_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_CHARA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_CHARA_C::ExecuteUbergraph_TO14_BPI_GUI_ICN_CHARA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CHARA.TO14_BPI_GUI_ICN_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_CHARA");

	UTO14_BPI_GUI_ICN_CHARA_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_CHARA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
