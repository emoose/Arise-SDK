
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

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGageBoxSize_NoCurve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InGaugeNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InMaxGaugeNum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InMaxGaugeSize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetGageBoxSize_NoCurve(float InGaugeNum, float InMaxGaugeNum, float InMaxGaugeSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGageBoxSize_NoCurve");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetGageBoxSize_NoCurve_Params params;
	params.InGaugeNum = InGaugeNum;
	params.InMaxGaugeNum = InMaxGaugeNum;
	params.InMaxGaugeSize = InMaxGaugeSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           ModText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetNameText(const struct FModifiedText& ModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetNameText");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetNameText_Params params;
	params.ModText = ModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGageBoxSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InGaugeNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InMaxGaugeNum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InMaxGaugeSize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetGageBoxSize(float InGaugeNum, float InMaxGaugeNum, float InMaxGaugeSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGageBoxSize");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetGageBoxSize_Params params;
	params.InGaugeNum = InGaugeNum;
	params.InMaxGaugeNum = InMaxGaugeNum;
	params.InMaxGaugeSize = InMaxGaugeSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.UpdateTimeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::UpdateTimeAnimation(float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.UpdateTimeAnimation");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_UpdateTimeAnimation_Params params;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.InitStatusTimeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GaugeMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FinishTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::InitStatusTimeAnimation(int GaugeMax, float FinishTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.InitStatusTimeAnimation");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_InitStatusTimeAnimation_Params params;
	params.GaugeMax = GaugeMax;
	params.FinishTime = FinishTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetModText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           ModText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetModText(const struct FModifiedText& ModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetModText");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetModText_Params params;
	params.ModText = ModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeModText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           ModText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetChangeModText(const struct FModifiedText& ModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeModText");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetChangeModText_Params params;
	params.ModText = ModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.UpdateAnimatoin
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::UpdateAnimatoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.UpdateAnimatoin");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_UpdateAnimatoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.InitAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::InitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.InitAnimation");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_InitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetChangeNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeNum");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetChangeNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetNum");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetChangeText(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeText");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetChangeText_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GAUGE                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ChangeText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetParam(int Icon, float GAUGE, const struct FString& Text, const struct FString& ChangeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetParam");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetParam_Params params;
	params.Icon = Icon;
	params.GAUGE = GAUGE;
	params.Text = Text;
	params.ChangeText = ChangeText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetText(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetText");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetText_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGaugeScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GaugeScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetGaugeScale(float GaugeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGaugeScale");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetGaugeScale_Params params;
	params.GaugeScale = GaugeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetIconNo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TextSpace                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::SetIconNo(int IconNo, bool TextSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetIconNo");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetIconNo_Params params;
	params.IconNo = IconNo;
	params.TextSpace = TextSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.Tick");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA");

	UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
