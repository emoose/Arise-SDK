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

// Function MasterHUD.MasterHUD_C.SetWorldScale
struct AMasterHUD_C_SetWorldScale_Params
{
	float                                              Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.DrawDebugText3D
struct AMasterHUD_C_DrawDebugText3D_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location3D;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.Convert3Dto2D
struct AMasterHUD_C_Convert3Dto2D_Params
{
	struct FVector                                     Location3D;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.DrawDebugTextFreePos
struct AMasterHUD_C_DrawDebugTextFreePos_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bCenter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.TransformWorldToMinimap
struct AMasterHUD_C_TransformWorldToMinimap_Params
{
	struct FVector                                     InVec;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.DrawTextDropShadow
struct AMasterHUD_C_DrawTextDropShadow_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.DrawDebugText
struct AMasterHUD_C_DrawDebugText_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.UserConstructionScript
struct AMasterHUD_C_UserConstructionScript_Params
{
};

// Function MasterHUD.MasterHUD_C.ReceiveDrawHUD
struct AMasterHUD_C_ReceiveDrawHUD_Params
{
	int                                                SizeX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.ExecuteUbergraph_MasterHUD
struct AMasterHUD_C_ExecuteUbergraph_MasterHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterHUD.MasterHUD_C.PreDrawEx__DelegateSignature
struct AMasterHUD_C_PreDrawEx__DelegateSignature_Params
{
};

// Function MasterHUD.MasterHUD_C.DrawEX__DelegateSignature
struct AMasterHUD_C_DrawEX__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
