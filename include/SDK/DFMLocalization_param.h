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
	struct Function_DFMLocalization_DFMLocalizationConfig_RefreshCustomCultureRedirects_Param
	{
	public:

	};

	struct Function_DFMLocalization_DFMLocalizationManager_UpdateDisplayString_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString NewString; // 0x10(0x10)
		struct FString Namespace; // 0x20(0x10)
		struct FString Key; // 0x30(0x10)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_DFMLocalization_DFMLocalizationSettings_UpdateConfig_Param
	{
	public:

	};

	struct Function_DFMLocalization_BasePathConfig_GetPufferLocPath_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_DFMLocalization_DFMTextFormatData_SetFormatText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_DFMLocalization_KismetLocalizationLibrary_Loc_NormalizeNumber2Str_Int64_Param
	{
	public:

		int64_t InNum; // 0x00(0x08)
		struct FString InTargetCulture; // 0x08(0x10)
		int32_t MaximumFractionalDigits; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_DFMLocalization_LocalizeNumberConfigManager_UpdateSeparatorStr_Param
	{
	public:

		struct FString InCulture; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
