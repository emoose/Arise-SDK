#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class BlueprintExtension.BPEXActor_DebugString3D
// 0x0008 (0x0330 - 0x0328)
class ABPEXActor_DebugString3D : public AActor
{
public:
	class UBPEXComponent_StringRender3D*               RenderComponent;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXActor_DebugString3D");
		return ptr;
	}

};


// Class BlueprintExtension.BPEXActor_DebugText3D
// 0x0008 (0x0330 - 0x0328)
class ABPEXActor_DebugText3D : public AActor
{
public:
	class UBPEXComponent_TextRender3D*                 TextRender3D;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXActor_DebugText3D");
		return ptr;
	}

};


// Class BlueprintExtension.BPEXComponent_StringRender3D
// 0x0050 (0x05D0 - 0x0580)
class UBPEXComponent_StringRender3D : public UPrimitiveComponent
{
public:
	struct FString                                     String;                                                   // 0x0580(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EBPEX_HorizTextAligment                            HorizontalAlignment;                                      // 0x0590(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EBPEX_VerticalTextAligment                         VerticalAlignment;                                        // 0x0591(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0592(0x0002) MISSED OFFSET
	struct FColor                                      StringColor;                                              // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              XScale;                                                   // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WorldSize;                                                // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InvDefaultSize;                                           // 0x05A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorizSpacingAdjust;                                       // 0x05A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlwaysRenderAsText : 1;                                  // 0x05AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x05B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  FontMaterials;                                            // 0x05B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXComponent_StringRender3D");
		return ptr;
	}


	void SetYScale(float Value);
	void SetXScale(float Value);
	void SetWorldSize(float Value);
	void SetStringColor(const struct FColor& Value);
	void SetString(const struct FString& Value);
	void SetHorizSpacingAdjust(float Value);
	void SetHorizontalAlignment(EBPEX_HorizTextAligment Value);
	void SetFont(class UFont* Value);
	struct FVector GetTextWorldSize();
	struct FVector GetTextLocalSize();
};


// Class BlueprintExtension.BPEXComponent_TextRender3D
// 0x0070 (0x05F0 - 0x0580)
class UBPEXComponent_TextRender3D : public UPrimitiveComponent
{
public:
	struct FText                                       Text;                                                     // 0x0580(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	EBPEX_HorizTextAligment                            HorizontalAlignment;                                      // 0x0598(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EBPEX_VerticalTextAligment                         VerticalAlignment;                                        // 0x0599(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x059A(0x0002) MISSED OFFSET
	struct FColor                                      TextColor;                                                // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              XScale;                                                   // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // 0x05A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WorldSize;                                                // 0x05A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InvDefaultSize;                                           // 0x05AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorizSpacingAdjust;                                       // 0x05B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlwaysRenderAsText : 1;                                  // 0x05B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05B5(0x0003) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x05B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  FontMaterials;                                            // 0x05C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x05D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXComponent_TextRender3D");
		return ptr;
	}


	void SetYScale(float Value);
	void SetXScale(float Value);
	void SetWorldSize(float Value);
	void SetTextColor(const struct FColor& Value);
	void SetText(const struct FString& Value);
	void SetHorizSpacingAdjust(float Value);
	void SetHorizontalAlignment(EBPEX_HorizTextAligment Value);
	void SetFont(class UFont* Value);
	void K2_SetText(const struct FText& Value);
	struct FVector GetTextWorldSize();
	struct FVector GetTextLocalSize();
};


// Class BlueprintExtension.BPEXLibrary_Array
// 0x0000 (0x0028 - 0x0028)
class UBPEXLibrary_Array : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXLibrary_Array");
		return ptr;
	}


	void STATIC_ArrayFilterClasses_NotInheritanceCheck(TArray<class UObject*> TargetArray, TArray<class UClass*> FilterClasses, TArray<class UObject*>* FilteredArray);
	void STATIC_ArrayFilterClasses_InheritanceCheck(TArray<class UObject*> TargetArray, TArray<class UClass*> FilterClasses, TArray<class UObject*>* FilteredArray);
	bool STATIC_ArrayContainsClass_NotInheritanceCheck(TArray<class UObject*> TargetArray, class UClass* ClassToFind);
	bool STATIC_ArrayContainsClass_InheritanceCheck(TArray<class UObject*> TargetArray, class UClass* ClassToFind);
};


// Class BlueprintExtension.BPEXLibrary_DynamicDataTable
// 0x0000 (0x0028 - 0x0028)
class UBPEXLibrary_DynamicDataTable : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXLibrary_DynamicDataTable");
		return ptr;
	}


	bool STATIC_GetDataTableRowFromName(class UDataTable* DummyTable, class UDataTable* DynamicTable, const struct FName& RowName, struct FTableRowBase* OutRow);
};


