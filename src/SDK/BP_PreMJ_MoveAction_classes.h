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

// BlueprintGeneratedClass BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C
// 0x0027 (0x0448 - 0x0421)
class UBP_PreMJ_MoveAction_C : public UBP_GP_Script2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UMapLinkDatabase*                            RefMapLinkDB;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MoveRotation;                                             // 0x043C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C");
		return ptr;
	}


	void GetMoveRotationFromMaplinkRot(const struct FVector& MaplinkLoc, struct FRotator* MoveRotator);
	void GetMoveRotationFromMaplinkDB(const struct FString& MapLinkName, struct FRotator* MoveRotator);
	void Main(const struct FString& String);
	void ExecuteUbergraph_BP_PreMJ_MoveAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
