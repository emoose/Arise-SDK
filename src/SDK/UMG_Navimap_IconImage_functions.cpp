
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

// Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.SetIconImageData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_Navimap_IconImage_C::SetIconImageData(EMapIconType RowName, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.SetIconImageData");

	UUMG_Navimap_IconImage_C_SetIconImageData_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.SetIconIndex
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Navimap_IconImage_C::SetIconIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.SetIconIndex");

	UUMG_Navimap_IconImage_C_SetIconIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Navimap_IconImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.Construct");

	UUMG_Navimap_IconImage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.ExecuteUbergraph_UMG_Navimap_IconImage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Navimap_IconImage_C::ExecuteUbergraph_UMG_Navimap_IconImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Navimap_IconImage.UMG_Navimap_IconImage_C.ExecuteUbergraph_UMG_Navimap_IconImage");

	UUMG_Navimap_IconImage_C_ExecuteUbergraph_UMG_Navimap_IconImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