// Class BlueprintExtension.BPEXLibrary_HUD
// 0x0000 (0x0028 - 0x0028)
class UBPEXLibrary_HUD : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXLibrary_HUD");
		return ptr;
	}


	void STATIC_FlushOrder(class AHUD* HUD, int SizeX, int SizeY);
	void STATIC_DrawTextureSimple(class UTexture* Texture, const struct FVector2D& Position, float Scale, bool bScalePosition);
	void STATIC_DrawTexture(class UTexture* Texture, const struct FVector2D& Position, const struct FVector2D& Size, const struct FVector2D& UV, const struct FVector2D& UVSize, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void STATIC_DrawText(const struct FString& String, const struct FLinearColor& StringColor, const struct FVector2D& Position, class UFont* Font, float Scale, bool bScalePosition);
	void STATIC_DrawRect(const struct FVector2D& Position, const struct FVector2D& Size, const struct FLinearColor& Color);
	void STATIC_DrawMaterialTriangle(class UMaterialInterface* Material, const struct FVector2D& V0_Pos, const struct FVector2D& V1_Pos, const struct FVector2D& V2_Pos, const struct FVector2D& V0_UV, const struct FVector2D& V1_UV, const struct FVector2D& V2_UV, const struct FLinearColor& V0_Color, const struct FLinearColor& V1_Color, const struct FLinearColor& V2_Color);
	void STATIC_DrawMaterialSimple(class UMaterialInterface* Material, const struct FVector2D& Position, const struct FVector2D& Size, float Scale, bool bScalePosition);
	void STATIC_DrawMaterial(class UMaterialInterface* Material, const struct FVector2D& Position, const struct FVector2D& Size, const struct FVector2D& UV, const struct FVector2D& UVSize, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void STATIC_DrawLine(const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& Color);
};


// Class BlueprintExtension.BPEXLibrary_Math
// 0x0000 (0x0028 - 0x0028)
class UBPEXLibrary_Math : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXLibrary_Math");
		return ptr;
	}


	void STATIC_Vector_Subtract_Assigin(const struct FVector& Value, struct FVector* Target);
	void STATIC_Vector_Multiply_Float_Assigin(float Value, struct FVector* Target);
	void STATIC_Vector_Multiply_Assigin(const struct FVector& Value, struct FVector* Target);
	void STATIC_Vector_Divide_Float_Assigin(float Value, struct FVector* Target);
	void STATIC_Vector_Divide_Assigin(const struct FVector& Value, struct FVector* Target);
	void STATIC_Vector_Add_Assigin(const struct FVector& Value, struct FVector* Target);
	void STATIC_Integer_Subtract_Assigin(int Value, int* Target);
	void STATIC_Integer_Multiply_Assigin(int Value, int* Target);
	void STATIC_Integer_Divide_Assigin(int Value, int* Target);
	bool STATIC_Integer_Countdown(int DownValue, int* Target);
	void STATIC_Integer_Add_Assigin(int Value, int* Target);
	void STATIC_Float_Subtract_Assigin(float Value, float* Target);
	void STATIC_Float_Multiply_Assigin(float Value, float* Target);
	void STATIC_Float_Divide_Assigin(float Value, float* Target);
	bool STATIC_Float_Countdown(float DownValue, float* Target);
	void STATIC_Float_Add_Assigin(float Value, float* Target);
	void STATIC_Byte_Subtract_Assigin(unsigned char Value, unsigned char* Target);
	void STATIC_Byte_Multiply_Assigin(unsigned char Value, unsigned char* Target);
	void STATIC_Byte_Divide_Assigin(unsigned char Value, unsigned char* Target);
	void STATIC_Byte_Add_Assigin(unsigned char Value, unsigned char* Target);
};


// Class BlueprintExtension.BPEXLibrary_String
// 0x0000 (0x0028 - 0x0028)
class UBPEXLibrary_String : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXLibrary_String");
		return ptr;
	}


	struct FString STATIC_Format(const struct FString& InPattern, TArray<struct FFormatStringArgument> InArgs);
};


// Class BlueprintExtension.BPEXLibrary_System
// 0x0000 (0x0028 - 0x0028)
class UBPEXLibrary_System : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintExtension.BPEXLibrary_System");
		return ptr;
	}


	void STATIC_PrintWarning(class UObject* WorldContextObject, const struct FString& Message, float Duration);
	void STATIC_PrintLog(class UObject* WorldContextObject, const struct FString& Message, bool bPrintToScreen, bool bPrintToConsole, const struct FLinearColor& Color, float Duration);
	void STATIC_PrintError(class UObject* WorldContextObject, const struct FString& Message, float Duration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
