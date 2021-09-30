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

// BlueprintGeneratedClass BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BTL_EncountHudInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C");
		return ptr;
	}


	void SetEncountInfo(TArray<struct FBtlEncountGroupParam> NewEncountArray);
	void ShowLastEncountRequest();
	void BattleStart();
	void ShowEncountRequest(TArray<struct FBtlEncountGroupParam> NewEncountArray);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
