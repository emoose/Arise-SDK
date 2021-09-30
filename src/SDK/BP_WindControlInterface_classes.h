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

// BlueprintGeneratedClass BP_WindControlInterface.BP_WindControlInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_WindControlInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WindControlInterface.BP_WindControlInterface_C");
		return ptr;
	}


	void GetWindDirectional(class UWindDirectionalSourceComponent** WindDirectional);
	void GetWindStrengthScale(float* StrengthScale);
	void SetWindStrengthScale(float StrengthScale);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
