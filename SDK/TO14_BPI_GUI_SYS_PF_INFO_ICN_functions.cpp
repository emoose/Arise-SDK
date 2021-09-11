
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

// Function TO14_BPI_GUI_SYS_PF_INFO_ICN.TO14_BPI_GUI_SYS_PF_INFO_ICN_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inImageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            inImageID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            inRarity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_ICN_C::SetIcon(int inImageType, int inImageID, int inRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_ICN.TO14_BPI_GUI_SYS_PF_INFO_ICN_C.SetIcon");

	UTO14_BPI_GUI_SYS_PF_INFO_ICN_C_SetIcon_Params params;
	params.inImageType = inImageType;
	params.inImageID = inImageID;
	params.inRarity = inRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
