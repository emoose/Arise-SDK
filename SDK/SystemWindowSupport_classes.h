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

// BlueprintGeneratedClass SystemWindowSupport.SystemWindowSupport_C
// 0x0000 (0x0028 - 0x0028)
class USystemWindowSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SystemWindowSupport.SystemWindowSupport_C");
		return ptr;
	}


	int STATIC_GetLastResult(class UObject* __WorldContext);
	void STATIC_IsCloseSystemWindow(class UObject* __WorldContext, bool* IsClosed);
	void STATIC_OpenSelectWindow(const struct FModifiedText& Title, const struct FModifiedText& Message, TEnumAsByte<ESystemWindowAutoPosition> Position, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection);
	void STATIC_OpenMessageWindow(const struct FModifiedText& Title, const struct FModifiedText& Message, TEnumAsByte<ESystemWindowAutoPosition> Position, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
