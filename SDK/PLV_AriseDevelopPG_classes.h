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

// BlueprintGeneratedClass PLV_AriseDevelopPG.PLV_AriseDevelopPG_C
// 0x0010 (0x0340 - 0x0330)
class APLV_AriseDevelopPG_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            RefCameraComponet;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PLV_AriseDevelopPG.PLV_AriseDevelopPG_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_PLV_AriseDevelopPG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
