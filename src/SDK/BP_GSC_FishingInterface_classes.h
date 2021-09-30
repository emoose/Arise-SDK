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

// BlueprintGeneratedClass BP_GSC_FishingInterface.BP_GSC_FishingInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GSC_FishingInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_FishingInterface.BP_GSC_FishingInterface_C");
		return ptr;
	}


	void GetFishingSceneController(TScriptInterface<class UBP_FishingSceneControllerInterface_C>* Object);
	void InitializeByFishingPoint(const TScriptInterface<class UBP_FishingPointInterface_C>& FishingPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
