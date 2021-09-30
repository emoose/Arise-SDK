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

// BlueprintGeneratedClass BP_PF_EnSym_BaseState.BP_PF_EnSym_BaseState_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PF_EnSym_BaseState_C : public UASState_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_EnSym_BaseState.BP_PF_EnSym_BaseState_C");
		return ptr;
	}


	void IsChangeState(const struct FName& InState, class UPFActorComponent* InComponent, bool* Result);
	void ChangeState(const struct FName& State, class UPFEncountSymbolComponent* Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
