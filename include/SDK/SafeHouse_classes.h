
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SafeHouse.IrisSafeHouseInteractorDepartmentTitle
// Size: 0x2b8 (Inherited: 0x298)
class UIrisSafeHouseInteractorDepartmentTitle : public UUserWidget {
public:

	struct UWidgetAnimation* WBP_Title_in; // 0x298(0x08)
	struct UWidgetAnimation* WBP_Title_out; // 0x2a0(0x08)
	bool bCanPlayAnim; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UWidgetAnimation* AnimationToPlay; // 0x2b0(0x08)

	void SetInfo(struct FSoftObjectPath IconImgPath, struct FText& Name); // Function SafeHouse.IrisSafeHouseInteractorDepartmentTitle.SetInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.IrisSafeHouseInteractorIcon
// Size: 0x2c8 (Inherited: 0x298)
class UIrisSafeHouseInteractorIcon : public UUserWidget {
public:

	struct UWidgetAnimation* AnimationToPlay; // 0x298(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_Icon_in; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_Icon_out; // 0x2a8(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_name_in; // 0x2b0(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTip_name_out; // 0x2b8(0x08)
	bool bCanPlayAnim; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)

	void SetVisibilityByOpacity(float Opacity); // Function SafeHouse.IrisSafeHouseInteractorIcon.SetVisibilityByOpacity // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.IrisSafeHouseInteractorIconUp
// Size: 0x2c8 (Inherited: 0x298)
class UIrisSafeHouseInteractorIconUp : public UUserWidget {
public:

	struct UWidgetAnimation* AnimationToPlay; // 0x298(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTipUP_Icon_in; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTipUP_Icon_out; // 0x2a8(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTipUP_Name_in; // 0x2b0(0x08)
	struct UWidgetAnimation* WBP_SafeRoomInteraction3DTipUP_Name_out; // 0x2b8(0x08)
	float WidgetOffset; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)

	void SetVisibilityByOpacity(float Opacity); // Function SafeHouse.IrisSafeHouseInteractorIconUp.SetVisibilityByOpacity // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.IrisSafeHouseInteractorNPCIcon
// Size: 0x2b8 (Inherited: 0x298)
class UIrisSafeHouseInteractorNPCIcon : public UUserWidget {
public:

	struct UWidgetAnimation* AnimationToPlay; // 0x298(0x08)
	struct UWidgetAnimation* WBP_Interaction_Npc_in_2; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_Interaction_Npc_out_2; // 0x2a8(0x08)
	bool bCanPlayAnim; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)

	void SetUIVisibility(enum class ESlateVisibility State); // Function SafeHouse.IrisSafeHouseInteractorNPCIcon.SetUIVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.IrisSafeHouseInteractorOperate
// Size: 0x2a8 (Inherited: 0x298)
class UIrisSafeHouseInteractorOperate : public UUserWidget {
public:

	struct UWidget* OperatePanel; // 0x298(0x08)
	struct UCanvasPanel* Content; // 0x2a0(0x08)

	void RefreshUI(int32_t BuidingID); // Function SafeHouse.IrisSafeHouseInteractorOperate.RefreshUI // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.IrisSafeHouseInteractorView
// Size: 0x5e0 (Inherited: 0x5a8)
class UIrisSafeHouseInteractorView : public ULuaUIHudBaseView {
public:

	struct TArray<struct FBuildingUIInfo> BuildingInfos; // 0x5a8(0x10)
	struct TArray<struct FNPCUIInfo> NPCInfos; // 0x5b8(0x10)
	struct UIrisSafeHouseInteractorOperate* OperateView; // 0x5c8(0x08)
	struct UCanvasPanel* IconContainer; // 0x5d0(0x08)
	char pad_5D8[0x8]; // 0x5d8(0x08)

	bool RemoveNPCICON(struct USHInteractorBaseComponent* InteractorCmp); // Function SafeHouse.IrisSafeHouseInteractorView.RemoveNPCICON // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.RaidSelectMap
// Size: 0x638 (Inherited: 0x550)
class URaidSelectMap : public ULuaUIBaseView {
public:

	char pad_550[0xc]; // 0x550(0x0c)
	float ScaleConfig; // 0x55c(0x04)
	char pad_560[0x30]; // 0x560(0x30)
	float GoSpeed; // 0x590(0x04)
	struct FVector2D DefaultMapSize; // 0x594(0x08)
	char pad_59C[0x14]; // 0x59c(0x14)
	struct UImage* MapBase; // 0x5b0(0x08)
	struct UWidget* MapPanel; // 0x5b8(0x08)
	struct UCanvasPanel* MapItemContainer; // 0x5c0(0x08)
	struct UWidget* RootCanvas; // 0x5c8(0x08)
	struct UButton* ScaleUpBtn; // 0x5d0(0x08)
	struct UButton* ScaleDownBtn; // 0x5d8(0x08)
	struct USlider* ScaleSlider; // 0x5e0(0x08)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UUserWidget>> MapItemDic; // 0x5e8(0x50)

