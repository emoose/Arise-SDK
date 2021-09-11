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

// BlueprintGeneratedClass BPF_LocationMapFunction.BPF_LocationMapFunction_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_LocationMapFunction_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_LocationMapFunction.BPF_LocationMapFunction_C");
		return ptr;
	}


	void STATIC_ChangedQuestGuidFlag(const struct FString& FlagName, class UObject* __WorldContext);
	void STATIC_RemoveLocator(const struct FString& LocatorName, class UObject* __WorldContext);
	void STATIC_AddLocator(const struct FString& LocatorName, EMapIconType IconType, const struct FVector& Location, class UObject* __WorldContext);
	void STATIC_GetLocationMapManager(class UObject* __WorldContext, class ABP_LocationMapManager_C** LocationMapManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
