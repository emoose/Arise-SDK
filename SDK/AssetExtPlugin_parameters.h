#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_ReferenceArray
struct UAssetExtFunctionLibraray_UnloadClass_ReferenceArray_Params
{
	TArray<struct FSoftClassPath>                      ClassReferences;                                          // (Parm, ZeroConstructor)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_Reference
struct UAssetExtFunctionLibraray_UnloadClass_Reference_Params
{
	struct FSoftClassPath                              ClassReference;                                           // (Parm)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass_Array
struct UAssetExtFunctionLibraray_UnloadClass_Array_Params
{
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadClass
struct UAssetExtFunctionLibraray_UnloadClass_Params
{
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAssetsAll
struct UAssetExtFunctionLibraray_UnloadAssetsAll_Params
{
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_Reference
struct UAssetExtFunctionLibraray_UnloadAsset_Reference_Params
{
	struct FSoftObjectPath                             InReference;                                              // (Parm)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_ObjectPath
struct UAssetExtFunctionLibraray_UnloadAsset_ObjectPath_Params
{
	struct FSoftObjectPath                             AssetPath;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset_Array
struct UAssetExtFunctionLibraray_UnloadAsset_Array_Params
{
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.UnloadAsset
struct UAssetExtFunctionLibraray_UnloadAsset_Params
{
};

// DelegateFunction AssetExtPlugin.AssetExtFunctionLibraray.OnLoadedClass__DelegateSignature
struct UAssetExtFunctionLibraray_OnLoadedClass__DelegateSignature_Params
{
	class UClass*                                      InLoadedAssetClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AssetExtPlugin.AssetExtFunctionLibraray.OnLoaded__DelegateSignature
struct UAssetExtFunctionLibraray_OnLoaded__DelegateSignature_Params
{
	class UObject*                                     InLoadedAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.NewLoadClassAsync
struct UAssetExtFunctionLibraray_NewLoadClassAsync_Params
{
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InOnLoaded;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.MakeObjectPath
struct UAssetExtFunctionLibraray_MakeObjectPath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FSoftObjectPath                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.MakeClassPath
struct UAssetExtFunctionLibraray_MakeClassPath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FSoftClassPath                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassSync_Reference
struct UAssetExtFunctionLibraray_LoadClassSync_Reference_Params
{
	struct FSoftClassPath                              ClassReference;                                           // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassSync
struct UAssetExtFunctionLibraray_LoadClassSync_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_ReferenceArray
struct UAssetExtFunctionLibraray_LoadClassAsync_ReferenceArray_Params
{
	TArray<struct FSoftClassPath>                      ClassReferences;                                          // (Parm, ZeroConstructor)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_Reference
struct UAssetExtFunctionLibraray_LoadClassAsync_Reference_Params
{
	struct FSoftClassPath                              ClassReference;                                           // (Parm)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InOnLoaded;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync_Array
struct UAssetExtFunctionLibraray_LoadClassAsync_Array_Params
{
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadClassAsync
struct UAssetExtFunctionLibraray_LoadClassAsync_Params
{
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InOnLoaded;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetSync_Reference
struct UAssetExtFunctionLibraray_LoadAssetSync_Reference_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetSync
struct UAssetExtFunctionLibraray_LoadAssetSync_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync_Reference
struct UAssetExtFunctionLibraray_LoadAssetAsync_Reference_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InOnLoaded;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync_Array
struct UAssetExtFunctionLibraray_LoadAssetAsync_Array_Params
{
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.LoadAssetAsync
struct UAssetExtFunctionLibraray_LoadAssetAsync_Params
{
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InOnLoaded;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_ReferenceArray
struct UAssetExtFunctionLibraray_IsClassLoaded_ReferenceArray_Params
{
	TArray<struct FSoftClassPath>                      ClassesReferences;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_Reference
struct UAssetExtFunctionLibraray_IsClassLoaded_Reference_Params
{
	struct FSoftClassPath                              ClassReference;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded_Array
struct UAssetExtFunctionLibraray_IsClassLoaded_Array_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.IsClassLoaded
struct UAssetExtFunctionLibraray_IsClassLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded_Reference
struct UAssetExtFunctionLibraray_IsAssetLoaded_Reference_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded_Array
struct UAssetExtFunctionLibraray_IsAssetLoaded_Array_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.IsAssetLoaded
struct UAssetExtFunctionLibraray_IsAssetLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.GetClassPtr_Reference
struct UAssetExtFunctionLibraray_GetClassPtr_Reference_Params
{
	struct FSoftClassPath                              ClassReference;                                           // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.GetAssetPtr_Reference
struct UAssetExtFunctionLibraray_GetAssetPtr_Reference_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetExtPlugin.AssetExtFunctionLibraray.ConvertToStringClassReference
struct UAssetExtFunctionLibraray_ConvertToStringClassReference_Params
{
	struct FString                                     InLongPathname;                                           // (Parm, ZeroConstructor)
	struct FSoftClassPath                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
