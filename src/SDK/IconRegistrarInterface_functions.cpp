
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

// Function IconRegistrarInterface.IconRegistrarInterface_C.RegisterIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconRegistrarInterface_C::RegisterIcons(const struct FString& LevelName, const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRegistrarInterface.IconRegistrarInterface_C.RegisterIcons");

	UIconRegistrarInterface_C_RegisterIcons_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
