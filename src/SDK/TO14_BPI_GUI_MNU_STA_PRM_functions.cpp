
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

// Function TO14_BPI_GUI_MNU_STA_PRM.TO14_BPI_GUI_MNU_STA_PRM_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuStatusSceneData    StatusData                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_STA_PRM_C::SetData(int CharacterID, const struct FMenuStatusSceneData& StatusData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_STA_PRM.TO14_BPI_GUI_MNU_STA_PRM_C.SetData");

	UTO14_BPI_GUI_MNU_STA_PRM_C_SetData_Params params;
	params.CharacterID = CharacterID;
	params.StatusData = StatusData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
