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

// BlueprintGeneratedClass BP_BtlDestructManager.BP_BtlDestructManager_C
// 0x0008 (0x0360 - 0x0358)
class ABP_BtlDestructManager_C : public ABtlDestructibleManagerActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlDestructManager.BP_BtlDestructManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDispersionDestruct(const struct FBtlDestructCache& Cache);
	void ExecuteUbergraph_BP_BtlDestructManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
