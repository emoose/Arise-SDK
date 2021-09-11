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

// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.GetPlatformType
struct UTO14_BPI_PauseMenuInterface_C_GetPlatformType_Params
{
	EGamePlatform                                      PlatformType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.IsFinish
struct UTO14_BPI_PauseMenuInterface_C_IsFinish_Params
{
	int                                                IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.PadWork
struct UTO14_BPI_PauseMenuInterface_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_PauseMenuInterface.TO14_BPI_PauseMenuInterface_C.Initialize
struct UTO14_BPI_PauseMenuInterface_C_Initialize_Params
{
	bool                                               Dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
