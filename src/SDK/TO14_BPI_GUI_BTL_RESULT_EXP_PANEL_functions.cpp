
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

// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.MaxLevelMode
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::MaxLevelMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.MaxLevelMode");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_MaxLevelMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyAndAnimationHp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InWorkRecoveryHp               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::ApplyAndAnimationHp(int InWorkRecoveryHp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyAndAnimationHp");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ApplyAndAnimationHp_Params params;
	params.InWorkRecoveryHp = InWorkRecoveryHp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.CalcDiffExpValue
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  InPartyID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InLevel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InExp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextDiffExp                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DiffExp                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::CalcDiffExpValue(EArisePartyID InPartyID, int InLevel, int InExp, int* NextDiffExp, int* DiffExp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.CalcDiffExpValue");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_CalcDiffExpValue_Params params;
	params.InPartyID = InPartyID;
	params.InLevel = InLevel;
	params.InExp = InExp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextDiffExp != nullptr)
		*NextDiffExp = params.NextDiffExp;
	if (DiffExp != nullptr)
		*DiffExp = params.DiffExp;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetParameter_PcStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArisePlayerStatus      PCStatus                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::SetParameter_PcStatus(const struct FArisePlayerStatus& PCStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetParameter_PcStatus");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SetParameter_PcStatus_Params params;
	params.PCStatus = PCStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetPercent");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Exp                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseRP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RPNum                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HPMax                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::SetParameter(EArisePartyID PartyId, int Level, int Exp, bool bUseRP, int RPNum, int HP, int HPMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SetParameter");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SetParameter_Params params;
	params.PartyId = PartyId;
	params.Level = Level;
	params.Exp = Exp;
	params.bUseRP = bUseRP;
	params.RPNum = RPNum;
	params.HP = HP;
	params.HPMax = HPMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SkipLevelup
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::SkipLevelup()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.SkipLevelup");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_SkipLevelup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyAndAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InWorkTotalExp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::ApplyAndAnimation(int InWorkTotalExp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyAndAnimation");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ApplyAndAnimation_Params params;
	params.InWorkTotalExp = InWorkTotalExp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.LevelUp
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::LevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.LevelUp");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_LevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Initilize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  NewPartyId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BattlePrevLv                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BattlePrevExp                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GiveExp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseRP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RPNum                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HPMax                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecoveryHp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::Initilize(EArisePartyID NewPartyId, int BattlePrevLv, int BattlePrevExp, int GiveExp, bool bUseRP, int RPNum, int HP, int HPMax, int RecoveryHp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Initilize");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Initilize_Params params;
	params.NewPartyId = NewPartyId;
	params.BattlePrevLv = BattlePrevLv;
	params.BattlePrevExp = BattlePrevExp;
	params.GiveExp = GiveExp;
	params.bUseRP = bUseRP;
	params.RPNum = RPNum;
	params.HP = HP;
	params.HPMax = HPMax;
	params.RecoveryHp = RecoveryHp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Construct");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.OnGaugeAnimationFinish_Event
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::OnGaugeAnimationFinish_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.OnGaugeAnimationFinish_Event");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_OnGaugeAnimationFinish_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Destruct");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::ApplyPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ApplyPercent");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ApplyPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.Tick");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.PreConstruct");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.PlayStartAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWorkExpAnim                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorkHpAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::PlayStartAnim(bool bWorkExpAnim, bool bWorkHpAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.PlayStartAnim");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_PlayStartAnim_Params params;
	params.bWorkExpAnim = bWorkExpAnim;
	params.bWorkHpAnim = bWorkHpAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_RESULT_EXP_PANEL
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_RESULT_EXP_PANEL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_RESULT_EXP_PANEL");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.OnLevelupAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C::OnLevelupAnimationFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_RESULT_EXP_PANEL.TO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C.OnLevelupAnimationFinish__DelegateSignature");

	UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C_OnLevelupAnimationFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
