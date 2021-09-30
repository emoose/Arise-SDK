
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

// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetLogoMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial*               Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOC_000_C::SetLogoMaterial(class UMaterial* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetLogoMaterial");

	UTO14_BPI_GUI_SYS_LOC_000_C_SetLogoMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetSubText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_LOC_000_C::SetSubText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetSubText");

	UTO14_BPI_GUI_SYS_LOC_000_C_SetSubText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetMapName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_LOC_000_C::SetMapName(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.SetMapName");

	UTO14_BPI_GUI_SYS_LOC_000_C_SetMapName_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOC_000_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.Construct");

	UTO14_BPI_GUI_SYS_LOC_000_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOC_000_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.Tick");

	UTO14_BPI_GUI_SYS_LOC_000_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.AnimaStart
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOC_000_C::AnimaStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.AnimaStart");

	UTO14_BPI_GUI_SYS_LOC_000_C_AnimaStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.AnimaEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOC_000_C::AnimaEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.AnimaEnd");

	UTO14_BPI_GUI_SYS_LOC_000_C_AnimaEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOC_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOC_000_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_LOC_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOC_000.TO14_BPI_GUI_SYS_LOC_000_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOC_000");

	UTO14_BPI_GUI_SYS_LOC_000_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LOC_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
