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

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Get3DWidgetActor
struct UBP_MNU_3DWIDGET_C_Get3DWidgetActor_Params
{
	class ABP_MNU_3DWIDGET_BaseActor_C*                _3DWidgetActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.GetWidgetComponent
struct UBP_MNU_3DWIDGET_C_GetWidgetComponent_Params
{
	class UWidgetComponent*                            WidgetComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.PlayAnimCloseActor
struct UBP_MNU_3DWIDGET_C_PlayAnimCloseActor_Params
{
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.PlayAnimOpenActor
struct UBP_MNU_3DWIDGET_C_PlayAnimOpenActor_Params
{
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Terminate
struct UBP_MNU_3DWIDGET_C_Terminate_Params
{
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Construct
struct UBP_MNU_3DWIDGET_C_Construct_Params
{
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.Tick
struct UBP_MNU_3DWIDGET_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.ExecuteUbergraph_BP_MNU_3DWIDGET
struct UBP_MNU_3DWIDGET_C_ExecuteUbergraph_BP_MNU_3DWIDGET_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C.OnCreatedWidget__DelegateSignature
struct UBP_MNU_3DWIDGET_C_OnCreatedWidget__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
