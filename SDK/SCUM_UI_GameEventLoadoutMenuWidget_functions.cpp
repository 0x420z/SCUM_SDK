// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdateSlotSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ItemSelectionSlotWidget_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UItemSelection*>  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_GameEventLoadoutMenuWidget_C::UpdateSlotSelection(class UUI_ItemSelectionSlotWidget_C* Slot, TArray<class UItemSelection*>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdateSlotSelection");

	UUI_GameEventLoadoutMenuWidget_C_UpdateSlotSelection_Params fn_params;
	fn_params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = fn_params.Selection;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.HasAnythingToSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasAnythingToSelect            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::HasAnythingToSelect(bool* HasAnythingToSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.HasAnythingToSelect");

	UUI_GameEventLoadoutMenuWidget_C_HasAnythingToSelect_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (HasAnythingToSelect != nullptr)
		*HasAnythingToSelect = fn_params.HasAnythingToSelect;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.SomethingSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           everythingSelected             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::SomethingSelected(bool* everythingSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.SomethingSelected");

	UUI_GameEventLoadoutMenuWidget_C_SomethingSelected_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (everythingSelected != nullptr)
		*everythingSelected = fn_params.everythingSelected;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdatePossibleItems
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::UpdatePossibleItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdatePossibleItems");

	UUI_GameEventLoadoutMenuWidget_C_UpdatePossibleItems_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ApplyLoadout
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::ApplyLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ApplyLoadout");

	UUI_GameEventLoadoutMenuWidget_C_ApplyLoadout_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_GameEventLoadoutMenuWidget_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.Construct");

	UUI_GameEventLoadoutMenuWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.PreConstruct");

	UUI_GameEventLoadoutMenuWidget_C_PreConstruct_Params fn_params;
	fn_params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ExecuteUbergraph_UI_GameEventLoadoutMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::ExecuteUbergraph_UI_GameEventLoadoutMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ExecuteUbergraph_UI_GameEventLoadoutMenuWidget");

	UUI_GameEventLoadoutMenuWidget_C_ExecuteUbergraph_UI_GameEventLoadoutMenuWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
