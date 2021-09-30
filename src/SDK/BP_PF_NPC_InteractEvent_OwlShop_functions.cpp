
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

// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.GetRewardLossItemFromIDs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    InRewardID                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSysWinItemData> OutItemData                    (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_InteractEvent_OwlShop_C::GetRewardLossItemFromIDs(TArray<int>* InRewardID, TArray<struct FSysWinItemData>* OutItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.GetRewardLossItemFromIDs");

	ABP_PF_NPC_InteractEvent_OwlShop_C_GetRewardLossItemFromIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewardID != nullptr)
		*InRewardID = params.InRewardID;
	if (OutItemData != nullptr)
		*OutItemData = params.OutItemData;
}


// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.GetRewardLossItemFromID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FSearchOwlRewardItemData> InRewardItem                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSysWinItemData> OutLossItem                    (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_InteractEvent_OwlShop_C::GetRewardLossItemFromID(TArray<struct FSearchOwlRewardItemData>* InRewardItem, TArray<struct FSysWinItemData>* OutLossItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.GetRewardLossItemFromID");

	ABP_PF_NPC_InteractEvent_OwlShop_C_GetRewardLossItemFromID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewardItem != nullptr)
		*InRewardItem = params.InRewardItem;
	if (OutLossItem != nullptr)
		*OutLossItem = params.OutLossItem;
}


// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.RewardItemToWinSysItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FSearchOwlRewardItemData> InRewardItem                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSysWinItemData> Out                            (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_InteractEvent_OwlShop_C::RewardItemToWinSysItem(TArray<struct FSearchOwlRewardItemData>* InRewardItem, TArray<struct FSysWinItemData>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.RewardItemToWinSysItem");

	ABP_PF_NPC_InteractEvent_OwlShop_C_RewardItemToWinSysItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewardItem != nullptr)
		*InRewardItem = params.InRewardItem;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_OwlShop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.UserConstructionScript");

	ABP_PF_NPC_InteractEvent_OwlShop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.MainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_OwlShop_C::MainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.MainInteract");

	ABP_PF_NPC_InteractEvent_OwlShop_C_MainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_OwlShop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_OwlShop_C::ExecuteUbergraph_BP_PF_NPC_InteractEvent_OwlShop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_OwlShop");

	ABP_PF_NPC_InteractEvent_OwlShop_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_OwlShop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
