
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

// Function IconLayerData.IconLayerData_C.SetMapIconTypesOnMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<unsigned char>          MapIconType                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayerData_C::SetMapIconTypesOnMap(TArray<unsigned char>* MapIconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayerData.IconLayerData_C.SetMapIconTypesOnMap");

	UIconLayerData_C_SetMapIconTypesOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapIconType != nullptr)
		*MapIconType = params.MapIconType;
}


// Function IconLayerData.IconLayerData_C.ClearMapIconTypesOnMap
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayerData_C::ClearMapIconTypesOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayerData.IconLayerData_C.ClearMapIconTypesOnMap");

	UIconLayerData_C_ClearMapIconTypesOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayerData.IconLayerData_C.AddMapIconTypeOnMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  MapIconType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayerData_C::AddMapIconTypeOnMap(unsigned char MapIconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayerData.IconLayerData_C.AddMapIconTypeOnMap");

	UIconLayerData_C_AddMapIconTypeOnMap_Params params;
	params.MapIconType = MapIconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayerData.IconLayerData_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNaviMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayerData_C::Initialize(bool IsNaviMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayerData.IconLayerData_C.Initialize");

	UIconLayerData_C_Initialize_Params params;
	params.IsNaviMap = IsNaviMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayerData.IconLayerData_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               CanvasSize                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ABP_AriseGamemode_C*     Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayerData_C::Update(const struct FVector2D& CanvasSize, class ABP_AriseGamemode_C* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayerData.IconLayerData_C.Update");

	UIconLayerData_C_Update_Params params;
	params.CanvasSize = CanvasSize;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayerData.IconLayerData_C.OnUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UIconLayerData_C::OnUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayerData.IconLayerData_C.OnUpdate__DelegateSignature");

	UIconLayerData_C_OnUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
