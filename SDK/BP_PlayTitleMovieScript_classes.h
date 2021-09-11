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

// BlueprintGeneratedClass BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C
// 0x0009 (0x0389 - 0x0380)
class ABP_PlayTitleMovieScript_C : public ABP_GameStartScriptBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	bool                                               IsClose;                                                  // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C");
		return ptr;
	}


	void LoadMap();
	void GetScriptState(struct FString* CurrentState);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void «0¹0¿0à0¤0Ù0ó0È0_1();
	void «0¹0¿0à0¤0Ù0ó0È0_2();
	void ExecuteUbergraph_BP_PlayTitleMovieScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
