
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

// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APFBP_EnSym_SplineActor_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetOutlinerFolderPath");

	APFBP_EnSym_SplineActor_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APFBP_EnSym_SplineActor_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetOutlinerLabelName");

	APFBP_EnSym_SplineActor_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetAssetName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void APFBP_EnSym_SplineActor_C::GetAssetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetAssetName");

	APFBP_EnSym_SplineActor_C_GetAssetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.UpdateSplineNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_SplineActor_C::UpdateSplineNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.UpdateSplineNum");

	APFBP_EnSym_SplineActor_C_UpdateSplineNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetSplinePointTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<ESplinePointType>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TEnumAsByte<ESplinePointType>> APFBP_EnSym_SplineActor_C::GetSplinePointTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetSplinePointTypes");

	APFBP_EnSym_SplineActor_C_GetSplinePointTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetSplinePoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor)

void APFBP_EnSym_SplineActor_C::GetSplinePoints(TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.GetSplinePoints");

	APFBP_EnSym_SplineActor_C_GetSplinePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APFBP_EnSym_SplineActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.UserConstructionScript");

	APFBP_EnSym_SplineActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ImportSpline
// (Event, Public, BlueprintEvent)
// Parameters:
// class USplinePointAsset*       Asset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_SplineActor_C::ImportSpline(class USplinePointAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ImportSpline");

	APFBP_EnSym_SplineActor_C_ImportSpline_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ExportSpline
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 AssetName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void APFBP_EnSym_SplineActor_C::ExportSpline(const struct FString& AssetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ExportSpline");

	APFBP_EnSym_SplineActor_C_ExportSpline_Params params;
	params.AssetName = AssetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.CreateFigureSpline
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Points                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APFBP_EnSym_SplineActor_C::CreateFigureSpline(TArray<struct FVector> Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.CreateFigureSpline");

	APFBP_EnSym_SplineActor_C_CreateFigureSpline_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APFBP_EnSym_SplineActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ReceiveBeginPlay");

	APFBP_EnSym_SplineActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ExecuteUbergraph_PFBP_EnSym_SplineActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APFBP_EnSym_SplineActor_C::ExecuteUbergraph_PFBP_EnSym_SplineActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C.ExecuteUbergraph_PFBP_EnSym_SplineActor");

	APFBP_EnSym_SplineActor_C_ExecuteUbergraph_PFBP_EnSym_SplineActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
