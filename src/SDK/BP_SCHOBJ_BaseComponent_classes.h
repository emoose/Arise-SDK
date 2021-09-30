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

// BlueprintGeneratedClass BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C
// 0x0009 (0x0231 - 0x0228)
class UBP_SCHOBJ_BaseComponent_C : public UShortChatObjBaseComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	EPFSCHObjDefine                                    DefineType;                                               // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SCHOBJ_BaseComponent.BP_SCHOBJ_BaseComponent_C");
		return ptr;
	}


	EPFSCHObjDefine GetDefine();
	struct FVector GetTargetLocation();
	void GetPFDelegateManager(class APFDelegateManager** Result);
	void GetInteractiveSize(float* Field, float* Dungeon, float* Town);
	bool GetShortChatDatabase();
	void OnLookAt_StartImpl(class AActor* Target, class AActor* PC);
	void ReceiveBeginPlay();
	void OnChangeStateBP(EAriseGameState ChangedState, bool NewState);
	void OnLookAt_LoopImpl(class AActor* PC);
	void OnPFDelegate(class UPFDelegateArgs_EnableControl* InArgs);
	void BindEvent();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_SCHOBJ_BaseComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