	struct UUserWidget* RemoveMapItem(struct FString Name); // Function SafeHouse.RaidSelectMap.RemoveMapItem // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseBuilding
// Size: 0x3d8 (Inherited: 0x378)
class ASafeHouseBuilding : public AActor {
public:

	struct USHBuildingCameraComponent* CameraCmp; // 0x378(0x08)
	struct USHBuildingWhiteDotComponent* WhiteDotCmp; // 0x380(0x08)
	struct UParticleSystemComponent* UpgradeParticleCmp; // 0x388(0x08)
	struct UBoxComponent* BoxCmp; // 0x390(0x08)
	struct UIrisSafeHouseInteractorIcon* Interaction3DTipWidget; // 0x398(0x08)
	struct UWidgetComponent* Interaction3DTipWidgetCmp; // 0x3a0(0x08)
	struct UBoxComponent* TriggerBoxCmp; // 0x3a8(0x08)
	char pad_3B0[0x10]; // 0x3b0(0x10)
	float ThresholdAngle; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UTimelineComponent* Timeline; // 0x3c8(0x08)
	struct UCurveFloat* FloatCurve; // 0x3d0(0x08)

	void TimelineFinishedCallBack(); // Function SafeHouse.SafeHouseBuilding.TimelineFinishedCallBack // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseBuildingProxy
// Size: 0x448 (Inherited: 0x378)
class ASafeHouseBuildingProxy : public AActor {
public:

	struct ASafeHouseBuilding* BuildingIns; // 0x378(0x08)
	struct USphereComponent* WhiteDotSphereCmp; // 0x380(0x08)
	struct UCameraComponent* CameraCmp; // 0x388(0x08)
	struct UClass* CurShakeClass; // 0x390(0x08)
	float CameraBlendTime; // 0x398(0x04)
	int32_t BuildingId; // 0x39c(0x04)
	struct TMap<int32_t, struct FSavedTrans> BuildingTrans; // 0x3a0(0x50)
	struct FVector2D Icon2DOffset; // 0x3f0(0x08)
	float MinDistToShow; // 0x3f8(0x04)
	float ShowNameDist; // 0x3fc(0x04)
	float ShowIconDist; // 0x400(0x04)
	float MinHeightDiffToInteract; // 0x404(0x04)
	bool bEnable3DUI; // 0x408(0x01)
	bool bEnableInteraction; // 0x409(0x01)
	bool bEnableUIRotation; // 0x40a(0x01)
	bool bMeshVisible; // 0x40b(0x01)
	float CanOperateDis; // 0x40c(0x04)
	float CanOperateAngleFacing; // 0x410(0x04)
	float CanOperateAngleNotFacing; // 0x414(0x04)
	struct UCurveFloat* TurningFloatCurve; // 0x418(0x08)
	float TurningThresholdAngle; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct TArray<struct UMaterialInterface*> UIMaterials; // 0x428(0x10)
	bool bMeshEffectHasBeenPlayed; // 0x438(0x01)
	bool bFacingUI; // 0x439(0x01)
	bool bCanOperate; // 0x43a(0x01)
	char pad_43B[0xd]; // 0x43b(0x0d)

	void UpdateInteraction(bool bOperating, float Dist, float DistToScreenCenter); // Function SafeHouse.SafeHouseBuildingProxy.UpdateInteraction // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseDepartment
// Size: 0x398 (Inherited: 0x378)
class ASafeHouseDepartment : public AActor {
public:

	struct UIrisSafeHouseInteractorDepartmentTitle* TitleUserWidget; // 0x378(0x08)
	struct UWidgetComponent* TitleWidgetCmp; // 0x380(0x08)
	enum class SafeHouseDepartmentType DepartmentType; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float ShowTitleDist; // 0x38c(0x04)
	bool EnalbeAnim; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)

	void SetInfo(struct FSoftObjectPath IconImgPath, struct FText Name); // Function SafeHouse.SafeHouseDepartment.SetInfo // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseGameplayDelegates
// Size: 0x48 (Inherited: 0x38)
class USafeHouseGameplayDelegates : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnSafeHouseAreaLevelUp[0x10]; // 0x38(0x10)

	void SafeHouseAreaLevelUp(struct FText AreaName); // Function SafeHouse.SafeHouseGameplayDelegates.SafeHouseAreaLevelUp // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseGameplayUtils
// Size: 0x30 (Inherited: 0x30)
class USafeHouseGameplayUtils : public UObject {
public:


	void STATIC_SetCharacterStaminaChangeRate(struct ADFMCharacter* CHARACTER, float ChangeRate); // Function SafeHouse.SafeHouseGameplayUtils.SetCharacterStaminaChangeRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseInteractorCommonView
// Size: 0x5a8 (Inherited: 0x5a8)
class USafeHouseInteractorCommonView : public ULuaUIHudBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseLightCtrl
// Size: 0x380 (Inherited: 0x378)
class ASafeHouseLightCtrl : public AActor {
public:

