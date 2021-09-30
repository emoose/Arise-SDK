
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

// Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon_Strong
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_Enemy_C::CreateIcon_Strong()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon_Strong");

	UIconLayer_Enemy_C_CreateIcon_Strong_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon_Nomal
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_Enemy_C::CreateIcon_Nomal()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon_Nomal");

	UIconLayer_Enemy_C_CreateIcon_Nomal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  LocatorType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUMG_LayerIconBase_C*> InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CreateCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Enemy_C::CreateIcon(unsigned char LocatorType, int CreateCount, TArray<class UUMG_LayerIconBase_C*>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.CreateIcon");

	UIconLayer_Enemy_C_CreateIcon_Params params;
	params.LocatorType = LocatorType;
	params.CreateCount = CreateCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_Enemy_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.Refresh");

	UIconLayer_Enemy_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_Enemy_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.Update");

	UIconLayer_Enemy_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_Enemy_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.Construct");

	UIconLayer_Enemy_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_Enemy_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.EventUpdate");

	UIconLayer_Enemy_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Enemy_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.EventInitialize");

	UIconLayer_Enemy_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_Enemy.IconLayer_Enemy_C.ExecuteUbergraph_IconLayer_Enemy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_Enemy_C::ExecuteUbergraph_IconLayer_Enemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_Enemy.IconLayer_Enemy_C.ExecuteUbergraph_IconLayer_Enemy");

	UIconLayer_Enemy_C_ExecuteUbergraph_IconLayer_Enemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
