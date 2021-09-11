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

// BlueprintGeneratedClass BP_AliasManager.BP_AliasManager_C
// 0x0038 (0x0360 - 0x0328)
class ABP_AliasManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCheckAlias;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOpenEvent;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseEvent;                                             // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AliasManager.BP_AliasManager_C");
		return ptr;
	}


	void GetLearnAlias(TArray<int>* OutIDs);
	void GetPlayableShortChatName(const struct FString& InLabel, struct FString* OutShortChatName, bool* OutFound);
	void IsCheckAlias(EAriseGameState InGameState, bool bInNewState, bool* Out);
	void UserConstructionScript();
	void ExecuteGetAlias(class UPFDelegateArgs_EnableControl* InArgs);
	void AddDelegateTo(class APFDelegateManager* InDelegateManager, int InPriority);
	void ExecuteUbergraph_BP_AliasManager(int EntryPoint);
	void OnCloseEvent__DelegateSignature();
	void OnOpenEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
