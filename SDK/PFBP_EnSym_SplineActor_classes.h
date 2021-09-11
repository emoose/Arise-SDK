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

// BlueprintGeneratedClass PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C
// 0x0028 (0x0368 - 0x0340)
class APFBP_EnSym_SplineActor_C : public APFEnSymSpline
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class USplineComponent*                            Spline;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsClosedLoop;                                             // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class USplinePointAsset*                           SplinePointAsset;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFBP_EnSym_SplineActor.PFBP_EnSym_SplineActor_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void GetAssetName(struct FString* Name);
	void UpdateSplineNum();
	TArray<TEnumAsByte<ESplinePointType>> GetSplinePointTypes();
	void GetSplinePoints(TArray<struct FVector>* Points);
	void UserConstructionScript();
	void ImportSpline(class USplinePointAsset* Asset);
	void ExportSpline(const struct FString& AssetName);
	void CreateFigureSpline(TArray<struct FVector> Points);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PFBP_EnSym_SplineActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
