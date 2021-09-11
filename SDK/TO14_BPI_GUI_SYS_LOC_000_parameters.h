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

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetLogoMaterial
struct UTO14_BPI_GUI_SYS_LOC_000_C_SetLogoMaterial_Params
{
	class UMaterial*                                   Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetSubText
struct UTO14_BPI_GUI_SYS_LOC_000_C_SetSubText_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetMapName
struct UTO14_BPI_GUI_SYS_LOC_000_C_SetMapName_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.Construct
struct UTO14_BPI_GUI_SYS_LOC_000_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.Tick
struct UTO14_BPI_GUI_SYS_LOC_000_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.AnimaStart
struct UTO14_BPI_GUI_SYS_LOC_000_C_AnimaStart_Params
{
};

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.AnimaEnd
struct UTO14_BPI_GUI_SYS_LOC_000_C_AnimaEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOC_000
struct UTO14_BPI_GUI_SYS_LOC_000_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LOC_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
