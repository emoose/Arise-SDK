
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

// Function TO14_BPI_GUI_MNU_PRM.TO14_BPI_GUI_MNU_PRM_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Base                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PRM_C::SetData(int Type, int Base, int Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PRM.TO14_BPI_GUI_MNU_PRM_C.SetData");

	UTO14_BPI_GUI_MNU_PRM_C_SetData_Params params;
	params.Type = Type;
	params.Base = Base;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PRM.TO14_BPI_GUI_MNU_PRM_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PRM_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PRM.TO14_BPI_GUI_MNU_PRM_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_PRM_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PRM.TO14_BPI_GUI_MNU_PRM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PRM
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PRM_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_PRM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PRM.TO14_BPI_GUI_MNU_PRM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PRM");

	UTO14_BPI_GUI_MNU_PRM_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PRM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
