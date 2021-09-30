
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

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGaldCore
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            AddGald                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Loss                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DiffGald                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetGaldCore(const struct FModifiedText& Title, const struct FModifiedText& Text, int AddGald, int DefaultIndex, bool Loss, int DiffGald, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGaldCore");

	UBP_SystemWindow_C_OpenSysGetGaldCore_Params params;
	params.Title = Title;
	params.Text = Text;
	params.AddGald = AddGald;
	params.DefaultIndex = DefaultIndex;
	params.Loss = Loss;
	params.DiffGald = DiffGald;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGaldLoss
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Gald                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Loss                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GotGald                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetGaldLoss(int Gald, int DefaultIndex, bool Loss, int GotGald, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGaldLoss");

	UBP_SystemWindow_C_OpenSysGetGaldLoss_Params params;
	params.Gald = Gald;
	params.DefaultIndex = DefaultIndex;
	params.Loss = Loss;
	params.GotGald = GotGald;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.SysCloseImmidiate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_SysCloseImmidiate(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.SysCloseImmidiate");

	UBP_SystemWindow_C_SysCloseImmidiate_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.CloseGald
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_CloseGald(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.CloseGald");

	UBP_SystemWindow_C_CloseGald_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGald
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddGald                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetGald(int AddGald, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGald");

	UBP_SystemWindow_C_OpenSysGetGald_Params params;
	params.AddGald = AddGald;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysApplyResolution
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysApplyResolution(float Timer, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysApplyResolution");

	UBP_SystemWindow_C_OpenSysApplyResolution_Params params;
	params.Timer = Timer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysTimer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           TimerText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysTimer(const struct FModifiedText& Title, const struct FModifiedText& Text, const struct FModifiedText& TimerText, float Timer, int DefaultIndex, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysTimer");

	UBP_SystemWindow_C_OpenSysTimer_Params params;
	params.Title = Title;
	params.Text = Text;
	params.TimerText = TimerText;
	params.Timer = Timer;
	params.DefaultIndex = DefaultIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallBlock
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysInstallBlock(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallBlock");

	UBP_SystemWindow_C_OpenSysInstallBlock_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallMessageCore
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysInstallMessageCore(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallMessageCore");

	UBP_SystemWindow_C_OpenSysInstallMessageCore_Params params;
	params.Title = Title;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallMessage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysInstallMessage(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallMessage");

	UBP_SystemWindow_C_OpenSysInstallMessage_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetArts
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetArts(EArisePartyID Chara, class UObject* __WorldContext, TArray<struct FName>* ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetArts");

	UBP_SystemWindow_C_OpenSysGetArts_Params params;
	params.Chara = Chara;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsLabel != nullptr)
		*ArtsLabel = params.ArtsLabel;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysEulaPP
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPerPage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysEulaPP(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysEulaPP");

	UBP_SystemWindow_C_OpenSysEulaPP_Params params;
	params.Target = Target;
	params.Title = Title;
	params.Message = Message;
	params.DefaultIndex = DefaultIndex;
	params.NumPerPage = NumPerPage;
	params.EnableCancel = EnableCancel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysAutoSaveNotice
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysAutoSaveNotice(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysAutoSaveNotice");

	UBP_SystemWindow_C_OpenSysAutoSaveNotice_Params params;
	params.Title = Title;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemMultiCore
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSysWinItemData> ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetItemMultiCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList, TArray<struct FSysWinItemData>* ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemMultiCore");

	UBP_SystemWindow_C_OpenSysGetItemMultiCore_Params params;
	params.Target = Target;
	params.Title = Title;
	params.Message = Message;
	params.DefaultIndex = DefaultIndex;
	params.EnableCancel = EnableCancel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
	if (ItemData != nullptr)
		*ItemData = params.ItemData;
}


// Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResultPureCore
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_GetSysLastResultPureCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResultPureCore");

	UBP_SystemWindow_C_GetSysLastResultPureCore_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysMessageCore
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysMessageCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysMessageCore");

	UBP_SystemWindow_C_OpenSysMessageCore_Params params;
	params.Target = Target;
	params.Title = Title;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemCore
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetItemCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, const struct FString& ItemID, int ItemNum, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemCore");

	UBP_SystemWindow_C_OpenSysGetItemCore_Params params;
	params.Target = Target;
	params.Title = Title;
	params.Message = Message;
	params.ItemID = ItemID;
	params.ItemNum = ItemNum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsSysCloseCore
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsSysCloseCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, class UObject* __WorldContext, bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsSysCloseCore");

	UBP_SystemWindow_C_IsSysCloseCore_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysSelectCore
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPerPage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableDecideSE                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysSelectCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, bool EnableDecideSE, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysSelectCore");

	UBP_SystemWindow_C_OpenSysSelectCore_Params params;
	params.Target = Target;
	params.Title = Title;
	params.Message = Message;
	params.DefaultIndex = DefaultIndex;
	params.NumPerPage = NumPerPage;
	params.EnableCancel = EnableCancel;
	params.EnableDecideSE = EnableDecideSE;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemMulti
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSysWinItemData> ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetItemMulti(const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList, TArray<struct FSysWinItemData>* ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemMulti");

	UBP_SystemWindow_C_OpenSysGetItemMulti_Params params;
	params.Title = Title;
	params.Message = Message;
	params.DefaultIndex = DefaultIndex;
	params.EnableCancel = EnableCancel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
	if (ItemData != nullptr)
		*ItemData = params.ItemData;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpWindowForBattle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenHelpWindowForBattle(const struct FString& HelpLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpWindowForBattle");

	UBP_SystemWindow_C_OpenHelpWindowForBattle_Params params;
	params.HelpLabel = HelpLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.GetFishingToolSelectWindow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_FIS_C* ResultWindow                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_GetFishingToolSelectWindow(class UObject* __WorldContext, class UTO14_BPI_GUI_MNU_FIS_C** ResultWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.GetFishingToolSelectWindow");

	UBP_SystemWindow_C_GetFishingToolSelectWindow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultWindow != nullptr)
		*ResultWindow = params.ResultWindow;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsCloseFishingToolSelect
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsCloseFishingToolSelect(class UObject* __WorldContext, bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsCloseFishingToolSelect");

	UBP_SystemWindow_C_IsCloseFishingToolSelect_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenFishingToolSelect
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishingAreaData        AreaData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenFishingToolSelect(const struct FFishingAreaData& AreaData, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenFishingToolSelect");

	UBP_SystemWindow_C_OpenFishingToolSelect_Params params;
	params.AreaData = AreaData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsMenuClosed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsMenuClosed(class UObject* __WorldContext, bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsMenuClosed");

	UBP_SystemWindow_C_IsMenuClosed_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenMenu(const struct FString& MenuID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenMenu");

	UBP_SystemWindow_C_OpenMenu_Params params;
	params.MenuID = MenuID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsSkipFromPause
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoSkip                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsSkipFromPause(class UObject* __WorldContext, bool* bDoSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsSkipFromPause");

	UBP_SystemWindow_C_IsSkipFromPause_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDoSkip != nullptr)
		*bDoSkip = params.bDoSkip;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsPauseClose
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsPauseClose(class UObject* __WorldContext, bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsPauseClose");

	UBP_SystemWindow_C_IsPauseClose_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function BP_SystemWindow.BP_SystemWindow_C.GetPauseWindow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_SYS_PAU_C* NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_GetPauseWindow(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_PAU_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.GetPauseWindow");

	UBP_SystemWindow_C_GetPauseWindow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSimplePause
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSimple                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSimplePause(bool IsSimple, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSimplePause");

	UBP_SystemWindow_C_OpenSimplePause_Params params;
	params.IsSimple = IsSimple;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.GetFishingResultWindow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_FIS_RESULT_C* ResultWindow                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_GetFishingResultWindow(class UObject* __WorldContext, class UTO14_BPI_GUI_MNU_FIS_RESULT_C** ResultWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.GetFishingResultWindow");

	UBP_SystemWindow_C_GetFishingResultWindow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultWindow != nullptr)
		*ResultWindow = params.ResultWindow;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsCloseFisingResult
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsCloseFisingResult(class UObject* __WorldContext, bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsCloseFisingResult");

	UBP_SystemWindow_C_IsCloseFisingResult_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenFishingResult
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenFishingResult(const struct FString& Label, int Size, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenFishingResult");

	UBP_SystemWindow_C_OpenFishingResult_Params params;
	params.Label = Label;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsAliasGetClose
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsAliasGetClose(class UObject* __WorldContext, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsAliasGetClose");

	UBP_SystemWindow_C_IsAliasGetClose_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_SystemWindow.BP_SystemWindow_C.ShowAliasGetEffect
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           EnableOpenMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_ShowAliasGetEffect(const struct FString& AliasID, bool EnableOpenMenu, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.ShowAliasGetEffect");

	UBP_SystemWindow_C_ShowAliasGetEffect_Params params;
	params.AliasID = AliasID;
	params.EnableOpenMenu = EnableOpenMenu;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.DebugOpenMemoWindow
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_DebugOpenMemoWindow(const struct FString& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.DebugOpenMemoWindow");

	UBP_SystemWindow_C_DebugOpenMemoWindow_Params params;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsHelpWindowClose
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsHelpWindowClose(class UObject* __WorldContext, bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsHelpWindowClose");

	UBP_SystemWindow_C_IsHelpWindowClose_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenHelpWindow(const struct FString& HelpLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpWindow");

	UBP_SystemWindow_C_OpenHelpWindow_Params params;
	params.HelpLabel = HelpLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpInner
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ShowBG                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_COL_HLP_TUT_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenHelpInner(const struct FString& HelpLabel, bool ShowBG, class UObject* __WorldContext, class UTO14_BPI_GUI_MNU_COL_HLP_TUT_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpInner");

	UBP_SystemWindow_C_OpenHelpInner_Params params;
	params.HelpLabel = HelpLabel;
	params.ShowBG = ShowBG;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_SystemWindow.BP_SystemWindow_C.ShowLocationName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_ShowLocationName(const struct FString& LevelName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.ShowLocationName");

	UBP_SystemWindow_C_ShowLocationName_Params params;
	params.LevelName = LevelName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenPauseMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedGameState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenPauseMenu(EAriseGameState ChangedGameState, bool Condition, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenPauseMenu");

	UBP_SystemWindow_C_OpenPauseMenu_Params params;
	params.ChangedGameState = ChangedGameState;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.ShowQuestClearEffect
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_ShowQuestClearEffect(const struct FString& QuestID, class UObject* __WorldContext, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.ShowQuestClearEffect");

	UBP_SystemWindow_C_ShowQuestClearEffect_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_SystemWindow.BP_SystemWindow_C.ShowQuestStartEffect
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_ShowQuestStartEffect(const struct FString& QuestID, class UObject* __WorldContext, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.ShowQuestStartEffect");

	UBP_SystemWindow_C_ShowQuestStartEffect_Params params;
	params.QuestID = QuestID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResultPure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_GetSysLastResultPure(class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResultPure");

	UBP_SystemWindow_C_GetSysLastResultPure_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysMessage(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysMessage");

	UBP_SystemWindow_C_OpenSysMessage_Params params;
	params.Title = Title;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysGetItem(const struct FModifiedText& Title, const struct FModifiedText& Message, const struct FString& ItemID, int ItemNum, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItem");

	UBP_SystemWindow_C_OpenSysGetItem_Params params;
	params.Title = Title;
	params.Message = Message;
	params.ItemID = ItemID;
	params.ItemNum = ItemNum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResult
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_GetSysLastResult(class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResult");

	UBP_SystemWindow_C_GetSysLastResult_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SystemWindow.BP_SystemWindow_C.IsSysClose
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_IsSysClose(class UObject* __WorldContext, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.IsSysClose");

	UBP_SystemWindow_C_IsSysClose_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_SystemWindow.BP_SystemWindow_C.GetSysWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_GetSysWidget(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.GetSysWidget");

	UBP_SystemWindow_C_GetSysWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysSelect
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModifiedText>   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPerPage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableDecideSE                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SystemWindow_C::STATIC_OpenSysSelect(const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, bool EnableDecideSE, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemWindow.BP_SystemWindow_C.OpenSysSelect");

	UBP_SystemWindow_C_OpenSysSelect_Params params;
	params.Title = Title;
	params.Message = Message;
	params.DefaultIndex = DefaultIndex;
	params.NumPerPage = NumPerPage;
	params.EnableCancel = EnableCancel;
	params.EnableDecideSE = EnableDecideSE;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
