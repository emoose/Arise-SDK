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

// BlueprintGeneratedClass TO14_UMGGenericInterface.TO14_UMGGenericInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_UMGGenericInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_UMGGenericInterface.TO14_UMGGenericInterface_C");
		return ptr;
	}


	void CanHide(bool* bCan);
	void RequestShowNowlodingIcon(bool bShow, bool bWhite);
	void If_IsShow(bool* bShow);
	void RequestShow(bool bShow);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