	struct TWeakObjectPtr<struct AExponentialHeightFog> SafeHouseHeightFog; // 0x378(0x08)

	void ToggleHeightFog(bool Enable); // Function SafeHouse.SafeHouseLightCtrl.ToggleHeightFog // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseRangeData
// Size: 0x3d0 (Inherited: 0x378)
class ASafeHouseRangeData : public AActor {
public:

	struct TArray<struct FRangeTargetConfig> AllNormalRangeTargetConfigs; // 0x378(0x10)
	struct TArray<float> AllHealthRanges; // 0x388(0x10)
	bool bShowDamageHUD; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UClass* RangeTargetClass; // 0x3a0(0x08)
	struct FVector RangeTargetAttachLoc; // 0x3a8(0x0c)
	struct FRotator RangeTargetAttachRot; // 0x3b4(0x0c)
	struct FName RangeTargetAttachBoneName; // 0x3c0(0x08)
	struct UAnimSequenceBase* RangeTargetDownAnim; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SafeHouseRangeUtil
// Size: 0x30 (Inherited: 0x30)
class USafeHouseRangeUtil : public UObject {
public:


	void STATIC_SetupRangeWeapon(struct ADFMWeapon* RangeWeapon); // Function SafeHouse.SafeHouseRangeUtil.SetupRangeWeapon // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHBuildingCameraComponent
// Size: 0xc20 (Inherited: 0xc10)
class USHBuildingCameraComponent : public UCameraComponent {
public:

	struct UClass* CameraShakeClass; // 0xc10(0x08)
	char pad_C18[0x8]; // 0xc18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHBuildingWhiteDotComponent
// Size: 0x250 (Inherited: 0x240)
class USHBuildingWhiteDotComponent : public USceneComponent {
public:

	bool bOverrideIconOffset; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FVector2D IconOffset; // 0x244(0x08)
	char pad_24C[0x4]; // 0x24c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHInteractorBaseComponent
// Size: 0x148 (Inherited: 0x100)
class USHInteractorBaseComponent : public UActorComponent {
public:

	struct FText InteractorName; // 0x100(0x18)
	float InteractDis; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct USHInteractorBasePattern* InteractorPattern; // 0x120(0x08)
	enum class SafeHouseDepartmentType DepartmentType; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t DeviceID; // 0x12c(0x04)
	bool bEnableIcon; // 0x130(0x01)
	char pad_131[0x17]; // 0x131(0x17)

	void OnEndPlay(enum class EEndPlayReason EndPlayReason); // Function SafeHouse.SHInteractorBaseComponent.OnEndPlay // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHInteractorBasePattern
// Size: 0x38 (Inherited: 0x30)
class USHInteractorBasePattern : public UObject {
public:

	enum class SafeHouseInteractiveType InteractiveType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHInteractorNPCComponent
// Size: 0x198 (Inherited: 0x148)
class USHInteractorNPCComponent : public USHInteractorBaseComponent {
public:

	enum class SafeHouseNPCType NPCType; // 0x148(0x01)
	char pad_149[0xf]; // 0x149(0x0f)
	int32_t NpcId; // 0x158(0x04)
	bool bEnableInteraction; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	float ShowNameDist; // 0x160(0x04)
	float CanOperateDis; // 0x164(0x04)
	float MinHeightDiffToInteract; // 0x168(0x04)
	float CanOperateAngleFacing; // 0x16c(0x04)
	float CanOperateAngleNotFacing; // 0x170(0x04)
	bool bFacingUI; // 0x174(0x01)
	bool bCanOperate; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	struct UIrisSafeHouseInteractorNPCIcon* Interaction3DTipWidget; // 0x178(0x08)
	struct UWidgetComponent* Interaction3DTipWidgetCmp; // 0x180(0x08)
	struct USkeletalMeshComponent* Skeleton; // 0x188(0x08)
	char pad_190[0x8]; // 0x190(0x08)

	void UpdateInteraction(bool bOperating, float Dist, float DistToScreenCenter); // Function SafeHouse.SHInteractorNPCComponent.UpdateInteraction // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHInteractorOpenUIPattern
// Size: 0x48 (Inherited: 0x38)
class USHInteractorOpenUIPattern : public USHInteractorBasePattern {
public:

	struct FString UIName; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHInteractorPlayDialoguePattern
// Size: 0x48 (Inherited: 0x38)
class USHInteractorPlayDialoguePattern : public USHInteractorBasePattern {
public:

	struct FString DialogEventName; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SafeHouse.SHInteractorCallFunctionPattern
// Size: 0x58 (Inherited: 0x38)
class USHInteractorCallFunctionPattern : public USHInteractorBasePattern {
public:

	struct FString FunctionName; // 0x38(0x10)
	struct FString Args; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
