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

// WidgetBlueprintGeneratedClass TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C
// 0x009C (0x02DC - 0x0240)
class UTO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C : public UBtlCommonViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C*            BreakNotify01;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BP_BTL_DAMAGE_C*                       Damage01;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Root;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UTO14_BP_BTL_DAMAGE_C*>               DamageArray;                                              // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<class UTO14_BP_BTL_DAMAGE_C*>               UseDamageArray;                                           // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<class UTO14_BP_BTL_DAMAGE_C*>               UnuseDamageArray;                                         // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C*>    BreakNotifyArray;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C*>    UseBreakNotifyArray;                                      // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C*>    UnuseBreakNotifyArray;                                    // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	struct FDateTime                                   LoopStartNow;                                             // 0x02C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CreateDamageWidgetNum;                                    // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CrateDamageWorkMiliSeconds;                               // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bConstructComplated;                                      // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	int                                                CreateBreakNotifyWidgetNum;                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CreteBreakNotifyWorkMilliSeconds;                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BP_BTL_DAMAGE_ROOT_LAYOUT.TO14_BP_BTL_DAMAGE_ROOT_LAYOUT_C");
		return ptr;
	}


	bool IsUse();
	void CreateBreakNotifyWidget();
	void SetupCreatedWidget(class UWidget* Prototype, class UWidget* CreatedWidget);
	bool IsAsyncConstructComplated();
	void CreateDamageWidget();
	void BreakNotifyUIRequest(bool* IsValid, class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C** TO14_BreakNotify);
	void IsScreenRange(const struct FVector& ViewLocation, bool* Result);
	void DamageUIRequest(bool* IsValid, TScriptInterface<class UBattleDamageUIInterface>* TO14_Damage);
	void OpenDamage(int Number, bool IsEnemy, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, bool IsCoreBreak, bool IsBoostBreak, const struct FVector& Position);
	void OpenHeal(int Number, const struct FVector& Position);
	void OnEndDamageAnim(class UTO14_BP_BTL_DAMAGE_C* DamageUI);
	void Destruct();
	void BindEvent();
	void UnBindEvent();
	void OnChangeVisiblePreset(const struct FName& Preset);
	void OpenPoisonDamage(int Number, bool IsEnemy, const struct FVector& Position);
	void OnCoreBreak(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision);
	void OpenBoostBreakText(const struct FVector& Position);
	void OpenCoreBreak(const struct FVector& Position);
	void OnEndBreakNotify(class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C* BreakNotify);
	void OnBoostAttackBreak(const struct FBtlCollisionSignatureData& CollisionParam);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AsyncConstruct();
	void OnOpenBreakTextRaw(const struct FVector& Location);
	void ExecuteUbergraph_TO14_BP_BTL_DAMAGE_ROOT_LAYOUT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
