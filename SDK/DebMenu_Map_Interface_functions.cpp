
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

// Function DebMenu_Map_Interface.DebMenu_Map_Interface_C.SetEditLevelNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         EditLevelNames                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDebMenu_Map_Interface_C::SetEditLevelNames(TArray<struct FString> EditLevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebMenu_Map_Interface.DebMenu_Map_Interface_C.SetEditLevelNames");

	UDebMenu_Map_Interface_C_SetEditLevelNames_Params params;
	params.EditLevelNames = EditLevelNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
