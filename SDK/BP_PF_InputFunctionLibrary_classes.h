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

// BlueprintGeneratedClass BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_InputFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InputFunctionLibrary.BP_PF_InputFunctionLibrary_C");
		return ptr;
	}


	void STATIC_PlayerInputCharacterAction(class APlayerController* PlayerController, class UObject* __WorldContext);
	void STATIC_GetPlayerMovementDirection(class APlayerController* PlayerController, class UObject* __WorldContext, struct FVector* Direction);
	void STATIC_PlayerInputCameraReset(class APlayerController* PlayerController, class UObject* __WorldContext);
	void STATIC_PlayerInputCameraChangeDistance(class APlayerController* PlayerController, class UObject* __WorldContext);
	void STATIC_PlayerInputCameraRotation(class APlayerController* PlayerController, float DeltaTime, class UObject* __WorldContext);
	void STATIC_PlayerInputInteraction(class APlayerController* PlayerController, class UObject* __WorldContext);
	void STATIC_PlayerInputJump(class APlayerController* PlayerController, class UObject* __WorldContext);
	void STATIC_PlayerInputMovement(class APlayerController* PlayerController, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
