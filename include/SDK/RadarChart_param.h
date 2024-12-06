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
	struct Function_RadarChart_RadarChart_SetValuesForLayer_Param
	{
	public:

		char ValueLayerIndex; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<float> InValues; // 0x08(0x10)
	};

	struct Function_RadarChart_RadarChartSetValuesAnimated_SetValuesAnimated_Param
	{
	public:

		struct URadarChart* Target; // 0x00(0x08)
		char ValueLayer; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct TArray<float> Values; // 0x10(0x10)
		float Duration; // 0x20(0x04)
		char FPS; // 0x24(0x01)
		enum class EEasingFunc Ease; // 0x25(0x01)
		char pad_26[0x2]; // 0x26(0x02)
		struct URadarChartSetValuesAnimated* ReturnValue; // 0x28(0x08)
	};

	struct Function_RadarChart_RadarChartSetNormalizationScaleAnimated_SetNormalizationScaleAnimated_Param
	{
	public:

		struct URadarChart* Target; // 0x00(0x08)
		float NewScale; // 0x08(0x04)
		float Duration; // 0x0c(0x04)
		char FPS; // 0x10(0x01)
		enum class EEasingFunc Ease; // 0x11(0x01)
		char pad_12[0x6]; // 0x12(0x06)
		struct URadarChartSetNormalizationScaleAnimated* ReturnValue; // 0x18(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
