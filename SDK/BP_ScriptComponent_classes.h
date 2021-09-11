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

// BlueprintGeneratedClass BP_ScriptComponent.BP_ScriptComponent_C
// 0x0008 (0x0130 - 0x0128)
class UBP_ScriptComponent_C : public UAriseScriptComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0128(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScriptComponent.BP_ScriptComponent_C");
		return ptr;
	}


	void ReceiveEndScript();
	void ReceiveDamage();
	void ReceiveBreak();
	void ReceiveBeginScript();
	void ExecuteUbergraph_BP_ScriptComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
