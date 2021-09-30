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

// BlueprintGeneratedClass BP_BattleSceneInterface.BP_BattleSceneInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BattleSceneInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleSceneInterface.BP_BattleSceneInterface_C");
		return ptr;
	}


	void Battle_ForceTerminationBattleComplated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
