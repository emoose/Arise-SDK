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

// WidgetBlueprintGeneratedClass UMG_DebugMemory.UMG_DebugMemory_C
// 0x0010 (0x0218 - 0x0208)
class UUMG_DebugMemory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	int                                                SelectTagIndex;                                           // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectSceneIndex;                                         // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DebugMemory.UMG_DebugMemory_C");
		return ptr;
	}


	void DrawGpuMemoryInfo(const struct FPaintContext& Context, const struct FVector2D& BasePos);
	void DrawMemoryInfo(const struct FPaintContext& Context, const struct FVector2D& BasePos);
	void DrawGraphTextureSize(const struct FPaintContext& Context, const struct FVector2D& BasePos, float Scale);
	void SelectTagByKeyboard();
	void ClampIndex(int In, int Max, int* Out);
	void DrawGraphWithTotal(const struct FPaintContext& Context, const struct FVector2D& BasePos, float Scale, const struct FVector2D& CursorPos, const struct FString& Caption, float TotalSize, TArray<struct FString>* TagArray, TArray<float>* AllocSizeArray);
	void DrawGraph(const struct FPaintContext& Context, const struct FVector2D& BasePos, float Scale, const struct FVector2D& CursorPos, int BaseColorIndex, TArray<struct FString>* TagArray, TArray<float>* AllocSizeArray, int* Selected);
	void DrawInfoText(const struct FPaintContext& Context, const struct FVector2D& pos, const struct FText& Text1, const struct FText& Text2);
	void InRect(const struct FVector2D& pos, const struct FVector2D& TopLeft, const struct FVector2D& Size, bool* InRect);
	void ToggleVisible();
	void GetColorFromIndex(int Index, struct FLinearColor* Color);
	void OnPaint(struct FPaintContext* Context);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_DebugMemory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
