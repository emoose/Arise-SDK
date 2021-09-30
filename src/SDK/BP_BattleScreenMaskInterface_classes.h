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

// BlueprintGeneratedClass BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BattleScreenMaskInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C");
		return ptr;
	}


	void GetScreenMaskAnimState(EUBtlEncountEffectWidgetState* NewParam);
	void BindingStartAnimFinish(const struct FAriseSimpleEventData& Delegate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
