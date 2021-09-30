#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PostMenuSoundEvent
struct UMenuSEFunctionLibrary_C_PostMenuSoundEvent_Params
{
	struct FString                                     in_EventName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSEfromDB
struct UMenuSEFunctionLibrary_C_PlayMenuSEfromDB_Params
{
	struct FMenuSoundLabel                             MenuSoundLabel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSEByLabel
struct UMenuSEFunctionLibrary_C_PlayMenuSEByLabel_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuSEFunctionLibrary.MenuSEFunctionLibrary_C.PlayMenuSE
struct UMenuSEFunctionLibrary_C_PlayMenuSE_Params
{
	TEnumAsByte<EMENU_SE_LABEL>                        Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
