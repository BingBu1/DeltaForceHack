/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#include "../SDK.h"

namespace Dumper
{
	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FNPCUIInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FNPCUIInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x4e\x50\x43\x55\x49\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FBuildingUIInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FBuildingUIInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x42\x75\x69\x6c\x64\x69\x6e\x67\x55\x49\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSafeHouseAreaInfoRow.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSafeHouseAreaInfoRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x41\x72\x65\x61\x49\x6e\x66\x6f\x52\x6f\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSafeHouseAreaLevelRow.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSafeHouseAreaLevelRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x41\x72\x65\x61\x4c\x65\x76\x65\x6c\x52\x6f\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSafeHouseBuildingCondition.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSafeHouseBuildingCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x42\x75\x69\x6c\x64\x69\x6e\x67\x43\x6f\x6e\x64\x69\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSavedTrans.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSavedTrans::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x76\x65\x64\x54\x72\x61\x6e\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FRangeTargetConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FRangeTargetConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x52\x61\x6e\x67\x65\x54\x61\x72\x67\x65\x74\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIrisSafeHouseInteractorDepartmentTitle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIrisSafeHouseInteractorDepartmentTitle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x44\x65\x70\x61\x72\x74\x6d\x65\x6e\x74\x54\x69\x74\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIrisSafeHouseInteractorIcon.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIrisSafeHouseInteractorIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x49\x63\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIrisSafeHouseInteractorIconUp.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIrisSafeHouseInteractorIconUp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x49\x63\x6f\x6e\x55\x70");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIrisSafeHouseInteractorNPCIcon.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIrisSafeHouseInteractorNPCIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x4e\x50\x43\x49\x63\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIrisSafeHouseInteractorOperate.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIrisSafeHouseInteractorOperate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x4f\x70\x65\x72\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIrisSafeHouseInteractorView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIrisSafeHouseInteractorView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction URaidSelectMap.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* URaidSelectMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x52\x61\x69\x64\x53\x65\x6c\x65\x63\x74\x4d\x61\x70");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ASafeHouseBuilding.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASafeHouseBuilding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x42\x75\x69\x6c\x64\x69\x6e\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ASafeHouseBuildingProxy.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASafeHouseBuildingProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x42\x75\x69\x6c\x64\x69\x6e\x67\x50\x72\x6f\x78\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ASafeHouseDepartment.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASafeHouseDepartment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x44\x65\x70\x61\x72\x74\x6d\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USafeHouseGameplayDelegates.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USafeHouseGameplayDelegates::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x44\x65\x6c\x65\x67\x61\x74\x65\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USafeHouseGameplayUtils.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USafeHouseGameplayUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x55\x74\x69\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USafeHouseInteractorCommonView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USafeHouseInteractorCommonView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x43\x6f\x6d\x6d\x6f\x6e\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ASafeHouseLightCtrl.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASafeHouseLightCtrl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x4c\x69\x67\x68\x74\x43\x74\x72\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ASafeHouseRangeData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASafeHouseRangeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x52\x61\x6e\x67\x65\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USafeHouseRangeUtil.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USafeHouseRangeUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x52\x61\x6e\x67\x65\x55\x74\x69\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHBuildingCameraComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHBuildingCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x42\x75\x69\x6c\x64\x69\x6e\x67\x43\x61\x6d\x65\x72\x61\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHBuildingWhiteDotComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHBuildingWhiteDotComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x42\x75\x69\x6c\x64\x69\x6e\x67\x57\x68\x69\x74\x65\x44\x6f\x74\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHInteractorBaseComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHInteractorBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x42\x61\x73\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHInteractorBasePattern.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHInteractorBasePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x42\x61\x73\x65\x50\x61\x74\x74\x65\x72\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHInteractorNPCComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHInteractorNPCComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x4e\x50\x43\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHInteractorOpenUIPattern.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHInteractorOpenUIPattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x4f\x70\x65\x6e\x55\x49\x50\x61\x74\x74\x65\x72\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHInteractorPlayDialoguePattern.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHInteractorPlayDialoguePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x50\x6c\x61\x79\x44\x69\x61\x6c\x6f\x67\x75\x65\x50\x61\x74\x74\x65\x72\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USHInteractorCallFunctionPattern.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USHInteractorCallFunctionPattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x43\x61\x6c\x6c\x46\x75\x6e\x63\x74\x69\x6f\x6e\x50\x61\x74\x74\x65\x72\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.IrisSafeHouseInteractorDepartmentTitle.SetInfo
	 * 	Flags: (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UIrisSafeHouseInteractorDepartmentTitle::SetInfo(struct FSoftObjectPath IconImgPath, struct FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x44\x65\x70\x61\x72\x74\x6d\x65\x6e\x74\x54\x69\x74\x6c\x65\x2e\x53\x65\x74\x49\x6e\x66\x6f");
		Function_SafeHouse_IrisSafeHouseInteractorDepartmentTitle_SetInfo_Param params { };
		params.IconImgPath = IconImgPath;
		params.Name = Name;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Name = params.Name;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.IrisSafeHouseInteractorIcon.SetVisibilityByOpacity
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void UIrisSafeHouseInteractorIcon::SetVisibilityByOpacity(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x49\x63\x6f\x6e\x2e\x53\x65\x74\x56\x69\x73\x69\x62\x69\x6c\x69\x74\x79\x42\x79\x4f\x70\x61\x63\x69\x74\x79");
		Function_SafeHouse_IrisSafeHouseInteractorIcon_SetVisibilityByOpacity_Param params { };
		params.Opacity = Opacity;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.IrisSafeHouseInteractorIconUp.SetVisibilityByOpacity
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void UIrisSafeHouseInteractorIconUp::SetVisibilityByOpacity(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x49\x63\x6f\x6e\x55\x70\x2e\x53\x65\x74\x56\x69\x73\x69\x62\x69\x6c\x69\x74\x79\x42\x79\x4f\x70\x61\x63\x69\x74\x79");
		Function_SafeHouse_IrisSafeHouseInteractorIconUp_SetVisibilityByOpacity_Param params { };
		params.Opacity = Opacity;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.IrisSafeHouseInteractorNPCIcon.SetUIVisibility
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UIrisSafeHouseInteractorNPCIcon::SetUIVisibility(enum class ESlateVisibility State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x4e\x50\x43\x49\x63\x6f\x6e\x2e\x53\x65\x74\x55\x49\x56\x69\x73\x69\x62\x69\x6c\x69\x74\x79");
		Function_SafeHouse_IrisSafeHouseInteractorNPCIcon_SetUIVisibility_Param params { };
		params.State = State;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.IrisSafeHouseInteractorOperate.RefreshUI
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void UIrisSafeHouseInteractorOperate::RefreshUI(int32_t BuidingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x4f\x70\x65\x72\x61\x74\x65\x2e\x52\x65\x66\x72\x65\x73\x68\x55\x49");
		Function_SafeHouse_IrisSafeHouseInteractorOperate_RefreshUI_Param params { };
		params.BuidingID = BuidingID;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.IrisSafeHouseInteractorView.RemoveNPCICON
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	bool UIrisSafeHouseInteractorView::RemoveNPCICON(struct USHInteractorBaseComponent* InteractorCmp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x49\x72\x69\x73\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x56\x69\x65\x77\x2e\x52\x65\x6d\x6f\x76\x65\x4e\x50\x43\x49\x43\x4f\x4e");
		Function_SafeHouse_IrisSafeHouseInteractorView_RemoveNPCICON_Param params { };
		params.InteractorCmp = InteractorCmp;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.RaidSelectMap.RemoveMapItem
	 * 	Flags: (Final, Native, Protected)
	 */
	struct UUserWidget* URaidSelectMap::RemoveMapItem(struct FString Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x52\x61\x69\x64\x53\x65\x6c\x65\x63\x74\x4d\x61\x70\x2e\x52\x65\x6d\x6f\x76\x65\x4d\x61\x70\x49\x74\x65\x6d");
		Function_SafeHouse_RaidSelectMap_RemoveMapItem_Param params { };
		params.Name = Name;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SafeHouseBuilding.TimelineFinishedCallBack
	 * 	Flags: (Final, Native, Private)
	 */
	void ASafeHouseBuilding::TimelineFinishedCallBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x42\x75\x69\x6c\x64\x69\x6e\x67\x2e\x54\x69\x6d\x65\x6c\x69\x6e\x65\x46\x69\x6e\x69\x73\x68\x65\x64\x43\x61\x6c\x6c\x42\x61\x63\x6b");
		Function_SafeHouse_SafeHouseBuilding_TimelineFinishedCallBack_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SafeHouseBuildingProxy.UpdateInteraction
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void ASafeHouseBuildingProxy::UpdateInteraction(bool bOperating, float Dist, float DistToScreenCenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x42\x75\x69\x6c\x64\x69\x6e\x67\x50\x72\x6f\x78\x79\x2e\x55\x70\x64\x61\x74\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x69\x6f\x6e");
		Function_SafeHouse_SafeHouseBuildingProxy_UpdateInteraction_Param params { };
		params.bOperating = bOperating;
		params.Dist = Dist;
		params.DistToScreenCenter = DistToScreenCenter;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SafeHouseDepartment.SetInfo
	 * 	Flags: (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	void ASafeHouseDepartment::SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x44\x65\x70\x61\x72\x74\x6d\x65\x6e\x74\x2e\x53\x65\x74\x49\x6e\x66\x6f");
		Function_SafeHouse_SafeHouseDepartment_SetInfo_Param params { };
		params.IconImgPath = IconImgPath;
		params.Name = Name;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SafeHouseGameplayDelegates.SafeHouseAreaLevelUp
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void USafeHouseGameplayDelegates::SafeHouseAreaLevelUp(struct FText AreaName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x44\x65\x6c\x65\x67\x61\x74\x65\x73\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x41\x72\x65\x61\x4c\x65\x76\x65\x6c\x55\x70");
		Function_SafeHouse_SafeHouseGameplayDelegates_SafeHouseAreaLevelUp_Param params { };
		params.AreaName = AreaName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SafeHouseGameplayUtils.SetCharacterStaminaChangeRate
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void USafeHouseGameplayUtils::STATIC_SetCharacterStaminaChangeRate(struct ADFMCharacter* CHARACTER, float ChangeRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x55\x74\x69\x6c\x73\x2e\x53\x65\x74\x43\x68\x61\x72\x61\x63\x74\x65\x72\x53\x74\x61\x6d\x69\x6e\x61\x43\x68\x61\x6e\x67\x65\x52\x61\x74\x65");
		Function_SafeHouse_SafeHouseGameplayUtils_SetCharacterStaminaChangeRate_Param params { };
		params.CHARACTER = CHARACTER;
		params.ChangeRate = ChangeRate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SafeHouseLightCtrl.ToggleHeightFog
	 * 	Flags: (Final, Native, Public)
	 */
	void ASafeHouseLightCtrl::ToggleHeightFog(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x4c\x69\x67\x68\x74\x43\x74\x72\x6c\x2e\x54\x6f\x67\x67\x6c\x65\x48\x65\x69\x67\x68\x74\x46\x6f\x67");
		Function_SafeHouse_SafeHouseLightCtrl_ToggleHeightFog_Param params { };
		params.Enable = Enable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SafeHouseRangeUtil.SetupRangeWeapon
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void USafeHouseRangeUtil::STATIC_SetupRangeWeapon(struct ADFMWeapon* RangeWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x52\x61\x6e\x67\x65\x55\x74\x69\x6c\x2e\x53\x65\x74\x75\x70\x52\x61\x6e\x67\x65\x57\x65\x61\x70\x6f\x6e");
		Function_SafeHouse_SafeHouseRangeUtil_SetupRangeWeapon_Param params { };
		params.RangeWeapon = RangeWeapon;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SHInteractorBaseComponent.OnEndPlay
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void USHInteractorBaseComponent::OnEndPlay(enum class EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x42\x61\x73\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x4f\x6e\x45\x6e\x64\x50\x6c\x61\x79");
		Function_SafeHouse_SHInteractorBaseComponent_OnEndPlay_Param params { };
		params.EndPlayReason = EndPlayReason;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SafeHouse.SHInteractorNPCComponent.UpdateInteraction
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void USHInteractorNPCComponent::UpdateInteraction(bool bOperating, float Dist, float DistToScreenCenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x53\x48\x49\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x4e\x50\x43\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x55\x70\x64\x61\x74\x65\x49\x6e\x74\x65\x72\x61\x63\x74\x69\x6f\x6e");
		Function_SafeHouse_SHInteractorNPCComponent_UpdateInteraction_Param params { };
		params.bOperating = bOperating;
		params.Dist = Dist;
		params.DistToScreenCenter = DistToScreenCenter;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}