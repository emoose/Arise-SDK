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

// BlueprintGeneratedClass BP_OpenMenuScript.BP_OpenMenuScript_C
// 0x0020 (0x0358 - 0x0338)
class ABP_OpenMenuScript_C : public ABP_GameScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	bool                                               IsClosed;                                                 // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FString                                     MenuID;                                                   // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OpenMenuScript.BP_OpenMenuScript_C");
		return ptr;
	}


	void GetScriptState(struct FString* CurrentState);
	void GetScriptName(struct FString* MyName);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OpenMenu(const struct FString& MenuID);
	void ExecuteUbergraph_BP_OpenMenuScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
