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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C
// 0x003E (0x0246 - 0x0208)
class UTO14_BPI_GUI_SYS_PAU_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      BACK;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_PAU_C*                     TO14_BPI_GUI_MNU_PAU;                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FST_MenuGlobalData                          GlobalData;                                               // 0x0220(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class AMenuPadProcess*                             PadProcess;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AInputExtPlayerController*                   InputPC;                                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHoldMouse;                                              // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClose;                                                 // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOpened;                                                 // 0x023A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSimple;                                                // 0x023B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPauseMenuResult>                      PauseResult;                                              // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	int                                                CaptureWait;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedCapture;                                             // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCapture;                                              // 0x0245(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C");
		return ptr;
	}


	void IsSkip(bool* bDoSkip);
	void IsClose(bool* IsClose);
	void PadInit();
	void PadTerm();
	void EventClose();
	void EventOpen(bool IsSimple);
	void UpdateTick(float TickData);
	void SetupDelegate();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void EventOnClosed();
	void ExecuteUbergraph_TO14_BPI_GUI_SYS_PAU(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
