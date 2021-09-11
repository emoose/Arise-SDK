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

// BlueprintGeneratedClass BP_MenuPFSupport.BP_MenuPFSupport_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MenuPFSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuPFSupport.BP_MenuPFSupport_C");
		return ptr;
	}


	void STATIC_BuildPartyTop(class UObject* __WorldContext);
	void STATIC_IsBuildPartyTop(class UObject* __WorldContext, bool* bIsBuilded);
	void STATIC_IsPartyTopMoving(class UObject* __WorldContext, bool* OutMoving);
	void STATIC_GetGaldMax(class UObject* __WorldContext, int* GaldMax);
	void STATIC_GetClampedGald(int Gald, class UObject* __WorldContext, int* ClampedGald);
	void STATIC_GetArenaSelectLabel(class UObject* __WorldContext, struct FString* Label);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
