
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

// Function UMG_CircleArea.UMG_CircleArea_C.SetWorldWidth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WorldWidth                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CanvasWidth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OrthoWidth                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CircleArea_C::SetWorldWidth(float WorldWidth, float CanvasWidth, float OrthoWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_CircleArea.UMG_CircleArea_C.SetWorldWidth");

	UUMG_CircleArea_C_SetWorldWidth_Params params;
	params.WorldWidth = WorldWidth;
	params.CanvasWidth = CanvasWidth;
	params.OrthoWidth = OrthoWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_CircleArea.UMG_CircleArea_C.GetColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUMG_CircleArea_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_CircleArea.UMG_CircleArea_C.GetColorAndOpacity_1");

	UUMG_CircleArea_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
