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

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.IsEndFinish
struct UBP_InfoIconComponent_C_IsEndFinish_Params
{
	bool                                               IsFinished;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetBillboardActor
struct UBP_InfoIconComponent_C_SetBillboardActor_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetBillboardLocation
struct UBP_InfoIconComponent_C_SetBillboardLocation_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.End
struct UBP_InfoIconComponent_C_End_Params
{
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.Stop
struct UBP_InfoIconComponent_C_Stop_Params
{
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.Play
struct UBP_InfoIconComponent_C_Play_Params
{
	bool                                               IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetIconType
struct UBP_InfoIconComponent_C_SetIconType_Params
{
	TEnumAsByte<ETO14_InfoIconType>                    IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.ReceiveTick
struct UBP_InfoIconComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.ExecuteUbergraph_BP_InfoIconComponent
struct UBP_InfoIconComponent_C_ExecuteUbergraph_BP_InfoIconComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
