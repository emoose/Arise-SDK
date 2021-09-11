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

// BlueprintGeneratedClass BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C
// 0x0040 (0x0388 - 0x0348)
class UBP_DEV_BtlStatusViewModelBase_C : public UBtlStatusViewModelBase
{
public:
	struct FScriptMulticastDelegate                    DevOnStrikeSwitchStandby;                                 // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnStrikeSwitchGaugeReset;                              // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnChangePlayer;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DevOnChangeTp;                                            // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DEV_BtlStatusViewModelBase.BP_DEV_BtlStatusViewModelBase_C");
		return ptr;
	}


	void DevIsUnknownHp(bool* Result);
	void DevIsUseArts(const struct FName& ArtsLabel, bool* IsUseable);
	void DevOnChangeTp__DelegateSignature();
	void DevOnChangePlayer__DelegateSignature();
	void DevOnStrikeSwitchGaugeReset__DelegateSignature();
	void DevOnStrikeSwitchStandby__DelegateSignature(bool bStandby, int OrderPattern);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
