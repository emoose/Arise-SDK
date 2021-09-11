
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

// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTO14_BPI_GUI_SYS_TTL_LICENSE_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.OnMouseWheel");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.SetPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InPage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::SetPage(int InPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.SetPage");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_SetPage_Params params;
	params.InPage = InPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InAddPage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::NextPage(int InAddPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.NextPage");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_NextPage_Params params;
	params.InAddPage = InAddPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.UpdatePad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProcess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::UpdatePad(class AMenuPadProcess* InPadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.UpdatePad");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_UpdatePad_Params params;
	params.InPadProcess = InPadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.RefreshBar
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::RefreshBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.RefreshBar");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_RefreshBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.CloseAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::CloseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.CloseAnim");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_CloseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.OpenAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::OpenAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.OpenAnim");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_OpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.Construct");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_LICENSE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL_LICENSE.TO14_BPI_GUI_SYS_TTL_LICENSE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE");

	UTO14_BPI_GUI_SYS_TTL_LICENSE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
