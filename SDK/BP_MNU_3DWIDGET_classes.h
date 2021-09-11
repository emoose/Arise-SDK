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

// WidgetBlueprintGeneratedClass BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C
// 0x002C (0x0234 - 0x0208)
class UBP_MNU_3DWIDGET_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class ABP_MNU_3DWIDGET_BaseActor_C*                _3DWidgetActor;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      _3DWidgetActorClass;                                      // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCreatedWidget;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, BlueprintAssignable)
	float                                              LifeSpanWhenTerminate;                                    // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MNU_3DWIDGET.BP_MNU_3DWIDGET_C");
		return ptr;
	}


	void Get3DWidgetActor(class ABP_MNU_3DWIDGET_BaseActor_C** _3DWidgetActor);
	void GetWidgetComponent(class UWidgetComponent** WidgetComponent);
	void PlayAnimCloseActor();
	void PlayAnimOpenActor();
	void Terminate();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BP_MNU_3DWIDGET(int EntryPoint);
	void OnCreatedWidget__DelegateSignature(bool Success, class UUserWidget* UserWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
