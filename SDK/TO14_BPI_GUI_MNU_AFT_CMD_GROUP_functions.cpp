
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

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SwitchItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeft                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::SwitchItem(bool IsLeft, bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SwitchItem");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_SwitchItem_Params params;
	params.IsLeft = IsLeft;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeft                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::SelectItem(bool IsLeft, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SelectItem");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_SelectItem_Params params;
	params.IsLeft = IsLeft;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.CB_MouseClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::CB_MouseClick(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.CB_MouseClick");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_CB_MouseClick_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.CB_MouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::CB_MouseMove(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.CB_MouseMove");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_CB_MouseMove_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SetItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           LeftFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           RightFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::SetItemData(int Index, const struct FString& Left, bool LeftFlag, const struct FString& Right, bool RightFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SetItemData");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_SetItemData_Params params;
	params.Index = Index;
	params.Left = Left;
	params.LeftFlag = LeftFlag;
	params.Right = Right;
	params.RightFlag = RightFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnDeselected");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnMouseClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::OnMouseClick__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnMouseClick__DelegateSignature");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_OnMouseClick__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnMouseOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniwueID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C::OnMouseOver__DelegateSignature(int UniwueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnMouseOver__DelegateSignature");

	UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_OnMouseOver__DelegateSignature_Params params;
	params.UniwueID = UniwueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
