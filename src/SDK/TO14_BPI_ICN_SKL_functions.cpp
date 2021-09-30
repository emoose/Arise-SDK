
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

// Function TO14_BPI_ICN_SKL.TO14_BPI_ICN_SKL_C.SetSkillIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_ICN_SKL_C::SetSkillIcon(int IconNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_ICN_SKL.TO14_BPI_ICN_SKL_C.SetSkillIcon");

	UTO14_BPI_ICN_SKL_C_SetSkillIcon_Params params;
	params.IconNo = IconNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
