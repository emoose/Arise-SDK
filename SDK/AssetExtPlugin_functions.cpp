
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_ReferenceArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSoftClassPath>  ClassReferences                (Parm, ZeroConstructor)

void UAssetExtFunctionLibraray::STATIC_UnloadClass_ReferenceArray(TArray<struct FSoftClassPath> ClassReferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_ReferenceArray");

	UAssetExtFunctionLibraray_UnloadClass_ReferenceArray_Params params;
	params.ClassReferences = ClassReferences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath          ClassReference                 (Parm)

void UAssetExtFunctionLibraray::STATIC_UnloadClass_Reference(const struct FSoftClassPath& ClassReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_Reference");

	UAssetExtFunctionLibraray_UnloadClass_Reference_Params params;
	params.ClassReference = ClassReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_Array
// (Final, Native, Static, Public, BlueprintCallable)

void UAssetExtFunctionLibraray::STATIC_UnloadClass_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_Array");

	UAssetExtFunctionLibraray_UnloadClass_Array_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass
// (Final, Native, Static, Public, BlueprintCallable)

void UAssetExtFunctionLibraray::STATIC_UnloadClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass");

	UAssetExtFunctionLibraray_UnloadClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAssetsAll
// (Final, Native, Static, Public, BlueprintCallable)

void UAssetExtFunctionLibraray::STATIC_UnloadAssetsAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAssetsAll");

	UAssetExtFunctionLibraray_UnloadAssetsAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath         InReference                    (Parm)

void UAssetExtFunctionLibraray::STATIC_UnloadAsset_Reference(const struct FSoftObjectPath& InReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_Reference");

	UAssetExtFunctionLibraray_UnloadAsset_Reference_Params params;
	params.InReference = InReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_ObjectPath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath         AssetPath                      (ConstParm, Parm, OutParm, ReferenceParm)

void UAssetExtFunctionLibraray::STATIC_UnloadAsset_ObjectPath(const struct FSoftObjectPath& AssetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_ObjectPath");

	UAssetExtFunctionLibraray_UnloadAsset_ObjectPath_Params params;
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_Array
// (Final, Native, Static, Public, BlueprintCallable)

void UAssetExtFunctionLibraray::STATIC_UnloadAsset_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_Array");

	UAssetExtFunctionLibraray_UnloadAsset_Array_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset
// (Final, Native, Static, Public, BlueprintCallable)

void UAssetExtFunctionLibraray::STATIC_UnloadAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset");

	UAssetExtFunctionLibraray_UnloadAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AssetExtPlugin.AssetExtFunctionLibraray.OnLoadedClass__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UClass*                  InLoadedAssetClass             (Parm, ZeroConstructor, IsPlainOldData)

void UAssetExtFunctionLibraray::OnLoadedClass__DelegateSignature(class UClass* InLoadedAssetClass)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AssetExtPlugin.AssetExtFunctionLibraray.OnLoadedClass__DelegateSignature");

	UAssetExtFunctionLibraray_OnLoadedClass__DelegateSignature_Params params;
	params.InLoadedAssetClass = InLoadedAssetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AssetExtPlugin.AssetExtFunctionLibraray.OnLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                 InLoadedAsset                  (Parm, ZeroConstructor, IsPlainOldData)

void UAssetExtFunctionLibraray::OnLoaded__DelegateSignature(class UObject* InLoadedAsset)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AssetExtPlugin.AssetExtFunctionLibraray.OnLoaded__DelegateSignature");

	UAssetExtFunctionLibraray_OnLoaded__DelegateSignature_Params params;
	params.InLoadedAsset = InLoadedAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.NewLoadClassAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InOnLoaded                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_NewLoadClassAsync(int Priority, const struct FScriptDelegate& InOnLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.NewLoadClassAsync");

	UAssetExtFunctionLibraray_NewLoadClassAsync_Params params;
	params.Priority = Priority;
	params.InOnLoaded = InOnLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.MakeObjectPath
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FSoftObjectPath         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSoftObjectPath UAssetExtFunctionLibraray::STATIC_MakeObjectPath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.MakeObjectPath");

	UAssetExtFunctionLibraray_MakeObjectPath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.MakeClassPath
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FSoftClassPath          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSoftClassPath UAssetExtFunctionLibraray::STATIC_MakeClassPath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.MakeClassPath");

	UAssetExtFunctionLibraray_MakeClassPath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassSync_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath          ClassReference                 (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAssetExtFunctionLibraray::STATIC_LoadClassSync_Reference(const struct FSoftClassPath& ClassReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassSync_Reference");

	UAssetExtFunctionLibraray_LoadClassSync_Reference_Params params;
	params.ClassReference = ClassReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAssetExtFunctionLibraray::STATIC_LoadClassSync()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassSync");

	UAssetExtFunctionLibraray_LoadClassSync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_ReferenceArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSoftClassPath>  ClassReferences                (Parm, ZeroConstructor)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_LoadClassAsync_ReferenceArray(TArray<struct FSoftClassPath> ClassReferences, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_ReferenceArray");

	UAssetExtFunctionLibraray_LoadClassAsync_ReferenceArray_Params params;
	params.ClassReferences = ClassReferences;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_Reference
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath          ClassReference                 (Parm)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InOnLoaded                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_LoadClassAsync_Reference(const struct FSoftClassPath& ClassReference, int Priority, const struct FScriptDelegate& InOnLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_Reference");

	UAssetExtFunctionLibraray_LoadClassAsync_Reference_Params params;
	params.ClassReference = ClassReference;
	params.Priority = Priority;
	params.InOnLoaded = InOnLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_Array
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_LoadClassAsync_Array(int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_Array");

	UAssetExtFunctionLibraray_LoadClassAsync_Array_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InOnLoaded                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_LoadClassAsync(int Priority, const struct FScriptDelegate& InOnLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync");

	UAssetExtFunctionLibraray_LoadClassAsync_Params params;
	params.Priority = Priority;
	params.InOnLoaded = InOnLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetSync_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAssetExtFunctionLibraray::STATIC_LoadAssetSync_Reference(const struct FSoftObjectPath& AssetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetSync_Reference");

	UAssetExtFunctionLibraray_LoadAssetSync_Reference_Params params;
	params.AssetReference = AssetReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAssetExtFunctionLibraray::STATIC_LoadAssetSync()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetSync");

	UAssetExtFunctionLibraray_LoadAssetSync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync_Reference
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InOnLoaded                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_LoadAssetAsync_Reference(const struct FSoftObjectPath& AssetReference, int Priority, const struct FScriptDelegate& InOnLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync_Reference");

	UAssetExtFunctionLibraray_LoadAssetAsync_Reference_Params params;
	params.AssetReference = AssetReference;
	params.Priority = Priority;
	params.InOnLoaded = InOnLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync_Array
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_LoadAssetAsync_Array(int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync_Array");

	UAssetExtFunctionLibraray_LoadAssetAsync_Array_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InOnLoaded                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_LoadAssetAsync(int Priority, const struct FScriptDelegate& InOnLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync");

	UAssetExtFunctionLibraray_LoadAssetAsync_Params params;
	params.Priority = Priority;
	params.InOnLoaded = InOnLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_ReferenceArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSoftClassPath>  ClassesReferences              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_IsClassLoaded_ReferenceArray(TArray<struct FSoftClassPath> ClassesReferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_ReferenceArray");

	UAssetExtFunctionLibraray_IsClassLoaded_ReferenceArray_Params params;
	params.ClassesReferences = ClassesReferences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoftClassPath          ClassReference                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_IsClassLoaded_Reference(const struct FSoftClassPath& ClassReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_Reference");

	UAssetExtFunctionLibraray_IsClassLoaded_Reference_Params params;
	params.ClassReference = ClassReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_Array
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_IsClassLoaded_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_Array");

	UAssetExtFunctionLibraray_IsClassLoaded_Array_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_IsClassLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded");

	UAssetExtFunctionLibraray_IsClassLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_IsAssetLoaded_Reference(const struct FSoftObjectPath& AssetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded_Reference");

	UAssetExtFunctionLibraray_IsAssetLoaded_Reference_Params params;
	params.AssetReference = AssetReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded_Array
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_IsAssetLoaded_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded_Array");

	UAssetExtFunctionLibraray_IsAssetLoaded_Array_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetExtFunctionLibraray::STATIC_IsAssetLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded");

	UAssetExtFunctionLibraray_IsAssetLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.GetClassPtr_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoftClassPath          ClassReference                 (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAssetExtFunctionLibraray::STATIC_GetClassPtr_Reference(const struct FSoftClassPath& ClassReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.GetClassPtr_Reference");

	UAssetExtFunctionLibraray_GetClassPtr_Reference_Params params;
	params.ClassReference = ClassReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.GetAssetPtr_Reference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAssetExtFunctionLibraray::STATIC_GetAssetPtr_Reference(const struct FSoftObjectPath& AssetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.GetAssetPtr_Reference");

	UAssetExtFunctionLibraray_GetAssetPtr_Reference_Params params;
	params.AssetReference = AssetReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetExtPlugin.AssetExtFunctionLibraray.ConvertToStringClassReference
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InLongPathname                 (Parm, ZeroConstructor)
// struct FSoftClassPath          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSoftClassPath UAssetExtFunctionLibraray::STATIC_ConvertToStringClassReference(const struct FString& InLongPathname)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetExtPlugin.AssetExtFunctionLibraray.ConvertToStringClassReference");

	UAssetExtFunctionLibraray_ConvertToStringClassReference_Params params;
	params.InLongPathname = InLongPathname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
