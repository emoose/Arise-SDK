
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

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NaviMapMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapMesh.BP_NaviMapMesh_C.UserConstructionScript");

	ABP_NaviMapMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapMesh.BP_NaviMapMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NaviMapMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapMesh.BP_NaviMapMesh_C.ReceiveBeginPlay");

	ABP_NaviMapMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapMesh.BP_NaviMapMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapMesh_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapMesh.BP_NaviMapMesh_C.ReceiveTick");

	ABP_NaviMapMesh_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventOnLoadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_NaviMapMesh_C::EventOnLoadStart(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventOnLoadStart");

	ABP_NaviMapMesh_C_EventOnLoadStart_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventLoadEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapMesh_C::EventLoadEnd(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventLoadEnd");

	ABP_NaviMapMesh_C_EventLoadEnd_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapMesh.BP_NaviMapMesh_C.ExecuteUbergraph_BP_NaviMapMesh
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapMesh_C::ExecuteUbergraph_BP_NaviMapMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapMesh.BP_NaviMapMesh_C.ExecuteUbergraph_BP_NaviMapMesh");

	ABP_NaviMapMesh_C_ExecuteUbergraph_BP_NaviMapMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventMeshLoadEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapMesh_C::EventMeshLoadEnd__DelegateSignature(bool Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventMeshLoadEnd__DelegateSignature");

	ABP_NaviMapMesh_C_EventMeshLoadEnd__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
