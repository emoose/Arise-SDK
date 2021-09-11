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

// BlueprintGeneratedClass RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class URegisterIcon_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RegisterIcon_FunctionLibrary.RegisterIcon_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_SpecifyIcon_StarShip(const struct FString& actorId, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_DebugIconLog(const struct FString& Text, class UObject* __WorldContext);
	void STATIC_SpecifyIcon_PitFall(const struct FString& actorId, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Ladder(const struct FString& actorId, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_NPC(const struct FString& actorId, bool Condition, const struct FPlacementFoundNpcPointCondition& NPC_Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_MapGimmick(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Cooking(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Fishing(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Camp(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_FastTravel(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Owl(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Treasure(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Breakable(const struct FString& InputPin, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_SpecifyIcon_Search(const struct FString& InputPin2, bool Condition, class UObject* __WorldContext, EMapIconType* Type);
	void STATIC_Register(const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_Cooking(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_StrongEnemy(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_Fishing(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_Camp(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_FastTravel(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_Owl(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_Breakable(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_Search(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_Treasure(const struct FString& LevelName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_Register_MapLink(const struct FString& LocationName, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
