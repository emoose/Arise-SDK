
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

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetYScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_StringRender3D::SetYScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetYScale");

	UBPEXComponent_StringRender3D_SetYScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.SetXScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_StringRender3D::SetXScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetXScale");

	UBPEXComponent_StringRender3D_SetXScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.SetWorldSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_StringRender3D::SetWorldSize(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetWorldSize");

	UBPEXComponent_StringRender3D_SetWorldSize_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.SetStringColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  Value                          (Parm, IsPlainOldData)

void UBPEXComponent_StringRender3D::SetStringColor(const struct FColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetStringColor");

	UBPEXComponent_StringRender3D_SetStringColor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBPEXComponent_StringRender3D::SetString(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetString");

	UBPEXComponent_StringRender3D_SetString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.SetHorizSpacingAdjust
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_StringRender3D::SetHorizSpacingAdjust(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetHorizSpacingAdjust");

	UBPEXComponent_StringRender3D_SetHorizSpacingAdjust_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBPEX_HorizTextAligment        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_StringRender3D::SetHorizontalAlignment(EBPEX_HorizTextAligment Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetHorizontalAlignment");

	UBPEXComponent_StringRender3D_SetHorizontalAlignment_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFont*                   Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_StringRender3D::SetFont(class UFont* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.SetFont");

	UBPEXComponent_StringRender3D_SetFont_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.GetTextWorldSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPEXComponent_StringRender3D::GetTextWorldSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.GetTextWorldSize");

	UBPEXComponent_StringRender3D_GetTextWorldSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXComponent_StringRender3D.GetTextLocalSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPEXComponent_StringRender3D::GetTextLocalSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_StringRender3D.GetTextLocalSize");

	UBPEXComponent_StringRender3D_GetTextLocalSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetYScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_TextRender3D::SetYScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetYScale");

	UBPEXComponent_TextRender3D_SetYScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetXScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_TextRender3D::SetXScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetXScale");

	UBPEXComponent_TextRender3D_SetXScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetWorldSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_TextRender3D::SetWorldSize(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetWorldSize");

	UBPEXComponent_TextRender3D_SetWorldSize_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetTextColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  Value                          (Parm, IsPlainOldData)

void UBPEXComponent_TextRender3D::SetTextColor(const struct FColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetTextColor");

	UBPEXComponent_TextRender3D_SetTextColor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBPEXComponent_TextRender3D::SetText(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetText");

	UBPEXComponent_TextRender3D_SetText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetHorizSpacingAdjust
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_TextRender3D::SetHorizSpacingAdjust(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetHorizSpacingAdjust");

	UBPEXComponent_TextRender3D_SetHorizSpacingAdjust_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBPEX_HorizTextAligment        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_TextRender3D::SetHorizontalAlignment(EBPEX_HorizTextAligment Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetHorizontalAlignment");

	UBPEXComponent_TextRender3D_SetHorizontalAlignment_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFont*                   Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXComponent_TextRender3D::SetFont(class UFont* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.SetFont");

	UBPEXComponent_TextRender3D_SetFont_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.K2_SetText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UBPEXComponent_TextRender3D::K2_SetText(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.K2_SetText");

	UBPEXComponent_TextRender3D_K2_SetText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.GetTextWorldSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPEXComponent_TextRender3D::GetTextWorldSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.GetTextWorldSize");

	UBPEXComponent_TextRender3D_GetTextWorldSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXComponent_TextRender3D.GetTextLocalSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPEXComponent_TextRender3D::GetTextLocalSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXComponent_TextRender3D.GetTextLocalSize");

	UBPEXComponent_TextRender3D_GetTextLocalSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXLibrary_Array.ArrayFilterClasses_NotInheritanceCheck
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          FilterClasses                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UObject*>         FilteredArray                  (Parm, OutParm, ZeroConstructor)

void UBPEXLibrary_Array::STATIC_ArrayFilterClasses_NotInheritanceCheck(TArray<class UObject*> TargetArray, TArray<class UClass*> FilterClasses, TArray<class UObject*>* FilteredArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Array.ArrayFilterClasses_NotInheritanceCheck");

	UBPEXLibrary_Array_ArrayFilterClasses_NotInheritanceCheck_Params params;
	params.TargetArray = TargetArray;
	params.FilterClasses = FilterClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilteredArray != nullptr)
		*FilteredArray = params.FilteredArray;
}


// Function BlueprintExtension.BPEXLibrary_Array.ArrayFilterClasses_InheritanceCheck
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          FilterClasses                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UObject*>         FilteredArray                  (Parm, OutParm, ZeroConstructor)

void UBPEXLibrary_Array::STATIC_ArrayFilterClasses_InheritanceCheck(TArray<class UObject*> TargetArray, TArray<class UClass*> FilterClasses, TArray<class UObject*>* FilteredArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Array.ArrayFilterClasses_InheritanceCheck");

	UBPEXLibrary_Array_ArrayFilterClasses_InheritanceCheck_Params params;
	params.TargetArray = TargetArray;
	params.FilterClasses = FilterClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilteredArray != nullptr)
		*FilteredArray = params.FilteredArray;
}


// Function BlueprintExtension.BPEXLibrary_Array.ArrayContainsClass_NotInheritanceCheck
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ClassToFind                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPEXLibrary_Array::STATIC_ArrayContainsClass_NotInheritanceCheck(TArray<class UObject*> TargetArray, class UClass* ClassToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Array.ArrayContainsClass_NotInheritanceCheck");

	UBPEXLibrary_Array_ArrayContainsClass_NotInheritanceCheck_Params params;
	params.TargetArray = TargetArray;
	params.ClassToFind = ClassToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXLibrary_Array.ArrayContainsClass_InheritanceCheck
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ClassToFind                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPEXLibrary_Array::STATIC_ArrayContainsClass_InheritanceCheck(TArray<class UObject*> TargetArray, class UClass* ClassToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Array.ArrayContainsClass_InheritanceCheck");

	UBPEXLibrary_Array_ArrayContainsClass_InheritanceCheck_Params params;
	params.TargetArray = TargetArray;
	params.ClassToFind = ClassToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXLibrary_DynamicDataTable.GetDataTableRowFromName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              DummyTable                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DynamicTable                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPEXLibrary_DynamicDataTable::STATIC_GetDataTableRowFromName(class UDataTable* DummyTable, class UDataTable* DynamicTable, const struct FName& RowName, struct FTableRowBase* OutRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_DynamicDataTable.GetDataTableRowFromName");

	UBPEXLibrary_DynamicDataTable_GetDataTableRowFromName_Params params;
	params.DummyTable = DummyTable;
	params.DynamicTable = DynamicTable;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXLibrary_HUD.FlushOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AHUD*                    HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            SizeX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_FlushOrder(class AHUD* HUD, int SizeX, int SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.FlushOrder");

	UBPEXLibrary_HUD_FlushOrder_Params params;
	params.HUD = HUD;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawTextureSimple
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScalePosition                 (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawTextureSimple(class UTexture* Texture, const struct FVector2D& Position, float Scale, bool bScalePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawTextureSimple");

	UBPEXLibrary_HUD_DrawTextureSimple_Params params;
	params.Texture = Texture;
	params.Position = Position;
	params.Scale = Scale;
	params.bScalePosition = bScalePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawTexture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// struct FVector2D               UV                             (Parm, IsPlainOldData)
// struct FVector2D               UVSize                         (Parm, IsPlainOldData)
// struct FLinearColor            TintColor                      (Parm, IsPlainOldData)
// TEnumAsByte<EBlendMode>        BlendMode                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScalePosition                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               RotPivot                       (Parm, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawTexture(class UTexture* Texture, const struct FVector2D& Position, const struct FVector2D& Size, const struct FVector2D& UV, const struct FVector2D& UVSize, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawTexture");

	UBPEXLibrary_HUD_DrawTexture_Params params;
	params.Texture = Texture;
	params.Position = Position;
	params.Size = Size;
	params.UV = UV;
	params.UVSize = UVSize;
	params.TintColor = TintColor;
	params.BlendMode = BlendMode;
	params.Scale = Scale;
	params.bScalePosition = bScalePosition;
	params.Rotation = Rotation;
	params.RotPivot = RotPivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawText
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)
// struct FLinearColor            StringColor                    (Parm, IsPlainOldData)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// class UFont*                   Font                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScalePosition                 (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawText(const struct FString& String, const struct FLinearColor& StringColor, const struct FVector2D& Position, class UFont* Font, float Scale, bool bScalePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawText");

	UBPEXLibrary_HUD_DrawText_Params params;
	params.String = String;
	params.StringColor = StringColor;
	params.Position = Position;
	params.Font = Font;
	params.Scale = Scale;
	params.bScalePosition = bScalePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawRect
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawRect(const struct FVector2D& Position, const struct FVector2D& Size, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawRect");

	UBPEXLibrary_HUD_DrawRect_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterialTriangle
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               V0_Pos                         (Parm, IsPlainOldData)
// struct FVector2D               V1_Pos                         (Parm, IsPlainOldData)
// struct FVector2D               V2_Pos                         (Parm, IsPlainOldData)
// struct FVector2D               V0_UV                          (Parm, IsPlainOldData)
// struct FVector2D               V1_UV                          (Parm, IsPlainOldData)
// struct FVector2D               V2_UV                          (Parm, IsPlainOldData)
// struct FLinearColor            V0_Color                       (Parm, IsPlainOldData)
// struct FLinearColor            V1_Color                       (Parm, IsPlainOldData)
// struct FLinearColor            V2_Color                       (Parm, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawMaterialTriangle(class UMaterialInterface* Material, const struct FVector2D& V0_Pos, const struct FVector2D& V1_Pos, const struct FVector2D& V2_Pos, const struct FVector2D& V0_UV, const struct FVector2D& V1_UV, const struct FVector2D& V2_UV, const struct FLinearColor& V0_Color, const struct FLinearColor& V1_Color, const struct FLinearColor& V2_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterialTriangle");

	UBPEXLibrary_HUD_DrawMaterialTriangle_Params params;
	params.Material = Material;
	params.V0_Pos = V0_Pos;
	params.V1_Pos = V1_Pos;
	params.V2_Pos = V2_Pos;
	params.V0_UV = V0_UV;
	params.V1_UV = V1_UV;
	params.V2_UV = V2_UV;
	params.V0_Color = V0_Color;
	params.V1_Color = V1_Color;
	params.V2_Color = V2_Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterialSimple
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScalePosition                 (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawMaterialSimple(class UMaterialInterface* Material, const struct FVector2D& Position, const struct FVector2D& Size, float Scale, bool bScalePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterialSimple");

	UBPEXLibrary_HUD_DrawMaterialSimple_Params params;
	params.Material = Material;
	params.Position = Position;
	params.Size = Size;
	params.Scale = Scale;
	params.bScalePosition = bScalePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterial
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// struct FVector2D               UV                             (Parm, IsPlainOldData)
// struct FVector2D               UVSize                         (Parm, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScalePosition                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               RotPivot                       (Parm, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawMaterial(class UMaterialInterface* Material, const struct FVector2D& Position, const struct FVector2D& Size, const struct FVector2D& UV, const struct FVector2D& UVSize, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterial");

	UBPEXLibrary_HUD_DrawMaterial_Params params;
	params.Material = Material;
	params.Position = Position;
	params.Size = Size;
	params.UV = UV;
	params.UVSize = UVSize;
	params.Scale = Scale;
	params.bScalePosition = bScalePosition;
	params.Rotation = Rotation;
	params.RotPivot = RotPivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_HUD.DrawLine
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Start                          (Parm, IsPlainOldData)
// struct FVector2D               End                            (Parm, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)

void UBPEXLibrary_HUD::STATIC_DrawLine(const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_HUD.DrawLine");

	UBPEXLibrary_HUD_DrawLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_Math.Vector_Subtract_Assigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Target                         (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Vector_Subtract_Assigin(const struct FVector& Value, struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Vector_Subtract_Assigin");

	UBPEXLibrary_Math_Vector_Subtract_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Vector_Multiply_Float_Assigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Target                         (Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Vector_Multiply_Float_Assigin(float Value, struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Vector_Multiply_Float_Assigin");

	UBPEXLibrary_Math_Vector_Multiply_Float_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Vector_Multiply_Assigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Target                         (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Vector_Multiply_Assigin(const struct FVector& Value, struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Vector_Multiply_Assigin");

	UBPEXLibrary_Math_Vector_Multiply_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Vector_Divide_Float_Assigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Target                         (Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Vector_Divide_Float_Assigin(float Value, struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Vector_Divide_Float_Assigin");

	UBPEXLibrary_Math_Vector_Divide_Float_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Vector_Divide_Assigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Target                         (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Vector_Divide_Assigin(const struct FVector& Value, struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Vector_Divide_Assigin");

	UBPEXLibrary_Math_Vector_Divide_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Vector_Add_Assigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Target                         (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Vector_Add_Assigin(const struct FVector& Value, struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Vector_Add_Assigin");

	UBPEXLibrary_Math_Vector_Add_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Integer_Subtract_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Integer_Subtract_Assigin(int Value, int* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Integer_Subtract_Assigin");

	UBPEXLibrary_Math_Integer_Subtract_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Integer_Multiply_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Integer_Multiply_Assigin(int Value, int* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Integer_Multiply_Assigin");

	UBPEXLibrary_Math_Integer_Multiply_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Integer_Divide_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Integer_Divide_Assigin(int Value, int* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Integer_Divide_Assigin");

	UBPEXLibrary_Math_Integer_Divide_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Integer_Countdown
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            DownValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPEXLibrary_Math::STATIC_Integer_Countdown(int DownValue, int* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Integer_Countdown");

	UBPEXLibrary_Math_Integer_Countdown_Params params;
	params.DownValue = DownValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXLibrary_Math.Integer_Add_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Integer_Add_Assigin(int Value, int* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Integer_Add_Assigin");

	UBPEXLibrary_Math_Integer_Add_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Float_Subtract_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Float_Subtract_Assigin(float Value, float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Float_Subtract_Assigin");

	UBPEXLibrary_Math_Float_Subtract_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Float_Multiply_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Float_Multiply_Assigin(float Value, float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Float_Multiply_Assigin");

	UBPEXLibrary_Math_Float_Multiply_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Float_Divide_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Float_Divide_Assigin(float Value, float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Float_Divide_Assigin");

	UBPEXLibrary_Math_Float_Divide_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Float_Countdown
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DownValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPEXLibrary_Math::STATIC_Float_Countdown(float DownValue, float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Float_Countdown");

	UBPEXLibrary_Math_Float_Countdown_Params params;
	params.DownValue = DownValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXLibrary_Math.Float_Add_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Float_Add_Assigin(float Value, float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Float_Add_Assigin");

	UBPEXLibrary_Math_Float_Add_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Byte_Subtract_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Byte_Subtract_Assigin(unsigned char Value, unsigned char* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Byte_Subtract_Assigin");

	UBPEXLibrary_Math_Byte_Subtract_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Byte_Multiply_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Byte_Multiply_Assigin(unsigned char Value, unsigned char* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Byte_Multiply_Assigin");

	UBPEXLibrary_Math_Byte_Multiply_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Byte_Divide_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Byte_Divide_Assigin(unsigned char Value, unsigned char* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Byte_Divide_Assigin");

	UBPEXLibrary_Math_Byte_Divide_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_Math.Byte_Add_Assigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_Math::STATIC_Byte_Add_Assigin(unsigned char Value, unsigned char* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_Math.Byte_Add_Assigin");

	UBPEXLibrary_Math_Byte_Add_Assigin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BlueprintExtension.BPEXLibrary_String.Format
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InPattern                      (Parm, ZeroConstructor)
// TArray<struct FFormatStringArgument> InArgs                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPEXLibrary_String::STATIC_Format(const struct FString& InPattern, TArray<struct FFormatStringArgument> InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_String.Format");

	UBPEXLibrary_String_Format_Params params;
	params.InPattern = InPattern;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintExtension.BPEXLibrary_System.PrintWarning
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_System::STATIC_PrintWarning(class UObject* WorldContextObject, const struct FString& Message, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_System.PrintWarning");

	UBPEXLibrary_System_PrintWarning_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Message = Message;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_System.PrintLog
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bPrintToScreen                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintToConsole                (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (ConstParm, Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_System::STATIC_PrintLog(class UObject* WorldContextObject, const struct FString& Message, bool bPrintToScreen, bool bPrintToConsole, const struct FLinearColor& Color, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_System.PrintLog");

	UBPEXLibrary_System_PrintLog_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Message = Message;
	params.bPrintToScreen = bPrintToScreen;
	params.bPrintToConsole = bPrintToConsole;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintExtension.BPEXLibrary_System.PrintError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UBPEXLibrary_System::STATIC_PrintError(class UObject* WorldContextObject, const struct FString& Message, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintExtension.BPEXLibrary_System.PrintError");

	UBPEXLibrary_System_PrintError_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Message = Message;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
