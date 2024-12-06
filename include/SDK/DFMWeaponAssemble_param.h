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
	struct Function_DFMWeaponAssemble_AssemblerCameraCtrl_UpdateDOFParam_Param
	{
	public:

		enum class EAssemblerCamPoint CameraPoint; // 0x00(0x01)
	};

	struct Function_DFMWeaponAssemble_AssembleWeaponActor_UpdateFixWorldTransformLocation_Param
	{
	public:

	};

	struct Function_DFMWeaponAssemble_AssembleWeaponNodeTree_SetSocketFlag_Param
	{
	public:

		struct FGPAssemblePartNode Node; // 0x00(0x58)
		bool bIsSimulateParentNode; // 0x58(0x01)
	};

	struct Function_DFMWeaponAssemble_AssembleWeaponDataLibrary_RemoveNodeFromeDescByIndex_Param
	{
	public:

		struct UModularWeaponDesc* Desc; // 0x00(0x08)
		int32_t PartNodeIndex; // 0x08(0x04)
		bool bOnlyForCheck; // 0x0c(0x01)
		bool bFillVirtualParts; // 0x0d(0x01)
		char pad_E[0x2]; // 0x0e(0x02)
		struct FFastEquipResult ReturnValue; // 0x10(0x78)
	};

	struct Function_DFMWeaponAssemble_AssembleWeaponMgr_GetEmptyWeapon_Param
	{
	public:

		struct UWorld* InWorld; // 0x00(0x08)
		struct AAssembleWeaponActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMWeaponAssemble_BracketActor_SetYaw_Param
	{
	public:

		float Yaw; // 0x00(0x04)
	};

	struct Function_DFMWeaponAssemble_LightEnvToogle_ToogleEnv_Param
	{
	public:

		bool bOpen; // 0x00(0x01)
	};

	struct Function_DFMWeaponAssemble_RTICapture_HandleCaptureWeapon_Param
	{
	public:

		struct AAssembleWeaponActor* Weapon; // 0x00(0x08)
		struct FVector2D RTSize; // 0x08(0x08)
		struct FRTIConfigRow RTIConfigRow; // 0x10(0x40)
		struct UCaptureRTResult* CaptureRTResult; // 0x50(0x08)
	};

	struct Function_DFMWeaponAssemble_RTICaptureHelper_HandleLightBPActor_Param
	{
	public:

		struct AActor* LightBPActor; // 0x00(0x08)
		bool bEnable; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct ARTICapture* RTICapture; // 0x10(0x08)
	};

	struct Function_DFMWeaponAssemble_RuntimeIconMaker_StaticRequestStaticIconByObject_Param
	{
	public:

	};

	struct Function_DFMWeaponAssemble_WeaponAssemblerUtil_TouchToSwitchPoint_Param
	{
	public:

		struct FVector2D ScreenPos; // 0x00(0x08)
		enum class EAssemblerCamPoint ReturnValue; // 0x08(0x01)
	};

	struct Function_DFMWeaponAssemble_WeaponAssembleSubsystem_ToggleTextureStreaming_Param
	{
	public:

		bool bOpen; // 0x00(0x01)
	};

	struct Function_DFMWeaponAssemble_WeaponDisplayBoard_Touch_Param
	{
	public:

		struct FVector2D ScreenPos; // 0x00(0x08)
		int16_t ReturnValue; // 0x08(0x02)
	};

	struct Function_DFMWeaponAssemble_WeaponPresetGenerateTool_GenerateWepaonPresetInner_Param
	{
	public:

		struct UGPModularWeaponDesc* InWeaponDesc; // 0x00(0x08)
		struct FWeaponPresetGenerateParam Param; // 0x08(0x10)
		struct UGPModularWeaponDesc* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMWeaponAssemble_WeaponSkinPreviewSpawner_RefreshWeaponActor_Param
	{
	public:

	};

	struct Function_DFMWeaponAssemble_WeaponTestWorldSystem_EnableFocusWeaponMode_Param
	{
	public:

	};

	struct Function_DFMWeaponAssemble_WeaponAdapterItemAimDownSightsSimple_OnAnimSeqLoadComplete_Param
	{
	public:

		struct FSoftObjectPath AssetPath; // 0x00(0x18)
	};

	struct Function_DFMWeaponAssemble_WeaponAdapterItemBipodSimple_TryModifyBipod_Param
	{
	public:

		struct AAssembleWeaponActor* AssembleWeaponActor; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
