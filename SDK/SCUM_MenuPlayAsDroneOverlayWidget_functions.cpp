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

// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuPlayAsDroneOverlayWidget_C::ToggleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility");

	UMenuPlayAsDroneOverlayWidget_C_ToggleVisibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuPlayAsDroneOverlayWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct");

	UMenuPlayAsDroneOverlayWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuPlayAsDroneOverlayWidget_C::ExecuteUbergraph_MenuPlayAsDroneOverlayWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget");

	UMenuPlayAsDroneOverlayWidget_C_ExecuteUbergraph_MenuPlayAsDroneOverlayWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
