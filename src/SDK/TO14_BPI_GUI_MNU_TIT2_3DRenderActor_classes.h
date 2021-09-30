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

// BlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_3DRenderActor.TO14_BPI_GUI_MNU_TIT2_3DRenderActor_C
// 0x000C (0x03E8 - 0x03DC)
class ATO14_BPI_GUI_MNU_TIT2_3DRenderActor_C : public ABP_MNU_3DWIDGET_BaseActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_3DRenderActor.TO14_BPI_GUI_MNU_TIT2_3DRenderActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_3DRenderActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
