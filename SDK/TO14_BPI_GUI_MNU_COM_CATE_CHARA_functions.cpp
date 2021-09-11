
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.RequestSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::RequestSelectIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.RequestSelectIndex");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_RequestSelectIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChangeIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::PadWork(class AMenuPadProcess* PadProcess, int* ChangeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.PadWork");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeIndex != nullptr)
		*ChangeIndex = params.ChangeIndex;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    CharacterList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::Init(TArray<int>* CharacterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.Init");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterList != nullptr)
		*CharacterList = params.CharacterList;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IconNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::SetIconType(int Index, int IconNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetIconType");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_SetIconType_Params params;
	params.Index = Index;
	params.IconNo = IconNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::SetSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetSelect");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_SetSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetActiveIconNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IconNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::SetActiveIconNum(int IconNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.SetActiveIconNum");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_SetActiveIconNum_Params params;
	params.IconNum = IconNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.Construct");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.InitEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::InitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.InitEvent");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_InitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_CATE_CHARA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_CATE_CHARA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_CATE_CHARA.TO14_BPI_GUI_MNU_COM_CATE_CHARA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_CATE_CHARA");

	UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_CATE_CHARA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
