
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

// Function IconLayer_Quest.IconLayer_Quest_C.CheckIconType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LayerIconBase_C*    Icons                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Quest_C::CheckIconType(class UUMG_LayerIconBase_C* Icons, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.CheckIconType");

	UIconLayer_Quest_C_CheckIconType_Params params;
	params.Icons = Icons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function IconLayer_Quest.IconLayer_Quest_C.GetIconsFromTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EMapIconType>           IconTypes                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UUMG_LayerIconBase_C*> Icons                          (Parm, OutParm, ZeroConstructor)

void UIconLayer_Quest_C::GetIconsFromTypes(TArray<EMapIconType>* IconTypes, TArray<class UUMG_LayerIconBase_C*>* Icons)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.GetIconsFromTypes");

	UIconLayer_Quest_C_GetIconsFromTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconTypes != nullptr)
		*IconTypes = params.IconTypes;
	if (Icons != nullptr)
		*Icons = params.Icons;
}


// Function IconLayer_Quest.IconLayer_Quest_C.GetIconsFromType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUMG_LayerIconBase_C*> Icons                          (Parm, OutParm, ZeroConstructor)

void UIconLayer_Quest_C::GetIconsFromType(EMapIconType IconType, TArray<class UUMG_LayerIconBase_C*>* Icons)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.GetIconsFromType");

	UIconLayer_Quest_C_GetIconsFromType_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icons != nullptr)
		*Icons = params.Icons;
}


// Function IconLayer_Quest.IconLayer_Quest_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Quest_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.Refresh");

	UIconLayer_Quest_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Quest.IconLayer_Quest_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_Quest_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.Update");

	UIconLayer_Quest_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Quest.IconLayer_Quest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_Quest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.Construct");

	UIconLayer_Quest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Quest.IconLayer_Quest_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_Quest_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.EventUpdate");

	UIconLayer_Quest_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Quest.IconLayer_Quest_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Quest_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.EventInitialize");

	UIconLayer_Quest_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Quest.IconLayer_Quest_C.ExecuteUbergraph_IconLayer_Quest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Quest_C::ExecuteUbergraph_IconLayer_Quest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Quest.IconLayer_Quest_C.ExecuteUbergraph_IconLayer_Quest");

	UIconLayer_Quest_C_ExecuteUbergraph_IconLayer_Quest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
