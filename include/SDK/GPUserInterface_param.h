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
	struct Function_GPUserInterface_GPWidgetTiltActor_IsDestroy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFBackgroundBlur_OnNextFrame_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFBackgroundBox_SetStretch_Param
	{
	public:

		enum class EBackgroundStretchType InStretch; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFButton_SetButtonID_Param
	{
	public:

		int64_t NewButtonID; // 0x00(0x08)
	};

	struct Function_GPUserInterface_DFCDNImage_SetLoadImage_Param
	{
	public:

		struct FString Path; // 0x00(0x10)
	};

	struct Function_GPUserInterface_DFCheckBox_SetButtonID_Param
	{
	public:

		int64_t NewButtonID; // 0x00(0x08)
	};

	struct Function_GPUserInterface_DFClipCanvasPanel_SetClipChild_Param
	{
	public:

		struct UWidget* InChild; // 0x00(0x08)
	};

	struct Function_GPUserInterface_DFColorWheel_SetSelectColor_Param
	{
	public:

		struct FLinearColor sColor; // 0x00(0x10)
	};

	struct Function_GPUserInterface_DFCommonDropDownItem_InitDropDownItem_Param
	{
	public:

		struct FDropDownItemData InItemData; // 0x00(0x38)
		int32_t InIndex; // 0x38(0x04)
	};

	struct Function_GPUserInterface_DFCommonMediaView_StopMedia_Param
	{
	public:

		bool bIsSkip; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFCommonRoundedRectMaskBase_SetEffectVisible_Param
	{
	public:

		bool bVisible; // 0x00(0x01)
	};

	struct Function_GPUserInterface_WrapTabGroupClickDelegate_DispatchSubTabItemCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPUserInterface_WrapTabClickDelegate_DispatchUnhovered_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFEditableTextBox_ScrollToPreviousPage_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFHorizontalBox_SetContentVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InContentVerticalAlignment; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFScrollBox_SetScrollWidgetIntoViewIfOnEdge_Param
	{
	public:

		bool bInScrollWidgetIntoViewIfOnEdge; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFScrollGridBox_SetScrollWidgetIntoViewIfOnEdge_Param
	{
	public:

		bool bInScrollWidgetIntoViewIfOnEdge; // 0x00(0x01)
	};

	struct Function_GPUserInterface_MainTabChangeObject_Dispatch_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_GPUserInterface_SubTabChangeObject_Dispatch_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFSimpleGradient_GetDynamicMaterial_Param
	{
	public:

		struct UMaterialInstanceDynamic* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPUserInterface_DFSlider_SetBandMinValue_Param
	{
	public:

		float InValue; // 0x00(0x04)
		bool bBandMinValue; // 0x04(0x01)
	};

	struct Function_GPUserInterface_DFTextBlock_SetTextColor_Param
	{
	public:

		struct FName InColorName; // 0x00(0x08)
	};

	struct Function_GPUserInterface_DFTipsAnchor_UnbindTipsWidget_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFTypeWriterTextBlock_Update_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPUserInterface_DFVerticalBox_SetContentVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InContentVerticalAlignment; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFWaterfallScrollView_SetScrollWidgetIntoViewIfOnEdge_Param
	{
	public:

		bool bInScrollWidgetIntoViewIfOnEdge; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFWrapBox_SetWrapWidth_Param
	{
	public:

		float InWrapWidth; // 0x00(0x04)
	};

	struct Function_GPUserInterface_GPColorManager_Reset_Param
	{
	public:

	};

	struct Function_GPUserInterface_GPPersistentRootUIBase_RemoveUI_Param
	{
	public:

		struct UWidget* UIIns; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPUserInterface_GPUIManager_Reset_Param
	{
	public:

	};

	struct Function_GPUserInterface_GPUserInterfaceGlobalDelegates_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UGPUserInterfaceGlobalDelegates* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPUserInterface_GPUserInterfaceUtil_WaitUntilWidgetVisible_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UWidget* InWidget; // 0x08(0x08)
		struct FLatentActionInfo LatentInfo; // 0x10(0x18)
	};

	struct Function_GPUserInterface_DFUserWidgetBase_StopAutoAnimation_Param
	{
	public:

		struct FString AnimationName; // 0x00(0x10)
	};

	struct Function_GPUserInterface_DFImage_SetImage_Param
	{
	public:

		struct UObject* ImageAsset; // 0x00(0x08)
		bool bAutoResize; // 0x08(0x01)
	};

	struct Function_GPUserInterface_DFRichTextBlock_SetLineHeightPercentage_Param
	{
	public:

		float InLineHeightPercentage; // 0x00(0x04)
	};

	struct Function_GPUserInterface_DFBidirectionalSlider_SetStepValue_Param
	{
	public:

		float InStepValue; // 0x00(0x04)
	};

	struct Function_GPUserInterface_DFCommonAddDecHolder_ManelSaveCurNum_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFCommonAddDecInputBox_InitNum_Param
	{
	public:

		int32_t InCurNum; // 0x00(0x04)
		int32_t InStepNum; // 0x04(0x04)
		int32_t InMinNum; // 0x08(0x04)
		int32_t InMaxNum; // 0x0c(0x04)
	};

	struct Function_GPUserInterface_DFCommonAddDecSlider_SetBandMinValue_Param
	{
	public:

		int32_t InBandMinValue; // 0x00(0x04)
		bool bInBandMinValue; // 0x04(0x01)
	};

	struct Function_GPUserInterface_DFCommonButton_SetPressedSoundName_Param
	{
	public:

		struct FName InPressedSoundName; // 0x00(0x08)
	};

	struct Function_GPUserInterface_DFCommonCheckButton_SetNamedSlotVisibility_Param
	{
	public:

		enum class ESlateVisibility InVisibility; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFCommonTabWidget_TryGetCheckButton_Param
	{
	public:

		struct UWidget* ItemWidget; // 0x00(0x08)
		struct UDFCommonCheckButton* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPUserInterface_DFCommonFilterWidget_SetMainTitleText_Param
	{
	public:

		struct FText LuaText; // 0x00(0x18)
	};

	struct Function_GPUserInterface_DFCommonProgressBar_SetPercent_Param
	{
	public:

		float InPercent; // 0x00(0x04)
	};

	struct Function_GPUserInterface_DFCommonSlider_SetStepValue_Param
	{
	public:

		float InStepValue; // 0x00(0x04)
	};

	struct Function_GPUserInterface_DFCommonTabGroupWidget_TryGetTabGroupItem_Param
	{
	public:

		int32_t SlotIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UDFCommonTabGroupItem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPUserInterface_DFCommonTabNavigatorBase_UnbindActions_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFCommonTabSelectionBar_OnTabRefreshed_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFSecondLevelCommonTab_RefreshTabItem_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFSpineWidget_SetTimeScale_Param
	{
	public:

		float TimeScale; // 0x00(0x04)
	};

	struct Function_GPUserInterface_DFBlurSlotReContainer_OnBlurWidgetLoaded_Param
	{
	public:

		struct FSoftObjectPath SoftObject; // 0x00(0x18)
	};

	struct Function_GPUserInterface_DFColorReContainer_SetColorAndOpacity_Param
	{
	public:

		struct FLinearColor InColorAndOpacity; // 0x00(0x10)
	};

	struct Function_GPUserInterface_DFHttpImage_SetHttpImage_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
	};

	struct Function_GPUserInterface_DFLEDRichTextBlock_SetInCheckedStyle_Param
	{
	public:

		enum class ETextChecked InCheckedStyle; // 0x00(0x01)
	};

	struct Function_GPUserInterface_DFCommonDropDownBox_TickWhenMenuOpen_Param
	{
	public:

	};

	struct Function_GPUserInterface_DFCommonTabGroupItem_SetMainTabIndex_Param
	{
	public:

		int32_t MainTabIndex; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
