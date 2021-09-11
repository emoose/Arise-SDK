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

// WidgetBlueprintGeneratedClass UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C
// 0x0010 (0x0258 - 0x0248)
class UUMG_NavimapSimpleIcon_C : public UUMG_LayerIconBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UUMG_Navimap_IconImage_C*                    UMG_Navimap_IconImage;                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_NavimapSimpleIcon.UMG_NavimapSimpleIcon_C");
		return ptr;
	}


	void Initialize(const struct FLocatorInfo& LocatorInfo);
	void Construct();
	void SetIconIndex(unsigned char Index);
	void ExecuteUbergraph_UMG_NavimapSimpleIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
