
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

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsNotInfoParts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsNotInfoParts              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::IsNotInfoParts(bool* OutIsNotInfoParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsNotInfoParts");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsNotInfoParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsNotInfoParts != nullptr)
		*OutIsNotInfoParts = params.OutIsNotInfoParts;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddPopupCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsAdd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::AddPopupCheck(bool* OutIsAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddPopupCheck");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_AddPopupCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsAdd != nullptr)
		*OutIsAdd = params.OutIsAdd;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsRPCataInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsRPCata                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::IsRPCataInfo(bool* OutIsRPCata)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsRPCataInfo");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsRPCataInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsRPCata != nullptr)
		*OutIsRPCata = params.OutIsRPCata;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsShowOptionCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOption                        InOption                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::IsShowOptionCheck(EOption InOption, bool* IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsShowOptionCheck");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsShowOptionCheck_Params params;
	params.InOption = InOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsShow != nullptr)
		*IsShow = params.IsShow;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutRislt                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAriseGameStateController* OutGameState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::GetGameState(bool* OutRislt, class UAriseGameStateController** OutGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetGameState");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_GetGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRislt != nullptr)
		*OutRislt = params.OutRislt;
	if (OutGameState != nullptr)
		*OutGameState = params.OutGameState;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetSkillPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBtlAliasData           InAliasData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            InSkillID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::GetSkillPoint(const struct FBtlAliasData& InAliasData, int InSkillID, int* OutPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetSkillPoint");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_GetSkillPoint_Params params;
	params.InAliasData = InAliasData;
	params.InSkillID = InSkillID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPoint != nullptr)
		*OutPoint = params.OutPoint;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.RPCharaCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::RPCharaCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.RPCharaCheck");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_RPCharaCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.SetRPCharaData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPopupInfoData          InPopupInfoData                (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<EArisePartyID>          InPartyIDs                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::SetRPCharaData(const struct FPopupInfoData& InPopupInfoData, TArray<EArisePartyID>* InPartyIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.SetRPCharaData");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_SetRPCharaData_Params params;
	params.InPopupInfoData = InPopupInfoData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPartyIDs != nullptr)
		*InPartyIDs = params.InPartyIDs;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsInfoShowMax
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsShowMax                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::IsInfoShowMax(bool* IsShowMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsInfoShowMax");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsInfoShowMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsShowMax != nullptr)
		*IsShowMax = params.IsShowMax;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.getIsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsShow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::getIsShow(bool* OutIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.getIsShow");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_getIsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsShow != nullptr)
		*OutIsShow = params.OutIsShow;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetWaitTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OutWaitTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::GetWaitTime(float* OutWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetWaitTime");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_GetWaitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWaitTime != nullptr)
		*OutWaitTime = params.OutWaitTime;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Refresh");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.MovePos
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::MovePos()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.MovePos");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_MovePos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsWateTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InWaitTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutNewWaitTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsWait                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::IsWateTime(float InWaitTime, float InDeltaTime, float* OutNewWaitTime, bool* OutIsWait)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsWateTime");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsWateTime_Params params;
	params.InWaitTime = InWaitTime;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewWaitTime != nullptr)
		*OutNewWaitTime = params.OutNewWaitTime;
	if (OutIsWait != nullptr)
		*OutIsWait = params.OutIsWait;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.NextState
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::NextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.NextState");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_NextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::SetState(int InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.SetState");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_SetState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPopupInfoData          InInfoData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OutIsAdd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::AddInfo(const struct FPopupInfoData& InInfoData, bool* OutIsAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddInfo");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_AddInfo_Params params;
	params.InInfoData = InInfoData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsAdd != nullptr)
		*OutIsAdd = params.OutIsAdd;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::Update(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Update");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Update_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Construct");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Tick");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddRisePoint
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::AddRisePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddRisePoint");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_AddRisePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_INFO_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_BASE");

	UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
