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

// Class NavimapTerrain.NavimapTerrainGroup
// 0x0020 (0x0348 - 0x0328)
class ANavimapTerrainGroup : public AActor
{
public:
	struct FString                                     OutputName;                                               // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class ANavimapTerrainLocator*>              Locators;                                                 // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavimapTerrain.NavimapTerrainGroup");
		return ptr;
	}

};


// Class NavimapTerrain.NavimapTerrainLocator
// 0x0010 (0x0338 - 0x0328)
class ANavimapTerrainLocator : public AActor
{
public:
	class USceneComponent*                             TransformComponent;                                       // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ArrowComponent;                                           // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavimapTerrain.NavimapTerrainLocator");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
