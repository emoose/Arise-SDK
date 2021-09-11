
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

// Function TO14_BPI_GUI_MNU_EQU_SKL_INFO.TO14_BPI_GUI_MNU_EQU_SKL_INFO_C.SetSkillID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SKL_INFO_C::SetSkillID(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SKL_INFO.TO14_BPI_GUI_MNU_EQU_SKL_INFO_C.SetSkillID");

	UTO14_BPI_GUI_MNU_EQU_SKL_INFO_C_SetSkillID_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
