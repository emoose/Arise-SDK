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

// BlueprintGeneratedClass BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BTL_DatabaseHelperLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_DatabaseHelperLibrary.BP_BTL_DatabaseHelperLibrary_C");
		return ptr;
	}


	void STATIC_GetHitStatusRecord(const struct FName& Label, class UObject* __WorldContext, struct FBtlHitStatusRecord* OutRow, bool* Result);
	void STATIC_GetCurrentEncountDependenceUnitIds(class UObject* __WorldContext, TArray<struct FBtlUnitID>* DependenceList);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
