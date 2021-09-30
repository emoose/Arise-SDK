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

// BlueprintGeneratedClass BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_WorldTimeFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C");
		return ptr;
	}


	void STATIC_Deshitf24h(float inHour, class UObject* __WorldContext, float* outOur);
	void STATIC_Shitf24h(float inHour, class UObject* __WorldContext, float* outOur);
	void STATIC_SetBattleEndMapTimeSettings(class UObject* __WorldContext);
	void STATIC_SetBattleMapTimeSettings(const struct FString& MapName, class UObject* __WorldContext);
	void STATIC_SetMapTimeSettings(const struct FString& MapName, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
