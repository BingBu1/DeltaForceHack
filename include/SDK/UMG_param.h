/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_UMG_WidgetBlueprintGeneratedClass_UnloadWidgetTree_Param
	{
	public:

		bool bSetPackageReload; // 0x00(0x01)
	};

	struct Function_UMG_DragDropOperation_Drop_Param
	{
	public:

		struct FPointerEvent PointerEvent; // 0x00(0x70)
	};

	struct Function_UMG_WidgetComponent_SetWindowVisibility_Param
	{
	public:

		enum class EWindowVisibility InVisibility; // 0x00(0x01)
	};

	struct Function_UMG_AsyncTaskDownloadImage_DownloadImage_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
		struct UAsyncTaskDownloadImage* ReturnValue; // 0x10(0x08)
	};

	struct Function_UMG_UserListEntryLibrary_IsListItemSelected_Param
	{
	public:

	};

	struct Function_UMG_UserObjectListEntryLibrary_GetListItemObject_Param
	{
	public:

	};

	struct Function_UMG_SlateBlueprintLibrary_TransformVectorLocalToAbsolute_Param
	{
	public:

		struct FGeometry Geometry; // 0x00(0x44)
		struct FVector2D LocalVector; // 0x44(0x08)
		struct FVector2D ReturnValue; // 0x4c(0x08)
	};

	struct Function_UMG_UMGSequencePlayer_SetUserTag_Param
	{
	public:

		struct FName InUserTag; // 0x00(0x08)
	};

	struct Function_UMG_WidgetAnimation_UnbindFromAnimationStarted_Param
	{
	public:

	};

	struct Function_UMG_WidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Param
	{
	public:

		struct UUMGSequencePlayer* Result; // 0x00(0x08)
		struct UUserWidget* Widget; // 0x08(0x08)
		struct UWidgetAnimation* InAnimation; // 0x10(0x08)
		float StartAtTime; // 0x18(0x04)
		float EndAtTime; // 0x1c(0x04)
		int32_t NumLoopsToPlay; // 0x20(0x04)
		enum class EUMGSequencePlayMode PlayMode; // 0x24(0x01)
		char pad_25[0x3]; // 0x25(0x03)
		float PlaybackSpeed; // 0x28(0x04)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct UWidgetAnimationPlayCallbackProxy* ReturnValue; // 0x30(0x08)
	};

	struct Function_UMG_WidgetBlueprintLibrary_UnlockMouse_Param
	{
	public:

		struct FEventReply Reply; // 0x00(0xd0)
		struct FEventReply ReturnValue; // 0xd0(0xd0)
	};

	struct Function_UMG_WidgetComponent3DUI_Show_Param
	{
	public:

	};

	struct Function_UMG_WidgetInteractionComponent_SetFocus_Param
	{
	public:

		struct UWidget* FocusWidget; // 0x00(0x08)
	};

	struct Function_UMG_WidgetLayoutLibrary_SlotAsWrapBoxSlot_Param
	{
	public:

		struct UWidget* Widget; // 0x00(0x08)
		struct UWrapBoxSlot* ReturnValue; // 0x08(0x08)
	};

	struct Function_UMG_UserListEntry_BP_OnItemSelectionChanged_Param
	{
	public:

		bool bIsSelected; // 0x00(0x01)
	};

	struct Function_UMG_Widget_SetVisibility_Param
	{
	public:

		enum class ESlateVisibility InVisibility; // 0x00(0x01)
	};

	struct Function_UMG_BoolBinding_GetValue_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_UMG_BrushBinding_GetValue_Param
	{
	public:

		struct FSlateBrush ReturnValue; // 0x00(0x90)
	};

	struct Function_UMG_CheckedStateBinding_GetValue_Param
	{
	public:

		enum class ECheckBoxState ReturnValue; // 0x00(0x01)
	};

	struct Function_UMG_ColorBinding_GetSlateValue_Param
	{
	public:

		struct FSlateColor ReturnValue; // 0x00(0x28)
	};

	struct Function_UMG_FloatBinding_GetValue_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_UMG_Int32Binding_GetValue_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_UMG_MouseCursorBinding_GetValue_Param
	{
	public:

		enum class EMouseCursor ReturnValue; // 0x00(0x01)
	};

	struct Function_UMG_TextBinding_GetTextValue_Param
	{
	public:

		struct FText ReturnValue; // 0x00(0x18)
	};

	struct Function_UMG_VisibilityBinding_GetValue_Param
	{
	public:

		enum class ESlateVisibility ReturnValue; // 0x00(0x01)
	};

	struct Function_UMG_WidgetBinding_GetValue_Param
	{
	public:

		struct UWidget* ReturnValue; // 0x00(0x08)
	};

	struct Function_UMG_UserObjectListEntry_OnListItemObjectSet_Param
	{
	public:

		struct UObject* ListItemObject; // 0x00(0x08)
	};

	struct Function_UMG_UserWidget_UnregisterInputComponent_Param
	{
	public:

	};

	struct Function_UMG_PanelWidget_ReplaceChildAt_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UWidget* Content; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_UMG_TextLayoutWidget_SetVerticalJustification_Param
	{
	public:

		enum class ETextVerticalJustify VJustification; // 0x00(0x01)
	};

	struct Function_UMG_Image_SetOpacity_Param
	{
	public:

		float InOpacity; // 0x00(0x04)
	};

	struct Function_UMG_ComboBoxString_SetSelectedOption_Param
	{
	public:

		struct FString Option; // 0x00(0x10)
	};

	struct Function_UMG_ListViewBase_SetWheelScrollMultiplier_Param
	{
	public:

		float NewWheelScrollMultiplier; // 0x00(0x04)
	};

	struct Function_UMG_EditableText_SetText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_UMG_EditableTextBox_SetText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_UMG_ExpandableArea_SetIsExpanded_Animated_Param
	{
	public:

		bool IsExpanded; // 0x00(0x01)
	};

	struct Function_UMG_ProgressBar_SetPercent_Param
	{
	public:

		float InPercent; // 0x00(0x04)
	};

	struct Function_UMG_RadialImage_SetPercent_Param
	{
	public:

		float InPercent; // 0x00(0x04)
	};

	struct Function_UMG_Slider_SetValue_Param
	{
	public:

		float InValue; // 0x00(0x04)
	};

	struct Function_UMG_Spacer_SetSize_Param
	{
	public:

		struct FVector2D InSize; // 0x00(0x08)
	};

	struct Function_UMG_SpinBox_SetValue_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_UMG_CircularThrobber_SetRadius_Param
	{
	public:

		float InRadius; // 0x00(0x04)
	};

	struct Function_UMG_DynamicEntryBoxBase_SetEntrySpacing_Param
	{
	public:

		struct FVector2D InEntrySpacing; // 0x00(0x08)
	};

	struct Function_UMG_InputKeySelector_SetTextBlockVisibility_Param
	{
	public:

		enum class ESlateVisibility InVisibility; // 0x00(0x01)
	};

	struct Function_UMG_Line_SetThickness_Param
	{
	public:

		float InThickness; // 0x00(0x04)
	};

	struct Function_UMG_MirrorImage_SetOpacity_Param
	{
	public:

		float InOpacity; // 0x00(0x04)
	};

	struct Function_UMG_ScrollBar_SetState_Param
	{
	public:

		float InOffsetFraction; // 0x00(0x04)
		float InThumbSizeFraction; // 0x04(0x04)
	};

	struct Function_UMG_Throbber_SetNumberOfPieces_Param
	{
	public:

		int32_t InNumberOfPieces; // 0x00(0x04)
	};

	struct Function_UMG_BackgroundBlurSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_BorderSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_ButtonSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_CanvasPanelSlot_SetZOrder_Param
	{
	public:

		int32_t InZOrder; // 0x00(0x04)
	};

	struct Function_UMG_GridSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_HorizontalBoxSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_OverlaySlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_ScaleBoxSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_ScrollBoxSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_SizeBoxSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_UniformGridSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_VerticalBoxSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_WidgetSwitcherSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_WindowTitleBarAreaSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_WrapBoxSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_WidgetSwitcher_SetActiveWidgetIndex_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
	};

	struct Function_UMG_ContentWidget_SetContent_Param
	{
	public:

		struct UWidget* Content; // 0x00(0x08)
		struct UPanelSlot* ReturnValue; // 0x08(0x08)
	};

	struct Function_UMG_ScrollBox_SetWheelScrollMultiplier_Param
	{
	public:

		float NewWheelScrollMultiplier; // 0x00(0x04)
	};

	struct Function_UMG_CanvasPanel_AddChildToCanvas_Param
	{
	public:

		struct UWidget* Content; // 0x00(0x08)
		struct UCanvasPanelSlot* ReturnValue; // 0x08(0x08)
	};

	struct Function_UMG_GridPanel_SetRowFill_Param
	{
	public:

		int32_t ColumnIndex; // 0x00(0x04)
		float Coefficient; // 0x04(0x04)
	};

	struct Function_UMG_HorizontalBox_AddChildToHorizontalBox_Param
	{
	public:

		struct UWidget* Content; // 0x00(0x08)
		struct UHorizontalBoxSlot* ReturnValue; // 0x08(0x08)
	};

	struct Function_UMG_Overlay_AddChildToOverlay_Param
	{
	public:

		struct UWidget* Content; // 0x00(0x08)
		struct UOverlaySlot* ReturnValue; // 0x08(0x08)
	};

	struct Function_UMG_UniformGridPanel_SetSlotPadding_Param
	{
	public:

		struct FMargin InSlotPadding; // 0x00(0x10)
	};

	struct Function_UMG_VerticalBox_SwitchWidgetsByIndex_Param
	{
	public:

		int32_t Index1; // 0x00(0x04)
		int32_t Index2; // 0x04(0x04)
	};

	struct Function_UMG_WrapBox_SetInnerSlotPadding_Param
	{
	public:

		struct FVector2D InPadding; // 0x00(0x08)
	};

	struct Function_UMG_TextBlock_SetTextUpperPolicy_Param
	{
	public:

		enum class ETextUpperPolicy InTextUpperPolicy; // 0x00(0x01)
	};

	struct Function_UMG_RichTextBlock_SetTextUpperPolicy_Param
	{
	public:

		enum class ETextUpperPolicy InTextUpperPolicy; // 0x00(0x01)
	};

	struct Function_UMG_MultiLineEditableText_SetWidgetStyle_Param
	{
	public:

		struct FTextBlockStyle InWidgetStyle; // 0x00(0x290)
	};

	struct Function_UMG_MultiLineEditableTextBox_SetTextStyle_Param
	{
	public:

		struct FTextBlockStyle InTextStyle; // 0x00(0x290)
	};

	struct Function_UMG_ListView_SetSelectionMode_Param
	{
	public:

		enum class ESelectionMode SelectionMode; // 0x00(0x01)
	};

	struct Function_UMG_DynamicEntryBox_Reset_Param
	{
	public:

		bool bDeleteWidgets; // 0x00(0x01)
	};

	struct Function_UMG_Border_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_SizeBox_SetWidthOverride_Param
	{
	public:

		float InWidthOverride; // 0x00(0x04)
	};

	struct Function_UMG_Button_SetTouchMethod_Param
	{
	public:

		enum class EButtonTouchMethod InTouchMethod; // 0x00(0x01)
	};

	struct Function_UMG_BackgroundBlur_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_Checkbox_SetIsChecked_Param
	{
	public:

		bool InIsChecked; // 0x00(0x01)
	};

	struct Function_UMG_InvalidationBox_SetCanCache_Param
	{
	public:

		bool CanCache; // 0x00(0x01)
	};

	struct Function_UMG_RetainerBox_SetTextureParameter_Param
	{
	public:

		struct FName TextureParameter; // 0x00(0x08)
	};

	struct Function_UMG_SafeZone_SetSidesToPad_Param
	{
	public:

		bool InPadLeft; // 0x00(0x01)
		bool InPadRight; // 0x01(0x01)
		bool InPadTop; // 0x02(0x01)
		bool InPadBottom; // 0x03(0x01)
	};

	struct Function_UMG_ScaleBox_SetUserSpecifiedScale_Param
	{
	public:

		float InUserSpecifiedScale; // 0x00(0x04)
	};

	struct Function_UMG_MenuAnchor_ToggleOpen_Param
	{
	public:

		bool bFocusOnOpen; // 0x00(0x01)
	};

	struct Function_UMG_Viewport_Spawn_Param
	{
	public:

		struct UClass* ActorClass; // 0x00(0x08)
		struct AActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_UMG_WindowTitleBarArea_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_UMG_TileView_SetEntryWidth_Param
	{
	public:

		float NewWidth; // 0x00(0x04)
	};

	struct Function_UMG_TreeView_SetItemExpansion_Param
	{
	public:

		struct UObject* Item; // 0x00(0x08)
		bool bExpandItem; // 0x08(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
