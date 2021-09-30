
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

// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsIcon_ForDebug
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::UpdateAsIcon_ForDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsIcon_ForDebug");

	UIconLayer_FocusIcon_C_UpdateAsIcon_ForDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetMapLinkAttachTo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*            MapLinkTextAttachTo            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIconLayer_FocusIcon_C::GetMapLinkAttachTo(class UPanelWidget** MapLinkTextAttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetMapLinkAttachTo");

	UIconLayer_FocusIcon_C_GetMapLinkAttachTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLinkTextAttachTo != nullptr)
		*MapLinkTextAttachTo = params.MapLinkTextAttachTo;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.SetMapLinkAttachTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            MapLinkTextAttachTo            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIconLayer_FocusIcon_C::SetMapLinkAttachTo(class UPanelWidget* MapLinkTextAttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.SetMapLinkAttachTo");

	UIconLayer_FocusIcon_C_SetMapLinkAttachTo_Params params;
	params.MapLinkTextAttachTo = MapLinkTextAttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshGigant
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_FocusIcon_C::RefreshGigant(struct FString* LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshGigant");

	UIconLayer_FocusIcon_C_RefreshGigant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationName != nullptr)
		*LocationName = params.LocationName;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshFastTravelPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_FocusIcon_C::RefreshFastTravelPoint(struct FString* LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshFastTravelPoint");

	UIconLayer_FocusIcon_C_RefreshFastTravelPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationName != nullptr)
		*LocationName = params.LocationName;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshMapLink
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_FocusIcon_C::RefreshMapLink(struct FString* LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshMapLink");

	UIconLayer_FocusIcon_C_RefreshMapLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationName != nullptr)
		*LocationName = params.LocationName;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshFocusable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::RefreshFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.RefreshFocusable");

	UIconLayer_FocusIcon_C_RefreshFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetSpritLocatorName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SourceString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// unsigned char                  Both                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapIconType                   Override                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)

void UIconLayer_FocusIcon_C::GetSpritLocatorName(const struct FString& SourceString, unsigned char Both, EMapIconType Override, struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetSpritLocatorName");

	UIconLayer_FocusIcon_C_GetSpritLocatorName_Params params;
	params.SourceString = SourceString;
	params.Both = Both;
	params.Override = Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsText
// (Private, BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::UpdateAsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsText");

	UIconLayer_FocusIcon_C_UpdateAsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::UpdateAsIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.UpdateAsIcon");

	UIconLayer_FocusIcon_C_UpdateAsIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CheckContainLocatorInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            LocatorInfo                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Contain                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIconLayer_FocusIcon_C::CheckContainLocatorInfo(const struct FLocatorInfo& LocatorInfo, bool* Contain)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CheckContainLocatorInfo");

	UIconLayer_FocusIcon_C_CheckContainLocatorInfo_Params params;
	params.LocatorInfo = LocatorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Contain != nullptr)
		*Contain = params.Contain;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.ClearMapLinkText
// (Public, BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::ClearMapLinkText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.ClearMapLinkText");

	UIconLayer_FocusIcon_C_ClearMapLinkText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.AddMapLinkText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMapLinkInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUMG_LocamapText_C*      Text                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIconLayer_FocusIcon_C::AddMapLinkText(int Index, const struct FMapLinkInfo& Info, const struct FString& LocationName, bool* Success, class UUMG_LocamapText_C** Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.AddMapLinkText");

	UIconLayer_FocusIcon_C_AddMapLinkText_Params params;
	params.Index = Index;
	params.Info = Info;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.FindMapLinkLocator
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLocatorInfo>    LocatorInfos                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 LocatorName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLocatorInfo            Locator                        (Parm, OutParm)

void UIconLayer_FocusIcon_C::FindMapLinkLocator(const struct FString& LocatorName, TArray<struct FLocatorInfo>* LocatorInfos, bool* Valid, struct FLocatorInfo* Locator)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.FindMapLinkLocator");

	UIconLayer_FocusIcon_C_FindMapLinkLocator_Params params;
	params.LocatorName = LocatorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocatorInfos != nullptr)
		*LocatorInfos = params.LocatorInfos;
	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Locator != nullptr)
		*Locator = params.Locator;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.BindOnRefreshedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnRefreshed                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_FocusIcon_C::BindOnRefreshedEvent(const struct FScriptDelegate& OnRefreshed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.BindOnRefreshedEvent");

	UIconLayer_FocusIcon_C_BindOnRefreshedEvent_Params params;
	params.OnRefreshed = OnRefreshed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.BindDecideMapLinkDelegate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDecideMapLink                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_FocusIcon_C::BindDecideMapLinkDelegate(const struct FScriptDelegate& OnDecideMapLink)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.BindDecideMapLinkDelegate");

	UIconLayer_FocusIcon_C_BindDecideMapLinkDelegate_Params params;
	params.OnDecideMapLink = OnDecideMapLink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetIconsFromTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EMapIconType>           IconTypes                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UUMG_LayerIconBase_C*> Icons                          (Parm, OutParm, ZeroConstructor)

void UIconLayer_FocusIcon_C::GetIconsFromTypes(TArray<EMapIconType>* IconTypes, TArray<class UUMG_LayerIconBase_C*>* Icons)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetIconsFromTypes");

	UIconLayer_FocusIcon_C_GetIconsFromTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconTypes != nullptr)
		*IconTypes = params.IconTypes;
	if (Icons != nullptr)
		*Icons = params.Icons;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CheckIconType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LayerIconBase_C*    Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EMapIconType                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIconLayer_FocusIcon_C::CheckIconType(class UUMG_LayerIconBase_C* Icon, EMapIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CheckIconType");

	UIconLayer_FocusIcon_C_CheckIconType_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetIconsFromType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUMG_LayerIconBase_C*> Icons                          (Parm, OutParm, ZeroConstructor)

void UIconLayer_FocusIcon_C::GetIconsFromType(EMapIconType IconType, TArray<class UUMG_LayerIconBase_C*>* Icons)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.GetIconsFromType");

	UIconLayer_FocusIcon_C_GetIconsFromType_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icons != nullptr)
		*Icons = params.Icons;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_FocusIcon_C::Refresh(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Refresh");

	UIconLayer_FocusIcon_C_Refresh_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Update");

	UIconLayer_FocusIcon_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.EventUpdate
// (BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::EventUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.EventUpdate");

	UIconLayer_FocusIcon_C_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconLayerData_C*        LayerData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_FocusIcon_C::EventInitialize(class UIconLayerData_C* LayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.EventInitialize");

	UIconLayer_FocusIcon_C_EventInitialize_Params params;
	params.LayerData = LayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverOwl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_FocusIcon_C::OnDiscoverOwl(const struct FString& InActorID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverOwl");

	UIconLayer_FocusIcon_C_OnDiscoverOwl_Params params;
	params.InActorID = InActorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_FocusIcon_C::OnDiscoverBreak(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverBreak");

	UIconLayer_FocusIcon_C_OnDiscoverBreak_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverSearchPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_FocusIcon_C::OnDiscoverSearchPoint(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverSearchPoint");

	UIconLayer_FocusIcon_C_OnDiscoverSearchPoint_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverTreasure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_FocusIcon_C::OnDiscoverTreasure(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverTreasure");

	UIconLayer_FocusIcon_C_OnDiscoverTreasure_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverGimmick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_FocusIcon_C::OnDiscoverGimmick(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnDiscoverGimmick");

	UIconLayer_FocusIcon_C_OnDiscoverGimmick_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIconLayer_FocusIcon_C::CustomEvent_1(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.CustomEvent_1");

	UIconLayer_FocusIcon_C_CustomEvent_1_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconLayer_FocusIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.Construct");

	UIconLayer_FocusIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.ExecuteUbergraph_IconLayer_FocusIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconLayer_FocusIcon_C::ExecuteUbergraph_IconLayer_FocusIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.ExecuteUbergraph_IconLayer_FocusIcon");

	UIconLayer_FocusIcon_C_ExecuteUbergraph_IconLayer_FocusIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnRefreshedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UIconLayer_FocusIcon_C::OnRefreshedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.OnRefreshedEvent__DelegateSignature");

	UIconLayer_FocusIcon_C_OnRefreshedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.DecideMapLinkDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextLocationName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIconLayer_FocusIcon_C::DecideMapLinkDelegate__DelegateSignature(const struct FString& NextLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconLayer_FocusIcon.IconLayer_FocusIcon_C.DecideMapLinkDelegate__DelegateSignature");

	UIconLayer_FocusIcon_C_DecideMapLinkDelegate__DelegateSignature_Params params;
	params.NextLocationName = NextLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
