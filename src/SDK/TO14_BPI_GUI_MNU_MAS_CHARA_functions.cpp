
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

// Function TO14_BPI_GUI_MNU_MAS_CHARA.TO14_BPI_GUI_MNU_MAS_CHARA_C.SetCharacterID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_CHARA_C::SetCharacterID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CHARA.TO14_BPI_GUI_MNU_MAS_CHARA_C.SetCharacterID");

	UTO14_BPI_GUI_MNU_MAS_CHARA_C_SetCharacterID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_CHARA.TO14_BPI_GUI_MNU_MAS_CHARA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_CHARA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CHARA.TO14_BPI_GUI_MNU_MAS_CHARA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAS_CHARA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_CHARA.TO14_BPI_GUI_MNU_MAS_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_CHARA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_CHARA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_CHARA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CHARA.TO14_BPI_GUI_MNU_MAS_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_CHARA");

	UTO14_BPI_GUI_MNU_MAS_CHARA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_CHARA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
