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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C
// 0x00B1 (0x02B9 - 0x0208)
class UTO14_BPI_GUI_SYS_PF_INFO_BASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                VerticalBox_1;                                            // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                P_MaxTextCount;                                           // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                State;                                                    // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTO14_BPI_GUI_SYS_PF_INFO_C*>         InfoParts;                                                // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      P_WaitTime;                                               // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              WaitTime;                                                 // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InfoSizeY;                                                // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InfoMoveY;                                                // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShow;                                                   // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNextData;                                               // 0x024D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x024E(0x0002) MISSED OFFSET
	float                                              P_WaitTimeSpeedUP;                                        // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRPChara;                                                // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	struct FPopupInfoData                              RPCharaInfoData;                                          // 0x0258(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<EArisePartyID>                              RPCharaPartyIDs;                                          // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsPFHUD;                                                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C");
		return ptr;
	}


	void IsNotInfoParts(bool* OutIsNotInfoParts);
	void AddPopupCheck(bool* OutIsAdd);
	void IsRPCataInfo(bool* OutIsRPCata);
	void IsShowOptionCheck(EOption InOption, bool* IsShow);
	void GetGameState(bool* OutRislt, class UAriseGameStateController** OutGameState);
	void GetSkillPoint(const struct FBtlAliasData& InAliasData, int InSkillID, int* OutPoint);
	void RPCharaCheck();
	void SetRPCharaData(const struct FPopupInfoData& InPopupInfoData, TArray<EArisePartyID>* InPartyIDs);
	void IsInfoShowMax(bool* IsShowMax);
	void getIsShow(bool* OutIsShow);
	void GetWaitTime(float* OutWaitTime);
	void Refresh();
	void MovePos();
	void IsWateTime(float InWaitTime, float InDeltaTime, float* OutNewWaitTime, bool* OutIsWait);
	void NextState();
	void SetState(int InState);
	void AddInfo(const struct FPopupInfoData& InInfoData, bool* OutIsAdd);
	void Update(float InDeltaTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddRisePoint();
	void ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
