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

// Function IconLayer_PF.IconLayer_PF_C.IsOutOfBox
struct UIconLayer_PF_C_IsOutOfBox_Params
{
	struct FVector2D                                   Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FBox2D                                      Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   Output;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               IsOutLeft;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutTop;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutRight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutBottom;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_PF.IconLayer_PF_C.GetSafeScreenPosition
struct UIconLayer_PF_C_GetSafeScreenPosition_Params
{
	struct FVector                                     WorldPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue2;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function IconLayer_PF.IconLayer_PF_C.Refresh
struct UIconLayer_PF_C_Refresh_Params
{
};

// Function IconLayer_PF.IconLayer_PF_C.Update
struct UIconLayer_PF_C_Update_Params
{
};

// Function IconLayer_PF.IconLayer_PF_C.Construct
struct UIconLayer_PF_C_Construct_Params
{
};

// Function IconLayer_PF.IconLayer_PF_C.Tick
struct UIconLayer_PF_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_PF.IconLayer_PF_C.OnQuestUpdate
struct UIconLayer_PF_C_OnQuestUpdate_Params
{
};

// Function IconLayer_PF.IconLayer_PF_C.OnLoadNewLocation
struct UIconLayer_PF_C_OnLoadNewLocation_Params
{
};

// Function IconLayer_PF.IconLayer_PF_C.CustomEvent_1
struct UIconLayer_PF_C_CustomEvent_1_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_PF.IconLayer_PF_C.ExecuteUbergraph_IconLayer_PF
struct UIconLayer_PF_C_ExecuteUbergraph_IconLayer_PF_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_PF.IconLayer_PF_C.NewEventDispatcher_0__DelegateSignature
struct UIconLayer_PF_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
