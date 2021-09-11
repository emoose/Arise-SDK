
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

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO.TO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C.Restruct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C::Restruct(int* SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO.TO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C.Restruct");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C_Restruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillID != nullptr)
		*SkillID = params.SkillID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
