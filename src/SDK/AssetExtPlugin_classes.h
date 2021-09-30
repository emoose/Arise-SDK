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

// Class AssetExtPlugin.AssetExtFunctionLibraray
// 0x0000 (0x0028 - 0x0028)
class UAssetExtFunctionLibraray : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetExtPlugin.AssetExtFunctionLibraray");
		return ptr;
	}


	void STATIC_UnloadClass_ReferenceArray(TArray<struct FSoftClassPath> ClassReferences);
	void STATIC_UnloadClass_Reference(const struct FSoftClassPath& ClassReference);
	void STATIC_UnloadClass_Array();
	void STATIC_UnloadClass();
	void STATIC_UnloadAssetsAll();
	void STATIC_UnloadAsset_Reference(const struct FSoftObjectPath& InReference);
	void STATIC_UnloadAsset_ObjectPath(const struct FSoftObjectPath& AssetPath);
	void STATIC_UnloadAsset_Array();
	void STATIC_UnloadAsset();
	void OnLoadedClass__DelegateSignature(class UClass* InLoadedAssetClass);
	void OnLoaded__DelegateSignature(class UObject* InLoadedAsset);
	bool STATIC_NewLoadClassAsync(int Priority, const struct FScriptDelegate& InOnLoaded);
	struct FSoftObjectPath STATIC_MakeObjectPath(const struct FString& Path);
	struct FSoftClassPath STATIC_MakeClassPath(const struct FString& Path);
	class UClass* STATIC_LoadClassSync_Reference(const struct FSoftClassPath& ClassReference);
	class UClass* STATIC_LoadClassSync();
	bool STATIC_LoadClassAsync_ReferenceArray(TArray<struct FSoftClassPath> ClassReferences, int Priority);
	bool STATIC_LoadClassAsync_Reference(const struct FSoftClassPath& ClassReference, int Priority, const struct FScriptDelegate& InOnLoaded);
	bool STATIC_LoadClassAsync_Array(int Priority);
	bool STATIC_LoadClassAsync(int Priority, const struct FScriptDelegate& InOnLoaded);
	class UObject* STATIC_LoadAssetSync_Reference(const struct FSoftObjectPath& AssetReference);
	class UObject* STATIC_LoadAssetSync();
	bool STATIC_LoadAssetAsync_Reference(const struct FSoftObjectPath& AssetReference, int Priority, const struct FScriptDelegate& InOnLoaded);
	bool STATIC_LoadAssetAsync_Array(int Priority);
	bool STATIC_LoadAssetAsync(int Priority, const struct FScriptDelegate& InOnLoaded);
	bool STATIC_IsClassLoaded_ReferenceArray(TArray<struct FSoftClassPath> ClassesReferences);
	bool STATIC_IsClassLoaded_Reference(const struct FSoftClassPath& ClassReference);
	bool STATIC_IsClassLoaded_Array();
	bool STATIC_IsClassLoaded();
	bool STATIC_IsAssetLoaded_Reference(const struct FSoftObjectPath& AssetReference);
	bool STATIC_IsAssetLoaded_Array();
	bool STATIC_IsAssetLoaded();
	class UClass* STATIC_GetClassPtr_Reference(const struct FSoftClassPath& ClassReference);
	class UObject* STATIC_GetAssetPtr_Reference(const struct FSoftObjectPath& AssetReference);
	struct FSoftClassPath STATIC_ConvertToStringClassReference(const struct FString& InLongPathname);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
