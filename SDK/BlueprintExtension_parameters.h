#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetYScale
struct UBPEXComponent_StringRender3D_SetYScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetXScale
struct UBPEXComponent_StringRender3D_SetXScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetWorldSize
struct UBPEXComponent_StringRender3D_SetWorldSize_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetStringColor
struct UBPEXComponent_StringRender3D_SetStringColor_Params
{
	struct FColor                                      Value;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetString
struct UBPEXComponent_StringRender3D_SetString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetHorizSpacingAdjust
struct UBPEXComponent_StringRender3D_SetHorizSpacingAdjust_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetHorizontalAlignment
struct UBPEXComponent_StringRender3D_SetHorizontalAlignment_Params
{
	EBPEX_HorizTextAligment                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.SetFont
struct UBPEXComponent_StringRender3D_SetFont_Params
{
	class UFont*                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.GetTextWorldSize
struct UBPEXComponent_StringRender3D_GetTextWorldSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_StringRender3D.GetTextLocalSize
struct UBPEXComponent_StringRender3D_GetTextLocalSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetYScale
struct UBPEXComponent_TextRender3D_SetYScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetXScale
struct UBPEXComponent_TextRender3D_SetXScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetWorldSize
struct UBPEXComponent_TextRender3D_SetWorldSize_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetTextColor
struct UBPEXComponent_TextRender3D_SetTextColor_Params
{
	struct FColor                                      Value;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetText
struct UBPEXComponent_TextRender3D_SetText_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetHorizSpacingAdjust
struct UBPEXComponent_TextRender3D_SetHorizSpacingAdjust_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetHorizontalAlignment
struct UBPEXComponent_TextRender3D_SetHorizontalAlignment_Params
{
	EBPEX_HorizTextAligment                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.SetFont
struct UBPEXComponent_TextRender3D_SetFont_Params
{
	class UFont*                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.K2_SetText
struct UBPEXComponent_TextRender3D_K2_SetText_Params
{
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.GetTextWorldSize
struct UBPEXComponent_TextRender3D_GetTextWorldSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXComponent_TextRender3D.GetTextLocalSize
struct UBPEXComponent_TextRender3D_GetTextLocalSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Array.ArrayFilterClasses_NotInheritanceCheck
struct UBPEXLibrary_Array_ArrayFilterClasses_NotInheritanceCheck_Params
{
	TArray<class UObject*>                             TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              FilterClasses;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UObject*>                             FilteredArray;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BlueprintExtension.BPEXLibrary_Array.ArrayFilterClasses_InheritanceCheck
struct UBPEXLibrary_Array_ArrayFilterClasses_InheritanceCheck_Params
{
	TArray<class UObject*>                             TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              FilterClasses;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UObject*>                             FilteredArray;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BlueprintExtension.BPEXLibrary_Array.ArrayContainsClass_NotInheritanceCheck
struct UBPEXLibrary_Array_ArrayContainsClass_NotInheritanceCheck_Params
{
	TArray<class UObject*>                             TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ClassToFind;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Array.ArrayContainsClass_InheritanceCheck
struct UBPEXLibrary_Array_ArrayContainsClass_InheritanceCheck_Params
{
	TArray<class UObject*>                             TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ClassToFind;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_DynamicDataTable.GetDataTableRowFromName
struct UBPEXLibrary_DynamicDataTable_GetDataTableRowFromName_Params
{
	class UDataTable*                                  DummyTable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DynamicTable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.FlushOrder
struct UBPEXLibrary_HUD_FlushOrder_Params
{
	class AHUD*                                        HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SizeX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawTextureSimple
struct UBPEXLibrary_HUD_DrawTextureSimple_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawTexture
struct UBPEXLibrary_HUD_DrawTexture_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   UV;                                                       // (Parm, IsPlainOldData)
	struct FVector2D                                   UVSize;                                                   // (Parm, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawText
struct UBPEXLibrary_HUD_DrawText_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FLinearColor                                StringColor;                                              // (Parm, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	class UFont*                                       Font;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawRect
struct UBPEXLibrary_HUD_DrawRect_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterialTriangle
struct UBPEXLibrary_HUD_DrawMaterialTriangle_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V0_Pos;                                                   // (Parm, IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // (Parm, IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // (Parm, IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // (Parm, IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // (Parm, IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // (Parm, IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // (Parm, IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // (Parm, IsPlainOldData)
	struct FLinearColor                                V2_Color;                                                 // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterialSimple
struct UBPEXLibrary_HUD_DrawMaterialSimple_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawMaterial
struct UBPEXLibrary_HUD_DrawMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   UV;                                                       // (Parm, IsPlainOldData)
	struct FVector2D                                   UVSize;                                                   // (Parm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_HUD.DrawLine
struct UBPEXLibrary_HUD_DrawLine_Params
{
	struct FVector2D                                   Start;                                                    // (Parm, IsPlainOldData)
	struct FVector2D                                   End;                                                      // (Parm, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Vector_Subtract_Assigin
struct UBPEXLibrary_Math_Vector_Subtract_Assigin_Params
{
	struct FVector                                     Target;                                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Vector_Multiply_Float_Assigin
struct UBPEXLibrary_Math_Vector_Multiply_Float_Assigin_Params
{
	struct FVector                                     Target;                                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Vector_Multiply_Assigin
struct UBPEXLibrary_Math_Vector_Multiply_Assigin_Params
{
	struct FVector                                     Target;                                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Vector_Divide_Float_Assigin
struct UBPEXLibrary_Math_Vector_Divide_Float_Assigin_Params
{
	struct FVector                                     Target;                                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Vector_Divide_Assigin
struct UBPEXLibrary_Math_Vector_Divide_Assigin_Params
{
	struct FVector                                     Target;                                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Vector_Add_Assigin
struct UBPEXLibrary_Math_Vector_Add_Assigin_Params
{
	struct FVector                                     Target;                                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Integer_Subtract_Assigin
struct UBPEXLibrary_Math_Integer_Subtract_Assigin_Params
{
	int                                                Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Integer_Multiply_Assigin
struct UBPEXLibrary_Math_Integer_Multiply_Assigin_Params
{
	int                                                Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Integer_Divide_Assigin
struct UBPEXLibrary_Math_Integer_Divide_Assigin_Params
{
	int                                                Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Integer_Countdown
struct UBPEXLibrary_Math_Integer_Countdown_Params
{
	int                                                Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                DownValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Integer_Add_Assigin
struct UBPEXLibrary_Math_Integer_Add_Assigin_Params
{
	int                                                Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Float_Subtract_Assigin
struct UBPEXLibrary_Math_Float_Subtract_Assigin_Params
{
	float                                              Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Float_Multiply_Assigin
struct UBPEXLibrary_Math_Float_Multiply_Assigin_Params
{
	float                                              Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Float_Divide_Assigin
struct UBPEXLibrary_Math_Float_Divide_Assigin_Params
{
	float                                              Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Float_Countdown
struct UBPEXLibrary_Math_Float_Countdown_Params
{
	float                                              Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DownValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Float_Add_Assigin
struct UBPEXLibrary_Math_Float_Add_Assigin_Params
{
	float                                              Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Byte_Subtract_Assigin
struct UBPEXLibrary_Math_Byte_Subtract_Assigin_Params
{
	unsigned char                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Byte_Multiply_Assigin
struct UBPEXLibrary_Math_Byte_Multiply_Assigin_Params
{
	unsigned char                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Byte_Divide_Assigin
struct UBPEXLibrary_Math_Byte_Divide_Assigin_Params
{
	unsigned char                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_Math.Byte_Add_Assigin
struct UBPEXLibrary_Math_Byte_Add_Assigin_Params
{
	unsigned char                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_String.Format
struct UBPEXLibrary_String_Format_Params
{
	struct FString                                     InPattern;                                                // (Parm, ZeroConstructor)
	TArray<struct FFormatStringArgument>               InArgs;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlueprintExtension.BPEXLibrary_System.PrintWarning
struct UBPEXLibrary_System_PrintWarning_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_System.PrintLog
struct UBPEXLibrary_System_PrintLog_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToConsole;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintExtension.BPEXLibrary_System.PrintError
struct UBPEXLibrary_System_PrintError_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
