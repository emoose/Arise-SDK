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

// Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadConfigOverridePictureID
struct UBP_ConfigSupport_C_GetPadConfigOverridePictureID_Params
{
	EInputCategory                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EButtonIconSet                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EPadKeyId, struct FName>                      Map;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadConfigOverride
struct UBP_ConfigSupport_C_GetPadConfigOverride_Params
{
	EInputCategory                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EPadKeyId, struct FName>                      Map;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ConfigSupport.BP_ConfigSupport_C.GetInputConfigActionString
struct UBP_ConfigSupport_C_GetInputConfigActionString_Params
{
	struct FName                                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDictionaryText                             DictionaryText;                                           // (Parm, OutParm)
};

// Function BP_ConfigSupport.BP_ConfigSupport_C.GetPadKeyIds
struct UBP_ConfigSupport_C_GetPadKeyIds_Params
{
	EInputCategory                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EPadKeyId, struct FName>                      ButtonList1;                                              // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
