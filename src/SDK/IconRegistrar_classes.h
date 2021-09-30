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

// BlueprintGeneratedClass IconRegistrar.IconRegistrar_C
// 0x0010 (0x0338 - 0x0328)
class AIconRegistrar_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IconRegistrar.IconRegistrar_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventRegisterSearch(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterBreakable(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterTreasure(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterOwl(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterFastTravel(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterCamp(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterFishingPoint(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterMapGimmick(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterNPC(const struct FString& actorId, const struct FVector& Position, const struct FPlacementFoundNpcPointCondition& cond);
	void EventRegisterPitFall(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void EventRegisterLadder(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void RegisterIcons(const struct FString& LevelName, const struct FString& LocationName);
	void EventRegisterStarShip(const struct FString& actorId, const struct FVector& Position, bool IsSatisfy);
	void ExecuteUbergraph_IconRegistrar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
