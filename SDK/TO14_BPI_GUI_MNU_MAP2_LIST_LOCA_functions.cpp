
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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.AddWidgetAndData
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClickableWidgetBase*    iWidget                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMapLocationData        LocationData                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           LocationHierarchy              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::AddWidgetAndData(class UClickableWidgetBase* iWidget, int UniqueId, const struct FMapLocationData& LocationData, bool LocationHierarchy, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.AddWidgetAndData");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_AddWidgetAndData_Params params;
	params.iWidget = iWidget;
	params.UniqueId = UniqueId;
	params.LocationData = LocationData;
	params.LocationHierarchy = LocationHierarchy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ClearWidgetAndData
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::ClearWidgetAndData(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ClearWidgetAndData");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_ClearWidgetAndData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetLocationDatas
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMapLocationData> LocationDatas                  (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::GetLocationDatas(TArray<struct FMapLocationData>* LocationDatas)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetLocationDatas");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetLocationDatas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationDatas != nullptr)
		*LocationDatas = params.LocationDatas;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.UpdateCacheQuestFromLocation
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         SubBeforeQuestActorIDs         (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         SubQuestActorIDs               (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         SubQuestDs                     (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::UpdateCacheQuestFromLocation(const struct FString& LocationName, TArray<struct FString>* SubBeforeQuestActorIDs, TArray<struct FString>* SubQuestActorIDs, TArray<struct FString>* SubQuestDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.UpdateCacheQuestFromLocation");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_UpdateCacheQuestFromLocation_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubBeforeQuestActorIDs != nullptr)
		*SubBeforeQuestActorIDs = params.SubBeforeQuestActorIDs;
	if (SubQuestActorIDs != nullptr)
		*SubQuestActorIDs = params.SubQuestActorIDs;
	if (SubQuestDs != nullptr)
		*SubQuestDs = params.SubQuestDs;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Term
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Term()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Term");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Term_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetLocaCache
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C* LocaCache                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::GetLocaCache(class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C** LocaCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetLocaCache");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetLocaCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocaCache != nullptr)
		*LocaCache = params.LocaCache;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindLocaCache
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C* LocaCache                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::BindLocaCache(class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C** LocaCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindLocaCache");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_BindLocaCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocaCache != nullptr)
		*LocaCache = params.LocaCache;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::IsActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsActive");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.FontOpenAnim
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::FontOpenAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.FontOpenAnim");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_FontOpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetStr
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_STR_C* str                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::GetStr(int Index, class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_STR_C** str)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetStr");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetStr_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (str != nullptr)
		*str = params.str;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindSelectEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnHovered                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::BindSelectEvent(const struct FScriptDelegate& OnHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindSelectEvent");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_BindSelectEvent_Params params;
	params.OnHovered = OnHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::IsOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsOpen");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Select
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Select(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Select");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Select_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Activate(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Activate");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Activate_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Decide
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Decide(int UniqueId, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Decide");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Decide_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindDecideEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDecide                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::BindDecideEvent(const struct FScriptDelegate& OnDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindDecideEvent");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_BindDecideEvent_Params params;
	params.OnDecide = OnDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Close");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Open");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ExecPad
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::ExecPad(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ExecPad");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_ExecPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Exec
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Exec(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Exec");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Exec_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsInitialized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Initialized                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::IsInitialized(bool* Initialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsInitialized");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Initialized != nullptr)
		*Initialized = params.Initialized;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetStrs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_STR_C*> Strs                           (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::GetStrs(TArray<class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_STR_C*>* Strs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetStrs");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetStrs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Strs != nullptr)
		*Strs = params.Strs;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnClickedStr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnClickedStr(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnClickedStr");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnClickedStr_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnHoveredStr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnHoveredStr(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnHoveredStr");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnHoveredStr_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnNpcPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPlacementFoundNpcPointCondition cond                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnNpcPoint(const struct FString& actorId, const struct FVector& Position, const struct FPlacementFoundNpcPointCondition& cond)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnNpcPoint");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnNpcPoint_Params params;
	params.actorId = actorId;
	params.Position = Position;
	params.cond = cond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnUpdateCacheQuestFromLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnUpdateCacheQuestFromLocation(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnUpdateCacheQuestFromLocation");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnUpdateCacheQuestFromLocation_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnRefreshed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnRefreshed(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnRefreshed");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnRefreshed_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Construct");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Destruct");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.PreConstruct");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnSelectEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHierarchy                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnSelectEvent__DelegateSignature(const struct FMapLocationData& Location, bool bHierarchy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnSelectEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnSelectEvent__DelegateSignature_Params params;
	params.Location = Location;
	params.bHierarchy = bHierarchy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnDecideEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHasHierarchy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C::OnDecideEvent__DelegateSignature(const struct FMapLocationData& Location, bool bHasHierarchy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnDecideEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnDecideEvent__DelegateSignature_Params params;
	params.Location = Location;
	params.bHasHierarchy = bHasHierarchy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
