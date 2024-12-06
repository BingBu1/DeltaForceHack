
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUp_Video.WBP_SetUp_Video_C
// Size: 0x748 (Inherited: 0x550)
class UWBP_SetUp_Video_C_def2 : public UDFHDSettingsVideoPanel {
public:

	struct UWidgetAnimation* WBP_SetUp_Game_out; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SetUp_Game_in; // 0x558(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemAdpterID; // 0x560(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemAmbientOcclusionQuality; // 0x568(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemAnimationQuality; // 0x570(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemAntiAliasingMethod; // 0x578(0x08)
	struct UWBP_SetUpComponent_Jump_Pc_C* _wtItemBrightness_jump; // 0x580(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemDisplayMode; // 0x588(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemDisplayResolution; // 0x590(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemDistortionQuality; // 0x598(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char _wtItemDLSSFrameGeneration[0x8]; // 0x5a0(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char _wtItemDLSSReflex[0x8]; // 0x5a8(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemDLSSReflexMode; // 0x5b0(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemFoliageQuality; // 0x5b8(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemGIQuality; // 0x5c0(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemGraphicsPreset; // 0x5c8(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemMaxFPS; // 0x5d0(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemMaxFPSFrontEnd; // 0x5d8(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemMonitorID; // 0x5e0(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemParticleQuality; // 0x5e8(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemPostProcessQuality; // 0x5f0(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemReflectionQuality; // 0x5f8(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemRefreshRate; // 0x600(0x08)
	struct UWBP_SetUpComponent_SplitBtn_2_C* _wtItemRenderScale; // 0x608(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemRTXAmbientOcclusion; // 0x610(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char _wtItemRTXEnabled[0x8]; // 0x618(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemRTXGI; // 0x620(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemRTXQuality; // 0x628(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemRTXReflections; // 0x630(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemRTXShadows; // 0x638(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemSceneDetailLevel; // 0x640(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char _wtItemScopeUseRT[0x8]; // 0x648(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemShadingQuality; // 0x650(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemShadowMapResolution; // 0x658(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemShadowQuality; // 0x660(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemStreamingQuality; // 0x668(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemSuperResolutionMethod; // 0x670(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemSuperResolutionQualityDLSS; // 0x678(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemSuperResolutionQualityFSR2; // 0x680(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemSuperResolutionQualityTSR; // 0x688(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemSuperResolutionQualityXESS; // 0x690(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemTextureFilteringQuality; // 0x698(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemTextureQuality; // 0x6a0(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemViewArtStyle; // 0x6a8(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemViewDistanceLevel; // 0x6b0(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* _wtItemVolumetricFogQuality; // 0x6b8(0x08)
	struct UWBP_SetUpComponent_SplitBtn_2_C* SplitBtn_Vehicles; // 0x6c0(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char WBP_SetUpComponent_DepthOfFieldADS[0x8]; // 0x6c8(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char WBP_SetUpComponent_FastSync[0x8]; // 0x6d0(0x08)
	/*struct UWBP_SetUpComponent_keyboardTitle_C**/char WBP_SetUpComponent_ListTitle[0x8]; // 0x6d8(0x08)
	/*struct UWBP_SetUpComponent_keyboardTitle_C**/char WBP_SetUpComponent_ListTitle_2[0x8]; // 0x6e0(0x08)
	/*struct UWBP_SetUpComponent_keyboardTitle_C**/char WBP_SetUpComponent_ListTitle_460[0x8]; // 0x6e8(0x08)
	/*struct UWBP_SetUpComponent_keyboardTitle_C**/char WBP_SetUpComponent_ListTitle_518[0x8]; // 0x6f0(0x08)
	/*struct UWBP_SetUpComponent_keyboardTitle_C**/char WBP_SetUpComponent_ListTitle_DLSS[0x8]; // 0x6f8(0x08)
	/*struct UWBP_SetUpComponent_keyboardTitle_C**/char WBP_SetUpComponent_ListTitle_RTX[0x8]; // 0x700(0x08)
	struct UWBP_SetUpComponent_MultipleChoice_C* WBP_SetUpComponent_MultipleChoice_4; // 0x708(0x08)
	struct UWBP_SetUpComponent_SplitBtn_2_C* WBP_SetUpComponent_Sharpen; // 0x710(0x08)
	struct UWBP_SetUpComponent_SplitBtn_2_C* WBP_SetUpComponent_SplitBtn; // 0x718(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char WBP_SetUpComponent_VSync[0x8]; // 0x720(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char WBP_SetUpComponent_WeaponMotionBlur[0x8]; // 0x728(0x08)
	/*struct UWBP_SetUpComponent_Check_C**/char WBP_SetUpComponent_WorldMotionBlur[0x8]; // 0x730(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wtCommonButtonV1S1[0x8]; // 0x738(0x08)
	/*struct UWBP_DFCommonButtonV1S2_C**/char wtCommonButtonV1S2[0x8]; // 0x740(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
