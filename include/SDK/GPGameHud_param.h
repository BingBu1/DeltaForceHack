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
	struct Function_GPGameHud_BaseHUD_UpdatePanelSwitcherHD_Param
	{
	public:

	};

	struct Function_GPGameHud_GPGameHudDelegates_Get_Param
	{
	public:

		struct UObject* GameContextObject; // 0x00(0x08)
		struct UGPGameHudDelegates* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameHud_GPMobileCustomLayoutBPLibrary_FetchAllCustomLayoutAppearance_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_GPGameHud_HUDStateManager_RemoveState_Param
	{
	public:

		enum class GameHUDSate State; // 0x00(0x01)
		bool bForceRefresh; // 0x01(0x01)
	};

	struct Function_GPGameHud_MobileDraggableButton_IsDragging_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameHud_MobileGamePad_OnSetCinematicMode_Param
	{
	public:

		bool bCinematicMode; // 0x00(0x01)
	};

	struct Function_GPGameHud_RootUIView_SetRootUISafeZone_Param
	{
	public:

		float SafeZoneValue; // 0x00(0x04)
	};

	struct Function_GPGameHud_BaseUIView_ToggleScreenOCStaticMesh_Param
	{
	public:

	};

	struct Function_GPGameHud_BaseUIController_StartInGame_Param
	{
	public:

	};

	struct Function_GPGameHud_LuaUIHudBaseView_Update_Param
	{
	public:

		float Delta; // 0x00(0x04)
	};

	struct Function_GPGameHud_BatchUIView_SetRootUISafeZone_Param
	{
	public:

		float InSafeZoneValue; // 0x00(0x04)
	};

	struct Function_GPGameHud_CommonHUDView_OnHUDStateChanged_Param
	{
	public:

	};

	struct Function_GPGameHud_MobileGamePadView_OpenGMMainView4Lua_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
