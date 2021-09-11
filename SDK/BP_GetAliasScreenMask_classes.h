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

// BlueprintGeneratedClass BP_GetAliasScreenMask.BP_GetAliasScreenMask_C
// 0x001F (0x0390 - 0x0371)
class ABP_GetAliasScreenMask_C : public ABP_DefaultScreenMask_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	bool                                               bChangedCustomMaterial;                                   // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class UMaterial*                                   CustomMaterial;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GetAliasScreenMask.BP_GetAliasScreenMask_C");
		return ptr;
	}


	class UMaterialInstanceDynamic* GetDynamicMaterialInstance();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetVisible(bool Visible);
	void DoScreenFade(bool FadeWhite, bool FadeOut, bool bInstantry);
	void ExecuteUbergraph_BP_GetAliasScreenMask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
