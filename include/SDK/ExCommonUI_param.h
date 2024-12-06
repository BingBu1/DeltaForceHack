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
	struct Function_ExCommonUI_ExCommonAnimatedSwitcher_SetDisableTransitionAnimation_Param
	{
	public:

		bool bDisableAnimation; // 0x00(0x01)
	};

	struct Function_ExCommonUI_ExCommonBorderStyle_GetBackgroundBrush_Param
	{
	public:

		struct FSlateBrush Brush; // 0x00(0x90)
	};

	struct Function_ExCommonUI_ExCommonBorder_SetStyle_Param
	{
	public:

		struct UClass* InStyle; // 0x00(0x08)
	};

	struct Function_ExCommonUI_ExCommonCarouselNavBarPro_SetLinkedCarousel_Param
	{
	public:

		struct UExCommonWidgetCarouselProBase* CommonCarousel; // 0x00(0x08)
	};

	struct Function_ExCommonUI_ExCommonCarouselNavButton_OnSelectHandle_Param
	{
	public:

	};

	struct Function_ExCommonUI_ExCommonLazyImage_SetMaterialTextureParamName_Param
	{
	public:

		struct FName TextureParamName; // 0x00(0x08)
	};

	struct Function_ExCommonUI_ExCommonLazyWidget_SetLazyContent_Param
	{
	public:

	};

	struct Function_ExCommonUI_LoadGuardSlot_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalAlignment InVerticalAlignment; // 0x00(0x01)
	};

	struct Function_ExCommonUI_ExCommonLoadGuard_SetLoadingText_Param
	{
	public:

		struct FText InLoadingText; // 0x00(0x18)
	};

	struct Function_ExCommonUI_ExCommonPoolableWidgetInterface_OnReleaseToPool_Param
	{
	public:

	};

	struct Function_ExCommonUI_ExCommonTextStyle_GetStrikeBrush_Param
	{
	public:

		struct FSlateBrush OutStrikeBrush; // 0x00(0x90)
	};

	struct Function_ExCommonUI_ExCommonVideoPlayer_SetVideo_Param
	{
	public:

		struct UMediaSource* NewVideo; // 0x00(0x08)
	};

	struct Function_ExCommonUI_ExCommonWidgetCarousel_SetActiveWidgetIndex_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
	};

	struct Function_ExCommonUI_ExCommonWidgetGroupBase_RemoveWidget_Param
	{
	public:

		struct UWidget* InWidget; // 0x00(0x08)
	};

	struct Function_ExCommonUI_ExCommonTextBlock_SetWrapTextWidth_Param
	{
	public:

		int32_t InWrapTextAt; // 0x00(0x04)
	};

	struct Function_ExCommonUI_ExCommonWidgetCarouselProBase_SimpleInit_Param
	{
	public:

		int32_t OverridePageSize; // 0x00(0x04)
		int32_t OverrideCacheSize; // 0x04(0x04)
	};

	struct Function_ExCommonUI_ExCommonCarouselNavButtonGroup_SelectPreviousButton_Param
	{
	public:

		bool bAllowWrap; // 0x00(0x01)
	};

	struct Function_ExCommonUI_ExCommonDateTimeTextBlock_SetTimespanValue_Param
	{
	public:

		struct FTimespan InTimespan; // 0x00(0x08)
	};

	struct Function_ExCommonUI_ExCommonNumericTextBlock_SetNumericType_Param
	{
	public:

		enum class EExCommonNumericType InNumericType; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
