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

// WidgetBlueprintGeneratedClass SymbolEnemyIconBase.SymbolEnemyIconBase_C
// 0x000C (0x0214 - 0x0208)
class USymbolEnemyIconBase_C : public UUserWidget
{
public:
	struct FVector                                     Position;                                                 // 0x0208(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SymbolEnemyIconBase.SymbolEnemyIconBase_C");
		return ptr;
	}


	void RefreshEvent();
	void DisappearState();
	void SetIsShow(bool InIsShow);
	void Initialize();
	void SetMistColor(const struct FLinearColor& InColor, bool InIsBig);
	void SetOut(bool IsOutLeft, bool IsOutTop, bool IsOutRight, bool IsOutBottom);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
