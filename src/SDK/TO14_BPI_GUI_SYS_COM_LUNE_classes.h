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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C
// 0x0008 (0x0210 - 0x0208)
class UTO14_BPI_GUI_SYS_COM_LUNE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_COM_LUNE.TO14_BPI_GUI_SYS_COM_LUNE_C");
		return ptr;
	}


	void StopOpenAnima();
	void OpenAnimation();
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_SYS_COM_LUNE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
