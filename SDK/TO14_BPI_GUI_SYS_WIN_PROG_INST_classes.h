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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C
// 0x000C (0x0294 - 0x0288)
class UTO14_BPI_GUI_SYS_WIN_PROG_INST_C : public UTO14_BPI_GUI_SYS_WIN_PROGRESS_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (Transient, DuplicateTransient)
	float                                              TestValue_1;                                              // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_WIN_PROG_INST.TO14_BPI_GUI_SYS_WIN_PROG_INST_C");
		return ptr;
	}


	void PadWork(class AMenuPadProcess* PadProcess, bool* Handled);
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PROG_INST(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
