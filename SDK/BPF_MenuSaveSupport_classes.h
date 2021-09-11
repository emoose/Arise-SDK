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

// BlueprintGeneratedClass BPF_MenuSaveSupport.BPF_MenuSaveSupport_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_MenuSaveSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_MenuSaveSupport.BPF_MenuSaveSupport_C");
		return ptr;
	}


	void STATIC_GetLatestSlot(bool ExcludeAutoSave, class UObject* __WorldContext, int* Index);
	void STATIC_GetSaveHeaderData(int Slot, class UObject* __WorldContext, struct FMenuSaveHeaderData* NewParam);
	void STATIC_GetSaveDataNum(class UObject* __WorldContext, int* Num);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
