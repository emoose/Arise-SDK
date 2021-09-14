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

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.Received_Begin
struct UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_Received_Begin_Params
{
};

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.FadeOut_Complete
struct UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_FadeOut_Complete_Params
{
};

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnEndArts
struct UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_OnEndArts_Params
{
	struct FBtlArtsHandle                              ArtsHandle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.Received_EndPlay
struct UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_Received_EndPlay_Params
{
};

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnArtsRequest
struct UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_OnArtsRequest_Params
{
	class UBtlArtsQuery*                               ArtsQuery;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.OnNotAccept
struct UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_OnNotAccept_Params
{
	class UBtlActionQuery*                             ActionQuery;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_FLASH_RAID_FADE.BP_BTL_VTS_SYS_FLASH_RAID_FADE_C.ExecuteUbergraph_BP_BTL_VTS_SYS_FLASH_RAID_FADE
struct UBP_BTL_VTS_SYS_FLASH_RAID_FADE_C_ExecuteUbergraph_BP_BTL_VTS_SYS_FLASH_RAID_FADE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
