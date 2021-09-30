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

// BlueprintGeneratedClass BP_SystemWindowReserved.BP_SystemWindowReserved_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SystemWindowReserved_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SystemWindowReserved.BP_SystemWindowReserved_C");
		return ptr;
	}


	void STATIC_OpenSysMessage_System(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext);
	void STATIC_SysForceDecide_System(class UObject* __WorldContext);
	void STATIC_GetSysLastResultPure_System(class UObject* __WorldContext, int* Result);
	void STATIC_IsSysClose_System(class UObject* __WorldContext, bool* NewParam);
	void STATIC_OpenSysSelect_System(const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection);
	void STATIC_GetSysWidget_System(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
