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

// BlueprintGeneratedClass BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C
// 0x0048 (0x0370 - 0x0328)
class ABP_LoadGameFromMenuScript_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_GSC_Field_C*                             GSC_Field_Object;                                         // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Reload_Map_Name;                                          // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Reload_Location_Name;                                     // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Current_Map_Name;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C");
		return ptr;
	}


	void UserConstructionScript();
	void Phase_Preload_Map();
	void Phase_Chara_Build();
	void Phase_Change_Map();
	void Phase_Quit();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LoadGameFromMenuScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
