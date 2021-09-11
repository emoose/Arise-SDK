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

// WidgetBlueprintGeneratedClass UMG_DebugAgingHUD.UMG_DebugAgingHUD_C
// 0x000C (0x0214 - 0x0208)
class UUMG_DebugAgingHUD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	int                                                BattleCount;                                              // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DebugAgingHUD.UMG_DebugAgingHUD_C");
		return ptr;
	}


	void GetTime(float Time, struct FText* Result);
	void OnPaint(struct FPaintContext* Context);
	void Construct();
	void ExecuteUbergraph_UMG_DebugAgingHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
