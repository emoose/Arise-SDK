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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_ICN_MNU2.TO14_BPI_GUI_ICN_MNU2_C
// 0x000F (0x02C0 - 0x02B1)
class UTO14_BPI_GUI_ICN_MNU2_C : public UTO14_BPI_GUI_ICN_MNU_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_ICN_MNU2.TO14_BPI_GUI_ICN_MNU2_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
