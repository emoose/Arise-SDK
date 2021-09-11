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

// BlueprintGeneratedClass SubHUD.SubHUD_C
// 0x0018 (0x0430 - 0x0418)
class ASubHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMasterHUD_C*                                MasterHUD;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SubHUD.SubHUD_C");
		return ptr;
	}


	void RenderHUD();
	void UserConstructionScript();
	void RenderEvent();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SubHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
