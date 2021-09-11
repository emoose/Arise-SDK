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

// BlueprintGeneratedClass BPI_LongChatPlayer.BPI_LongChatPlayer_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_LongChatPlayer_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_LongChatPlayer.BPI_LongChatPlayer_C");
		return ptr;
	}


	void IF_OnStop();
	void IF_OnResume();
	void IF_OnPause();
	void IF_IsPlayerFinalize(bool* bEnd);
	void IF_Finalize();
	void IF_IsScriptEndEnd(bool* bEnd);
	void IF_Play(const struct FTransform& PlayTransform, const struct FString& PrecaptureBG);
	void IF_ChangePlayerCameraView(bool bChange);
	void IF_GetPlayOption();
	void IF_SetPlayParams(const struct FString& ScriptPath, const struct FString& StringParh, const struct FLongChatPlayArgs& Args);
	void IF_SetTickableWhenPaused(bool TickAble);
	void IF_SetLChatBuilder(class AActor* Builder);
	void IF_SetPlayTransform(const struct FTransform& Transform);
	void IF_GetWindowZOrder(int WinId, int* ZOrder);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
