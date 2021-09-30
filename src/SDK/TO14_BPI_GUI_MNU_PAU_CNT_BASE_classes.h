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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C
// 0x0010 (0x0218 - 0x0208)
class UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	int                                                FinishFlag;                                               // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AnimeStep;                                                // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C");
		return ptr;
	}


	void GetPlatformType(EGamePlatform* PlatformType);
	void IsFinish(int* IsFinish);
	void Initialize(bool* Dummy);
	void PadWork(class AMenuPadProcess* PadProcess, int* Result);
	void GetInitialCategory(EInputCategory* Category);
	void Init();
	void PadWorkCore(class AMenuPadProcess* InputPin, bool* Processed);
	void ViewClose();
	void ViewOpen();
	void SetKeyboardConfigText(EInputCategory Category, TArray<class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetList);
	void GetSelectedCategory(EInputCategory* Category);
	void SetPadConfigText(EInputCategory Category, TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap);
	void InitializeWidgetMap(TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap1, EButtonIconSet IconType, TArray<class UWidget*>* WidgetList);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
