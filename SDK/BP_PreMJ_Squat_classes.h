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

// BlueprintGeneratedClass BP_PreMJ_Squat.BP_PreMJ_Squat_C
// 0x000F (0x0430 - 0x0421)
class UBP_PreMJ_Squat_C : public UBP_GP_Script2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PreMJ_Squat.BP_PreMJ_Squat_C");
		return ptr;
	}


	void Main(const struct FString& String);
	void ExecuteUbergraph_BP_PreMJ_Squat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
