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

// BlueprintGeneratedClass TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C
// 0x0039 (0x0415 - 0x03DC)
class ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C : public ABP_MNU_3DWIDGET_BaseActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Black;                                                    // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BackRoot;                                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFinish;                                                  // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FString                                     NextSceneID;                                              // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSelRemain;                                               // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClose;                                                   // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNext;                                                    // 0x0412(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpen;                                                    // 0x0413(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bComeback;                                                // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C");
		return ptr;
	}


	void Refresh();
	void SetBlackDarkness(float Darkness);
	void PlayAnimNextStayChara();
	void PlayAnimNextHideChara();
	void PlayAnimNextDefault();
	void PlayAnimCloseNoChara();
	void PlayAnimOpenNoChara();
	void PlayAnimBlackOut();
	void PlayAnimBlackIn();
	void PlayAnimComeback();
	void PlayAnimNext(const struct FString& MenuID);
	void IsNext(bool* IsClose);
	void IsClose(bool* IsClose);
	void Terminate();
	void UserConstructionScript();
	void OnChangeTopBG(bool bNext, bool OldShow, EMenuTopCharaType OldCharaType, bool NewShow, EMenuTopCharaType NewCharaType, float BackDarkness);
	void OnShowTopBG(bool bShow, EMenuTopCharaType ShowCharaType, float BackDarkness);
	void OnAnimClose();
	void OnAnimOpen();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
