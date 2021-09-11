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

// BlueprintGeneratedClass BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C
// 0x0010 (0x0338 - 0x0328)
class ABP_ArtifactLongChatManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C");
		return ptr;
	}


	void IsLongChatPlayed(const struct FString& InLongChatName, bool* OutPlayed);
	void UserConstructionScript();
	void ExecutePlayLongChat(class UPFDelegateArgs_EnableControl* InArgs);
	void AddDelegateTo(class APFDelegateManager* InDelegateManager, int InPriority);
	void ExecuteUbergraph_BP_ArtifactLongChatManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
