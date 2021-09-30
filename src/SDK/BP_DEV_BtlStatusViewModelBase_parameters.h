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

// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevIsUnknownHp
struct UBP_DEV_BtlStatusViewModelBase_C_DevIsUnknownHp_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevIsUseArts
struct UBP_DEV_BtlStatusViewModelBase_C_DevIsUseArts_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnChangeTp__DelegateSignature
struct UBP_DEV_BtlStatusViewModelBase_C_DevOnChangeTp__DelegateSignature_Params
{
};

// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnChangePlayer__DelegateSignature
struct UBP_DEV_BtlStatusViewModelBase_C_DevOnChangePlayer__DelegateSignature_Params
{
};

// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnStrikeSwitchGaugeReset__DelegateSignature
struct UBP_DEV_BtlStatusViewModelBase_C_DevOnStrikeSwitchGaugeReset__DelegateSignature_Params
{
};

// Function BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C.DevOnStrikeSwitchStandby__DelegateSignature
struct UBP_DEV_BtlStatusViewModelBase_C_DevOnStrikeSwitchStandby__DelegateSignature_Params
{
	bool                                               bStandby;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OrderPattern;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
