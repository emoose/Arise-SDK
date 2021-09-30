
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

// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetFastTravelID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C::SetFastTravelID(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetFastTravelID");

	UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_SetFastTravelID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetImagePath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TextureFullPath                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C::SetImagePath(const struct FString& TextureFullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetImagePath");

	UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_SetImagePath_Params params;
	params.TextureFullPath = TextureFullPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetImageNo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            No                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C::SetImageNo(int No)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.SetImageNo");

	UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_SetImageNo_Params params;
	params.No = No;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.Tick");

	UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_FAST_IMAGE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_FAST_IMAGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_FAST_IMAGE.TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_FAST_IMAGE");

	UTO14_BPI_GUI_MNU_QUE_FAST_IMAGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_FAST_IMAGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
