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
	struct Function_SafeHouse_IrisSafeHouseInteractorDepartmentTitle_SetInfo_Param
	{
	public:

		struct FSoftObjectPath IconImgPath; // 0x00(0x18)
		struct FText Name; // 0x18(0x18)
	};

	struct Function_SafeHouse_IrisSafeHouseInteractorIcon_SetVisibilityByOpacity_Param
	{
	public:

		float Opacity; // 0x00(0x04)
	};

	struct Function_SafeHouse_IrisSafeHouseInteractorIconUp_SetVisibilityByOpacity_Param
	{
	public:

		float Opacity; // 0x00(0x04)
	};

	struct Function_SafeHouse_IrisSafeHouseInteractorNPCIcon_SetUIVisibility_Param
	{
	public:

		enum class ESlateVisibility State; // 0x00(0x01)
	};

	struct Function_SafeHouse_IrisSafeHouseInteractorOperate_RefreshUI_Param
	{
	public:

		int32_t BuidingID; // 0x00(0x04)
	};

	struct Function_SafeHouse_IrisSafeHouseInteractorView_RemoveNPCICON_Param
	{
	public:

		struct USHInteractorBaseComponent* InteractorCmp; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_SafeHouse_RaidSelectMap_RemoveMapItem_Param
	{
	public:

		struct FString Name; // 0x00(0x10)
		struct UUserWidget* ReturnValue; // 0x10(0x08)
	};

	struct Function_SafeHouse_SafeHouseBuilding_TimelineFinishedCallBack_Param
	{
	public:

	};

	struct Function_SafeHouse_SafeHouseBuildingProxy_UpdateInteraction_Param
	{
	public:

		bool bOperating; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Dist; // 0x04(0x04)
		float DistToScreenCenter; // 0x08(0x04)
	};

	struct Function_SafeHouse_SafeHouseDepartment_SetInfo_Param
	{
	public:

		struct FSoftObjectPath IconImgPath; // 0x00(0x18)
		struct FText Name; // 0x18(0x18)
	};

	struct Function_SafeHouse_SafeHouseGameplayDelegates_SafeHouseAreaLevelUp_Param
	{
	public:

		struct FText AreaName; // 0x00(0x18)
	};

	struct Function_SafeHouse_SafeHouseGameplayUtils_SetCharacterStaminaChangeRate_Param
	{
	public:

		struct ADFMCharacter* CHARACTER; // 0x00(0x08)
		float ChangeRate; // 0x08(0x04)
	};

	struct Function_SafeHouse_SafeHouseLightCtrl_ToggleHeightFog_Param
	{
	public:

		bool Enable; // 0x00(0x01)
	};

	struct Function_SafeHouse_SafeHouseRangeUtil_SetupRangeWeapon_Param
	{
	public:

		struct ADFMWeapon* RangeWeapon; // 0x00(0x08)
	};

	struct Function_SafeHouse_SHInteractorBaseComponent_OnEndPlay_Param
	{
	public:

		enum class EEndPlayReason EndPlayReason; // 0x00(0x01)
	};

	struct Function_SafeHouse_SHInteractorNPCComponent_UpdateInteraction_Param
	{
	public:

		bool bOperating; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Dist; // 0x04(0x04)
		float DistToScreenCenter; // 0x08(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
