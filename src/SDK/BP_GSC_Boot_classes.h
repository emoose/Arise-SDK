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

// BlueprintGeneratedClass BP_GSC_Boot.BP_GSC_Boot_C
// 0x0060 (0x00A8 - 0x0048)
class UBP_GSC_Boot_C : public UBootSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	int                                                DisplayId;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DisplayMax;                                               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUMG_BootScreen_C*                           UMGBootScreen;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AMenuPadProcess*>                     MenuPadProcesses;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_EmptyScene_C*                            EmptyScene;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ScreenDataTable;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABootSceneControllerEvent*                   GSC_BootEvent;                                            // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BootEventAssetId;                                         // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartLoadBootEvent;                                      // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FName                                       GUI_InstanceManagerAsssetId;                              // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Boot.BP_GSC_Boot_C");
		return ptr;
	}


	void IsLoadedLogoTextures(bool* bLoaded);
	void StartLoadBootEvent();
	void PreloadLogoTexture(int LoadPriority);
	void RemoveAllMenuPad();
	void GotoLoginScene();
	void IsTriggerMenuPadProcesses(const struct FName& Key, int* ControllerId);
	void CreateAllMenuPad();
	void OnBootScreenDisplayAllEnd();
	void NextDisplay();
	void NewDisplay(int DisplayId);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Tick(float DeltaTime);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void StartLogo();
	void CreateScreenWidget();
	void OnScreenEnd(TEnumAsByte<ENM_BootScreenState> State);
	void StartLogin();
	void ExecuteUbergraph_BP_GSC_Boot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
