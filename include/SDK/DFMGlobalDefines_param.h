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
	struct Function_DFMGlobalDefines_BreakthroughUIConfig_GetTextStyleByType_Param
	{
	public:

		enum class EBreakthroughTextType InTextType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_DFMGlobalDefines_CharacterBodyPartMeshStatics_SetMeshByConfig_Param
	{
	public:

		struct UMeshComponent* Mesh; // 0x00(0x08)
		struct FName Name; // 0x08(0x08)
	};

	struct Function_DFMGlobalDefines_GPCollectionWeaponDataConfig_GetCollectionWeaponDataTable_Param
	{
	public:

		struct FName InDisplayCtrlTypeStr; // 0x00(0x08)
		struct UDataTable* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMGlobalDefines_CSVChangeUtil_SaveTableToCSV_Param
	{
	public:

		struct UDataTable* DataTable; // 0x00(0x08)
		struct FString CSVFileName; // 0x08(0x10)
	};

	struct Function_DFMGlobalDefines_DataTableRuntimeUtil_SaveDataTableToCSV_Param
	{
	public:

		struct UDataTable* DataTable; // 0x00(0x08)
		struct FString CSVFileName; // 0x08(0x10)
	};

	struct Function_DFMGlobalDefines_DFCustomerServiceLibrary_GetSupportPlatforms_Param
	{
	public:

		struct FString SupportPlatformStr; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_DFMGlobalDefines_DFMColorDefineBlueprintHelper_GetColorByQualityId_Param
	{
	public:

		int32_t ID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FDFMColorDefineRow ReturnValue; // 0x08(0x48)
	};

	struct Function_DFMGlobalDefines_DFMCommonButton_SetOpenDefaultSound_Param
	{
	public:

		bool bIsOpen; // 0x00(0x01)
	};

	struct Function_DFMGlobalDefines_DFMCommonHover_StopAutoAnimation_Param
	{
	public:

		struct FName AnimationName; // 0x00(0x08)
	};

	struct Function_DFMGlobalDefines_DFMCommonMediaImage_StopMedia_Param
	{
	public:

	};

	struct Function_DFMGlobalDefines_DFMImageLoadingWidget_StopLoadingAnim_BP_Param
	{
	public:

	};

	struct Function_DFMGlobalDefines_DFMSDKWebBrowserWidget_OnWebBrowserCallback_Param
	{
	public:

		struct FString Param; // 0x00(0x10)
	};

	struct Function_DFMGlobalDefines_DFMWebMediaPlayer_StopMedia_Param
	{
	public:

	};

	struct Function_DFMGlobalDefines_DFPermissionConfigLibrary_GetSupportPlatforms_Param
	{
	public:

		struct FString SupportPlatformStr; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_DFMGlobalDefines_DFRouletteBaseView_UpdateDragOffset_Param
	{
	public:

	};

	struct Function_DFMGlobalDefines_DFStreamMediaImage_StopMedia_Param
	{
	public:

	};

	struct Function_DFMGlobalDefines_FashionListView_ScrollFashionItemIntoView_Param
	{
	public:

		struct UWidget* WidgetToFind; // 0x00(0x08)
	};

	struct Function_DFMGlobalDefines_GlobalDataTableSystemManager_OnLiteDataTableReset_Param
	{
	public:

		struct FName TableName; // 0x00(0x08)
	};

	struct Function_DFMGlobalDefines_GPBlueprintUMGHelper_TruncateText_Font_Param
	{
	public:

		struct FSlateFontInfo Font; // 0x00(0x58)
		struct FText InText; // 0x58(0x18)
		float Width; // 0x70(0x04)
		char pad_74[0x4]; // 0x74(0x04)
		struct FText ReturnValue; // 0x78(0x18)
	};

	struct Function_DFMGlobalDefines_GuideUtils_StopGuide_Param
	{
	public:

		struct UObject* WorldContextObj; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_DFMGlobalDefines_LineCanvasPanel_SetLinesVisibility_Param
	{
	public:

		enum class ESlateVisibility InVisibility; // 0x00(0x01)
	};

	struct Function_DFMGlobalDefines_MapInfoConfig_GetMapPath_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_DFMGlobalDefines_MapInfoData_OnMapInfoConfigLoadedComplete_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> MapInfoConfigArrToLoad; // 0x00(0x10)
	};

	struct Function_DFMGlobalDefines_MaskWidget_SetMaskSizeXY_Param
	{
	public:

		int32_t ClipIndex; // 0x00(0x04)
		float X; // 0x04(0x04)
		float Y; // 0x08(0x04)
	};

	struct Function_DFMGlobalDefines_PlatformPaddingBox_SetPadding_Param
	{
	public:

		struct FMargin InPadding; // 0x00(0x10)
	};

	struct Function_DFMGlobalDefines_PlatformScaleBox_SetUserSpecifiedScale_Param
	{
	public:

		float InUserSpecifiedScale; // 0x00(0x04)
	};

	struct Function_DFMGlobalDefines_PlatformSizeBox_SetWidthOverride_Param
	{
	public:

		float InWidthOverride; // 0x00(0x04)
	};

	struct Function_DFMGlobalDefines_PlatformWidgetSettings_Get_Param
	{
	public:

		struct UPlatformWidgetSettings* ReturnValue; // 0x00(0x08)
	};

	struct Function_DFMGlobalDefines_SkillConfigUtils_GetSkillConfigDataRowBySkillID_Param
	{
	public:

		int32_t Support_Skill_ID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillConfig ReturnValue; // 0x08(0xa0)
	};

	struct Function_DFMGlobalDefines_SOLDecalConfig_GetIconPathByType_Param
	{
	public:

		struct FName DecalID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_DFMGlobalDefines_SOLUIConfig_GetIconPathByType_Param
	{
	public:

		enum class ESOLUIIconType InIconType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_DFMGlobalDefines_SphericalHarmonicsUtils_GetShFromIblCubemap_Param
	{
	public:

		struct UTextureRenderTargetCube* UCubemap; // 0x00(0x08)
		struct FSHresult ReturnValue; // 0x08(0x70)
	};

	struct Function_DFMGlobalDefines_TeammateConfig_GetTeammateUIConfigRow_Param
	{
	public:

		enum class EDFMGamePlayMode InDFMGamePlayMode; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FTeammateUIConfigRow ReturnValue; // 0x08(0x200)
	};

	struct Function_DFMGlobalDefines_VehicleModificationRulesDataConfigManager_GetList_Param
	{
	public:

		uint64_t BaseID; // 0x00(0x08)
		struct FVehicleModificationRulesDataConfigList ReturnValue; // 0x08(0x18)
	};

	struct Function_DFMGlobalDefines_VehicleSocketNameRowManager_GetSocketGUIDBySocketName_Param
	{
	public:

		struct FName SocketName; // 0x00(0x08)
		uint64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMGlobalDefines_MobileCustomLayoutDataCenter_UpdateVehicleType_Param
	{
	public:

		enum class EVehicleType InType; // 0x00(0x01)
	};

	struct Function_DFMGlobalDefines_DFMImage_ShowFXMaterial_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
