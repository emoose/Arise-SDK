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

// BlueprintGeneratedClass BP_PF_InteractInfo_CharaActionBase.BP_PF_InteractInfo_CharaActionBase_C
// 0x0000 (0x0380 - 0x0380)
class ABP_PF_InteractInfo_CharaActionBase_C : public ABP_PF_InteractInfoBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractInfo_CharaActionBase.BP_PF_InteractInfo_CharaActionBase_C");
		return ptr;
	}


	void GetCPCost(int* Out);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
