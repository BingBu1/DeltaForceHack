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
	struct Function_AkAudio_AkAcousticPortal_OpenPortal_Param
	{
	public:

	};

	struct Function_AkAudio_AkAmbientSound_StopAmbientSound_Param
	{
	public:

	};

	struct Function_AkAudio_AkAndroidInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkCheckBox_SetIsChecked_Param
	{
	public:

		bool InIsChecked; // 0x00(0x01)
	};

	struct Function_AkAudio_AkEventMemoryStatistics_LogMemInfo_Param
	{
	public:

	};

	struct Function_AkAudio_AkGameplayStatics_TestGetAudioSamplesFromSinkRecordPlugin_Param
	{
	public:

		struct TArray<float> OutSamples; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_AkAudio_AkGeometryComponent_UpdateGeometry_Param
	{
	public:

	};

	struct Function_AkAudio_AkHololensInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Param
	{
	public:

		struct FAkBoolPropertyToControl INAkBoolPropertyToControl; // 0x00(0x10)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_AkAudio_AkItemBoolProperties_SetSearchText_Param
	{
	public:

		struct FString newText; // 0x00(0x10)
	};

	struct Function_AkAudio_AkItemPropertiesConv_Conv_FAkPropertyToControlToText_Param
	{
	public:

		struct FAkPropertyToControl INAkPropertyToControl; // 0x00(0x10)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_AkAudio_AkItemProperties_SetSearchText_Param
	{
	public:

		struct FString newText; // 0x00(0x10)
	};

	struct Function_AkAudio_AkLinuxInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkLuminInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkMacInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkPS4InitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkSlider_SetValue_Param
	{
	public:

		float InValue; // 0x00(0x04)
	};

	struct Function_AkAudio_AkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Param
	{
	public:

	};

	struct Function_AkAudio_AkSwitchInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkWaapiCalls_Unsubscribe_Param
	{
	public:

		struct FAkWaapiSubscriptionId SubscriptionId; // 0x00(0x08)
		bool UnsubscriptionDone; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FAKWaapiJsonObject ReturnValue; // 0x10(0x10)
	};

	struct Function_AkAudio_SAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Param
	{
	public:

		struct FAkWaapiFieldNames INAkWaapiFieldNames; // 0x00(0x10)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_AkAudio_AkWaapiJsonManager_SetStringField_Param
	{
	public:

		struct FAkWaapiFieldNames FieldName; // 0x00(0x10)
		struct FString FieldValue; // 0x10(0x10)
		struct FAKWaapiJsonObject Target; // 0x20(0x10)
		struct FAKWaapiJsonObject ReturnValue; // 0x30(0x10)
	};

	struct Function_AkAudio_AkWaapiUriConv_Conv_FAkWaapiUriToText_Param
	{
	public:

		struct FAkWaapiUri INAkWaapiUri; // 0x00(0x10)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_AkAudio_AkWindowsInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_AkWwiseTree_SetSearchText_Param
	{
	public:

		struct FString newText; // 0x00(0x10)
	};

	struct Function_AkAudio_AkXboxOneInitializationSettings_MigrateMultiCoreRendering_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_AkAudio_PostEventAsync_PostEventAsync_Param
	{
	public:

	};

	struct Function_AkAudio_PostEventAtLocationAsync_PostEventAtLocationAsync_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UAkAudioEvent* AkEvent; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		struct FRotator Orientation; // 0x1c(0x0c)
		struct UPostEventAtLocationAsync* ReturnValue; // 0x28(0x08)
	};

	struct Function_AkAudio_AkGameObject_PostAssociatedAkEventAsync_Param
	{
	public:

	};

	struct Function_AkAudio_AkComponent_UseReverbVolumes_Param
	{
	public:

		bool inUseReverbVolumes; // 0x00(0x01)
	};

	struct Function_AkAudio_AkAudioInputComponent_PostAssociatedAudioInputEvent_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_AkAudio_AkAudioEvent_GetStopShortID_Param
	{
	public:

		uint32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_AkAudio_AkMIDIEventCallbackInfo_GetType_Param
	{
	public:

		enum class EAkMidiEventType ReturnValue; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
