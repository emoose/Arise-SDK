
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MasterHUD.MasterHUD_C.SetWorldScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMasterHUD_C::SetWorldScale(float Width, float Height, float Cx, float cy)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.SetWorldScale");

	AMasterHUD_C_SetWorldScale_Params params;
	params.Width = Width;
	params.Height = Height;
	params.Cx = Cx;
	params.cy = cy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.DrawDebugText3D
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location3D                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AMasterHUD_C::DrawDebugText3D(float X, float Y, const struct FString& Text, const struct FLinearColor& Color, const struct FVector& Location3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.DrawDebugText3D");

	AMasterHUD_C_DrawDebugText3D_Params params;
	params.X = X;
	params.Y = Y;
	params.Text = Text;
	params.Color = Color;
	params.Location3D = Location3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.Convert3Dto2D
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location3D                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMasterHUD_C::Convert3Dto2D(const struct FVector& Location3D, float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.Convert3Dto2D");

	AMasterHUD_C_Convert3Dto2D_Params params;
	params.Location3D = Location3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function MasterHUD.MasterHUD_C.DrawDebugTextFreePos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bCenter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMasterHUD_C::DrawDebugTextFreePos(float X, float Y, const struct FString& Text, const struct FLinearColor& Color, bool bCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.DrawDebugTextFreePos");

	AMasterHUD_C_DrawDebugTextFreePos_Params params;
	params.X = X;
	params.Y = Y;
	params.Text = Text;
	params.Color = Color;
	params.bCenter = bCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.TransformWorldToMinimap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMasterHUD_C::TransformWorldToMinimap(const struct FVector& InVec, float Cx, float cy, float Width, float Height, float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.TransformWorldToMinimap");

	AMasterHUD_C_TransformWorldToMinimap_Params params;
	params.InVec = InVec;
	params.Cx = Cx;
	params.cy = cy;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function MasterHUD.MasterHUD_C.DrawTextDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AMasterHUD_C::DrawTextDropShadow(float X, float Y, const struct FString& Text, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.DrawTextDropShadow");

	AMasterHUD_C_DrawTextDropShadow_Params params;
	params.X = X;
	params.Y = Y;
	params.Text = Text;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.DrawDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AMasterHUD_C::DrawDebugText(const struct FString& Text, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.DrawDebugText");

	AMasterHUD_C_DrawDebugText_Params params;
	params.Text = Text;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMasterHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.UserConstructionScript");

	AMasterHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int                            SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMasterHUD_C::ReceiveDrawHUD(int SizeX, int SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.ReceiveDrawHUD");

	AMasterHUD_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.ExecuteUbergraph_MasterHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMasterHUD_C::ExecuteUbergraph_MasterHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.ExecuteUbergraph_MasterHUD");

	AMasterHUD_C_ExecuteUbergraph_MasterHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.PreDrawEx__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMasterHUD_C::PreDrawEx__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.PreDrawEx__DelegateSignature");

	AMasterHUD_C_PreDrawEx__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterHUD.MasterHUD_C.DrawEX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMasterHUD_C::DrawEX__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterHUD.MasterHUD_C.DrawEX__DelegateSignature");

	AMasterHUD_C_DrawEX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
