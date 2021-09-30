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

// BlueprintGeneratedClass UMGMovieActor.UMGMovieActor_C
// 0x0048 (0x0418 - 0x03D0)
class AUMGMovieActor_C : public AMoviePlayerActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UMovieWidget_C*                              MovieWidget;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DestroyRequest;                                           // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UMaterialInstance*                           MovieMatrial;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadRequest;                                              // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FString                                     MoviePath;                                                // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnMovieStatusChanged;                                     // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UMGMovieActor.UMGMovieActor_C");
		return ptr;
	}


	void IsPlay(bool* IsPlay);
	void ActorRemove();
	void GetMovieMaterial(class UMaterialInstance** MaterialInstance, bool* Valid);
	void Reset();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateManaStatus(EManaComponentStatus Status);
	void SetupWidgetMaterial(class UMaterialInstance* Material, class UManaTexture* Texture);
	void ResetWidgetMaterial();
	void ExecuteUbergraph_UMGMovieActor(int EntryPoint);
	void OnMovieStatusChanged__DelegateSignature(EManaComponentStatus Status);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
