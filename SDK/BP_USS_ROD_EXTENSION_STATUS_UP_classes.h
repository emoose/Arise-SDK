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

// BlueprintGeneratedClass BP_USS_ROD_EXTENSION_STATUS_UP.BP_USS_ROD_EXTENSION_STATUS_UP_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_USS_ROD_EXTENSION_STATUS_UP_C : public UBP_USS_ROD_EXTENSION_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_ROD_EXTENSION_STATUS_UP.BP_USS_ROD_EXTENSION_STATUS_UP_C");
		return ptr;
	}


	void OnInitialized();
	void ExecuteUbergraph_BP_USS_ROD_EXTENSION_STATUS_UP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
