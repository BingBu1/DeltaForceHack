
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Breakthrough.AirDropMainView
// Size: 0x3c8 (Inherited: 0x388)
class UAirDropMainView : public UBaseUIView {
public:

	struct UDFTextBlock* PlayerScoreText; // 0x388(0x08)
	struct TArray<struct FClientDropVehicleInfo> ClientDropVehicleInfoArray; // 0x390(0x10)
	char pad_3A0[0x28]; // 0x3a0(0x28)

	void OnRefreshData(); // Function Breakthrough.AirDropMainView.OnRefreshData // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.AnchorSpawnArea
// Size: 0x458 (Inherited: 0x378)
class AAnchorSpawnArea : public AActor {
public:

	struct USceneComponent* SceneComponent; // 0x378(0x08)
	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x380(0x08)
	struct UArrowComponent* ArrowComponent; // 0x388(0x08)
	struct TArray<struct USceneComponent*> PosCandiates; // 0x390(0x10)
	char pad_3A0[0x4]; // 0x3a0(0x04)
	float NavDetectTop; // 0x3a4(0x04)
	float NavDetectBottom; // 0x3a8(0x04)
	bool bUseFixedPos; // 0x3ac(0x01)
	bool bConfigDedicateRebornConfig; // 0x3ad(0x01)
	char pad_3AE[0x2]; // 0x3ae(0x02)
	struct FName SpawnAreaID; // 0x3b0(0x08)
	struct TMap<enum class EEstimateName, struct FEstimateNameScore> SectorAnchorEstimateNames; // 0x3b8(0x50)
	float SectorAnchorEstimateOffest; // 0x408(0x04)
	float SectorAnchorEnterDangerousPlayerAliveTimeLimit; // 0x40c(0x04)
	float SectorAnchorDangerousSpawnAreaAdditionalWeight; // 0x410(0x04)
	float SectorAnchorChooseSafeSpawnAreaWeightThreshold; // 0x414(0x04)
	bool bIsUseDeathInfoOfNearWhenCalcRebronEstimate; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float WeightOfDeathInfoScore; // 0x41c(0x04)
	float MaxDistanceOfEffectiveDeathWhenCalcRebronEstimate; // 0x420(0x04)
	float MaxTimeOfEffectiveDeathWhenCalcRebronEstimate; // 0x424(0x04)
	float DangerousDuration; // 0x428(0x04)
	float EnterDangerousTime; // 0x42c(0x04)
	float PointBaseForLastEnemyReborneTime; // 0x430(0x04)
	float Camp0LastRebornTime; // 0x434(0x04)
	float Camp1LastRebornTime; // 0x438(0x04)
	bool bIsSafeRebornPoint; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	int32_t PlayerCampDistribution; // 0x440(0x04)
	float DetectHeight; // 0x444(0x04)
	char pad_448[0x10]; // 0x448(0x10)

	void SetDangerous(float RebornTime); // Function Breakthrough.AnchorSpawnArea.SetDangerous // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleCampSector
// Size: 0x4a0 (Inherited: 0x378)
class ABattleCampSector : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	int32_t OwnerCamp; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct USceneComponent* SceneComponent; // 0x390(0x08)
	struct USceneComponent* CachedMarkerComponent; // 0x398(0x08)
	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x3a0(0x08)
	struct USplineAreaComponent* HeightSectorSplineAreaComponent; // 0x3a8(0x08)
	struct USplineAreaComponent* DisplaySectorSplineAreaComponent; // 0x3b0(0x08)
	float DetectHeight; // 0x3b8(0x04)
	uint32_t SerialNumber; // 0x3bc(0x04)
	bool IsActive; // 0x3c0(0x01)
	bool NeedAreaActive; // 0x3c1(0x01)
	bool bShowMapSplineArea; // 0x3c2(0x01)
	bool bNeedShowMapSplineArea; // 0x3c3(0x01)
	bool bUseDisplaySectorSplineArea; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char InnerCharacters[0x50]; // 0x3c8(0x50)
	struct TArray<struct AAnchorSpawnArea*> SpawnAreas; // 0x418(0x10)
	/*struct TArray<struct TSoftObjectPtr<ASpawnAreaHub>>*/char SpawnAreaHubs[0x10]; // 0x428(0x10)
	struct TArray<struct AVehicleAutoSpawner*> IceLandAutoSpawners; // 0x438(0x10)
	struct TArray<enum class EAnimVehicleType> VehicleTypes; // 0x448(0x10)
	struct FLinearColor MapMaskID; // 0x458(0x10)
	struct TArray<struct ABattleSectorTrigger*> TriggerAreas; // 0x468(0x10)
	struct FTimerHandle TimerHandleCollectVehicleSpawnerStatus; // 0x478(0x08)
	/*struct FMulticastInlineDelegate*/char OnBattleCampSectorActiveChanged[0x10]; // 0x480(0x10)
	/*struct FMulticastInlineDelegate*/char OnBattleCampSectorNeedAreaActive[0x10]; // 0x490(0x10)

	void SetConfigVehicleSpawnCD(); // Function Breakthrough.BattleCampSector.SetConfigVehicleSpawnCD // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldCampSectorMarkerItem
// Size: 0x460 (Inherited: 0x438)
class UBattleFieldCampSectorMarkerItem : public UGPMarkerItemBase {
public:

	char pad_438[0x10]; // 0x438(0x10)
	float CampSectorMarkerExistTime; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ASpawnAreaHub* MarkedSpawnAreaHub; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void OnCampSectorMarkerShowed(); // Function Breakthrough.BattleFieldCampSectorMarkerItem.OnCampSectorMarkerShowed // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldCampSectorMarkerWidget
// Size: 0x5a0 (Inherited: 0x588)
class UBattleFieldCampSectorMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UBattleFieldCampSectorMarkerItem* BattleFieldCampSectorMarkerItem; // 0x588(0x08)
	struct UDFMImage* CampBg; // 0x590(0x08)
	struct UDFMImage* CampIcon; // 0x598(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughBalanceDataTableManager
// Size: 0xc0 (Inherited: 0x38)
class UBreakthroughBalanceDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x78]; // 0x38(0x78)
	struct TArray<struct UCurveFloat*> CurveAssets; // 0xb0(0x10)

	void OnCurveDataLoadComplete(struct TArray<struct FSoftObjectPath> Assets); // Function Breakthrough.BreakthroughBalanceDataTableManager.OnCurveDataLoadComplete // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ConquestBalanceDataTableManager
// Size: 0x2c8 (Inherited: 0x38)
class UConquestBalanceDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x280]; // 0x38(0x280)
	struct TArray<struct UCurveFloat*> CurveAssets; // 0x2b8(0x10)

	void OnCurveDataLoadComplete(struct TArray<struct FSoftObjectPath> Assets); // Function Breakthrough.ConquestBalanceDataTableManager.OnCurveDataLoadComplete // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldDeduceComponent
// Size: 0x290 (Inherited: 0x100)
class UBattleFieldDeduceComponent : public UActorComponent {
public:

	char pad_100[0x118]; // 0x100(0x118)
	struct TMap<uint32_t, struct AGPSequenceActor*> SequenceActorPool; // 0x218(0x50)
	char pad_268[0x8]; // 0x268(0x08)
	struct ABattleSectorBase* HasActivedSector; // 0x270(0x08)
	char pad_278[0x18]; // 0x278(0x18)

	void OnPlayDeduceDelay(int32_t InIndex); // Function Breakthrough.BattleFieldDeduceComponent.OnPlayDeduceDelay // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldElevator
// Size: 0x5a0 (Inherited: 0x570)
class ABattleFieldElevator : public AInteractor_Elevator {
public:

	struct UGPAudioEventAsset* ElevatorMovingEndAudio; // 0x570(0x08)
	float PlayElevatorMovingUpEndAudioTime; // 0x578(0x04)
	float PlayElevatorMovingDownEndAudioTime; // 0x57c(0x04)
	char pad_580[0x8]; // 0x580(0x08)
	struct UGPAudioEventAsset* ElevatorBellDownAudio; // 0x588(0x08)
	float PlayElevatorBellUpAudioTime; // 0x590(0x04)
	float PlayElevatorBellDownAudioTime; // 0x594(0x04)
	char pad_598[0x8]; // 0x598(0x08)

	void OnPlayElevatorMovingEndAudioTimerHandle(); // Function Breakthrough.BattleFieldElevator.OnPlayElevatorMovingEndAudioTimerHandle // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleSectorExtraManager
// Size: 0xb0 (Inherited: 0x38)
class UBattleSectorExtraManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x78]; // 0x38(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldMarkingRoulette
// Size: 0x4c8 (Inherited: 0x400)
class UBattleFieldMarkingRoulette : public UDFControllerRouletteBase {
public:

	struct UGPInputMarkingLogic* MarkingLogic; // 0x400(0x08)
	bool bPressedCancelRouletteInCurPressing; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct FBattleFieldMarkingItemData> MarkingItemArray; // 0x410(0x10)
	struct TArray<struct FString> MarkingItemDetailArray; // 0x420(0x10)
	struct TArray<struct UBattleFieldMarkingRouletteItem*> MarkingRouletteItemWidgets; // 0x430(0x10)
	char pad_440[0x8]; // 0x440(0x08)
	struct UCommonRouletteView* CommonRoulette; // 0x448(0x08)
	struct UCommonRouletteInfoView* CommonRouletteInfo_HD; // 0x450(0x08)
	struct UCommonRouletteInfoView* CommonRouletteInfo_Moblie; // 0x458(0x08)
	struct TMap<enum class ETeamIdentity, struct FBattleFieldMarkingItemArray> Items; // 0x460(0x50)
	struct FText CancelSelect; // 0x4b0(0x18)

	void SendSpeakVO(struct FBattleFieldMarkingItemData& InVOName); // Function Breakthrough.BattleFieldMarkingRoulette.SendSpeakVO // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldMarkingRouletteItem
// Size: 0x298 (Inherited: 0x298)
class UBattleFieldMarkingRouletteItem : public UUserWidget {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldOrdersComponent
// Size: 0x1f0 (Inherited: 0x100)
class UBattleFieldOrdersComponent : public UActorComponent {
public:

	struct TMap<struct ADFMVehicleBase*, struct FVehicleThreatInfo> VehicleThreatValueMap; // 0x100(0x50)
	struct FTimerHandle CheckHighThreatVehicleTimerHandle; // 0x150(0x08)
	struct FTimerHandle CheckHighThreatVehicleDelayWhenLastDieTimerHandle; // 0x158(0x08)
	struct TMap<enum class ECampType, struct ADFMVehicleBase*> HighThreatVehicleMap; // 0x160(0x50)
	struct UCurveFloat* HideScoreToThreatRatioCurve; // 0x1b0(0x08)
	struct FTimerHandle CheckrConcentratedFireSectorAnchorDelayTimerHandle; // 0x1b8(0x08)
	struct FTimerHandle CheckrConcentratedFireSectorAnchorTimerHandle; // 0x1c0(0x08)
	struct UCurveFloat* HideScoreToBalanceScoreRatioCurve; // 0x1c8(0x08)
	struct ABattleSectorAnchor* AttackerConcentratedFireSectorAnchor; // 0x1d0(0x08)
	float AttackerConcentratedFireSectorAnchorRecordTime; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct ABattleSectorAnchor* DefenderConcentratedFireSectorAnchor; // 0x1e0(0x08)
	float DefenderConcentratedFireSectorAnchorRecordTime; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)

	void VehicleDiedAddScore(struct ADFMVehicleBase* Vehicle, struct AGPCharacter* AttackerCharacter); // Function Breakthrough.BattleFieldOrdersComponent.VehicleDiedAddScore // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldRankSkillBackground
// Size: 0x300 (Inherited: 0x298)
class UBattleFieldRankSkillBackground : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UDFImage* SkillBg1; // 0x2a0(0x08)
	struct UDFImage* SkillBg2; // 0x2a8(0x08)
	struct TMap<enum class ERankSkillBackgroundUIStyle, struct FRankSkillBackgroundUIInfo> RankSkillBackgroundImageMap; // 0x2b0(0x50)

	void UpdateUIDegree(float InDegree); // Function Breakthrough.BattleFieldRankSkillBackground.UpdateUIDegree // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldTestView
// Size: 0x3a0 (Inherited: 0x388)
class UBattleFieldTestView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UDFTextBlock* TextBlock_2; // 0x390(0x08)
	struct UDFTextBlock* TextBlock_3; // 0x398(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldTopBarTextFXWidget
// Size: 0x2b8 (Inherited: 0x298)
class UBattleFieldTopBarTextFXWidget : public UUserWidget {
public:

	struct UImage* Image_light_FX; // 0x298(0x08)
	struct UImage* Image_light_FX2; // 0x2a0(0x08)
	struct UImage* Image_light_FX_2; // 0x2a8(0x08)
	struct UWidgetAnimation* Anima_highLight; // 0x2b0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleFieldTopBarTextWidget
// Size: 0x380 (Inherited: 0x298)
class UBattleFieldTopBarTextWidget : public UUserWidget {
public:

	struct UTextBlock* ScrollText_Votes; // 0x298(0x08)
	struct UTextBlock* Text_AddVotes; // 0x2a0(0x08)
	struct UDFImage* ScoreIconImage; // 0x2a8(0x08)
	struct UDFImage* DFImage_light_fx; // 0x2b0(0x08)
	struct UCanvasPanel* ScrollTextCanvasPanel; // 0x2b8(0x08)
	struct UWidgetAnimation* Anima_normal; // 0x2c0(0x08)
	struct UWidgetAnimation* Anima_special; // 0x2c8(0x08)
	struct UWidgetAnimation* Anima_out; // 0x2d0(0x08)
	struct TArray<struct FConquestTopBarScoreInfo> ConquestTopBarScoreInfos; // 0x2d8(0x10)
	char pad_2E8[0x10]; // 0x2e8(0x10)
	struct TMap<enum class EConquestTopBarScoreType, struct UPaperSprite*> ScoreIconColorMap; // 0x2f8(0x50)
	float ScoreIconShowCD; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UClass* ScoreEffectWidgetClass; // 0x350(0x08)
	struct FAnchorData ScoreEffectWidgetAnchor; // 0x358(0x28)

	void OnAnimationEnd(); // Function Breakthrough.BattleFieldTopBarTextWidget.OnAnimationEnd // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleSectorAnchor
// Size: 0x860 (Inherited: 0x378)
class ABattleSectorAnchor : public AActor {
public:

	char pad_378[0x28]; // 0x378(0x28)
	struct USceneComponent* SceneComponent; // 0x3a0(0x08)
	struct AActor* CenterActor; // 0x3a8(0x08)
	/*struct TArray<struct TSoftObjectPtr<AAnchorSpawnArea>>*/char Camp0InnerSpawnAreas[0x10]; // 0x3b0(0x10)
	/*struct TArray<struct TSoftObjectPtr<AAnchorSpawnArea>>*/char Camp0OuterSpawnAreas[0x10]; // 0x3c0(0x10)
	/*struct TArray<struct TSoftObjectPtr<AAnchorSpawnArea>>*/char Camp1InnerSpawnAreas[0x10]; // 0x3d0(0x10)
	/*struct TArray<struct TSoftObjectPtr<AAnchorSpawnArea>>*/char Camp1OuterSpawnAreas[0x10]; // 0x3e0(0x10)
	/*struct TArray<struct TSoftObjectPtr<AAnchorSpawnArea>>*/char GuaranteedRebornAreas[0x10]; // 0x3f0(0x10)
	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x400(0x08)
	struct FText Name; // 0x408(0x18)
	struct FName NameInIcon; // 0x420(0x08)
	char pad_428[0x10]; // 0x428(0x10)
	bool bShowMapSplineArea; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float Camp0OccupySpeedFactor; // 0x43c(0x04)
	float Camp1OccupySpeedFactor; // 0x440(0x04)
	float AbsMaxOccupyVal; // 0x444(0x04)
	float CurOccupyVal; // 0x448(0x04)
	float AttackerOccupyComparison; // 0x44c(0x04)
	float DetectHeight; // 0x450(0x04)
	float OccupySpeedMultiplier; // 0x454(0x04)
	float StickToTheGoalNeedKeepInSeconds; // 0x458(0x04)
	float StickToTheGoalNeedEnemyIn; // 0x45c(0x04)
	float StickToTheGoalTickRate; // 0x460(0x04)
	char pad_464[0x8]; // 0x464(0x08)
	int32_t DefaultOwnerCamp; // 0x46c(0x04)
	char pad_470[0x8]; // 0x470(0x08)
	int32_t OwnerCamp; // 0x478(0x04)
	int32_t SerialNumber; // 0x47c(0x04)
	bool IsActive; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	int32_t Camp0CharactersNum; // 0x484(0x04)
	int32_t Camp1CharactersNum; // 0x488(0x04)
	int32_t IsBigEventHappening; // 0x48c(0x04)
	struct UCurveFloat* DistanceCurve; // 0x490(0x08)
	struct UCurveFloat* DeltaScoreCurve; // 0x498(0x08)
	struct ABattleSectorBase* OwnerSector; // 0x4a0(0x08)
	int32_t ReDeployAutoSelectPriority; // 0x4a8(0x04)
	bool bShowCapMarker; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct FVector2D TopbarPosition; // 0x4b0(0x08)
	struct ASpawnAreaHub* Camp0SpawnAreaHub; // 0x4b8(0x08)
	struct ASpawnAreaHub* Camp1SpawnAreaHub; // 0x4c0(0x08)
	struct FTimerHandle TimerHandleCollectVehicleSpawnerStatus; // 0x4c8(0x08)
	bool IsConcentratedFireSectorAnchor; // 0x4d0(0x01)
	bool bCamp0OuterSpawnAreasEnemyIn; // 0x4d1(0x01)
	bool bCamp1OuterSpawnAreasEnemyIn; // 0x4d2(0x01)
	bool bUseSplineAreaComponentAsOuterRebornArea; // 0x4d3(0x01)
	float ZOffsetOfcharacterWhenCalcNavDistOfSpawnArea; // 0x4d4(0x04)
	char pad_4D8[0x190]; // 0x4d8(0x190)
	struct UBreakthroughStatisticsComponent* StatisticsComponent; // 0x668(0x08)
	char pad_670[0x8]; // 0x670(0x08)
	struct TArray<struct ADFMAIPlayerController*> DefendingAIList; // 0x678(0x10)
	bool bCanBeMarkedByPlayer; // 0x688(0x01)
	enum class EBattleFieldGameModeMarkerType PlayerMarkingType; // 0x689(0x01)
	char pad_68A[0x6]; // 0x68a(0x06)
	/*struct FMulticastInlineDelegate*/char OnClientOnSectorAnchorUpdated[0x10]; // 0x690(0x10)
	bool bIsFirstTimeEntryAnchor; // 0x6a0(0x01)
	bool bUseRebornSplineArea; // 0x6a1(0x01)
	char pad_6A2[0x6]; // 0x6a2(0x06)
	struct USplineAreaComponent* SectorRebornSplineAreaComponent; // 0x6a8(0x08)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char RebornSplineAreaInnerCharacters[0x50]; // 0x6b0(0x50)
	struct TMap<struct TWeakObjectPtr<struct ADFMCharacter>, float> RebornSplineAreaCamp0Characters; // 0x700(0x50)
	struct TMap<struct TWeakObjectPtr<struct ADFMCharacter>, float> RebornSplineAreaCamp1Characters; // 0x750(0x50)
	char pad_7A0[0x10]; // 0x7a0(0x10)
	float NoCharacterTime; // 0x7b0(0x04)
	char pad_7B4[0x4]; // 0x7b4(0x04)
	struct TMap<uint64_t, struct FPlayerInAnchorTimeInfo> EntryTimeMap; // 0x7b8(0x50)
	char pad_808[0xc]; // 0x808(0x0c)
	float MiniMapEnableEdgeTracingDistance; // 0x814(0x04)
	char pad_818[0x18]; // 0x818(0x18)
	struct UCurveFloat* OcuupyStatusSpeedCurve; // 0x830(0x08)
	int32_t FriendlySmokeBuffID; // 0x838(0x04)
	char pad_83C[0x24]; // 0x83c(0x24)

	void UpdatePlayerInAnchorState(bool InIsPlayerOccupyingAnchor); // Function Breakthrough.BattleSectorAnchor.UpdatePlayerInAnchorState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleSectorBase
// Size: 0x560 (Inherited: 0x378)
class ABattleSectorBase : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct FName SectorID; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)
	struct FText SectorName; // 0x3a0(0x18)
	int32_t AddVoteNum; // 0x3b8(0x04)
	int32_t SerialNumber; // 0x3bc(0x04)
	int32_t BonusVotes; // 0x3c0(0x04)
	uint32_t MatchDuration; // 0x3c4(0x04)
	bool IsInFightBack; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t OccupyCampId; // 0x3cc(0x04)
	bool bUseExtraArea; // 0x3d0(0x01)
	bool bUseDisplaySectorSplineArea; // 0x3d1(0x01)
	char pad_3D2[0x6]; // 0x3d2(0x06)
	struct FSoftObjectPath BackImg; // 0x3d8(0x18)
	bool bActived; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct USceneComponent* SceneComponent; // 0x3f8(0x08)
	/*struct TArray<struct TSoftObjectPtr<ABattleSectorAnchor>>*/char SectorAnchors[0x10]; // 0x400(0x10)
	struct TArray<struct ABattleCampSector*> CampSectors; // 0x410(0x10)
	struct TArray<struct ABattleSectorVehicle*> VehicleSectors; // 0x420(0x10)
	struct UCurveFloat* TicketRewardCurve; // 0x430(0x08)
	struct TArray<enum class EAnimVehicleType> VehicleTypes; // 0x438(0x10)
	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x448(0x08)
	struct USplineAreaComponent* ExtraSectorSplineAreaComponent; // 0x450(0x08)
	struct USplineAreaComponent* DisplaySectorSplineAreaComponent; // 0x458(0x08)
	int32_t DefenderInSectorNum; // 0x460(0x04)
	float ActivateTime; // 0x464(0x04)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char InnerCharacters[0x50]; // 0x468(0x50)
	struct FLinearColor MapMaskID; // 0x4b8(0x10)
	/*struct TSoftObjectPtr<AActor>*/char BP_RedeployFog[0x28]; // 0x4c8(0x28)
	char pad_4F0[0x10]; // 0x4f0(0x10)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char Camp1TransCharacters[0x50]; // 0x500(0x50)
	char pad_550[0x4]; // 0x550(0x04)
	float SectorChangeRemainTime; // 0x554(0x04)
	char pad_558[0x8]; // 0x558(0x08)

	void SetConfigVehicleSpawnCD(struct FBattleSectorDefines& BRDataRow); // Function Breakthrough.BattleSectorBase.SetConfigVehicleSpawnCD // (Final|Native|Private|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleSectorTrigger
// Size: 0x3f8 (Inherited: 0x378)
class ABattleSectorTrigger : public AActor {
public:

	struct USceneComponent* SceneComponent; // 0x378(0x08)
	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x380(0x08)
	char pad_388[0x18]; // 0x388(0x18)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char InnerCharacters[0x50]; // 0x3a0(0x50)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Breakthrough.BattleSectorTrigger.OnOverlapEnd // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BattleSectorVehicle
// Size: 0x408 (Inherited: 0x378)
class ABattleSectorVehicle : public AActor {
public:

	int32_t OwnerCamp; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct USceneComponent* SceneComponent; // 0x380(0x08)
	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x388(0x08)
	bool IsActive; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char InnerCharacters[0x50]; // 0x398(0x50)
	struct FLinearColor MapMaskID; // 0x3e8(0x10)
	struct TArray<enum class EAnimVehicleType> VehicleTypes; // 0x3f8(0x10)

	void OnRep_IsActive(); // Function Breakthrough.BattleSectorVehicle.OnRep_IsActive // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BigMapBattleMainKey
// Size: 0x2a8 (Inherited: 0x298)
class UBigMapBattleMainKey : public UUserWidget {
public:

	struct UHDKeyIconBoxWidget* KeyIcon_Close; // 0x298(0x08)
	bool bCanHDScaleMap; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)

	void BP_InitWidget(); // Function Breakthrough.BigMapBattleMainKey.BP_InitWidget // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakThroughAISubsystem
// Size: 0xb90 (Inherited: 0x9d8)
class ABreakThroughAISubsystem : public APVPAISubsystem {
public:

	bool bTransferBotOnStageBegin; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
	/*struct TSet<struct ADFMCharacter*>*/char BeingRescued[0x50]; // 0x9e0(0x50)
	bool bIsRetreating; // 0xa30(0x01)
	char pad_A31[0x2f]; // 0xa31(0x2f)
	struct TMap<struct ABattleSectorAnchor*, struct FObjectiveSectorInfoForAi> CacheSectorInfo; // 0xa60(0x50)
	char pad_AB0[0x58]; // 0xab0(0x58)
	struct TArray<struct ABattleRoutePoint*> AttackVaildFlanks; // 0xb08(0x10)
	struct TArray<struct ABattleRoutePoint*> DefendVaildFlanks; // 0xb18(0x10)
	char pad_B28[0x68]; // 0xb28(0x68)

	struct ADFMCharacter* SpawnTestBot(int32_t Camp, int32_t ArmdedForce, struct FName TemplateName, struct FVector SpawnPos); // Function Breakthrough.BreakThroughAISubsystem.SpawnTestBot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughAudioPlayerComponent
// Size: 0x448 (Inherited: 0x448)
class UBreakthroughAudioPlayerComponent : public UBattleFieldAudioPlayerComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughBigMapHUDController
// Size: 0x5d0 (Inherited: 0x438)
class UBreakthroughBigMapHUDController : public UBattleFieldMapHUDController {
public:

	struct TArray<struct USectorAnchorViewController*> SectorAnchorViewControllerArr; // 0x438(0x10)
	char pad_448[0x8]; // 0x448(0x08)
	struct TArray<struct USectorSplineAreaViewController*> SectorSplineAreaViewControllerArr; // 0x450(0x10)
	struct TMap<int32_t, struct USceneWeaponMapIconViewController*> SceneWeaponViewControllerMap; // 0x460(0x50)
	char pad_4B0[0x58]; // 0x4b0(0x58)
	struct TMap<int32_t, struct UVehicleMapIconViewController*> VehicleViewControllerMap; // 0x508(0x50)
	char pad_558[0x58]; // 0x558(0x58)
	struct AGPSceneActorReplicator* GPSceneActorReplicator; // 0x5b0(0x08)
	char pad_5B8[0x18]; // 0x5b8(0x18)

	void VehicleOnFireInfoUpdate(); // Function Breakthrough.BreakthroughBigMapHUDController.VehicleOnFireInfoUpdate // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughBroadcastComponent
// Size: 0x108 (Inherited: 0x108)
class UBreakthroughBroadcastComponent : public UDFMBroadcastComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughCharacter
// Size: 0x2b20 (Inherited: 0x2ac0)
class ABreakthroughCharacter : public ABattleFieldCharacter {
public:

	struct UBreakthroughPreMatchStageFlowComponent* BreakthroughPreMatchStageFlowComponent; // 0x2ac0(0x08)
	float LevelStreamingTimeout; // 0x2ac8(0x04)
	char pad_2ACC[0x4]; // 0x2acc(0x04)
	struct FTimerHandle LevelStreamingTimeoutTimerHandle; // 0x2ad0(0x08)
	bool bCanKillSelf; // 0x2ad8(0x01)
	bool bInnerSafeZone; // 0x2ad9(0x01)
	char pad_2ADA[0x2]; // 0x2ada(0x02)
	float KillSelfStartTime; // 0x2adc(0x04)
	float CharacterToSectorDistance; // 0x2ae0(0x04)
	char pad_2AE4[0x4]; // 0x2ae4(0x04)
	struct UBreakthroughNetworkMsgComponent* NetworkMsgComponent; // 0x2ae8(0x08)
	uint64_t KillSelfDamagePhysicalValueId; // 0x2af0(0x08)
	float KillSelfCDValue; // 0x2af8(0x04)
	char pad_2AFC[0x14]; // 0x2afc(0x14)
	struct UFortificationBuildComponent* FortificationBuildComponent; // 0x2b10(0x08)
	struct ABattleSectorAnchor* CurrentInAnchor; // 0x2b18(0x08)

	void SetMoveComponentActive(bool bActive); // Function Breakthrough.BreakthroughCharacter.SetMoveComponentActive // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughCountDownTimerView
// Size: 0x398 (Inherited: 0x388)
class UBreakthroughCountDownTimerView : public UBaseUIView {
public:

	struct UWidgetAnimation* Anima_emphasize; // 0x388(0x08)
	struct UTextBlock* CountDownText; // 0x390(0x08)

	void OnClientBreakthroughInFightBack(bool InFightBack); // Function Breakthrough.BreakthroughCountDownTimerView.OnClientBreakthroughInFightBack // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDataComponent
// Size: 0x4b0 (Inherited: 0x100)
class UBreakthroughDataComponent : public UActorComponent {
public:

	char pad_100[0x18]; // 0x100(0x18)
	struct TArray<struct FSectorAnchorBattleInfo> SectorAnchorBattleInfos; // 0x118(0x10)
	struct TMap<uint64_t, struct FOnePlayerOneSectorTLogInfo> OnePlayerOneSectorTLogInfos; // 0x128(0x50)
	struct TMap<uint64_t, struct FRoundRedeployTLogInfo> RoundRedeployTLogInfos; // 0x178(0x50)
	char pad_1C8[0xa0]; // 0x1c8(0xa0)
	struct FSectorKillInfo SectorKillInfo; // 0x268(0x10)
	struct FBreakthroughModeTgLogs BreakthroughModeTgLogs; // 0x278(0x48)
	struct TMap<enum class ESceneWeaponType, struct FBreakthroughSceneWeaponInfo> OffenceSceneWeaponInfos; // 0x2c0(0x50)
	struct TMap<enum class ESceneWeaponType, struct FBreakthroughSceneWeaponInfo> DefenceSceneWeaponInfos; // 0x310(0x50)
	struct TMap<uint64_t, struct FMidWithdrawalTLogInfo> MidWithdrawalTLogInfos; // 0x360(0x50)
	struct TMap<uint64_t, struct FRescueTLogInfo> RescueTLogInfos; // 0x3b0(0x50)
	char pad_400[0xb0]; // 0x400(0xb0)

	void SetRoundRedeployTLogData(uint64_t OpenId, enum class ERoundRedeployTLogDataType RoundRedeployTLogDataType, struct FOnePlayerOneSectorData OnePlayerOneSectorData); // Function Breakthrough.BreakthroughDataComponent.SetRoundRedeployTLogData // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDeployArmHeroGroupView
// Size: 0x350 (Inherited: 0x310)
class UBreakthroughDeployArmHeroGroupView : public UDFMHudMvcViewBase {
public:

	int32_t armid; // 0x310(0x04)
	struct FName ArmNameWidgetName; // 0x314(0x08)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UDFTextBlock* ArmNameTextBlock; // 0x320(0x08)
	struct FName ContainerWidgetName; // 0x328(0x08)
	struct UDFHorizontalBox* Container; // 0x330(0x08)
	struct UClass* UBreakthroughDeployHeroItemViewClass; // 0x338(0x08)
	struct FMargin ItemPadding; // 0x340(0x10)

	void SetArmID(int32_t InArmID); // Function Breakthrough.BreakthroughDeployArmHeroGroupView.SetArmID // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDeployBagTabItem
// Size: 0x338 (Inherited: 0x310)
class UBreakthroughDeployBagTabItem : public UDFMHudMvcViewBase {
public:

	struct UDFCheckBox* Checkbox; // 0x310(0x08)
	struct UDFTextBlock* TextBlock; // 0x318(0x08)
	int32_t Index; // 0x320(0x04)
	uint32_t BagId; // 0x324(0x04)
	char pad_328[0x10]; // 0x328(0x10)

	void OnCheckBoxStateChanged(bool bIsChecked); // Function Breakthrough.BreakthroughDeployBagTabItem.OnCheckBoxStateChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDeployHeroItemView
// Size: 0x3b0 (Inherited: 0x310)
class UBreakthroughDeployHeroItemView : public UDFMHudMvcViewBase {
public:

	uint64_t HeroID; // 0x310(0x08)
	struct FName EnsureButtonWidgetName; // 0x318(0x08)
	struct UButton* EnsureButton; // 0x320(0x08)
	struct FName HeroIconWidgetName; // 0x328(0x08)
	struct UDFImage* HeroIcon; // 0x330(0x08)
	struct FName HeroTypeIconWidgetName; // 0x338(0x08)
	struct UDFImage* HeroTypeIcon; // 0x340(0x08)
	char pad_348[0x20]; // 0x348(0x20)
	struct FName UsingFlagWidgetName; // 0x368(0x08)
	struct UWidget* UsingFlagWidget; // 0x370(0x08)
	struct FName HoverFlagWidgetName; // 0x378(0x08)
	struct UWidget* HoverFlagWidget; // 0x380(0x08)
	struct FName LockedFlagWidgetName; // 0x388(0x08)
	struct UWidget* LockedFlagWidget; // 0x390(0x08)
	struct FName BanFlagWidgetName; // 0x398(0x08)
	struct UWidget* BanFlagWidget; // 0x3a0(0x08)
	bool bLocked; // 0x3a8(0x01)
	bool bBaned; // 0x3a9(0x01)
	char pad_3AA[0x6]; // 0x3aa(0x06)

	void OnEnsureButtonUnhovered(); // Function Breakthrough.BreakthroughDeployHeroItemView.OnEnsureButtonUnhovered // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDeployPackageView
// Size: 0x4b0 (Inherited: 0x310)
class UBreakthroughDeployPackageView : public UDFMHudMvcViewBase {
public:

	struct FName MainWeaponWidgetName; // 0x310(0x08)
	struct URedeployArmSelectedPackageItemView* MainWeaponItemView; // 0x318(0x08)
	struct FName SecondaryWeaponWidgetName; // 0x320(0x08)
	struct URedeployArmSelectedPackageItemView* SecondaryWeaponItemView; // 0x328(0x08)
	struct FName MeleeWeaponWidgetName; // 0x330(0x08)
	struct URedeployArmSelectedPackageItemView* MeleeWeaponItemView; // 0x338(0x08)
	struct FName ArmForceItemWidgetName; // 0x340(0x08)
	struct URedeployArmSelectedPackageItemView* ArmForceItemView; // 0x348(0x08)
	struct FName ArmForceItem2WidgetName; // 0x350(0x08)
	struct URedeployArmSelectedPackageItemView* ArmForce2ItemView; // 0x358(0x08)
	struct TMap<enum class EAttachPosition, struct FName> BagItemWidgetNameMap; // 0x360(0x50)
	struct FName BanedWidgetName; // 0x3b0(0x08)
	struct FName LockedWidgetName; // 0x3b8(0x08)
	struct FName TagTextWidgetName; // 0x3c0(0x08)
	struct FName TitleWidgetName; // 0x3c8(0x08)
	struct FName IconWidgetName; // 0x3d0(0x08)
	struct FName ArmForceItemButtonWidgetName; // 0x3d8(0x08)
	struct UTextBlock* MainWeaponNameText; // 0x3e0(0x08)
	struct UTextBlock* SecondaryWeaponNameText; // 0x3e8(0x08)
	struct UTextBlock* MeleeWeaponNameText; // 0x3f0(0x08)
	struct UTextBlock* ArmForceItemNameText; // 0x3f8(0x08)
	struct UTextBlock* ArmForceItem2NameText; // 0x400(0x08)
	struct UDFMImage* MainWeaponIcon; // 0x408(0x08)
	struct UDFMImage* SecondaryWeaponIcon; // 0x410(0x08)
	struct UDFMImage* MeleeWeaponIcon; // 0x418(0x08)
	struct UDFMImage* ArmForceItemIcon; // 0x420(0x08)
	struct UDFMImage* ArmForceItem2Icon; // 0x428(0x08)
	struct UButton* MainWeaponButton; // 0x430(0x08)
	struct UButton* SecondaryWeaponButton; // 0x438(0x08)
	struct UButton* MeleeWeaponButton; // 0x440(0x08)
	struct UButton* ArmForceItemButton; // 0x448(0x08)
	struct UButton* ArmForceItem2Button; // 0x450(0x08)
	struct FName ShowInAnimName; // 0x458(0x08)
	struct TMap<enum class EAttachPosition, struct URedeployArmSelectedPackageItemView*> ItemViewMap; // 0x460(0x50)

	void ShowWeaponStoreHud(enum class EAttachPosition InAttachPosition); // Function Breakthrough.BreakthroughDeployPackageView.ShowWeaponStoreHud // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDeployPointCanSelectQuadView
// Size: 0x348 (Inherited: 0x310)
class UBreakthroughDeployPointCanSelectQuadView : public UDFMHudMvcViewBase {
public:

	struct UButton* SelectButton; // 0x310(0x08)
	struct FName SelectButtonWidgetName; // 0x318(0x08)
	float SelectButtonOpacity; // 0x320(0x04)
	char pad_324[0x24]; // 0x324(0x24)

	void SetType(int32_t Type); // Function Breakthrough.BreakthroughDeployPointCanSelectQuadView.SetType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDeploySelectedHeroView
// Size: 0x340 (Inherited: 0x310)
class UBreakthroughDeploySelectedHeroView : public UDFMHudMvcViewBase {
public:

	struct UDFImage* HeroIcon; // 0x310(0x08)
	struct UDFImage* HeroTypeIcon; // 0x318(0x08)
	struct UDFButton* HeroTypeIconButton; // 0x320(0x08)
	struct UDFCheckBox* ExpandCheckBox; // 0x328(0x08)
	struct UDFCanvasPanel* HeroListPanel; // 0x330(0x08)
	struct UScrollGridBox* HeroListScrollGridBox; // 0x338(0x08)

	void ShowHeroList(bool bIsShow); // Function Breakthrough.BreakthroughDeploySelectedHeroView.ShowHeroList // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDSLogic
// Size: 0x5a8 (Inherited: 0x5a0)
class UBreakthroughDSLogic : public UDFMDSLogic {
public:

	char pad_5A0[0x8]; // 0x5a0(0x08)

	void OnServerLeftVotes(int32_t LeftVotes); // Function Breakthrough.BreakthroughDSLogic.OnServerLeftVotes // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughDynamicMusic
// Size: 0x230 (Inherited: 0x100)
class UBreakthroughDynamicMusic : public UActorComponent {
public:

	char pad_100[0x60]; // 0x100(0x60)
	struct FTimerHandle CheckSectorAnchorsOccupyProgressTimerHandle; // 0x160(0x08)
	struct TArray<struct FTimerHandle> TimeRemainTimerHandles; // 0x168(0x10)
	struct TMap<enum class EDynamicMusicCondition, int8_t> DynamicMusicConditionStageMap; // 0x178(0x50)
	int32_t CurrentStage; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FString OvertimeBackgroundMusic; // 0x1d0(0x10)
	struct TMap<enum class EDynamicMusicCondition, char> DynamicMusicConditionWeightMap; // 0x1e0(0x50)

	void UpdateConditionStage(enum class EDynamicMusicCondition Condition, char Stage); // Function Breakthrough.BreakthroughDynamicMusic.UpdateConditionStage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughElevatorSwitchInteractor
// Size: 0xb88 (Inherited: 0xb38)
class ABreakthroughElevatorSwitchInteractor : public ADFMElevatorSwitchInteractor {
public:

	/*struct TSet<int32_t>*/char CanUseSectors[0x50]; // 0xb38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughFirstDeployCountDownView
// Size: 0x468 (Inherited: 0x3f8)
class UBreakthroughFirstDeployCountDownView : public UDFMBaseUIView {
public:

	struct UDFMTextBlock* CountDownText; // 0x3f8(0x08)
	struct FName CountDownTextWidgetName; // 0x400(0x08)
	struct UDFMTextBlock* CountDownTitleText; // 0x408(0x08)
	struct FName CountDownTitleTextWidgetName; // 0x410(0x08)
	float FinalCountDownLimit; // 0x418(0x04)
	int32_t LastCountDownTime; // 0x41c(0x04)
	float TimerTickInterval; // 0x420(0x04)
	struct FName ShowInAnimName; // 0x424(0x08)
	struct FName ShowOutAnimName; // 0x42c(0x08)
	struct FName WaitPlayerLoadingToFirstDeployAnimationName; // 0x434(0x08)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FTimerHandle CountDownTimerHandle; // 0x440(0x08)
	bool bIsUploadLoadingEndToFirstDeployTime; // 0x448(0x01)
	bool bIsUploadWaitPlayerLoadingTime; // 0x449(0x01)
	char pad_44A[0x2]; // 0x44a(0x02)
	int32_t CurrentCountDownTitleType; // 0x44c(0x04)
	char pad_450[0x8]; // 0x450(0x08)
	struct FString CountDown10SecondsMusicStr; // 0x458(0x10)

	void SetCountDownTitleType(int32_t InTitleType); // Function Breakthrough.BreakthroughFirstDeployCountDownView.SetCountDownTitleType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughGPSubsystem
// Size: 0x3a0 (Inherited: 0x378)
class ABreakthroughGPSubsystem : public ALevelSubsystem {
public:

	char pad_378[0x25]; // 0x378(0x25)
	bool bOnSecter2WinPlay; // 0x39d(0x01)
	char pad_39E[0x2]; // 0x39e(0x02)

	void OnSecter2WinPlay(); // Function Breakthrough.BreakthroughGPSubsystem.OnSecter2WinPlay // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughHealthDataComponent
// Size: 0x890 (Inherited: 0x890)
class UBreakthroughHealthDataComponent : public UDFMHealthDataComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughKillFeecbackIconView
// Size: 0x3c8 (Inherited: 0x310)
class UBreakthroughKillFeecbackIconView : public UDFMHudMvcViewBase {
public:

	float FadeInKeepTime; // 0x310(0x04)
	float ShowKeepTime; // 0x314(0x04)
	float FadeOutKeepTime; // 0x318(0x04)
	char pad_31C[0x14]; // 0x31c(0x14)
	struct TMap<struct FName, float> BehaviorTimeRecord; // 0x330(0x50)
	struct UDFImage* Icon; // 0x380(0x08)
	struct FName IconWidgetName; // 0x388(0x08)
	enum class EScoreName ScoreName; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	int32_t Index; // 0x394(0x04)
	struct UCanvasPanelSlot* CanvasPanelSlot; // 0x398(0x08)
	struct FLinearColor YellowColor; // 0x3a0(0x10)
	struct FLinearColor RedColor; // 0x3b0(0x10)
	float PosY; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)

	void Update(float DT); // Function Breakthrough.BreakthroughKillFeecbackIconView.Update // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughKillFeecbackInfoView
// Size: 0x478 (Inherited: 0x310)
class UBreakthroughKillFeecbackInfoView : public UDFMHudMvcViewBase {
public:

	char pad_310[0x10]; // 0x310(0x10)
	struct TMap<struct FName, float> BehaviorTimeRecord; // 0x320(0x50)
	enum class EScoreName ScoreName; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	int32_t Index; // 0x374(0x04)
	struct UCanvasPanelSlot* CanvasPanelSlot; // 0x378(0x08)
	struct FLinearColor BP_Var_YellowColor; // 0x380(0x10)
	struct FLinearColor BP_Var_RedColor; // 0x390(0x10)
	float WaitIconViewTime; // 0x3a0(0x04)
	float BlinkKeepTime; // 0x3a4(0x04)
	float ShowKeepTime; // 0x3a8(0x04)
	float MoveDistance; // 0x3ac(0x04)
	float MoveDistanceTime; // 0x3b0(0x04)
	float MovedDistance; // 0x3b4(0x04)
	char pad_3B8[0x4]; // 0x3b8(0x04)
	float MovedTime; // 0x3bc(0x04)
	float FadeOutKeepTime; // 0x3c0(0x04)
	char pad_3C4[0x14]; // 0x3c4(0x14)
	struct UTextBlock* ScoreText; // 0x3d8(0x08)
	struct FName ScoreTextWidgetName; // 0x3e0(0x08)
	struct UTextBlock* ScoreDescText; // 0x3e8(0x08)
	struct FName ScoreDescTextWidgetName; // 0x3f0(0x08)
	struct UTextBlock* DistanceText; // 0x3f8(0x08)
	struct FName DistanceTextWidgetName; // 0x400(0x08)
	struct UCanvasPanel* DistancePanel; // 0x408(0x08)
	struct FName DistancePanelWidgetName; // 0x410(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x418(0x08)
	struct FName HorizontalBoxWidgetName; // 0x420(0x08)
	struct UWidgetAnimation* MoveAnimation; // 0x428(0x08)
	struct UWidgetAnimation* FadeOutAnimation; // 0x430(0x08)
	struct UWidgetAnimation* Anima_MoveDownIn; // 0x438(0x08)
	struct UWidgetAnimation* Anima_RollDown_100_76; // 0x440(0x08)
	struct UWidgetAnimation* Anima_RollDown_75_51; // 0x448(0x08)
	struct UWidgetAnimation* Anima_RollDown_50_1; // 0x450(0x08)
	struct UWidgetAnimation* Anima_ScoreIn; // 0x458(0x08)
	struct UWidgetAnimation* Anima_FadeOut_100_1; // 0x460(0x08)
	struct UWidgetAnimation* Anima_FadeOut_75_1; // 0x468(0x08)
	struct UWidgetAnimation* Anima_FadeOut_50_1; // 0x470(0x08)

	void Update(float DT); // Function Breakthrough.BreakthroughKillFeecbackInfoView.Update // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughKillFeecbackMainView
// Size: 0x658 (Inherited: 0x3f8)
class UBreakthroughKillFeecbackMainView : public UDFMBaseUIView {
public:

	float CreateIconInterval; // 0x3f8(0x04)
	float MoveTime; // 0x3fc(0x04)
	float MoveDistance; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct TArray<struct FKillFeedbackEvent> KillEventIconQueue; // 0x408(0x10)
	struct TArray<struct FKillFeedbackEvent> KillEventInfoQueue; // 0x418(0x10)
	struct FKillFeedbackEvent CurrentKillEventIcon; // 0x428(0x60)
	struct FName CurrentBehaviorStateForIcon; // 0x488(0x08)
	struct FKillFeedbackEvent CurrentKillEventInfo; // 0x490(0x60)
	struct FKillFeedbackEvent LastKillEventInfo; // 0x4f0(0x60)
	struct FName CurrentBehaviorStateForInfo; // 0x550(0x08)
	float Timestamp; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct TArray<struct UBreakthroughKillFeecbackIconView*> IconViewList; // 0x560(0x10)
	struct UBreakthroughKillFeecbackIconView* LastIconView; // 0x570(0x08)
	float LastIconCreateTimeStamp; // 0x578(0x04)
	float NeedMoveX; // 0x57c(0x04)
	float MoveSpeedMultiply; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct TArray<struct UBreakthroughKillFeecbackInfoView*> InfoViewList; // 0x588(0x10)
	struct UBreakthroughKillFeecbackInfoView* LastInfoView; // 0x598(0x08)
	int32_t CurrentKillEventIconIndex; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct UCanvasPanel* Panel; // 0x5a8(0x08)
	struct FName PanelWidgetName; // 0x5b0(0x08)
	struct UCanvasPanel* PanelInfo; // 0x5b8(0x08)
	struct FName PanelInfoWidgetName; // 0x5c0(0x08)
	struct UButton* TestButton; // 0x5c8(0x08)
	struct FName TestButtonWidgetName; // 0x5d0(0x08)
	struct UBreakthroughKillFeecbackNumView* KillFeedBackNumView; // 0x5d8(0x08)
	struct FName KillFeedbackNumViewWidgetName; // 0x5e0(0x08)
	int32_t Score; // 0x5e8(0x04)
	bool bHasPlayScoreLimitAudio; // 0x5ec(0x01)
	char pad_5ED[0x3]; // 0x5ed(0x03)
	struct UClass* UBreakthroughKillFeecbackIconViewClass; // 0x5f0(0x08)
	struct UClass* UBreakthroughKillFeecbackInfoViewClass; // 0x5f8(0x08)
	float IconViewPosY_PC; // 0x600(0x04)
	float IconViewPosY; // 0x604(0x04)
	int32_t ScoreLimit; // 0x608(0x04)
	struct FName MPScoreComboAudio; // 0x60c(0x08)
	float InfoViewPosY_PC; // 0x614(0x04)
	float InfoViewPosY; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct TArray<struct FScoreNameAndValue> TestKillEventList; // 0x620(0x10)
	int32_t TestLoopCount; // 0x630(0x04)
	float TestSimulateLagTime; // 0x634(0x04)
	struct TArray<struct UBreakthroughKillFeecbackIconView*> IconViewPool; // 0x638(0x10)
	struct TArray<struct UBreakthroughKillFeecbackInfoView*> InfoViewPool; // 0x648(0x10)

	void UpdateNum(float Delta); // Function Breakthrough.BreakthroughKillFeecbackMainView.UpdateNum // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughKillFeecbackNumView
// Size: 0x440 (Inherited: 0x310)
class UBreakthroughKillFeecbackNumView : public UDFMHudMvcViewBase {
public:

	float WaitIconViewTime; // 0x310(0x04)
	float FadeInKeepTime; // 0x314(0x04)
	float MoveTime; // 0x318(0x04)
	float WaitFadeOutTime; // 0x31c(0x04)
	float FadeOutKeepTime; // 0x320(0x04)
	int32_t TurnYellowScore; // 0x324(0x04)
	float ShowKeepTime; // 0x328(0x04)
	char pad_32C[0x14]; // 0x32c(0x14)
	struct TMap<struct FName, float> BehaviorTimeRecord; // 0x340(0x50)
	struct TMap<struct FName, float> SubBehaviorTimeRecord; // 0x390(0x50)
	bool NeedMove; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UTextBlock* ScoreText; // 0x3e8(0x08)
	struct FName ScoreTextWidgetName; // 0x3f0(0x08)
	struct UTextBlock* ExpDescText; // 0x3f8(0x08)
	struct FName ExpDescTextWidgetName; // 0x400(0x08)
	float LastScrollToScore; // 0x408(0x04)
	float BeginScrollScore; // 0x40c(0x04)
	float TargetScore; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct FLinearColor BP_Var_YellowColor; // 0x418(0x10)
	struct UCurveFloat* ScrollCurve; // 0x428(0x08)
	struct FName StartScrollSoundEvent; // 0x430(0x08)
	struct FName EndScrollSoundEvent; // 0x438(0x08)

	void Update(float DT); // Function Breakthrough.BreakthroughKillFeecbackNumView.Update // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughKillMarkerView
// Size: 0x438 (Inherited: 0x388)
class UBreakthroughKillMarkerView : public UBaseUIView {
public:

	struct UWidgetAnimation* WBP_BattleKillInformation_in; // 0x388(0x08)
	struct UDFImage* EnemyIconImg; // 0x390(0x08)
	struct UDFTextBlock* EnemyNameText; // 0x398(0x08)
	struct UDFTextBlock* EnemyKillSelfNumText; // 0x3a0(0x08)
	struct UDFTextBlock* SelfKillEnemyNumText; // 0x3a8(0x08)
	struct UDFTextBlock* EnemyHeroNameText; // 0x3b0(0x08)
	struct UDFImage* EnemyArmIconImg; // 0x3b8(0x08)
	struct UDFTextBlock* MainWeaponName; // 0x3c0(0x08)
	struct UUserWidget* MainWeaponWidget; // 0x3c8(0x08)
	struct UDFImage* MainWeaponImage; // 0x3d0(0x08)
	struct UUserWidget* WBP_DFCommonIconButton; // 0x3d8(0x08)
	struct UDFCommonButton* ReportBtn; // 0x3e0(0x08)
	struct UDFImage* KillerActiveSkillIDIcon; // 0x3e8(0x08)
	struct UDFImage* KillerPassiveSkillIDIcon; // 0x3f0(0x08)
	struct UDFImage* MPSupportSkillIDIcon; // 0x3f8(0x08)
	struct UDFImage* MPUltimateSkillIDIcon; // 0x400(0x08)
	uint64_t KillerPlayerUin; // 0x408(0x08)
	struct FText KillerPlayerName; // 0x410(0x18)
	struct FName DisplayInputActionName_Report; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)

	void RefreshKillerMarkerWidget(uint64_t KillerUin, struct FText EnemyName, int32_t EnemyLevel, int32_t EnemyKillSelf, int32_t SelfKillEnemy, int32_t SoldierCategory, struct FGPWeaponDescInfo WeaponDes); // Function Breakthrough.BreakthroughKillMarkerView.RefreshKillerMarkerWidget // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughNetworkMsgComponent
// Size: 0x100 (Inherited: 0x100)
class UBreakthroughNetworkMsgComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughNotifyReceiveComponent
// Size: 0x1a0 (Inherited: 0x100)
class UBreakthroughNotifyReceiveComponent : public UActorComponent {
public:

	struct FString CurrentOrderBroadCastContent; // 0x100(0x10)
	char pad_110[0x20]; // 0x110(0x20)
	struct FString CurrentPlayingMusicName; // 0x130(0x10)
	char pad_140[0x60]; // 0x140(0x60)

	void ServerIsFirstOrderBroadCast(bool InbIsFirstOrderBroadCast); // Function Breakthrough.BreakthroughNotifyReceiveComponent.ServerIsFirstOrderBroadCast // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughNotifySubSystem
// Size: 0x430 (Inherited: 0x1a8)
class UBreakthroughNotifySubSystem : public UBattleFieldNotifySubSystem {
public:

	struct UGPAudioEventAsset* AudioAsset; // 0x1a8(0x08)
	char pad_1B0[0x10]; // 0x1b0(0x10)
	struct UDataTable* BreakthroughTipsTable; // 0x1c0(0x08)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FSoftObjectPath TipsTablePath; // 0x1d0(0x18)
	char pad_1E8[0x50]; // 0x1e8(0x50)
	struct TArray<struct UGPAudioEventAsset*> CacheBroadcastAudioArr; // 0x238(0x10)
	char pad_248[0xa0]; // 0x248(0xa0)
	struct TArray<struct FBreakthroughTipInfo> StrongTipsCacheArr; // 0x2e8(0x10)
	struct TArray<struct FBreakthroughTipInfo> LittleTipsCacheArr; // 0x2f8(0x10)
	struct TArray<struct FName> ThinkWirelessDialogCacheArr; // 0x308(0x10)
	char pad_318[0x70]; // 0x318(0x70)
	float CurrentStrongTipMustKeepShowTime; // 0x388(0x04)
	float CurrentStrongTipHaveShowTime; // 0x38c(0x04)
	float CurrentLittleTipHaveShowTime; // 0x390(0x04)
	float CurrentLittleTipMustKeepShowTime; // 0x394(0x04)
	struct FGPAudioFuturePlayingID CurrentBroadcastAudioPlayingId; // 0x398(0x08)
	char pad_3A0[0x88]; // 0x3a0(0x88)
	int32_t PCWeakTipsShowNum; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)

	void TickThinkWirelessDialog(); // Function Breakthrough.BreakthroughNotifySubSystem.TickThinkWirelessDialog // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughOrderBroadcastPanel
// Size: 0x448 (Inherited: 0x388)
class UBreakthroughOrderBroadcastPanel : public UBaseUIView {
public:

	struct UBreakthroughOrderItemBroadcastView* FirstOrder; // 0x388(0x08)
	struct UBreakthroughOrderItemBroadcastView* SecondOrder; // 0x390(0x08)
	int32_t OrderBroadcastViewInterval; // 0x398(0x04)
	float MoveTime; // 0x39c(0x04)
	struct FRuntimeFloatCurve MoveCurve; // 0x3a0(0xa0)
	int32_t OrderRetractingWidth; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)

	void OnShowBattleReportOrderTips(struct FBattleFieldBroadcastTipInfo& InTipInfo, int32_t OrderPriority, float ShowAnimTime); // Function Breakthrough.BreakthroughOrderBroadcastPanel.OnShowBattleReportOrderTips // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughPlayerSettlementComponent
// Size: 0x338 (Inherited: 0x1d8)
class UBreakthroughPlayerSettlementComponent : public UBasePlayerSettlementComponent {
public:

	char pad_1D8[0x160]; // 0x1d8(0x160)

	void ShowCampEmptyTips(); // Function Breakthrough.BreakthroughPlayerSettlementComponent.ShowCampEmptyTips // (Final|Net|Native|Event|Private|NetClient) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughPlotPlayerStart
// Size: 0x3b0 (Inherited: 0x3a8)
class ABreakthroughPlotPlayerStart : public APlayerStart {
public:

	int32_t SpawnCount; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughPreMatchChooseArmView
// Size: 0x550 (Inherited: 0x550)
class UBreakthroughPreMatchChooseArmView : public ULuaUIBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughPreMatchStageFlowComponent
// Size: 0x138 (Inherited: 0x100)
class UBreakthroughPreMatchStageFlowComponent : public UActorComponent {
public:

	struct FName WidgetName; // 0x100(0x08)
	bool bClientReadyToPlay; // 0x108(0x01)
	bool bClientLoadingFinish; // 0x109(0x01)
	bool bClientCutscenePlaying; // 0x10a(0x01)
	char pad_10B[0x5]; // 0x10b(0x05)
	struct FTimerHandle WaitLoadingTimerHandle; // 0x110(0x08)
	float WaitLoadingTimerOut; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FTimerHandle TimerHandleDelayFinish; // 0x120(0x08)
	struct FTimerHandle TimerHandleDelayDestroyCineCam; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	void OnWaitLoadingTimerOut(); // Function Breakthrough.BreakthroughPreMatchStageFlowComponent.OnWaitLoadingTimerOut // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRank
// Size: 0x5a0 (Inherited: 0x400)
class UBreakthroughRank : public UDFControllerRouletteBase {
public:

	char pad_400[0x28]; // 0x400(0x28)
	struct TArray<struct FRankSkillInfo> SkillInfos; // 0x428(0x10)
	struct TArray<struct FRankSkillInfo> OpeningSkillInfos; // 0x438(0x10)
	struct TArray<enum class ESkillUIState> SkillStateInfos; // 0x448(0x10)
	struct TArray<struct UBreakthroughRankItem*> RankItems; // 0x458(0x10)
	char pad_468[0x50]; // 0x468(0x50)
	struct UCanvasPanel* RouletteRootCanvasPanel; // 0x4b8(0x08)
	struct UCanvasPanel* ArrowPanel; // 0x4c0(0x08)
	struct UImage* MoveIcon; // 0x4c8(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* RootBtn; // 0x4d0(0x08)
	struct UBreakthroughRankView* BreakthroughRankView; // 0x4d8(0x08)
	struct UImage* UpgradeParticlesImg; // 0x4e0(0x08)
	struct UImage* UpgradeParticlesImg_2; // 0x4e8(0x08)
	struct UDFMCommonImage* RankImg; // 0x4f0(0x08)
	struct UDFMCommonImage* SkillImg; // 0x4f8(0x08)
	struct UBreakthroughRankItem* RankItem_2; // 0x500(0x08)
	struct UBreakthroughRankItem* RankItem_3; // 0x508(0x08)
	struct UBreakthroughRankItem* RankItem_4; // 0x510(0x08)
	struct UBreakthroughRankItem* RankItem_5; // 0x518(0x08)
	struct UBreakthroughRankItem* RankItem_6; // 0x520(0x08)
	struct UCanvasPanel* RankCanvans; // 0x528(0x08)
	struct UWidgetAnimation* RankInAnim; // 0x530(0x08)
	struct UWidgetAnimation* RankOutAnim; // 0x538(0x08)
	struct UWidgetAnimation* RankLevelUpAnim; // 0x540(0x08)
	struct UWidgetAnimation* Anima_countRespond; // 0x548(0x08)
	struct UWidgetAnimation* Anima_skillAlready; // 0x550(0x08)
	struct UWidgetAnimation* Anima_LittleScore; // 0x558(0x08)
	char pad_560[0x18]; // 0x560(0x18)
	struct TArray<struct FRankInfo> RankIcon; // 0x578(0x10)
	float SkillStateRefreshDeltaTime; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	float MoveIconRadius; // 0x590(0x04)
	char pad_594[0xc]; // 0x594(0x0c)

	void UpdateSkillUIState(); // Function Breakthrough.BreakthroughRank.UpdateSkillUIState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRankItem
// Size: 0x390 (Inherited: 0x388)
class UBreakthroughRankItem : public UBaseUIView {
public:

	struct UWidgetAnimation* Anima_in; // 0x388(0x08)

	void PlayInAnimation(); // Function Breakthrough.BreakthroughRankItem.PlayInAnimation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRankSkill
// Size: 0x480 (Inherited: 0x388)
class UBreakthroughRankSkill : public URankSkillBase {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct FRankSkillInfo RankSkillInfo; // 0x390(0x70)
	char pad_400[0x20]; // 0x400(0x20)
	struct UDFImage* SkillImg; // 0x420(0x08)
	struct UTextBlock* CDTimeText; // 0x428(0x08)
	struct UCanvasPanel* CDCanvasPanel; // 0x430(0x08)
	struct UDFImage* CDBgImg; // 0x438(0x08)
	struct UCanvasPanel* SkillCanvasPanel; // 0x440(0x08)
	struct UDFMScrollText* PriceScrollText; // 0x448(0x08)
	struct UImage* DiscountArrowsImage; // 0x450(0x08)
	struct UImage* BaseImage; // 0x458(0x08)
	struct UWidgetAnimation* RankSkillInAnim; // 0x460(0x08)
	struct UWidgetAnimation* RankSkillOutAnim; // 0x468(0x08)
	struct UWidgetAnimation* RankSkillLoopAnim; // 0x470(0x08)
	struct UWidgetAnimation* RankSkillChange; // 0x478(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRankView
// Size: 0x400 (Inherited: 0x388)
class UBreakthroughRankView : public UBaseUIView {
public:

	struct TArray<struct UBreakthroughRankSkill*> RankSkillUIs; // 0x388(0x10)
	char pad_398[0x8]; // 0x398(0x08)
	struct UCommonRouletteInfoView* WBP_CommonRouletteInfo; // 0x3a0(0x08)
	struct UCommonRouletteView* WBP_CommonRoulette; // 0x3a8(0x08)
	struct UDFTextBlock* RankSkillNameText; // 0x3b0(0x08)
	struct UDFTextBlock* RankSkillDetailText; // 0x3b8(0x08)
	struct UTextBlock* RankScoreText; // 0x3c0(0x08)
	struct UDFTextBlock* RankSkillStateTips; // 0x3c8(0x08)
	struct UWidgetAnimation* RankWindowChangeInAnim; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct TArray<struct FRankSkillInfo> RankSkillInfoArr; // 0x3e0(0x10)
	float RouletteRadius; // 0x3f0(0x04)
	float BattleSupportTipsShowDuration; // 0x3f4(0x04)
	char pad_3F8[0x8]; // 0x3f8(0x08)

	void UpdateRankViewRoulette(int32_t InIndex, float InFactor, float InAngle); // Function Breakthrough.BreakthroughRankView.UpdateRankViewRoulette // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRebornComponent
// Size: 0x178 (Inherited: 0x170)
class UBreakthroughRebornComponent : public UDFMRebornComponent {
public:

	char pad_170[0x8]; // 0x170(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployArmSelectedView
// Size: 0x578 (Inherited: 0x3f8)
class UBreakthroughRedeployArmSelectedView : public UDFMBaseUIView {
public:

	struct UBreakthroughRedeployButtonView* RedeployButton; // 0x3f8(0x08)
	struct FName RedeployButtonWidgetName; // 0x400(0x08)
	struct UWidget* DeployedText; // 0x408(0x08)
	struct FName DeployedTextWidgetName; // 0x410(0x08)
	struct TArray<struct UWidget*> TabArray; // 0x418(0x10)
	struct UBreakthroughDeployPackageView* SelectedPackageView; // 0x428(0x08)
	struct FName SelectedPackageViewWidgetName; // 0x430(0x08)
	struct UWidgetAnimation* WBP_RedeployArmSelectedView_change; // 0x438(0x08)
	struct UDFCommonButton* CloseHeroInfoButton; // 0x440(0x08)
	struct UDFImage* HeroIcon; // 0x448(0x08)
	struct FName HeroIconWidgetName; // 0x450(0x08)
	struct UDFTextBlock* HeroName; // 0x458(0x08)
	struct FName HeroNameWidgetName; // 0x460(0x08)
	struct UDFTextBlock* ArmedForceName; // 0x468(0x08)
	struct FName ArmedForceNameWidgetName; // 0x470(0x08)
	struct UDFButton* HeroTypeIconButton; // 0x478(0x08)
	struct FName HeroTypeIconButtonWidgetName; // 0x480(0x08)
	struct UWidget* DoubleClickHotKey; // 0x488(0x08)
	struct FName DoubleClickHotKeyWidgetName; // 0x490(0x08)
	struct UWidget* SelectHotKey; // 0x498(0x08)
	struct FName SelectHotKeyWidgetName; // 0x4a0(0x08)
	struct UWidget* CustomHotKey; // 0x4a8(0x08)
	struct FName CustomHotKeyWidgetName; // 0x4b0(0x08)
	struct FTimerHandle UpdateRedeployCDTimerHandle; // 0x4b8(0x08)
	float UpdateRedeployBtnTimerInterval; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FTimerHandle UpdateLoadingPercentageTimerHandle; // 0x4c8(0x08)
	int32_t UpdateLoadingPercentageMinValue; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FTimerHandle PreloadStallCatchTimerHandle; // 0x4d8(0x08)
	float PreloadStallCatchTimerInterval; // 0x4e0(0x04)
	float PreloadStallCatchTimerMaxTime; // 0x4e4(0x04)
	struct UDFCommonTabWidget* DFCommonTabWidget; // 0x4e8(0x08)
	struct FName DFCommonTabWidgetWidgetName; // 0x4f0(0x08)
	struct UWidget* HeroAndPackagePanel; // 0x4f8(0x08)
	struct FName HeroAndPackagePanelWidgetName; // 0x500(0x08)
	struct UWidget* TeamMemberBG; // 0x508(0x08)
	struct FName TeamMemberBGWidgetName; // 0x510(0x08)
	struct UWidget* RootPanel; // 0x518(0x08)
	struct FName RootPanelWidgetName; // 0x520(0x08)
	struct FString RebornFailedReasonKey; // 0x528(0x10)
	struct FName DisplayInputActionName_Redeploy; // 0x538(0x08)
	int32_t DisplayInputActionHandle_Redeploy; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct TArray<enum class ERedeployStateFuture> DisableClickRedeployServerCurStateList; // 0x548(0x10)
	struct TArray<enum class ERedeployStateFuture> EnableClickRedeployServerCurStateList; // 0x558(0x10)
	float BroadcastClickCD; // 0x568(0x04)
	float LastBroadcastClickTime; // 0x56c(0x04)
	bool bEnableBroadcastClickCD; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)

	void UpdateRedeployBtn(); // Function Breakthrough.BreakthroughRedeployArmSelectedView.UpdateRedeployBtn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployButtonView
// Size: 0x2f0 (Inherited: 0x298)
class UBreakthroughRedeployButtonView : public UUserWidget {
public:

	struct UDFCommonButton* RedeployButton; // 0x298(0x08)
	struct FName HDRedeployButtonWidgetName; // 0x2a0(0x08)
	struct FName RedeployButtonWidgetName; // 0x2a8(0x08)
	/*struct FMulticastInlineDelegate*/char OnClicked[0x10]; // 0x2b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeClicked[0x10]; // 0x2c0(0x10)
	float DisableDuration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FTimerHandle DisableTimer; // 0x2d8(0x08)
	bool bAutoRecoverDisable; // 0x2e0(0x01)
	bool bEnableBroadcastClickCD; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	float BroadcastClickCD; // 0x2e4(0x04)
	float LastBroadcastClickTime; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void SetMainTitleText4AllState(struct FText InText); // Function Breakthrough.BreakthroughRedeployButtonView.SetMainTitleText4AllState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployComponent
// Size: 0x890 (Inherited: 0x738)
class UBreakthroughRedeployComponent : public UDFMRedeployComponent {
public:

	struct FTimerHandle TimerHandle_TimerTick; // 0x738(0x08)
	float TimerTickInterval; // 0x740(0x04)
	float FireStateKeepTime; // 0x744(0x04)
	float PlayerDeployVehicleCD; // 0x748(0x04)
	float PlayerVehicleRefreshCD; // 0x74c(0x04)
	bool ManualFirstRedeployFinish; // 0x750(0x01)
	char pad_751[0x7]; // 0x751(0x07)
	struct TArray<struct FRedeployTeammatePlayerInfo> TeamPlayerInfoList; // 0x758(0x10)
	struct TArray<struct FRedeployNormalPlayerInfo> NormalPlayerInfoList; // 0x768(0x10)
	struct TArray<struct FRedeployVehicleInfo> VehicleInfoList; // 0x778(0x10)
	struct TArray<struct FRedeployRebornFlagInfo> RebornFlagInfoList; // 0x788(0x10)
	struct TArray<struct FRedeployStaticPointInfo> StaticPointInfoList; // 0x798(0x10)
	struct TMap<enum class ESceneWeaponType, float> SceneWeaponMeshRotation; // 0x7a8(0x50)
	float VehicleLowHealthPercent; // 0x7f8(0x04)
	char pad_7FC[0x4]; // 0x7fc(0x04)
	struct TArray<enum class ERequestRedeployReturnCode> NoNeedShowDeployErrorCode; // 0x800(0x10)
	bool bFirstDeployCheckArmBagHasDisableWeapon; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct ABreakthroughVehicleSpawner* LockedVehicleSpawner; // 0x818(0x08)
	struct FRedeployLockedTeammateInfo LockedTeammateInfo; // 0x820(0x40)
	struct ADFMVehicleBase* MurdererVehicle; // 0x860(0x08)
	int32_t RedeployTimes; // 0x868(0x04)
	float OldAsyncLoadingTimeLimit; // 0x86c(0x04)
	bool NeedRevertAsyncLoadingTimeLimit; // 0x870(0x01)
	bool IsFirstShowRedeployUI; // 0x871(0x01)
	char pad_872[0x2]; // 0x872(0x02)
	float ClientWaitDoAfterRebornTime; // 0x874(0x04)
	struct FTimerHandle ClientWaitDoAfterRebornTimeHandle; // 0x878(0x08)
	struct UBreakthroughRedeployHudField* RedeployHudField; // 0x880(0x08)
	float VehicleSpawnerSelfCD; // 0x888(0x04)
	char pad_88C[0x4]; // 0x88c(0x04)

	void TimerTickCollectVehicleInfo(); // Function Breakthrough.BreakthroughRedeployComponent.TimerTickCollectVehicleInfo // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployCountDownTimerTextView
// Size: 0x330 (Inherited: 0x310)
class UBreakthroughRedeployCountDownTimerTextView : public UDFMHudMvcViewBase {
public:

	struct UTextBlock* TextBlock_Time; // 0x310(0x08)
	struct FName TextBlock_TimeName; // 0x318(0x08)
	struct FTimerHandle TimerHandle_UpdateCountDownTimerText; // 0x320(0x08)
	float TimerInterval; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployGestureView
// Size: 0xd10 (Inherited: 0x5d0)
class UBreakthroughRedeployGestureView : public UBattleFieldRedeployView {
public:

	struct UReDeployPointsPanel* ReDeployPointsPanel; // 0x5d0(0x08)
	struct FName ReDeployPointsPanelWidgetName; // 0x5d8(0x08)
	struct UFingerGestureWidget* FingerGestureWidget; // 0x5e0(0x08)
	struct UImage* MapBackImageForScale; // 0x5e8(0x08)
	struct TArray<struct UWidget*> FadeInOutWidgets; // 0x5f0(0x10)
	struct UClass* UBreakthroughSectorBaseSplineAreaViewClass; // 0x600(0x08)
	struct UClass* UBreakthroughCampSectorSplineAreaViewClass; // 0x608(0x08)
	struct UClass* UBreakthroughSafeAreaSplineAreaViewClass; // 0x610(0x08)
	struct TArray<struct UBreakthroughSplineAreaView*> SplineAreaViewArray; // 0x618(0x10)
	struct FVector2D SplineAreaViewSize; // 0x628(0x08)
	struct UHUDClipmap* BgClipmap; // 0x630(0x08)
	float MoveSpeed; // 0x638(0x04)
	char pad_63C[0xb8]; // 0x63c(0xb8)
	float BaseScale; // 0x6f4(0x04)
	float CurBaseScale; // 0x6f8(0x04)
	struct FVector2D BaseCenter; // 0x6fc(0x08)
	struct FVector2D CurBaseCenter; // 0x704(0x08)
	struct FVector2D Pivot; // 0x70c(0x08)
	char pad_714[0x1c]; // 0x714(0x1c)
	struct FVector2D TargetCenter; // 0x730(0x08)
	float TargetScale; // 0x738(0x04)
	float TimerTickInterval; // 0x73c(0x04)
	int32_t MaxRequests; // 0x740(0x04)
	char pad_744[0x4]; // 0x744(0x04)
	struct TMap<uint32_t, bool> CampSectorDeployPointStatusMap; // 0x748(0x50)
	struct TMap<uint32_t, bool> SectorAnchorDeployPointStatusMap; // 0x798(0x50)
	struct TMap<uint32_t, bool> TeamDeployPointStatusMap; // 0x7e8(0x50)
	struct TMap<uint32_t, bool> NormalDeployPointStatusMap; // 0x838(0x50)
	struct TMap<uint32_t, bool> VehicleDeployPointStatusMap; // 0x888(0x50)
	struct TMap<uint32_t, bool> RebornFlagDeployPointStatusMap; // 0x8d8(0x50)
	struct TMap<uint32_t, bool> StaticPointDeployPointStatusMap; // 0x928(0x50)
	bool EnableTestClipmap; // 0x978(0x01)
	char pad_979[0x17]; // 0x979(0x17)
	float TweenMinScale; // 0x990(0x04)
	float TweenMaxScale; // 0x994(0x04)
	float TweenFirstTimeSelectScale; // 0x998(0x04)
	float TweenNormalSelectScale; // 0x99c(0x04)
	float FirstDeployTweenFirstTimeSelectScale; // 0x9a0(0x04)
	float FirstDeployTweenNormalSelectScale; // 0x9a4(0x04)
	char pad_9A8[0x10]; // 0x9a8(0x10)
	struct FGeometry RedeployPointPanelGeometry; // 0x9b8(0x44)
	struct FVector RedeployCameraLocation; // 0x9fc(0x0c)
	char pad_A08[0x8]; // 0xa08(0x08)
	struct FMatrix InvProjectMat; // 0xa10(0x40)
	struct FRotator CameraRotator; // 0xa50(0x0c)
	struct FVector CameraPos; // 0xa5c(0x0c)
	float CameraFOV; // 0xa68(0x04)
	char pad_A6C[0x4]; // 0xa6c(0x04)
	double LastTickTime; // 0xa70(0x08)
	char pad_A78[0x100]; // 0xa78(0x100)
	struct UWidget* MapInfoView; // 0xb78(0x08)
	struct FName MapInfoViewWidgetName; // 0xb80(0x08)
	struct UWidget* MapBaseWidget; // 0xb88(0x08)
	struct FName MapBaseWidgetName; // 0xb90(0x08)
	struct UWidget* VoteTipsView; // 0xb98(0x08)
	struct FName VoteTipsViewWidgetName; // 0xba0(0x08)
	struct UTextBlock* MapNameText; // 0xba8(0x08)
	struct FName MapNameTextWidgetName; // 0xbb0(0x08)
	struct UWidget* LeftInfoPanel; // 0xbb8(0x08)
	struct FName LeftInfoPanelWidgetName; // 0xbc0(0x08)
	struct UWidget* RightTopPanel; // 0xbc8(0x08)
	struct FName RightTopPanelWidgetName; // 0xbd0(0x08)
	struct UWidget* ControllerButtonSetting; // 0xbd8(0x08)
	struct FName ControllerButtonSettingWidgetName; // 0xbe0(0x08)
	struct UWidget* ControllerFunctionButtonSpeak; // 0xbe8(0x08)
	struct FName ControllerFunctionButtonSpeakWidgetName; // 0xbf0(0x08)
	struct UWidget* ControllerFunctionButtonCommand; // 0xbf8(0x08)
	struct FName ControllerFunctionButtonCommandWidgetName; // 0xc00(0x08)
	struct UWidget* ControllerFunctionButtonSound; // 0xc08(0x08)
	struct FName ControllerFunctionButtonSoundWidgetName; // 0xc10(0x08)
	struct UCanvasPanelSlot* FollowWidgetParentCanvasPanelSlot; // 0xc18(0x08)
	struct UCanvasPanel* CanvasPanelCenterFocusArea; // 0xc20(0x08)
	struct FName CanvasPanelCenterFocusAreaWidgetName; // 0xc28(0x08)
	struct UBreakthroughRedeployCountDownTimerTextView* CountDownTimerTextView; // 0xc30(0x08)
	struct FName CountDownTimerTextViewWidgetName; // 0xc38(0x08)
	struct UCurveFloat* ShowAnimCurve; // 0xc40(0x08)
	struct UGPTweenFloat* OnShowAnimTween; // 0xc48(0x08)
	struct FTimerHandle OnShowAnimTweenGuaranteedTimerHandle; // 0xc50(0x08)
	struct UGPTweenVector3D* OnShowLandingAcTween; // 0xc58(0x08)
	struct UBreakthroughTweenSelectPoint* SelectPointTween; // 0xc60(0x08)
	struct UBreakthroughTweenSelectPoint* ForceResetTween; // 0xc68(0x08)
	bool bShowReturned; // 0xc70(0x01)
	bool bIsFirstSelectPoint; // 0xc71(0x01)
	char pad_C72[0x6]; // 0xc72(0x06)
	struct FTimerHandle WaitLocalPlayerStateTimerHandle; // 0xc78(0x08)
	struct FTimerHandle WaitLoadingTimerHandle; // 0xc80(0x08)
	struct TArray<struct UBreakthroughRedeployPointView*> RedeployPointViewList; // 0xc88(0x10)
	struct TArray<struct UBreakthroughRedeploySectorAnchorPointView*> SectorAnchorPointViewList; // 0xc98(0x10)
	bool bHasCreateMapRandomMarker; // 0xca8(0x01)
	bool bHasCreateStaticPointMarker; // 0xca9(0x01)
	char pad_CAA[0x2]; // 0xcaa(0x02)
	int32_t MaxCreateNormalPlayerMarkerPerFrame; // 0xcac(0x04)
	bool bFirstOpenDeployViewTimeUploaded; // 0xcb0(0x01)
	bool bNeedUpdateSplineAreaView; // 0xcb1(0x01)
	bool bEnableWASD; // 0xcb2(0x01)
	bool bEnableRealTimeViewPortParams; // 0xcb3(0x01)
	bool bIsPassiveHide; // 0xcb4(0x01)
	char pad_CB5[0x3]; // 0xcb5(0x03)
	struct UBreakthroughRedeployHudField* RedeployHudField; // 0xcb8(0x08)
	/*struct TSet<struct FKey>*/char PressingKeySet[0x50]; // 0xcc0(0x50)

	void WidgetOnDrag(int32_t OnClickTouchIndex, struct FVector2D LastScreenSpacePosition, struct FVector2D ScreenSpacePosition); // Function Breakthrough.BreakthroughRedeployGestureView.WidgetOnDrag // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployHeroInfoView
// Size: 0x498 (Inherited: 0x3f8)
class UBreakthroughRedeployHeroInfoView : public UDFMBaseUIView {
public:

	struct UDFImage* HeroTypeIcon; // 0x3f8(0x08)
	struct FName HeroTypeIconWidgetName; // 0x400(0x08)
	struct UDFTextBlock* HeroTypeNameTextBlock; // 0x408(0x08)
	struct FName HeroTypeNameTextBlockWidgetName; // 0x410(0x08)
	struct UDFTextBlock* CodeNameTextBlock; // 0x418(0x08)
	struct FName CodeNameTextBlockWidgetName; // 0x420(0x08)
	struct TArray<struct UUserWidget*> SkillInfoWidgets; // 0x428(0x10)
	struct TArray<struct FName> SkillInfoWidgetNames; // 0x438(0x10)
	struct FName SkillIconWidgetName; // 0x448(0x08)
	struct FName SkillNameWidgetName; // 0x450(0x08)
	struct FName SkillDescWidgetName; // 0x458(0x08)
	struct FName HeroListScrollGridBoxWidgetName; // 0x460(0x08)
	struct UDFScrollBox* HeroListScrollGridBox; // 0x468(0x08)
	struct FName CloseHeroInfoButtonWidgetName; // 0x470(0x08)
	struct UDFCommonButton* CloseHeroInfoButton; // 0x478(0x08)
	char pad_480[0x18]; // 0x480(0x18)

	void UpdateCloseHeroInfoButtonState(); // Function Breakthrough.BreakthroughRedeployHeroInfoView.UpdateCloseHeroInfoButtonState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.OneHubAllVehicleSpawnerStatus
// Size: 0x48 (Inherited: 0x30)
class UOneHubAllVehicleSpawnerStatus : public UObject {
public:

	struct ASpawnAreaHub* SpawnAreaHub; // 0x30(0x08)
	struct TArray<struct FVehicleSpawnerState> VehicleSpawnerStates; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployHudField
// Size: 0x810 (Inherited: 0x30)
class UBreakthroughRedeployHudField : public UDFMHudMvcFieldBase {
public:

	int32_t PreviewArmId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	uint64_t PreviewHeroId; // 0x38(0x08)
	uint64_t PreviewWeaponItemGid; // 0x40(0x08)
	int32_t ServerArmId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	uint64_t ServerHeroId; // 0x50(0x08)
	uint64_t ServerWeaponBagArmId; // 0x58(0x08)
	enum class EBreakthroughRedeployButtonState CurrentDeployState; // 0x60(0x01)
	bool IsCurrentSelectDeployPoint; // 0x61(0x01)
	bool IsCurrentSelectDeployPointCanDeploy; // 0x62(0x01)
	bool IsCurrentSelectVehicleDeploy; // 0x63(0x01)
	bool IsCurrentSelectVehicleDeployCanDeploy; // 0x64(0x01)
	bool IsCurrentPreLoadMap; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	int32_t CurrentPreLoadMapProgress; // 0x68(0x04)
	float PreLoadMapProgressUpdateTime; // 0x6c(0x04)
	bool IsCurrentWaitLoadCollisionLoadMap; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t CurrentWaitLoadCollisionLoadMapProgress; // 0x74(0x04)
	struct TArray<struct FRedeployTeammatePlayerInfo> TeamPlayerInfoList; // 0x78(0x10)
	struct TMap<uint32_t, struct FRedeployNormalPlayerInfo> NormalPlayerInfoMap; // 0x88(0x50)
	struct TMap<uint32_t, struct FRedeployOnFirePlayerInfo> OnFireEnemyInfoMap; // 0xd8(0x50)
	struct TArray<struct FRedeployVehicleInfo> VehicleInfoList; // 0x128(0x10)
	float VehicleInfoListReplicateTime; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FRedeployRebornFlagInfo> RebornFlagInfoList; // 0x140(0x10)
	struct TArray<struct FRedeployStaticPointInfo> StaticPointInfoList; // 0x150(0x10)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoList; // 0x160(0x10)
	int32_t GuideIDClickHero; // 0x170(0x04)
	int32_t GuideIDSelectBoat; // 0x174(0x04)
	int32_t GuideIDSelectCampPoint; // 0x178(0x04)
	int32_t GuideIDClickDeploy; // 0x17c(0x04)
	bool RedeploySelectPointTweenPlayOver; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	int32_t EnemyOnFireShowKeepTime; // 0x184(0x04)
	struct TArray<struct FVector> FocusPlayerPreloadLocations; // 0x188(0x10)
	struct TWeakObjectPtr<struct AActor> PreviewRedployTargetActor; // 0x198(0x08)
	int32_t PreviewRedployVehicleID; // 0x1a0(0x04)
	int32_t PreviewRedployActorID; // 0x1a4(0x04)
	struct TWeakObjectPtr<struct AActor> RedployTargetActor; // 0x1a8(0x08)
	int32_t RedployVehicleID; // 0x1b0(0x04)
	int32_t RedployActorID; // 0x1b4(0x04)
	bool bHeroInfoViewConfirmBtnEnable; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	uint64_t CurrentPreviewWeaponItemId; // 0x1c0(0x08)
	int32_t CurrentPreviewWeaponPresetIndex; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FInventoryItemInfo CurrentSelectWeaponItemInfo; // 0x1d0(0x538)
	struct ABattleFieldPlayerState* BattleFieldPlayerState; // 0x708(0x08)
	struct TMap<enum class EAttachPosition, struct FAttachPositionToWeaponTypes> AttachPositionToWeaponTypeMap; // 0x710(0x50)
	struct TMap<enum class EAttachPosition, enum class ERedeployStoreType> AttachPositionToRedeployStoreTypeMap; // 0x760(0x50)
	struct FMatrix ProjectMat; // 0x7b0(0x40)
	struct FRotator CameraRotator; // 0x7f0(0x0c)
	char pad_7FC[0x4]; // 0x7fc(0x04)
	uint64_t LastPlayFirstEquipAnimWeaponID; // 0x800(0x08)
	char pad_808[0x8]; // 0x808(0x08)

	void SetGuideStatusByEnum(enum class EBattleFieldInGameGuideType GuideType, enum class EBreakthroughRedeployOneGuideStatus GuideStatus); // Function Breakthrough.BreakthroughRedeployHudField.SetGuideStatusByEnum // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployHudLogic
// Size: 0x98 (Inherited: 0x48)
class UBreakthroughRedeployHudLogic : public UDFMHudMvcLogicBase {
public:

	struct UBreakthroughRedeployHudField* RedeployHudField; // 0x48(0x08)
	struct UReDeployPointsPanel* ReDeployPointsPanelView; // 0x50(0x08)
	struct UBreakthroughRedeployArmSelectedView* RedeployArmSelectedView; // 0x58(0x08)
	struct UBreakthroughDeployPackageView* DeployPackageView; // 0x60(0x08)
	struct UBreakthroughDeploySelectedHeroView* DeploySelectedHeroView; // 0x68(0x08)
	struct UBreakthroughRedeployHeroInfoView* RedeployHeroInfoView; // 0x70(0x08)
	struct UBreakthroughRedeployCountDownTimerTextView* RedeployCountDownTimerTextView; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
	struct FTimerHandle TimerHandle_CloseGuide; // 0x88(0x08)
	int32_t bMpGuidelsFinished; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	void VisibleRedeployArmSelectedViewCloseHeroInfoButton(); // Function Breakthrough.BreakthroughRedeployHudLogic.VisibleRedeployArmSelectedViewCloseHeroInfoButton // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployPointHubItemDetail
// Size: 0x440 (Inherited: 0x310)
class UBreakthroughRedeployPointHubItemDetail : public UDFMHudMvcViewBase {
public:

	struct UBreakthroughRedeployComponent* RedeployComponent; // 0x310(0x08)
	struct UDFImage* SecondIconImage; // 0x318(0x08)
	struct UDFRichTextBlock* TextOverIcon; // 0x320(0x08)
	struct UTextBlock* NameText; // 0x328(0x08)
	struct UDFProgressBar* ProgressBar; // 0x330(0x08)
	struct UDFTextBlock* CountDownText; // 0x338(0x08)
	struct UDFImage* IconImage; // 0x340(0x08)
	struct UTextBlock* AvailableNumText; // 0x348(0x08)
	struct UDFImage* BgImage; // 0x350(0x08)
	struct UDFImage* HorizontalLineImage; // 0x358(0x08)
	struct UDFImage* VerticalLineImage; // 0x360(0x08)
	struct UWidget* SelectHighLightWidget; // 0x368(0x08)
	int32_t UsageType; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct TArray<struct FSoftObjectPath> IconPaths; // 0x378(0x10)
	struct UHubOneTypeVehicleStatus* VehicleSpawnerStatus; // 0x388(0x08)
	int32_t CurrentShowType; // 0x390(0x04)
	int32_t CurrentIconType; // 0x394(0x04)
	int32_t FixedColorType; // 0x398(0x04)
	bool CurrentHideLine; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct FSoftObjectPath IconPath; // 0x3a0(0x18)
	bool CurrentSelected; // 0x3b8(0x01)
	bool CanSelect; // 0x3b9(0x01)
	char pad_3BA[0x26]; // 0x3ba(0x26)
	struct FString CurrentName; // 0x3e0(0x10)
	struct FString CurrentTextOverIcon; // 0x3f0(0x10)
	struct FTimerHandle UpdateItemStateTimerHandle; // 0x400(0x08)
	float UpdateItemStateTimerInterval; // 0x408(0x04)
	struct FLinearColor TeamColor; // 0x40c(0x10)
	struct FLinearColor CampColor; // 0x41c(0x10)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct FRedeployPointHubItemColorConfig> ColorConfigs; // 0x430(0x10)

	void UpdateItemState(); // Function Breakthrough.BreakthroughRedeployPointHubItemDetail.UpdateItemState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployPointSelectQuad
// Size: 0x3b8 (Inherited: 0x310)
class UBreakthroughRedeployPointSelectQuad : public UDFMHudMvcViewBase {
public:

	struct UWidgetAnimation* WBP_Marker_Map_BreakthroughSelect_in; // 0x310(0x08)
	struct UWidgetAnimation* WBP_Marker_Map_BreakthroughSelect_loop; // 0x318(0x08)
	struct UWidgetAnimation* WBP_Marker_Map_BreakthroughSelect_loopHighRate; // 0x320(0x08)
	struct FName PlayerNameTextWidgetName; // 0x328(0x08)
	struct UTextBlock* PlayerNameText; // 0x330(0x08)
	struct FName VehicleItemVertexBoxWidgetName; // 0x338(0x08)
	struct UDFVerticalBox* VehicleItemVertexBox; // 0x340(0x08)
	int32_t ShowType; // 0x348(0x04)
	bool IsLeftNearListVisible; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct TArray<struct UBreakthroughRedeployPointHubItemDetail*> ItemDetaiArr; // 0x350(0x10)
	struct TArray<enum class EAnimVehicleType> VehicleTypeArr; // 0x360(0x10)
	struct TArray<struct UBreakthroughRedeployPointHubItemDetail*> VehicleItemDetailArr; // 0x370(0x10)
	struct UBreakthroughRedeployPointHubItemDetail* VehicleItemDetailWalk; // 0x380(0x08)
	struct UClass* UBreakthroughRedeployPointHubItemDetailClass; // 0x388(0x08)
	bool bIsInBattle; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FTimerHandle TimerHandle_PlaySelectAnim; // 0x398(0x08)
	struct FString PlayerName; // 0x3a0(0x10)
	struct FName ShakeRedeployCDAnimName; // 0x3b0(0x08)

	void StopShakeRedeployCDAnim(); // Function Breakthrough.BreakthroughRedeployPointSelectQuad.StopShakeRedeployCDAnim // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployPointVehicleHubItem
// Size: 0x350 (Inherited: 0x310)
class UBreakthroughRedeployPointVehicleHubItem : public UDFMHudMvcViewBase {
public:

	struct FName AnimationName; // 0x310(0x08)
	int32_t CurrentShowState; // 0x318(0x04)
	bool bIsShow; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UHubOneTypeVehicleStatus* VehicleSpawnerStatus; // 0x320(0x08)
	char pad_328[0x10]; // 0x328(0x10)
	struct FName ButtonWidgetName; // 0x338(0x08)
	struct FName IconWidgetName; // 0x340(0x08)
	struct FName TranslateCanvasPanelWidgetName; // 0x348(0x08)

	void SetVehicleSpawnerStatus(struct UHubOneTypeVehicleStatus* InStatus); // Function Breakthrough.BreakthroughRedeployPointVehicleHubItem.SetVehicleSpawnerStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployVoteTipsView
// Size: 0x328 (Inherited: 0x310)
class UBreakthroughRedeployVoteTipsView : public UDFMHudMvcViewBase {
public:

	struct URichTextBlock* TextBlock_Tips; // 0x310(0x08)
	struct FName TextBlock_TipsName; // 0x318(0x08)
	bool bShowSectorName; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)

	void OnClientOnSectorActived(struct AActor* Sector); // Function Breakthrough.BreakthroughRedeployVoteTipsView.OnClientOnSectorActived // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRepPolicy
// Size: 0x4f8 (Inherited: 0x400)
class ABreakthroughRepPolicy : public AMinimalReplicationPolicy {
public:

	struct TArray<struct FRedeployPlayerVolatileInfo> PlayerVolatileInfoList; // 0x400(0x10)
	struct TMap<uint64_t, struct FRedeployPlayerVolatileInfo> PlayerVolatileInfoShadowDataMap; // 0x410(0x50)
	struct TArray<struct FRedeployVehicleVolatileInfo> VehicleVolatileInfoList; // 0x460(0x10)
	struct TMap<uint64_t, struct FRedeployVehicleVolatileInfo> VehicleVolatileInfoShadowDataMap; // 0x470(0x50)
	int32_t PlayerVolatileInfoCollectInterval; // 0x4c0(0x04)
	int32_t PlayerVolatileInfoCollectFrameCount; // 0x4c4(0x04)
	float PlayerRotationUpdateThreshold; // 0x4c8(0x04)
	float PlayerLocationQuaredUpdateThreshold; // 0x4cc(0x04)
	float VehicleRotationUpdateThreshold; // 0x4d0(0x04)
	float VehicleLocationQuaredUpdateThreshold; // 0x4d4(0x04)
	float VehicleFireStateKeepTime; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct AGPGameMode* GPGameMode; // 0x4e0(0x08)
	char pad_4E8[0x10]; // 0x4e8(0x10)

	void OnRep_VehicleVolatileInfoList(); // Function Breakthrough.BreakthroughRepPolicy.OnRep_VehicleVolatileInfoList // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorAnchorCapView
// Size: 0x428 (Inherited: 0x388)
class UBreakthroughSectorAnchorCapView : public UBaseUIView {
public:

	char pad_388[0x30]; // 0x388(0x30)
	struct ABattleSectorAnchor* OwnerBattleSectorAnchor; // 0x3b8(0x08)
	struct UTextBlock* OccupyTipsText; // 0x3c0(0x08)
	struct UDFCanvasPanel* OccupyBarCanvas; // 0x3c8(0x08)
	struct UDFRadialImage* LeftRadialImage; // 0x3d0(0x08)
	struct UDFRadialImage* RightRadialImage; // 0x3d8(0x08)
	struct UBreakthroughSectorAnchorProgress* OccupyPoint; // 0x3e0(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x3e8(0x08)
	struct UTextBlock* BottomTipsText; // 0x3f0(0x08)
	struct FName CampFriendlyType; // 0x3f8(0x08)
	struct FLinearColor CampFriendlyBarColor; // 0x400(0x10)
	struct FName CampEnemyType; // 0x410(0x08)
	struct FLinearColor CampEnemyBarColor; // 0x418(0x10)

	void UpdateSectorAnchorOccupyProgressBar(); // Function Breakthrough.BreakthroughSectorAnchorCapView.UpdateSectorAnchorOccupyProgressBar // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorAnchorGuidance
// Size: 0x3b8 (Inherited: 0x388)
class UBreakthroughSectorAnchorGuidance : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UHorizontalBox* OccupyPointHorizontalBox; // 0x390(0x08)
	struct UBreakthroughSectorAnchorProgress* LeftOccupyPoint; // 0x398(0x08)
	struct UBreakthroughSectorAnchorProgress* RightOccupyPoint; // 0x3a0(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x3a8(0x08)
	float DropWaitTime; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)

	void SetOccupyPointView(struct ABattleSectorBase* InBattleSector); // Function Breakthrough.BreakthroughSectorAnchorGuidance.SetOccupyPointView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorAnchorMarkerItem
// Size: 0x530 (Inherited: 0x440)
class UBreakthroughSectorAnchorMarkerItem : public UGPSectorAnchorMarkerItem {
public:

	char pad_440[0x30]; // 0x440(0x30)
	struct TMap<enum class EDFMGamePlayMode, struct FSectorAnchorMarkerUpdateConfig> SectorAnchorMarkerRuleConfigMap; // 0x470(0x50)
	struct TMap<enum class EDFMGamePlayMode, struct FSectorAnchorMarkerUpdateConfig> SectorAnchorMarkerRuleConfigMapMarking; // 0x4c0(0x50)
	float Tolerance; // 0x510(0x04)
	bool bNeedShowMarker; // 0x514(0x01)
	char pad_515[0x3]; // 0x515(0x03)
	struct ABattleSectorAnchor* BattleSectorAnchor; // 0x518(0x08)
	char pad_520[0x10]; // 0x520(0x10)

	void OnTipsInfoNtf(struct FBattleFieldBroadcastTipInfo& InTipInfo); // Function Breakthrough.BreakthroughSectorAnchorMarkerItem.OnTipsInfoNtf // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorAnchorMarkerWidget
// Size: 0x730 (Inherited: 0x588)
class UBreakthroughSectorAnchorMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UBreakthroughSectorAnchorMarkerItem* BreakthroughSectorAnchorMarkerItem; // 0x588(0x08)
	struct ABattleSectorAnchor* OwnerSectorAnchor; // 0x590(0x08)
	struct FString MarkVO_Neutral; // 0x598(0x10)
	struct FString MarkVO_Friend; // 0x5a8(0x10)
	struct FString MarkVO_Enemy; // 0x5b8(0x10)
	char pad_5C8[0xc]; // 0x5c8(0x0c)
	float TotalMoveTime; // 0x5d4(0x04)
	struct FVector2D BeginPosition; // 0x5d8(0x08)
	char pad_5E0[0x60]; // 0x5e0(0x60)
	struct UBreakthroughSectorAnchorProgress* SectorOccupypoint; // 0x640(0x08)
	struct UScreenMarkerRipple* MarkerRipple; // 0x648(0x08)
	struct UTextBlock* AnchorStateText; // 0x650(0x08)
	struct UDFRadialImage* LeftRadialImage; // 0x658(0x08)
	struct UDFRadialImage* RightRadialImage; // 0x660(0x08)
	struct UWidgetAnimation* MarkerInAnim; // 0x668(0x08)
	struct UWidgetAnimation* MarkerOutAnim; // 0x670(0x08)
	struct UWidgetAnimation* DistTextInAnim; // 0x678(0x08)
	struct UWidgetAnimation* DistTextOutAnim; // 0x680(0x08)
	struct UWidgetAnimation* CaptureInAnim; // 0x688(0x08)
	struct UWidgetAnimation* CaptureOutAnim; // 0x690(0x08)
	struct TArray<struct FText> OffenceAnchorStateTextArr; // 0x698(0x10)
	struct TArray<struct FText> DefenceAnchorStateTextArr; // 0x6a8(0x10)
	struct FText BigEventAnchorStateText; // 0x6b8(0x18)
	struct FName CampFriendlyType; // 0x6d0(0x08)
	struct FLinearColor CampFriendlyBarColor; // 0x6d8(0x10)
	struct FName CampEnemyType; // 0x6e8(0x08)
	struct FLinearColor CampEnemyBarColor; // 0x6f0(0x10)
	enum class EaseType MarkerEaseType; // 0x700(0x01)
	char pad_701[0x3]; // 0x701(0x03)
	struct FVector2D OneAnchorStartViewScale; // 0x704(0x08)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct TArray<struct FVector2D> TwoAnchorStartViewScale; // 0x710(0x10)
	struct TArray<struct FVector2D> ThreeAnchorStartViewScale; // 0x720(0x10)

	void UpdateDropAnim(float DeltaTime); // Function Breakthrough.BreakthroughSectorAnchorMarkerWidget.UpdateDropAnim // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorAnchorProgress
// Size: 0x4b8 (Inherited: 0x388)
class UBreakthroughSectorAnchorProgress : public UBaseUIView {
public:

	struct ABattleSectorAnchor* OwnSectorAnchor; // 0x388(0x08)
	bool bIsInit; // 0x390(0x01)
	char pad_391[0xa7]; // 0x391(0xa7)
	struct URadialImage* CaptureProgressRadialImage; // 0x438(0x08)
	struct UDFImage* NameInIcon; // 0x440(0x08)
	struct UImage* DFImage_kuang_FX; // 0x448(0x08)
	struct UImage* DFImage_light_fx; // 0x450(0x08)
	struct UImage* DFImagefx; // 0x458(0x08)
	struct UTextBlock* StealAnchorTextBlock; // 0x460(0x08)
	struct UImage* DFImage_X; // 0x468(0x08)
	struct UWidgetAnimation* WBP_TipsPro_SectorOccupypoint_in; // 0x470(0x08)
	struct UWidgetAnimation* WBP_TipsPro_SectorOccupypoint_out; // 0x478(0x08)
	struct UWidgetAnimation* StealOccupyAnim; // 0x480(0x08)
	struct UWidgetAnimation* OccupiedAnim; // 0x488(0x08)
	struct UWidgetAnimation* EventOccupyAnim; // 0x490(0x08)
	struct UWidgetAnimation* Anima_zljd; // 0x498(0x08)
	struct UWidgetAnimation* Anima_zljd_all; // 0x4a0(0x08)
	float CaptureProgressBarMIDInterval; // 0x4a8(0x04)
	enum class EaseType CaptureProgressBarMIDEaseType; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct UGPTweenFloat* PercentTween; // 0x4b0(0x08)

	void UpdateSectorAnchorProgress(float InDeltaTime); // Function Breakthrough.BreakthroughSectorAnchorProgress.UpdateSectorAnchorProgress // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorBattleProgressSectorAnchorInfo
// Size: 0x4d0 (Inherited: 0x3f8)
class UBreakthroughSectorBattleProgressSectorAnchorInfo : public UDFMBaseUIView {
public:

	char pad_3F8[0x40]; // 0x3f8(0x40)
	struct UDFImage* NameInIcon; // 0x438(0x08)
	struct UImage* CaptureProgressBar; // 0x440(0x08)
	struct UImage* CampBg; // 0x448(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x450(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x458(0x08)
	struct ABattleSectorAnchor* BindSectorAnchor; // 0x460(0x08)
	int32_t LocalPlayerCamp; // 0x468(0x04)
	float fWidgetUpdateTickTime; // 0x46c(0x04)
	struct FTimerHandle WidgetUpdateTimerHandle; // 0x470(0x08)
	char pad_478[0x20]; // 0x478(0x20)
	struct FTimerHandle EnemyCaptureAnchorAnimTimerHandle; // 0x498(0x08)
	float CaptureProgressBarMIDInterval; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UWidget* StealAnchorTextBlock; // 0x4a8(0x08)
	struct UImage* DFImage_X; // 0x4b0(0x08)
	struct FName StealAnchorTextBlockName; // 0x4b8(0x08)
	struct FName StealOccupyAnimName; // 0x4c0(0x08)
	struct UWidgetAnimation* EventOccupyAnim; // 0x4c8(0x08)

	void UpdateAnchorCapturedAnimation(); // Function Breakthrough.BreakthroughSectorBattleProgressSectorAnchorInfo.UpdateAnchorCapturedAnimation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorPoint
// Size: 0x440 (Inherited: 0x388)
class UBreakthroughSectorPoint : public UBaseUIView {
public:

	struct UCanvasPanel* CanvasPanel1; // 0x388(0x08)
	struct UCanvasPanel* CanvasPanel2; // 0x390(0x08)
	struct UCanvasPanel* CanvasPanel3; // 0x398(0x08)
	struct UCanvasPanel* CanvasPanel4; // 0x3a0(0x08)
	struct UCanvasPanel* CanvasPanel5; // 0x3a8(0x08)
	struct UImage* Image_2; // 0x3b0(0x08)
	struct UImage* Image_3; // 0x3b8(0x08)
	struct UImage* Image_4; // 0x3c0(0x08)
	struct UImage* Image_5; // 0x3c8(0x08)
	struct UImage* Image_6; // 0x3d0(0x08)
	struct UImage* Image_FX1; // 0x3d8(0x08)
	struct UImage* Image_FX2; // 0x3e0(0x08)
	struct UImage* Image_FX3; // 0x3e8(0x08)
	struct UImage* Image_FX4; // 0x3f0(0x08)
	struct UImage* Image_FX5; // 0x3f8(0x08)
	struct UWidgetAnimation* WBP_TipsPro_Sectorltem_in; // 0x400(0x08)
	struct UWidgetAnimation* WBP_TipsPro_Sectorltem_out; // 0x408(0x08)
	struct UWidgetAnimation* WBP_TipsPro_Sectorltem_v2_Glow; // 0x410(0x08)
	struct FLinearColor TopBarFriendlyCampFXColor; // 0x418(0x10)
	struct FLinearColor TopBarEnemyCampFXColor; // 0x428(0x10)
	char pad_438[0x8]; // 0x438(0x08)

	void SetSectorNum(int32_t InSectorNum); // Function Breakthrough.BreakthroughSectorPoint.SetSectorNum // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorProgressInfo
// Size: 0x520 (Inherited: 0x388)
class UBreakthroughSectorProgressInfo : public UBaseUIView {
public:

	char pad_388[0x50]; // 0x388(0x50)
	struct UUserWidget* LeftSectorText; // 0x3d8(0x08)
	struct UImage* IndefiniteLeftVoteImage; // 0x3e0(0x08)
	struct UDFImage* TopBarIcon_Left; // 0x3e8(0x08)
	struct UDFImage* TopBarIcon_Right; // 0x3f0(0x08)
	struct UHorizontalBox* SectorAnchorHorizontalBox; // 0x3f8(0x08)
	struct UBreakthroughSectorAnchorProgress* WBP_TipsPro_SectorOccupypoint_2; // 0x400(0x08)
	struct UBreakthroughSectorAnchorProgress* WBP_TipsPro_SectorOccupypoint; // 0x408(0x08)
	struct UBreakthroughSectorAnchorProgress* WBP_TipsPro_SectorOccupypoint_3; // 0x410(0x08)
	struct UBreakthroughSectorPoint* ActiveSectorAnchorPoints_2; // 0x418(0x08)
	struct UBreakthroughSectorPoint* ActiveSectorAnchorPoints; // 0x420(0x08)
	struct UTextBlock* CountDownText; // 0x428(0x08)
	struct UTextBlock* TopBarTipText; // 0x430(0x08)
	struct UTextBlock* ScrollText_Votes_Left; // 0x438(0x08)
	struct UTextBlock* Text_AddVotes_Left; // 0x440(0x08)
	struct UImage* BackgroundLineImage; // 0x448(0x08)
	struct UCanvasPanel* LineCanvasPanel; // 0x450(0x08)
	struct UDFButton* TopBarButton; // 0x458(0x08)
	struct UWidgetAnimation* AnimationIn; // 0x460(0x08)
	struct UWidgetAnimation* AnimationOut; // 0x468(0x08)
	struct UWidgetAnimation* AddVotesAnimation; // 0x470(0x08)
	struct UWidgetAnimation* SubVotesAnimation; // 0x478(0x08)
	struct UWidgetAnimation* LowVotesLoopAnimation; // 0x480(0x08)
	struct UWidgetAnimation* LowVotesLoopAnimation_Red; // 0x488(0x08)
	struct UWidgetAnimation* LineGlowingLightAnimation; // 0x490(0x08)
	int32_t TopBarCountDownTimeSecond; // 0x498(0x04)
	struct FLinearColor CountDownFirstSectionColor; // 0x49c(0x10)
	struct FLinearColor CountDownSecondSectionColor; // 0x4ac(0x10)
	struct FLinearColor LowLeftVotesColor; // 0x4bc(0x10)
	float LowLeftPlayCDTime; // 0x4cc(0x04)
	float LowLeftAudioPlayCDTime; // 0x4d0(0x04)
	float GlowingLightPlayCDTime; // 0x4d4(0x04)
	struct FText OffenceTipText; // 0x4d8(0x18)
	struct FText DefenceTipText; // 0x4f0(0x18)
	char pad_508[0x8]; // 0x508(0x08)
	struct FString CountDown10SecondsMusicStr; // 0x510(0x10)

	void UpdateTransitioningSectorTopBar(); // Function Breakthrough.BreakthroughSectorProgressInfo.UpdateTransitioningSectorTopBar // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorTranitionCountDownView
// Size: 0x420 (Inherited: 0x388)
class UBreakthroughSectorTranitionCountDownView : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct UWidgetAnimation* Anima_Counting; // 0x398(0x08)
	struct UImage* CountingFXImg; // 0x3a0(0x08)
	struct UImage* CountingNumberImg; // 0x3a8(0x08)
	struct UImage* CountingSequenceImg; // 0x3b0(0x08)
	struct UTextBlock* HintText; // 0x3b8(0x08)
	struct UWidgetAnimation* Anima_Loop; // 0x3c0(0x08)
	struct UWidgetAnimation* Anima_in; // 0x3c8(0x08)
	struct UWidgetAnimation* Anima_out; // 0x3d0(0x08)
	struct TArray<struct UObject*> FXImageArr; // 0x3d8(0x10)
	struct TArray<struct UObject*> NumberImageArr; // 0x3e8(0x10)
	struct TArray<struct UObject*> SequenceImageArr; // 0x3f8(0x10)
	char pad_408[0x18]; // 0x408(0x18)

	void PlayCountDownAnimation(int32_t InCountDownTime); // Function Breakthrough.BreakthroughSectorTranitionCountDownView.PlayCountDownAnimation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughStatisticsComponent
// Size: 0x690 (Inherited: 0x3d0)
class UBreakthroughStatisticsComponent : public UDFMScoreStatisticsComponent {
public:

	struct ADFMGameState* BattleFieldGameState; // 0x3d0(0x08)
	char pad_3D8[0x190]; // 0x3d8(0x190)
	struct TMap<struct AActor*, struct FVehicleBeAttackedData> VehicleAttackDataMap; // 0x568(0x50)
	char pad_5B8[0xa0]; // 0x5b8(0xa0)
	struct FTimerHandle AttackerHoldingTheLineTimerHandle; // 0x658(0x08)
	struct FTimerHandle DefenderHoldingTheLineTimerHandle; // 0x660(0x08)
	struct FTimerHandle AttackerInFightBackTimerHandle; // 0x668(0x08)
	struct FTimerHandle DefenderInFightBackTimerHandle; // 0x670(0x08)
	struct UCurveFloat* HalfScoreCurveFloat; // 0x678(0x08)
	struct UCurveFloat* AIHalfScoreCurveFloat; // 0x680(0x08)
	char pad_688[0x8]; // 0x688(0x08)

	void ShowAbilityHitMark(struct ACHARACTER* CHARACTER); // Function Breakthrough.BreakthroughStatisticsComponent.ShowAbilityHitMark // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSupportMapItemHUDView
// Size: 0x440 (Inherited: 0x3f8)
class UBreakthroughSupportMapItemHUDView : public UMapItemHUDView {
public:

	struct URadialImage* SelectedImage; // 0x3f8(0x08)
	struct UWidgetAnimation* Anima_Select_in; // 0x400(0x08)
	struct UWidgetAnimation* Anima_Select_out; // 0x408(0x08)
	struct UWidgetAnimation* Anima_Loop; // 0x410(0x08)
	struct UWidgetAnimation* Anima_Loop_PC; // 0x418(0x08)
	struct UWidgetAnimation* Anima_out; // 0x420(0x08)
	char pad_428[0x18]; // 0x428(0x18)

	void StopAnimationLoop(); // Function Breakthrough.BreakthroughSupportMapItemHUDView.StopAnimationLoop // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSupportScreenMarker
// Size: 0x5c0 (Inherited: 0x588)
class UBreakthroughSupportScreenMarker : public UGameMarkerBaseWidget {
public:

	struct UBreakthroughSupportScreenMarkerItem* BreakthroughSupportScreenMarkerItem; // 0x588(0x08)
	char pad_590[0x18]; // 0x590(0x18)
	struct UImage* MarkerImage; // 0x5a8(0x08)
	struct UTextBlock* SupportNameText; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSupportScreenMarkerItem
// Size: 0x440 (Inherited: 0x438)
class UBreakthroughSupportScreenMarkerItem : public UGPMarkerItemBase {
public:

	char pad_438[0x8]; // 0x438(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTeamInfoHudView
// Size: 0x3c0 (Inherited: 0x388)
class UBreakthroughTeamInfoHudView : public UBaseUIView {
public:

	struct TArray<struct UBreakthroughTeamInfoItemHudView*> BreakthroughTeamInfoItemHudViewArray; // 0x388(0x10)
	struct TArray<struct FTeamMemberInfo> LocalMemberInfoList; // 0x398(0x10)
	struct UVerticalBox* TeammateVertexBox; // 0x3a8(0x08)
	struct UButton* TeamDragBtn; // 0x3b0(0x08)
	struct UClass* TeamInfoItemHudView; // 0x3b8(0x08)

	void OnTeamDragBtnClicked(); // Function Breakthrough.BreakthroughTeamInfoHudView.OnTeamDragBtnClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTeamInfoItemHudView
// Size: 0x460 (Inherited: 0x388)
class UBreakthroughTeamInfoItemHudView : public UBaseUIView {
public:

	struct UMaterialInstanceDynamic* ImpendingDeathPercentMID; // 0x388(0x08)
	struct UMaterialInstanceDynamic* TalkingProgressMID; // 0x390(0x08)
	enum class EDFMGamePlayMode CurGamePlayMode; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FMemberHealthInfo MemberHealthInfo; // 0x39c(0x3c)
	char pad_3D8[0x2a]; // 0x3d8(0x2a)
	bool bIsClientOffline; // 0x402(0x01)
	char pad_403[0x5]; // 0x403(0x05)
	struct UTextBlock* PlayerNameText; // 0x408(0x08)
	struct UImage* PlayerGamePlayStateImage; // 0x410(0x08)
	struct UCanvasPanel* PercentCanvasPanel; // 0x418(0x08)
	struct UImage* TeamStatePercentImage; // 0x420(0x08)
	struct UImage* ImpendingDeathPercentImg; // 0x428(0x08)
	struct UCanvasPanel* TalkingCanvas; // 0x430(0x08)
	struct UImage* TalkingImg; // 0x438(0x08)
	struct UProgressBar* TalkingProgressBar; // 0x440(0x08)
	struct UWidgetAnimation* TeamStatusWarltem_in; // 0x448(0x08)
	struct UWidgetAnimation* TeamStatusWarltem_out; // 0x450(0x08)
	int32_t LeftChopCount; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)

	void UpdateTeammateState(); // Function Breakthrough.BreakthroughTeamInfoItemHudView.UpdateTeammateState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTeamMemberInfoHUDView
// Size: 0x6a0 (Inherited: 0x550)
class UBreakthroughTeamMemberInfoHUDView : public ULuaUIBaseView {
public:

	struct UImage* MVPImage; // 0x550(0x08)
	struct UImage* ImpendingDeathPercentImg; // 0x558(0x08)
	struct UImage* MedicalImg; // 0x560(0x08)
	struct UImage* OnVehicleImg; // 0x568(0x08)
	struct UImage* CloseMicImg; // 0x570(0x08)
	struct UCanvasPanel* TalkingCanvas; // 0x578(0x08)
	struct UImage* TalkingImg; // 0x580(0x08)
	struct UProgressBar* TalkingProgressBar; // 0x588(0x08)
	struct UImage* TeamPlayerIcon; // 0x590(0x08)
	struct UMaterialInstanceDynamic* ImpendingDeathMID; // 0x598(0x08)
	char pad_5A0[0x2]; // 0x5a0(0x02)
	bool bIsSelf; // 0x5a2(0x01)
	char pad_5A3[0x1d]; // 0x5a3(0x1d)
	enum class EDFMGamePlayMode CurGamePlayMode; // 0x5c0(0x01)
	char pad_5C1[0xf]; // 0x5c1(0x0f)
	struct TArray<struct FLinearColor> MemberColorArr; // 0x5d0(0x10)
	char pad_5E0[0x4]; // 0x5e0(0x04)
	struct FMemberHealthInfo MemberHealthInfo; // 0x5e4(0x3c)
	char pad_620[0x4]; // 0x620(0x04)
	int32_t CachedInnerIndex; // 0x624(0x04)
	bool bIsLeader; // 0x628(0x01)
	char pad_629[0x1]; // 0x629(0x01)
	bool bIsMicOpen; // 0x62a(0x01)
	bool bIsSpeaking; // 0x62b(0x01)
	char pad_62C[0xc]; // 0x62c(0x0c)
	struct UImage* TopIconImg; // 0x638(0x08)
	struct FSoftObjectPath DisconnectImgPath; // 0x640(0x18)
	struct FSoftObjectPath DeathImgPath; // 0x658(0x18)
	struct FSoftObjectPath EscapeImgPath; // 0x670(0x18)
	struct FSoftObjectPath ImpendingDeathImgPath; // 0x688(0x18)

	void UpdatePlayerBehaviorStatus(); // Function Breakthrough.BreakthroughTeamMemberInfoHUDView.UpdatePlayerBehaviorStatus // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTipsWeakBroadcastHDPanel
// Size: 0x478 (Inherited: 0x388)
class UBreakthroughTipsWeakBroadcastHDPanel : public UBaseUIView {
public:

	struct TArray<struct FBroadcastUIItemInfo> BroadcastUIItemInfoArr; // 0x388(0x10)
	struct TArray<struct UBreakthroughTipsWeakBroadcastView*> RemoveItems; // 0x398(0x10)
	struct TArray<struct UBreakthroughTipsWeakBroadcastView*> ReuseableItems; // 0x3a8(0x10)
	struct UCanvasPanel* TipsContainer; // 0x3b8(0x08)
	struct UClass* WeakBroadcastHdViewClass; // 0x3c0(0x08)
	int32_t WeakBroadcastHDViewInterval; // 0x3c8(0x04)
	float MoveTime; // 0x3cc(0x04)
	struct FRuntimeFloatCurve MoveCurve; // 0x3d0(0xa0)
	float Vertical_Offset; // 0x470(0x04)
	int32_t MaxShowNum; // 0x474(0x04)

	void OnShowPCBattleReportWeakTips(struct FBattleFieldBroadcastTipInfo& InTipInfo); // Function Breakthrough.BreakthroughTipsWeakBroadcastHDPanel.OnShowPCBattleReportWeakTips // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTopTimeCountDownView
// Size: 0x410 (Inherited: 0x388)
class UBreakthroughTopTimeCountDownView : public UBaseUIView {
public:

	char pad_388[0x18]; // 0x388(0x18)
	struct AGameState_Breakthrough* Cache_GameState_Breakthrough; // 0x3a0(0x08)
	struct UWidgetAnimation* DelayNeedPlayAnim; // 0x3a8(0x08)
	struct UWidgetAnimation* DelayPlayingAnim; // 0x3b0(0x08)
	struct UDFTextBlock* MinuteAndSecond; // 0x3b8(0x08)
	struct UDFTextBlock* Millisecond; // 0x3c0(0x08)
	struct UDFRadialImage* DFRadialImage; // 0x3c8(0x08)
	struct UDFRadialImage* DFRadialImage_2; // 0x3d0(0x08)
	struct UDFRadialImage* DFRadialImage_181; // 0x3d8(0x08)
	struct UWidgetAnimation* LoopAnim; // 0x3e0(0x08)
	struct UWidgetAnimation* WBP_Breakthrough_BattleReport_Time_in; // 0x3e8(0x08)
	struct UWidgetAnimation* WBP_Breakthrough_BattleReport_Time_retard01; // 0x3f0(0x08)
	struct UWidgetAnimation* WBP_Breakthrough_BattleReport_Time_retard02; // 0x3f8(0x08)
	struct UWidgetAnimation* WBP_Breakthrough_BattleReport_Time_suspend; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)

	void StopUIAudio(struct FName AudioName); // Function Breakthrough.BreakthroughTopTimeCountDownView.StopUIAudio // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTransferMarkerItem
// Size: 0x520 (Inherited: 0x440)
class UBreakthroughTransferMarkerItem : public UGPTransferMarkerItem {
public:

	char pad_440[0x38]; // 0x440(0x38)
	struct TMap<enum class EDFMGamePlayMode, struct FTransferMarkerUpdateConfig> TransferMarkerRuleConfigMap; // 0x478(0x50)
	struct TMap<enum class EBreakthroughUIIconType, struct FText> TransferTypeTextMap; // 0x4c8(0x50)
	char pad_518[0x8]; // 0x518(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTransferMarkerWidget
// Size: 0x5b0 (Inherited: 0x588)
class UBreakthroughTransferMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct AActor* OwnerActor; // 0x588(0x08)
	char pad_590[0x8]; // 0x590(0x08)
	struct UImage* MarkerImage; // 0x598(0x08)
	struct UCanvasPanel* ArrowRotation; // 0x5a0(0x08)
	struct UTextBlock* MarkerTypeText; // 0x5a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTransitionGuidance
// Size: 0x3d8 (Inherited: 0x388)
class UBreakthroughTransitionGuidance : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct UTextBlock* HintText; // 0x398(0x08)
	struct UImage* ArrowImage; // 0x3a0(0x08)
	struct UTextBlock* countdown; // 0x3a8(0x08)
	struct UWidgetAnimation* NumbAnim; // 0x3b0(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_in; // 0x3b8(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_loop; // 0x3c0(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_out; // 0x3c8(0x08)
	float GuideRefreshFrequency; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTweenSelectPoint
// Size: 0xb8 (Inherited: 0x50)
class UBreakthroughTweenSelectPoint : public UGPTweenBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFirst[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdate[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnComplete[0x10]; // 0x70(0x10)
	char pad_80[0x38]; // 0x80(0x38)

	struct UBreakthroughTweenSelectPoint* STATIC_MakeSelectPoint(struct FString TweenName, float DurTime, struct FBreakthroughRedeploySelectPointTweenData Start, struct FBreakthroughRedeploySelectPointTweenData End, enum class EaseType EaseType, bool IsLoop); // Function Breakthrough.BreakthroughTweenSelectPoint.MakeSelectPoint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughUtil
// Size: 0x30 (Inherited: 0x30)
class UBreakthroughUtil : public UObject {
public:


	struct FString STATIC_ShortenNonSpecialString(struct FString InStr, int32_t maxLen); // Function Breakthrough.BreakthroughUtil.ShortenNonSpecialString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BTDQ_IsBreakthroughCurStage
// Size: 0x78 (Inherited: 0x70)
class UBTDQ_IsBreakthroughCurStage : public UDFMAIDecorator_SimpleDecoratorBase {
public:

	enum class EBreakthroughStage CheckStage; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BTDQ_IsTooMuchFindPathFailure
// Size: 0x70 (Inherited: 0x70)
class UBTDQ_IsTooMuchFindPathFailure : public UDFMAIDecorator_SimpleDecoratorBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BTDQ_IsNewAiJob
// Size: 0x98 (Inherited: 0x70)
class UBTDQ_IsNewAiJob : public UDFMAIDecorator_SimpleDecoratorBase {
public:

	struct FBlackboardKeySelector BBAIJobKey; // 0x70(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BTDQ_HasNewThreatCanMark
// Size: 0x98 (Inherited: 0x70)
class UBTDQ_HasNewThreatCanMark : public UDFMAIDecorator_SimpleDecoratorBase {
public:

	struct FBlackboardKeySelector BBMarkActor; // 0x70(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.CampSectorOwnerSceneActor
// Size: 0x388 (Inherited: 0x378)
class ACampSectorOwnerSceneActor : public AActor {
public:

	struct USceneComponent* SceneComponent; // 0x378(0x08)
	struct ABattleCampSector* OwnerCampSector; // 0x380(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.CommonPopWindowV2LuaBaseWidget
// Size: 0x568 (Inherited: 0x550)
class UCommonPopWindowV2LuaBaseWidget : public ULuaUIBaseView {
public:

	char pad_550[0x10]; // 0x550(0x10)
	bool bCppOverrideLuaClose; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)

	void OnLuaHudClose(); // Function Breakthrough.CommonPopWindowV2LuaBaseWidget.OnLuaHudClose // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ConquestTopBarItemView
// Size: 0x2f0 (Inherited: 0x298)
class UConquestTopBarItemView : public UUserWidget {
public:

	struct UImage* LineImage; // 0x298(0x08)
	struct UDFImage* LineImage_2; // 0x2a0(0x08)
	struct UHorizontalBox* TopBarHorizontalBox; // 0x2a8(0x08)
	struct UBreakthroughSectorAnchorProgress* SectorOccupypoint_Left; // 0x2b0(0x08)
	struct UBreakthroughSectorAnchorProgress* SectorOccupypoint_Mid; // 0x2b8(0x08)
	struct UBreakthroughSectorAnchorProgress* SectorOccupypoint_Right; // 0x2c0(0x08)
	struct UDFImage* BackImage; // 0x2c8(0x08)
	struct UWidgetAnimation* Anima_in; // 0x2d0(0x08)
	char pad_2D8[0x18]; // 0x2d8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ConquestTopBarView
// Size: 0x450 (Inherited: 0x388)
class UConquestTopBarView : public UBaseUIView {
public:

	struct TArray<struct UConquestTopBarItemView*> TopBarItemViewsArray; // 0x388(0x10)
	char pad_398[0x48]; // 0x398(0x48)
	struct UBattleFieldTopBarTextWidget* TopBarTextWidget_Left; // 0x3e0(0x08)
	struct UBattleFieldTopBarTextWidget* TopBarTextWidget_Right; // 0x3e8(0x08)
	struct UDFRadialImage* TopBarRadialImage_Left; // 0x3f0(0x08)
	struct UDFRadialImage* TopBarRadialImageFX_Left; // 0x3f8(0x08)
	struct UDFRadialImage* TopBarRadialImage_Right; // 0x400(0x08)
	struct UDFRadialImage* TopBarRadialImageFX_Right; // 0x408(0x08)
	struct UDFImage* TopBarIcon_Left; // 0x410(0x08)
	struct UDFImage* TopBarIcon_Right; // 0x418(0x08)
	struct UDFHorizontalBox* SectorItemHorizontalBox; // 0x420(0x08)
	struct UDFButton* TopBarButton; // 0x428(0x08)
	struct UWidgetAnimation* Anima_breath_green; // 0x430(0x08)
	struct UWidgetAnimation* Anima_breath_red; // 0x438(0x08)
	struct UClass* ConquestTopBarItemViewClass; // 0x440(0x08)
	float ClientNearlyWinPercent; // 0x448(0x04)
	float NearlyWinAnimationCD; // 0x44c(0x04)

	void OnTopBarButtonClicked(); // Function Breakthrough.ConquestTopBarView.OnTopBarButtonClicked // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.DamageEventTriggerVolume
// Size: 0x468 (Inherited: 0x3b0)
class ADamageEventTriggerVolume : public AVolume {
public:

	int32_t EventTriggerTimes; // 0x3b0(0x04)
	float EventDelayTime; // 0x3b4(0x04)
	float EventDuration; // 0x3b8(0x04)
	int32_t IsAfterBigEventForceRebornOuter; // 0x3bc(0x04)
	struct TArray<uint64_t> LegaAttackerValueIds; // 0x3c0(0x10)
	struct ABattleSectorAnchor* CoorAnchor; // 0x3d0(0x08)
	struct FSoftObjectPath CoorSequencePath; // 0x3d8(0x18)
	struct FSoftObjectPath CoorSequencePathMobile; // 0x3f0(0x18)
	/*struct TArray<struct TSoftObjectPtr<ABreakableItemBase>>*/char BreakableItems1[0x10]; // 0x408(0x10)
	/*struct TArray<struct TSoftObjectPtr<ABreakableItemBase>>*/char BreakableItems2[0x10]; // 0x418(0x10)
	/*struct TArray<struct TSoftObjectPtr<ABreakableItemBase>>*/char BreakableItems3[0x10]; // 0x428(0x10)
	struct ADamageEventVolume* DamageVolume; // 0x438(0x08)
	struct AGPSequenceActor* LevelSequenceActor; // 0x440(0x08)
	char pad_448[0x18]; // 0x448(0x18)
	bool bIsLevelsLoaded; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)

	void SendBreakthroughBigEventInfoFlow(); // Function Breakthrough.DamageEventTriggerVolume.SendBreakthroughBigEventInfoFlow // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.DamageEventVolume
// Size: 0x440 (Inherited: 0x380)
class ADamageEventVolume : public ATriggerSphere {
public:

	struct TMap<float, float> DistanceToDamageMap; // 0x380(0x50)
	float CreatedDestroyDistance; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct FName> ScreenEffectIds; // 0x3d8(0x10)
	struct TArray<struct FName> ScreenEffectIdsWithRotation; // 0x3e8(0x10)
	char pad_3F8[0x40]; // 0x3f8(0x40)
	struct USphereComponent* SphereComponent; // 0x438(0x08)

	void OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Breakthrough.DamageEventVolume.OnVolumeEndOverlap // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.DFFortificationView
// Size: 0x3c0 (Inherited: 0x388)
class UDFFortificationView : public UBaseUIView {
public:

	struct UWidget* RadialBg; // 0x388(0x08)
	struct FName RadialBgName; // 0x390(0x08)
	struct UDFRadialImage* RadialImage; // 0x398(0x08)
	struct FName RadialImageName; // 0x3a0(0x08)
	struct AFortificationProxy* CachedFortificationProxy; // 0x3a8(0x08)
	struct UFortificationBuildComponent* CachedBuildComponent; // 0x3b0(0x08)
	char pad_3B8[0x8]; // 0x3b8(0x08)

	void OnPercentChanged(struct AActor* inActor, float InCurPer, bool InbIs1P); // Function Breakthrough.DFFortificationView.OnPercentChanged // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.EnvQueryTest_BattleSectorCheck
// Size: 0x210 (Inherited: 0x200)
class UEnvQueryTest_BattleSectorCheck : public UEnvQueryTest {
public:

	struct UClass* InputActorContext; // 0x200(0x08)
	bool bDrawDebug; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.EnvQueryTest_InCampSector
// Size: 0x200 (Inherited: 0x200)
class UEnvQueryTest_InCampSector : public UEnvQueryTest {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ForbiddenArea
// Size: 0x400 (Inherited: 0x378)
class AForbiddenArea : public AActor {
public:

	struct USceneComponent* SceneComponent; // 0x378(0x08)
	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x380(0x08)
	float DetectHeight; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char InnerCharacters[0x50]; // 0x390(0x50)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct TArray<enum class EAnimVehicleType> VehicleTypes; // 0x3e8(0x10)
	bool bNeedCheckAI; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	int32_t CampOfForbiddenEnter; // 0x3fc(0x04)

	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Breakthrough.ForbiddenArea.OnOverlapEnd // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.FortificationBuildComponent
// Size: 0x168 (Inherited: 0x100)
class UFortificationBuildComponent : public UActorComponent {
public:

	struct TArray<struct AFortificationProxy*> FilterBuildDisFortificationProxies; // 0x100(0x10)
	struct TArray<struct AFortificationProxy*> FilterAimedBoxFortificationProxies; // 0x110(0x10)
	struct AGPCharacter* CachedGPCharacter; // 0x120(0x08)
	char pad_128[0x18]; // 0x128(0x18)
	struct AFortificationProxy* CurrentCanBuildingFortificationProxy; // 0x140(0x08)
	struct AFortificationProxy* LastCanBuildingFortificationProxy; // 0x148(0x08)
	char pad_150[0x4]; // 0x150(0x04)
	float TickInterval_HD; // 0x154(0x04)
	float TickInterval_Mobile; // 0x158(0x04)
	char pad_15C[0xc]; // 0x15c(0x0c)

	void ServerSwitchToCanBuildWeapon(); // Function Breakthrough.FortificationBuildComponent.ServerSwitchToCanBuildWeapon // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.FortificationProxy
// Size: 0x488 (Inherited: 0x378)
class AFortificationProxy : public AActor {
public:

	enum class EFortificationType FortificationType; // 0x378(0x01)
	enum class EFortificationBuildWeapon BuildWeaponType; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct USceneComponent* CachedInteractPoint; // 0x380(0x08)
	struct FName CachedInteractPointName; // 0x388(0x08)
	float CachedBuildPercent; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	/*struct TSoftClassPtr<UObject>*/char FortificationClassPath[0x28]; // 0x398(0x28)
	struct FName CachedFixedWeaponTag; // 0x3c0(0x08)
	struct ADFFixedWeaponPawn* CachedFixedWeapon; // 0x3c8(0x08)
	struct FName CachedBreakableItemTag; // 0x3d0(0x08)
	struct ABreakableItem* CachedBreakableItem; // 0x3d8(0x08)
	struct UBoxComponent* CachedBox; // 0x3e0(0x08)
	bool bCustomHide; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float ShowBuildRadius; // 0x3ec(0x04)
	int32_t NeedBuildTimes; // 0x3f0(0x04)
	int32_t EngineerNeedBuildTimes; // 0x3f4(0x04)
	float BuildAnimDuration; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<struct FBox> CachedBoxes; // 0x400(0x10)
	struct TArray<struct UMeshComponent*> CachedAimedMeshComponents; // 0x410(0x10)
	struct UStaticMeshComponent* CachedMesh1; // 0x420(0x08)
	struct FName CachedMesh1Name; // 0x428(0x08)
	struct UStaticMeshComponent* CachedMesh2; // 0x430(0x08)
	struct FName CachedMesh2Name; // 0x438(0x08)
	struct UStaticMeshComponent* CachedMesh3; // 0x440(0x08)
	struct FName CachedMesh3Name; // 0x448(0x08)
	float CachedMesh1Alpha0; // 0x450(0x04)
	float CachedMesh1Alpha1; // 0x454(0x04)
	float CachedMesh1Intensity0; // 0x458(0x04)
	float CachedMesh1Intensity1; // 0x45c(0x04)
	float CachedMesh2Alpha0; // 0x460(0x04)
	float CachedMesh2Alpha1; // 0x464(0x04)
	float CachedMesh2Intensity0; // 0x468(0x04)
	float CachedMesh2Intensity1; // 0x46c(0x04)
	float CachedMesh2TexIntensity0; // 0x470(0x04)
	float CachedMesh2TexIntensity1; // 0x474(0x04)
	float CachedMesh1DisAlpha0; // 0x478(0x04)
	float CachedMesh1DisAlpha1; // 0x47c(0x04)
	float CachedMesh1DisMin; // 0x480(0x04)
	float CachedMesh1DisMax; // 0x484(0x04)

	void OnRep_CachedBuildPercent(float InPrePer); // Function Breakthrough.FortificationProxy.OnRep_CachedBuildPercent // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.FortificationSystem
// Size: 0x1c8 (Inherited: 0x100)
class UFortificationSystem : public UActorComponent {
public:

	struct TArray<struct AFortificationProxy*> FortificationProxyArray; // 0x100(0x10)
	/*struct TArray<struct TSoftClassPtr<UObject>>*/char FortificationClassPathArray[0x10]; // 0x110(0x10)
	struct TMap<struct FSoftObjectPath, struct UClass*> FortificationClassMap; // 0x120(0x50)
	char pad_170[0x9]; // 0x170(0x09)
	enum class EInGameBattleClassType GunnerClassType; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	float BuildOnceExtraPercent; // 0x17c(0x04)
	struct TArray<uint64_t> CanBuildWeaponIDArray; // 0x180(0x10)
	uint64_t CachedHammerWeaponID; // 0x190(0x08)
	struct TArray<uint64_t> BuildWeaponIDArray; // 0x198(0x10)
	uint64_t CachedGunnerCanBuildWeaponID; // 0x1a8(0x08)
	uint64_t CachedNotGunnerCanBuildWeaponID; // 0x1b0(0x08)
	int32_t CachedGunnerCanBuildSkillID; // 0x1b8(0x04)
	int32_t CachedNotGunnerCanBuildSkillID; // 0x1bc(0x04)
	enum class ECollisionChannel CheckCollisionChannel; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)

	void OnFortificationClassArrayLoaded(struct TArray<struct FSoftObjectPath> AssetRefArray); // Function Breakthrough.FortificationSystem.OnFortificationClassArrayLoaded // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.GameMode_Breakthrough
// Size: 0xae0 (Inherited: 0x7c0)
class AGameMode_Breakthrough : public ADFMGameMode {
public:

	float MinMatchDuration; // 0x7c0(0x04)
	float MinMatchDurationSlowDownRatio; // 0x7c4(0x04)
	float MinMatchPauseDuration; // 0x7c8(0x04)
	char pad_7CC[0x4]; // 0x7cc(0x04)
	struct AGameState_Breakthrough* GameState_Breakthrough; // 0x7d0(0x08)
	struct UDFMRebornComponent* RebornComponent; // 0x7d8(0x08)
	float BoatSpeed; // 0x7e0(0x04)
	float BoatSpeedDuration; // 0x7e4(0x04)
	int32_t OneSideCountLimit; // 0x7e8(0x04)
	enum class ERedeployStateFuture KillSelfRedployStateFuture; // 0x7ec(0x04)
	int32_t RebornTime; // 0x7f0(0x04)
	char pad_7F4[0x44]; // 0x7f4(0x44)
	struct FTimerHandle WaitingForPlayersTimerHandle; // 0x838(0x08)
	float WaitingForPlayersStartTime; // 0x840(0x04)
	char pad_844[0x14]; // 0x844(0x14)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char PilotCharacters[0x50]; // 0x858(0x50)
	char pad_8A8[0x238]; // 0x8a8(0x238)

	void WaitAllPlayerLoadingFinished(); // Function Breakthrough.GameMode_Breakthrough.WaitAllPlayerLoadingFinished // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.GameMode_Conquest
// Size: 0xad0 (Inherited: 0x7c0)
class AGameMode_Conquest : public ADFMGameMode {
public:

	float MinMatchDuration; // 0x7c0(0x04)
	char pad_7C4[0x4]; // 0x7c4(0x04)
	struct AGameState_Breakthrough* GameState_Breakthrough; // 0x7c8(0x08)
	struct UDFMRebornComponent* RebornComponent; // 0x7d0(0x08)
	struct TMap<enum class EEstimateName, struct FEstimateNameScore> EstimateNames; // 0x7d8(0x50)
	float EstimateOffest; // 0x828(0x04)
	int32_t OneSideCountLimit; // 0x82c(0x04)
	enum class ERedeployStateFuture KillSelfRedployStateFuture; // 0x830(0x04)
	char pad_834[0x4]; // 0x834(0x04)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char PilotCharacters[0x50]; // 0x838(0x50)
	int32_t RebornTime; // 0x888(0x04)
	char pad_88C[0x134]; // 0x88c(0x134)
	struct FTimerHandle WaitingForPlayersTimerHandle; // 0x9c0(0x08)
	float WaitingForPlayersStartTime; // 0x9c8(0x04)
	char pad_9CC[0x104]; // 0x9cc(0x104)

	void WaitAllPlayerLoadingFinished(); // Function Breakthrough.GameMode_Conquest.WaitAllPlayerLoadingFinished // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.VehicleSpawnerArray
// Size: 0x40 (Inherited: 0x30)
class UVehicleSpawnerArray : public UObject {
public:

	struct TArray<struct AVehicleSpawner*> Data; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.DeployVehicleStatus
// Size: 0x50 (Inherited: 0x30)
class UDeployVehicleStatus : public UObject {
public:

	struct TArray<struct AVehicleSpawner*> VehicleSpawners; // 0x30(0x10)
	int32_t avaliableCount; // 0x40(0x04)
	int32_t spawnedAliveCount; // 0x44(0x04)
	float CDProgress; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	void UpdateStatus(); // Function Breakthrough.DeployVehicleStatus.UpdateStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.GameState_Breakthrough
// Size: 0x1b10 (Inherited: 0xa38)
class AGameState_Breakthrough : public ADFMGameState {
public:

	struct FName MapID; // 0xa38(0x08)
	struct TArray<int32_t> CampKillList; // 0xa40(0x10)
	struct TArray<int32_t> CampIdList; // 0xa50(0x10)
	struct TArray<uint64_t> PlayerIDsInGame; // 0xa60(0x10)
	enum class EBreakthroughStage CurStage; // 0xa70(0x01)
	char pad_A71[0x3]; // 0xa71(0x03)
	int32_t PlayerNumInLoading; // 0xa74(0x04)
	float LeftTime; // 0xa78(0x04)
	float SectorBattleTime; // 0xa7c(0x04)
	float SectorTransTime; // 0xa80(0x04)
	float SectorKillTime; // 0xa84(0x04)
	struct TArray<struct ABattleSectorBase*> BattleSectorArray; // 0xa88(0x10)
	struct TArray<struct ABattleCampSector*> Camp0SectorArray; // 0xa98(0x10)
	struct TArray<struct ABattleCampSector*> Camp1SectorArray; // 0xaa8(0x10)
	int32_t ActivatingSector; // 0xab8(0x04)
	int32_t ActivatedSector; // 0xabc(0x04)
	int32_t AddVotesX; // 0xac0(0x04)
	char pad_AC4[0x4]; // 0xac4(0x04)
	bool CanFightBack; // 0xac8(0x01)
	char pad_AC9[0x7]; // 0xac9(0x07)
	int32_t TransitionBeginTime; // 0xad0(0x04)
	int32_t RealTransitionEndTime; // 0xad4(0x04)
	bool IsTransitioning; // 0xad8(0x01)
	char pad_AD9[0x3]; // 0xad9(0x03)
	uint32_t MaxVoteNum; // 0xadc(0x04)
	uint32_t LowVoteNum; // 0xae0(0x04)
	uint32_t LeftVotes; // 0xae4(0x04)
	int32_t WinScore; // 0xae8(0x04)
	float ServerCamp1Score; // 0xaec(0x04)
	float ServerCamp0Score; // 0xaf0(0x04)
	int32_t ClientCamp0Score; // 0xaf4(0x04)
	int32_t ClientCamp1Score; // 0xaf8(0x04)
	int32_t ClientDeltaCampScore; // 0xafc(0x04)
	char pad_B00[0x14]; // 0xb00(0x14)
	float BaseScoreSpeed; // 0xb14(0x04)
	struct UCurveFloat* SectorSpeedCurve; // 0xb18(0x08)
	float SectorScoreSpeed; // 0xb20(0x04)
	float LandslideScoreSpeed; // 0xb24(0x04)
	float LandslidePreTime; // 0xb28(0x04)
	int32_t LandslideCamp; // 0xb2c(0x04)
	int32_t OccupiedScore; // 0xb30(0x04)
	float ConquestMatchDuration; // 0xb34(0x04)
	int32_t KillBonus; // 0xb38(0x04)
	float Camp0CurScoreSpeed; // 0xb3c(0x04)
	float Camp1CurScoreSpeed; // 0xb40(0x04)
	char pad_B44[0xc]; // 0xb44(0x0c)
	/*struct FMulticastInlineDelegate*/char ShowScoreInfo[0x10]; // 0xb50(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientCamp0Score[0x10]; // 0xb60(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientCamp1Score[0x10]; // 0xb70(0x10)
	char pad_B80[0x150]; // 0xb80(0x150)
	struct TArray<struct FPlayerStatItem> PlayerStatistics; // 0xcd0(0x10)
	struct TArray<struct FPlayerStatItem> PlayerStatisticsSorted; // 0xce0(0x10)
	struct TArray<struct FPlayerMiscStatItem> PlayerMiscStatistics; // 0xcf0(0x10)
	char pad_D00[0x8]; // 0xd00(0x08)
	struct TArray<struct FPlayerVehicleExp> PlayerVehicleExps; // 0xd08(0x10)
	char pad_D18[0x158]; // 0xd18(0x158)
	int32_t LowVotesValue; // 0xe70(0x04)
	float PlayAudioLeftVotes; // 0xe74(0x04)
	float PlayAudioLeftTime; // 0xe78(0x04)
	float ConfigWaitingForPlayersTime; // 0xe7c(0x04)
	float ConfigWaitingForPlayersTimeMutate; // 0xe80(0x04)
	float ConfigWaitingForPlayersTimerTickInterval; // 0xe84(0x04)
	float ConfigLoadingMutateThreshold; // 0xe88(0x04)
	float WaitingForPlayersLeftTime; // 0xe8c(0x04)
	float RealPlayerCount; // 0xe90(0x04)
	float FinishLoadPlayerCount; // 0xe94(0x04)
	bool ForcePreMatch; // 0xe98(0x01)
	char pad_E99[0x3]; // 0xe99(0x03)
	float PreMatchDuration; // 0xe9c(0x04)
	float ChooseArmDuration; // 0xea0(0x04)
	float ChooseArmStartTime; // 0xea4(0x04)
	float FirstDeployDuration; // 0xea8(0x04)
	float CutsceneDur; // 0xeac(0x04)
	float FirstDeployStartTime; // 0xeb0(0x04)
	char pad_EB4[0x4]; // 0xeb4(0x04)
	struct FString PreMatchLevelName; // 0xeb8(0x10)
	float MarkDefenderDelayTime; // 0xec8(0x04)
	char pad_ECC[0x4]; // 0xecc(0x04)
	struct UBreakthroughNotifySubSystem* BreakthroughNotifySubSystem; // 0xed0(0x08)
	struct UBreakthroughNotifyReceiveComponent* BreakthroughNotifyReceiveComponent; // 0xed8(0x08)
	float PilotVerifyTime; // 0xee0(0x04)
	char pad_EE4[0x4]; // 0xee4(0x04)
	/*struct FMulticastInlineDelegate*/char OnBattleSectorArrayChanged[0x10]; // 0xee8(0x10)
	char pad_EF8[0x120]; // 0xef8(0x120)
	/*struct FMulticastInlineDelegate*/char onCurStage[0x10]; // 0x1018(0x10)
	/*struct FMulticastInlineDelegate*/char onPlayerNumInLoading[0x10]; // 0x1028(0x10)
	/*struct FMulticastInlineDelegate*/char onPlayerIDsInGameChanged[0x10]; // 0x1038(0x10)
	/*struct FMulticastInlineDelegate*/char OnServerLeftVotes[0x10]; // 0x1048(0x10)
	/*struct FMulticastInlineDelegate*/char OnCampKillNumChanged[0x10]; // 0x1058(0x10)
	/*struct FMulticastInlineDelegate*/char onClientLeftVotes[0x10]; // 0x1068(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientRealTransEnd[0x10]; // 0x1078(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientIsTransitioning[0x10]; // 0x1088(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientOnSectorActived[0x10]; // 0x1098(0x10)
	/*struct FMulticastInlineDelegate*/char onClientOnPlayerBeKilled[0x10]; // 0x10a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReceiveMaxBattleDurationChanged[0x10]; // 0x10b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReceiveMulticastOccupyStatusChanged[0x10]; // 0x10c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRspSectorAnchorOwnerCampChanged[0x10]; // 0x10d8(0x10)
	int32_t MaxBattleDuration; // 0x10e8(0x04)
	struct FVector SpawnSmokePos; // 0x10ec(0x0c)
	int32_t MakerCampId; // 0x10f8(0x04)
	char pad_10FC[0x4]; // 0x10fc(0x04)
	struct AActor* SmokeSpawned; // 0x1100(0x08)
	struct TArray<struct AFXProxyActor*> SmokeFXs; // 0x1108(0x10)
	struct TArray<struct FTimerHandle> SmokeTimerHandles; // 0x1118(0x10)
	struct FName TeamFXResourceID; // 0x1128(0x08)
	struct FName EnemyFXResourceID; // 0x1130(0x08)
	float SmokeFXShowTime; // 0x1138(0x04)
	bool bInFightBack; // 0x113c(0x01)
	char pad_113D[0x3]; // 0x113d(0x03)
	int32_t InFightBackStage; // 0x1140(0x04)
	bool isCloseCutscene; // 0x1144(0x01)
	bool isClosePreMatch; // 0x1145(0x01)
	bool isClosePreMatchChooseArm; // 0x1146(0x01)
	char pad_1147[0x1]; // 0x1147(0x01)
	int32_t SpeedUpOccupyMultipy; // 0x1148(0x04)
	char pad_114C[0x64]; // 0x114c(0x64)
	struct TArray<struct FPlayerKillAssistInfo> PlayerKillAssistInfos; // 0x11b0(0x10)
	bool bIsScriptBureau; // 0x11c0(0x01)
	bool bIsHumanMachineMatch; // 0x11c1(0x01)
	char pad_11C2[0x30e]; // 0x11c2(0x30e)
	struct UBreakthroughDataComponent* BreakthroughDataComponent; // 0x14d0(0x08)
	float InitNewPlayerGodTime; // 0x14d8(0x04)
	char pad_14DC[0x4]; // 0x14dc(0x04)
	/*struct TSet<uint64_t>*/char KilledPlayerCharaterUin[0x50]; // 0x14e0(0x50)
	char pad_1530[0xc]; // 0x1530(0x0c)
	float LastSectorCostVoteScore; // 0x153c(0x04)
	float LeftVotesPercentScore; // 0x1540(0x04)
	float CurCostVoteScore; // 0x1544(0x04)
	float ResourceDiffPercentScore; // 0x1548(0x04)
	float SectorScoreSpeedScore; // 0x154c(0x04)
	float LeadingCampResourcesScore; // 0x1550(0x04)
	float BalanceScore; // 0x1554(0x04)
	float Camp0RebornCDFactor; // 0x1558(0x04)
	float Camp1RebornCDFactor; // 0x155c(0x04)
	char pad_1560[0x1c]; // 0x1560(0x1c)
	float DelayKickDuration; // 0x157c(0x04)
	float TotalDelayKickDuration; // 0x1580(0x04)
	struct FName Tow3ShowSectorId; // 0x1584(0x08)
	int32_t Tow3ShowLeftVotes; // 0x158c(0x04)
	float Tow3ShowRemainTime; // 0x1590(0x04)
	char pad_1594[0x54]; // 0x1594(0x54)
	int64_t BreakthroughWeatherId; // 0x15e8(0x08)
	struct TMap<struct ADFMPlayerController*, struct ADFMVehicleBase*> FirstDeployControllerLockVehicleMap; // 0x15f0(0x50)
	struct TArray<struct FRankSkillData> RankSkillDatas; // 0x1640(0x10)
	struct TArray<struct FVehicleNumInfo> AttackerVehicleNumInfos; // 0x1650(0x10)
	struct TArray<struct FVehicleNumInfo> DefenderVehicleNumInfos; // 0x1660(0x10)
	struct UBattleFieldDeduceComponent* BattleFieldDeduceComponent; // 0x1670(0x08)
	float GuideRefreshFrequency; // 0x1678(0x04)
	char pad_167C[0x4]; // 0x167c(0x04)
	struct TMap<uint64_t, int32_t> BattleSupportSkillConfig; // 0x1680(0x50)
	char pad_16D0[0x10]; // 0x16d0(0x10)
	struct TArray<struct AForbiddenArea*> ForbiddenAreas; // 0x16e0(0x10)
	char pad_16F0[0x10]; // 0x16f0(0x10)
	struct UFortificationSystem* FortificationSystemComponent; // 0x1700(0x08)
	struct TArray<struct FString> DSErrorCodeStrList; // 0x1708(0x10)
	struct FTimerHandle ScheduledBroadCastDSErrorTimerHandle; // 0x1718(0x08)
	float ScheduledBroadCastDSErrorInterval; // 0x1720(0x04)
	char pad_1724[0x4]; // 0x1724(0x04)
	struct TArray<enum class EBattleFieldForcesType> ForcesTypeArray; // 0x1728(0x10)
	char pad_1738[0x2d8]; // 0x1738(0x2d8)
	struct UCurveFloat* LastSectorCostCurve; // 0x1a10(0x08)
	struct UCurveFloat* LeftVotesPercentCurve; // 0x1a18(0x08)
	struct UCurveFloat* CurCostVoteCurve; // 0x1a20(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ConquestCurve1[0x28]; // 0x1a28(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ConquestCurve2[0x28]; // 0x1a50(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ConquestCurve3[0x28]; // 0x1a78(0x28)
	struct UCurveFloat* Camp0TeamRebornCurve; // 0x1aa0(0x08)
	struct UCurveFloat* Camp1TeamRebornCurve; // 0x1aa8(0x08)
	struct UCurveFloat* Camp0RebornCDCurve; // 0x1ab0(0x08)
	struct UCurveFloat* Camp1RebornCDCurve; // 0x1ab8(0x08)
	struct UCurveFloat* Camp0OcuupySpeedCurve; // 0x1ac0(0x08)
	struct UCurveFloat* Camp1OcuupySpeedCurve; // 0x1ac8(0x08)
	struct UCurveFloat* Camp0FightBackOcuupyStatusSpeedCurve; // 0x1ad0(0x08)
	struct UCurveFloat* Camp1FightBackOcuupyStatusSpeedCurve; // 0x1ad8(0x08)
	struct UCurveFloat* Camp0OcuupyNumCurve; // 0x1ae0(0x08)
	struct UCurveFloat* Camp1OcuupyNumCurve; // 0x1ae8(0x08)
	struct UCurveFloat* Camp0OcuupyStatusSpeedCurve; // 0x1af0(0x08)
	struct UCurveFloat* Camp1OcuupyStatusSpeedCurve; // 0x1af8(0x08)
	char pad_1B00[0x10]; // 0x1b00(0x10)

	void UpdatePlayerStatsQuitMatch(uint64_t InPlayerUin, bool bIsQuitMatch); // Function Breakthrough.GameState_Breakthrough.UpdatePlayerStatsQuitMatch // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.GlitchVolume
// Size: 0x3d0 (Inherited: 0x378)
class AGlitchVolume : public AActor {
public:

	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x378(0x08)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char InnerCharacters[0x50]; // 0x380(0x50)

	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Breakthrough.GlitchVolume.OnOverlapEnd // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.GPKismetBreakthrough
// Size: 0x30 (Inherited: 0x30)
class UGPKismetBreakthrough : public UBlueprintFunctionLibrary {
public:


	void STATIC_ShowFadeIn(struct UObject* WorldContextObject, struct FFadeInfo InFadeInfo); // Function Breakthrough.GPKismetBreakthrough.ShowFadeIn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.HudItemTemplateView
// Size: 0x9b8 (Inherited: 0x300)
class UHudItemTemplateView : public UDFMBaseUserWidget {
public:

	struct FName SlotPanelWidgetName; // 0x300(0x08)
	struct UDFCanvasPanel* SlotPanel; // 0x308(0x08)
	struct FName IconWidgetName; // 0x310(0x08)
	struct UDFImage* ItemIcon; // 0x318(0x08)
	struct FName IconParentWidgetName; // 0x320(0x08)
	struct UWidget* IconParentWidget; // 0x328(0x08)
	struct FName ItemNameWidgetName; // 0x330(0x08)
	struct UTextBlock* ItemNameText; // 0x338(0x08)
	struct FName ItemNumWidgetName; // 0x340(0x08)
	struct UTextBlock* ItemNumText; // 0x348(0x08)
	struct FName CountDownTextWidgetName; // 0x350(0x08)
	struct UTextBlock* CountDownText; // 0x358(0x08)
	struct FName BGImageWidgetName; // 0x360(0x08)
	struct UDFImage* BgImage; // 0x368(0x08)
	struct FName ButtonWidgetName; // 0x370(0x08)
	struct UDFButton* SelectButton; // 0x378(0x08)
	struct TArray<struct FString> HideWidgetNames; // 0x380(0x10)
	struct TArray<enum class ESlotCompType> EnableSlotComps; // 0x390(0x10)
	struct TMap<enum class ESlotCompType, struct UUserWidget*> SlotCompWidgetMap; // 0x3a0(0x50)
	int32_t SlotCompZOrder; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TMap<enum class ESlotCompType, struct UClass*> USlotCompClass; // 0x3f8(0x50)
	struct FInventoryItemInfo InventoryItemInfo; // 0x448(0x538)
	char pad_980[0x30]; // 0x980(0x30)
	bool bSelected; // 0x9b0(0x01)
	char pad_9B1[0x7]; // 0x9b1(0x07)

	void ShowUsing(bool bShow); // Function Breakthrough.HudItemTemplateView.ShowUsing // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ItemDetailViewLuaBaseWidget
// Size: 0x550 (Inherited: 0x550)
class UItemDetailViewLuaBaseWidget : public ULuaUIBaseView {
public:


	void SetInventoryItemInfo(struct FInventoryItemInfo InventoryItemInfo); // Function Breakthrough.ItemDetailViewLuaBaseWidget.SetInventoryItemInfo // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.MaskEdgeActor
// Size: 0x380 (Inherited: 0x378)
class AMaskEdgeActor : public AActor {
public:

	struct USplineAreaComponent* SectorSplineAreaComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.MedalBaseWidget
// Size: 0x580 (Inherited: 0x550)
class UMedalBaseWidget : public ULuaUIBaseView {
public:

	struct UDFTextBlock* MedalNameTextBlock; // 0x550(0x08)
	struct UDFTextBlock* MedalDescTextBlock; // 0x558(0x08)
	struct UDFImage* MedalImage; // 0x560(0x08)
	struct FName MedalNameTextBlock_Name; // 0x568(0x08)
	struct FName MedalDescTextBlock_Name; // 0x570(0x08)
	struct FName MedalImage_Name; // 0x578(0x08)

	void SetMedalText(struct FText MedalName, struct FText MedalDesc); // Function Breakthrough.MedalBaseWidget.SetMedalText // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.PlayerGMComponentBreakthrough
// Size: 0x578 (Inherited: 0x570)
class UPlayerGMComponentBreakthrough : public UPlayerGMComponent {
public:

	char pad_570[0x8]; // 0x570(0x08)

	void UploadClientReady(); // Function Breakthrough.PlayerGMComponentBreakthrough.UploadClientReady // (Final|Exec|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployArmSelectedPackageItemView
// Size: 0x958 (Inherited: 0x300)
class URedeployArmSelectedPackageItemView : public UDFMBaseUserWidget {
public:

	struct FName SlotPanelWidgetName; // 0x300(0x08)
	struct UCanvasPanel* SlotPanel; // 0x308(0x08)
	struct FName IconWidgetName; // 0x310(0x08)
	struct UDFMImage* ItemIcon; // 0x318(0x08)
	struct FName IconParentWidgetName; // 0x320(0x08)
	struct UWidget* IconParentWidget; // 0x328(0x08)
	struct FName ItemNameWidgetName; // 0x330(0x08)
	struct UTextBlock* ItemNameText; // 0x338(0x08)
	struct FName LockedMaskWidgetName; // 0x340(0x08)
	struct UWidget* LockedMaskWidget; // 0x348(0x08)
	struct FName DisabledMaskWidgetName; // 0x350(0x08)
	struct UWidget* DisabledMaskWidget; // 0x358(0x08)
	struct FName DefaultDFIconWidgetName; // 0x360(0x08)
	struct UWidget* DefaultDFIconWidget; // 0x368(0x08)
	struct FName ButtonWidgetName; // 0x370(0x08)
	struct UDFButton* SelectButton; // 0x378(0x08)
	struct TMap<enum class ESlotCompType, struct UClass*> USlotCompClass; // 0x380(0x50)
	struct TArray<enum class ESlotCompType> EnableSlotComps; // 0x3d0(0x10)
	int32_t SlotCompZOrder; // 0x3e0(0x04)
	enum class EAttachPosition AttachPosition; // 0x3e4(0x04)
	struct FInventoryItemInfo InventoryItemInfo; // 0x3e8(0x538)
	struct UBreakthroughRedeployHudField* RedeployHudField; // 0x920(0x08)
	char pad_928[0x30]; // 0x928(0x30)

	void ShowLockedMask(bool bShow); // Function Breakthrough.RedeployArmSelectedPackageItemView.ShowLockedMask // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployChooseItemGroupView
// Size: 0x330 (Inherited: 0x310)
class URedeployChooseItemGroupView : public UDFMHudMvcViewBase {
public:

	struct FName HeaderTextBlockWidgetName; // 0x310(0x08)
	struct UDFTextBlock* HeaderTextBlock; // 0x318(0x08)
	struct FName WrapBoxWidgetName; // 0x320(0x08)
	struct UDFWrapBox* WrapBox; // 0x328(0x08)

	void SetHeaderText(struct FText InText); // Function Breakthrough.RedeployChooseItemGroupView.SetHeaderText // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployHotKeyView
// Size: 0x338 (Inherited: 0x310)
class URedeployHotKeyView : public UDFMHudMvcViewBase {
public:

	struct TArray<struct FString> ShowHotKeyWidgetNames; // 0x310(0x10)
	struct UPanelWidget* HotKeyPanel; // 0x320(0x08)
	struct FName HotKeyPanelWidgetName; // 0x328(0x08)
	bool bUseSelfConfig; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployMapRandomActor
// Size: 0x3d0 (Inherited: 0x378)
class ARedeployMapRandomActor : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct TArray<struct ABattleSectorAnchor*> SectorAnchors; // 0x390(0x10)
	struct TArray<struct AAnchorSpawnArea*> SpawnAreas; // 0x3a0(0x10)
	struct TArray<struct ABattleCampSector*> CampSectors; // 0x3b0(0x10)
	bool IsEnableRandomAnchorReborn; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct USceneComponent* SceneComponent; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployPointSelectEffectView
// Size: 0x310 (Inherited: 0x310)
class URedeployPointSelectEffectView : public UDFMHudMvcViewBase {
public:


	void PlayAnim_AutoIn(); // Function Breakthrough.RedeployPointSelectEffectView.PlayAnim_AutoIn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ReDeployPointsPanel
// Size: 0x610 (Inherited: 0x310)
class UReDeployPointsPanel : public UDFMHudMvcViewBase {
public:

	struct TMap<struct FString, struct UClass*> UIName2ID; // 0x310(0x50)
	struct TMap<struct FString, struct FRedeployMarkerPool> MarkerUsingPool; // 0x360(0x50)
	struct TMap<struct FString, struct FRedeployMarkerPool> MarkerNotUsePool; // 0x3b0(0x50)
	double LastTickTime; // 0x400(0x08)
	struct UWidget* FollowTranslationWidget; // 0x408(0x08)
	struct UWidget* SafeAreaTopWidget; // 0x410(0x08)
	struct URedeployMarkerBaseWidget* SelectedRedeployMarkerBaseWidget; // 0x418(0x08)
	struct UWidget* SelectedQuadWidget; // 0x420(0x08)
	struct URedeployPointSelectEffectView* SelectEffectWidget; // 0x428(0x08)
	bool SelectedQuadWidgetFollowSelectedPoint; // 0x430(0x01)
	char pad_431[0xf]; // 0x431(0x0f)
	struct FMatrix ViewProjectMatrix; // 0x440(0x40)
	char pad_480[0x10]; // 0x480(0x10)
	bool bInitMatrix; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct FTimerHandle SelectEffectTimerHandle; // 0x498(0x08)
	enum class ERedeployShowStage RedeployShowStage; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct TArray<struct FName> SectorLineWidgetNames; // 0x4a8(0x10)
	struct TArray<struct UWidget*> SectorLines; // 0x4b8(0x10)
	float FirstDeployGlobalKeepTime; // 0x4c8(0x04)
	float ReDeployGlobalKeepTime; // 0x4cc(0x04)
	float DoubleClickTimeThreshold; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UCanvasPanel* RootCanvalPanel; // 0x4d8(0x08)
	struct TMap<uint64_t, struct URedeployMarkerBaseWidget*> CreatedMarker; // 0x4e0(0x50)
	struct TMap<struct AActor*, struct URedeployMarkerBaseWidget*> CreatedLDLevelMarker; // 0x530(0x50)
	struct UReDeployPointSelectableWidget* LastFocusOnRedeployPointView; // 0x580(0x08)
	struct UBreakthroughRedeployPointSelectQuad* SelectQuad; // 0x588(0x08)
	struct FTimerHandle DelayCreateAutoSelectRedeployPointViewTimerHandle; // 0x590(0x08)
	struct FTimerHandle timerHandleAutoSelectRedeployPointView; // 0x598(0x08)
	float DelayShowSectorLineTime; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct FString VehicleWidgetName; // 0x5a8(0x10)
	struct FString CampPointWidgetName; // 0x5b8(0x10)
	struct UClass* UBreakthroughRedeployPointVehicleHubClass; // 0x5c8(0x08)
	struct TArray<struct UBreakthroughRedeployPointVehicleHub*> VehicleHubList; // 0x5d0(0x10)
	float DistanceWeightScale; // 0x5e0(0x04)
	float AngleWeightScale; // 0x5e4(0x04)
	float AngleRange; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct TArray<enum class ERedeployStateFuture> DisableClickRedeployServerCurStateList; // 0x5f0(0x10)
	struct TArray<enum class ERedeployStateFuture> EnableClickRedeployServerCurStateList; // 0x600(0x10)

	void UpdateSelectedQuadWidgetPos(float InDeltaTime); // Function Breakthrough.ReDeployPointsPanel.UpdateSelectedQuadWidgetPos // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ReDeploySectorAnchorMarker
// Size: 0x820 (Inherited: 0x7b0)
class UReDeploySectorAnchorMarker : public UDeployPointBaseWidget {
public:

	struct UTextBlock* NameInIcon; // 0x7b0(0x08)
	struct UImage* UnitIcon; // 0x7b8(0x08)
	struct UTextBlock* DistText; // 0x7c0(0x08)
	struct UImage* CaptureProgressBaseBar; // 0x7c8(0x08)
	struct UImage* CaptureProgressBar; // 0x7d0(0x08)
	struct FLinearColor Blue; // 0x7d8(0x10)
	struct FLinearColor Red; // 0x7e8(0x10)
	struct FLinearColor Neutral; // 0x7f8(0x10)
	struct ABattleSectorAnchor* CurBattleSectorAnchor; // 0x808(0x08)
	int32_t LocalPlayerCamp; // 0x810(0x04)
	bool bIsLocalCharAiming; // 0x814(0x01)
	char pad_815[0xb]; // 0x815(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployUIElementView
// Size: 0x2b0 (Inherited: 0x298)
class URedeployUIElementView : public UDFMPoolUserWidget {
public:

	struct UWidgetAnimation* Anima_AutoIn; // 0x298(0x08)
	struct UWidgetAnimation* Anima_Die; // 0x2a0(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x2a8(0x08)

	void PlayAnima_Die(); // Function Breakthrough.RedeployUIElementView.PlayAnima_Die // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.OneDeployTypeVehiclesStatus
// Size: 0x40 (Inherited: 0x30)
class UOneDeployTypeVehiclesStatus : public UObject {
public:

	struct TArray<struct UHubOneTypeVehicleStatus*> VehicleStatusList; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SceneFXTrigger
// Size: 0x390 (Inherited: 0x380)
class ASceneFXTrigger : public ATriggerSphere {
public:

	struct UClass* LensEffectEmitterClass; // 0x380(0x08)
	struct TWeakObjectPtr<struct AEmitterCameraLensEffectBase> CacheLensEffect; // 0x388(0x08)

	void OnOverlapEnd(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Breakthrough.SceneFXTrigger.OnOverlapEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ScoreboardBaseWidget
// Size: 0x720 (Inherited: 0x550)
class UScoreboardBaseWidget : public ULuaUIBaseView {
public:

	struct UDFWaterfallScrollView* MyTeamList_ScrollView; // 0x550(0x08)
	struct UDFWaterfallScrollView* EnemyTeamList_ScrollView; // 0x558(0x08)
	struct UDFVerticalBox* MyTeamList_Box; // 0x560(0x08)
	struct UDFVerticalBox* EnemyTeamList_Box; // 0x568(0x08)
	struct UClass* ScoreboardListItemTemplate; // 0x570(0x08)
	int32_t MAX_NumInBox; // 0x578(0x04)
	float ListItemHeight; // 0x57c(0x04)
	struct UScoreboardListItemBaseWidget* LocalHangUpItemTop; // 0x580(0x08)
	struct UScoreboardListItemBaseWidget* LocalHangUpItemBottom; // 0x588(0x08)
	bool bLocalCampOnLeft; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	int32_t LocalCamp; // 0x594(0x04)
	struct TArray<struct FPlayerStatItem> MyTeamStats; // 0x598(0x10)
	struct TArray<struct FPlayerStatItem> EnemyTeamStats; // 0x5a8(0x10)
	int32_t lastMyTeamNum; // 0x5b8(0x04)
	int32_t lastEnemyTeamNum; // 0x5bc(0x04)
	bool bShowReport; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct TArray<struct FPlayerStatItem> reportingPlayer; // 0x5c8(0x10)
	struct TArray<struct FPlayerStatItem> reportedPlayers; // 0x5d8(0x10)
	struct UClass* MedalWidgetClass; // 0x5e8(0x08)
	struct TMap<enum class EModalPointType, struct FMPMedalLevel> Medals; // 0x5f0(0x50)
	struct UDFImage* LeftCampIcon; // 0x640(0x08)
	struct UDFImage* RightCampIcon; // 0x648(0x08)
	struct UTextBlock* LeftCampTextBlock; // 0x650(0x08)
	struct UTextBlock* RightCampTextBlock; // 0x658(0x08)
	struct UDFWaterfallScrollView* LeftList_ScrollView; // 0x660(0x08)
	struct UDFWaterfallScrollView* RightList_ScrollView; // 0x668(0x08)
	struct UDFVerticalBox* LeftList_Box; // 0x670(0x08)
	struct UDFVerticalBox* RightList_Box; // 0x678(0x08)
	struct UScoreboardListItemBaseWidget* HangUpItem_LeftTop; // 0x680(0x08)
	struct UScoreboardListItemBaseWidget* HangUpItem_LeftBottom; // 0x688(0x08)
	struct UScoreboardListItemBaseWidget* HangUpItem_RightTop; // 0x690(0x08)
	struct UScoreboardListItemBaseWidget* HangUpItem_RightBottom; // 0x698(0x08)
	struct UVerticalBox* MedalVerticalBox; // 0x6a0(0x08)
	struct UHorizontalBox* MedalHorizontalBox; // 0x6a8(0x08)
	struct FName LeftCampIcon_Name; // 0x6b0(0x08)
	struct FName RightCampIcon_Name; // 0x6b8(0x08)
	struct FName LeftCampTextBlock_Name; // 0x6c0(0x08)
	struct FName RightCampTextBlock_Name; // 0x6c8(0x08)
	struct FName LeftList_ScrollView_Name; // 0x6d0(0x08)
	struct FName RightList_ScrollView_Name; // 0x6d8(0x08)
	struct FName LeftList_Box_Name; // 0x6e0(0x08)
	struct FName RightList_Box_Name; // 0x6e8(0x08)
	struct FName HangUpItem_LeftTop_Name; // 0x6f0(0x08)
	struct FName HangUpItem_LeftBottom_Name; // 0x6f8(0x08)
	struct FName HangUpItem_RightTop_Name; // 0x700(0x08)
	struct FName HangUpItem_RightBottom_Name; // 0x708(0x08)
	struct FName MedalVerticalBox_Name; // 0x710(0x08)
	struct FName MedalHorizontalBox_Name; // 0x718(0x08)

	void UpdateSelfHangUp(); // Function Breakthrough.ScoreboardBaseWidget.UpdateSelfHangUp // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ScoreboardHUDView
// Size: 0x430 (Inherited: 0x388)
class UScoreboardHUDView : public UBaseUIView {
public:

	int32_t MAX_ITEM_NUM; // 0x388(0x04)
	int32_t LocalCamp; // 0x38c(0x04)
	struct UScoreboardBaseWidget* ScoreboardBaseWidget; // 0x390(0x08)
	struct UButton* ScoreboardBaseWidget_CloseBckg; // 0x398(0x08)
	struct UButton* ScoreboardBaseWidget_CloseBtn; // 0x3a0(0x08)
	struct FName ScoreboardBaseWidget_Name; // 0x3a8(0x08)
	struct FName ScoreboardBaseWidget_CloseBtn_Name; // 0x3b0(0x08)
	struct FName ScoreboardBaseWidget_CloseBckg_Name; // 0x3b8(0x08)
	bool bTest; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct TMap<enum class EModalPointType, struct FMPMedalLevel> MedalInfoMap; // 0x3c8(0x50)
	float TickRefreshInterval; // 0x418(0x04)
	float LastTickRefreshTimeCount; // 0x41c(0x04)
	int32_t ScoreThrottle; // 0x420(0x04)
	float RefreshTimeInterval; // 0x424(0x04)
	int32_t LastRefreshScoreSum; // 0x428(0x04)
	float LastRefreshTime; // 0x42c(0x04)

	void TickRefresh(); // Function Breakthrough.ScoreboardHUDView.TickRefresh // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ScoreboardListItemBaseWidget
// Size: 0x630 (Inherited: 0x550)
class UScoreboardListItemBaseWidget : public ULuaUIBaseView {
public:

	float NameSizeLen_RightInterval; // 0x550(0x04)
	float NameSizeLen_ApostropheTolerance; // 0x554(0x04)
	struct FText Apostrophe; // 0x558(0x18)
	struct UDFTextBlock* TextRank; // 0x570(0x08)
	struct UDFImage* ImageArmedForceIcon; // 0x578(0x08)
	struct UDFTextBlock* TextName; // 0x580(0x08)
	struct UDFTextBlock* TextUinGM; // 0x588(0x08)
	struct UDFTextBlock* TextStatScore; // 0x590(0x08)
	struct UPlatformPaddingBox* TextStatScore_PaddingBox; // 0x598(0x08)
	struct UDFTextBlock* TextStatKill; // 0x5a0(0x08)
	struct UDFTextBlock* TextStatDeath; // 0x5a8(0x08)
	struct UDFTextBlock* TextStatAssist; // 0x5b0(0x08)
	struct UDFTextBlock* TextStatCure; // 0x5b8(0x08)
	struct UDFTextBlock* TextStatDestroyVehicle; // 0x5c0(0x08)
	struct UDFTextBlock* TextStatCap; // 0x5c8(0x08)
	struct FName TextRank_Name; // 0x5d0(0x08)
	struct FName ImageArmedForceIcon_Name; // 0x5d8(0x08)
	struct FName TextName_Name; // 0x5e0(0x08)
	struct FName TextUinGM_Name; // 0x5e8(0x08)
	struct FName TextStatScore_Name; // 0x5f0(0x08)
	struct FName TextStatScore_PaddingBox_Name; // 0x5f8(0x08)
	struct FName TextStatKill_Name; // 0x600(0x08)
	struct FName TextStatDeath_Name; // 0x608(0x08)
	struct FName TextStatAssist_Name; // 0x610(0x08)
	struct FName TextStatCure_Name; // 0x618(0x08)
	struct FName TextStatDestroyVehicle_Name; // 0x620(0x08)
	struct FName TextStatCap_Name; // 0x628(0x08)

	void SetStat(struct FPlayerStatItem InStatItem); // Function Breakthrough.ScoreboardListItemBaseWidget.SetStat // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ScreenMarkerRipple
// Size: 0x3b0 (Inherited: 0x388)
class UScreenMarkerRipple : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UImage* DFImage; // 0x390(0x08)
	struct UImage* DFImage_2; // 0x398(0x08)
	struct UImage* DFImage_3; // 0x3a0(0x08)
	struct UWidgetAnimation* Anima_Loop; // 0x3a8(0x08)

	void SetRippleColor(int32_t InCamp); // Function Breakthrough.ScreenMarkerRipple.SetRippleColor // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorAnchorCapView
// Size: 0x5f8 (Inherited: 0x550)
class USectorAnchorCapView : public ULuaUIBaseView {
public:

	struct UImage* CaptureProgressBaseBar; // 0x550(0x08)
	struct UImage* CaptureProgressBar; // 0x558(0x08)
	struct UTextBlock* NameInIcon; // 0x560(0x08)
	struct UTextBlock* FullName; // 0x568(0x08)
	struct UTextBlock* IsOccupying; // 0x570(0x08)
	struct UImage* Circle; // 0x578(0x08)
	struct FText IsOccupying_Capturing; // 0x580(0x18)
	struct FText IsOccupying_Captured; // 0x598(0x18)
	struct FLinearColor Blue; // 0x5b0(0x10)
	struct FLinearColor Red; // 0x5c0(0x10)
	struct FLinearColor Neutral; // 0x5d0(0x10)
	bool bShowAll; // 0x5e0(0x01)
	char pad_5E1[0x3]; // 0x5e1(0x03)
	float UpdateInterval; // 0x5e4(0x04)
	struct ABattleSectorAnchor* CurCapturePoint; // 0x5e8(0x08)
	struct FTimerHandle WidgetUpdateTimer; // 0x5f0(0x08)

	void OnReceiveMulticastOccupyStatusChanged(struct AActor* Actor, int32_t OccupyCampId, int32_t BetterCamp, struct FName CapturePointName); // Function Breakthrough.SectorAnchorCapView.OnReceiveMulticastOccupyStatusChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorAnchorFlag
// Size: 0x4f0 (Inherited: 0x3a8)
class ASectorAnchorFlag : public APerformingActorBase {
public:

	bool bIsFlagActive; // 0x3a8(0x01)
	char pad_3A9[0xf]; // 0x3a9(0x0f)
	struct USplineComponent* FlagSplineComponent; // 0x3b8(0x08)
	struct UStaticMeshComponent* FlagPoleSMComponent; // 0x3c0(0x08)
	struct USkeletalMeshComponent* FlagSMComponent; // 0x3c8(0x08)
	struct ABattleSectorAnchor* OwnSectorAnchor; // 0x3d0(0x08)
	struct USceneComponent* AnchorCenter; // 0x3d8(0x08)
	struct UGeneralSignificanceComponent* Significance; // 0x3e0(0x08)
	enum class ESectorAnchorFlagState CurSectorAnchorFlagState; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct TMap<enum class EFlagStlyeType, struct UMaterialInterface*> FlagMaterials_Mobile; // 0x3f0(0x50)
	struct TMap<enum class EFlagStlyeType, struct UMaterialInterface*> FlagMaterials_PC; // 0x440(0x50)
	struct TMap<enum class EFlagAudioType, struct UGPAudioEventAsset*> FlagAudioMap; // 0x490(0x50)
	char pad_4E0[0x10]; // 0x4e0(0x10)

	void UpdateFlagState(float InOccupyVal); // Function Breakthrough.SectorAnchorFlag.UpdateFlagState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorAnchorFlagAnimInstance
// Size: 0x290 (Inherited: 0x280)
class USectorAnchorFlagAnimInstance : public UAnimInstance {
public:

	float FlagValue; // 0x280(0x04)
	char pad_284[0xc]; // 0x284(0x0c)

	void SetFlagState(bool bIsFly); // Function Breakthrough.SectorAnchorFlagAnimInstance.SetFlagState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorAnchorHUDView
// Size: 0x4d8 (Inherited: 0x3f8)
class USectorAnchorHUDView : public UMapItemHUDView {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x3f8(0x08)
	struct UImage* CaptureProgressBaseBar; // 0x400(0x08)
	struct UImage* CaptureProgressBar; // 0x408(0x08)
	struct UDFImage* NameInIcon; // 0x410(0x08)
	struct UImage* CampBg; // 0x418(0x08)
	struct UButton* SelectButton; // 0x420(0x08)
	struct UDFRadialImage* DFRadialImage_Base; // 0x428(0x08)
	struct UDFRadialImage* DFRadialImage_Progress; // 0x430(0x08)
	struct FString CampFriendlyType; // 0x438(0x10)
	struct FString CampEnemyType; // 0x448(0x10)
	struct FString CampNeutralType; // 0x458(0x10)
	struct ABattleSectorAnchor* SectorAnchor; // 0x468(0x08)
	char pad_470[0x58]; // 0x470(0x58)
	struct AGameState_Breakthrough* GameState_Breakthrough; // 0x4c8(0x08)
	char pad_4D0[0x8]; // 0x4d0(0x08)

	void SetFlaggedFrameWidget(bool bShowFlaggedFrame); // Function Breakthrough.SectorAnchorHUDView.SetFlaggedFrameWidget // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorAnchorViewController
// Size: 0x2a0 (Inherited: 0x290)
class USectorAnchorViewController : public UMapIconViewController {
public:

	struct ABattleSectorAnchor* SectorAnchor; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	void OnSectorTransitioning(float TransTime, bool bIsTransitioning); // Function Breakthrough.SectorAnchorViewController.OnSectorTransitioning // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorAnchorMarker
// Size: 0x880 (Inherited: 0x7b0)
class USectorAnchorMarker : public UDeployPointBaseWidget {
public:

	struct UTextBlock* NameInIcon; // 0x7b0(0x08)
	struct UImage* UnitIcon; // 0x7b8(0x08)
	struct UTextBlock* DistText; // 0x7c0(0x08)
	struct UImage* Arrow; // 0x7c8(0x08)
	struct UImage* CaptureProgressBaseBar; // 0x7d0(0x08)
	struct UImage* CaptureProgressBar; // 0x7d8(0x08)
	struct FLinearColor Blue; // 0x7e0(0x10)
	struct FLinearColor Red; // 0x7f0(0x10)
	struct FLinearColor Neutral; // 0x800(0x10)
	struct ABattleSectorAnchor* CurBattleSectorAnchor; // 0x810(0x08)
	int32_t LocalPlayerCamp; // 0x818(0x04)
	bool bIsLocalCharAiming; // 0x81c(0x01)
	bool TweenToMarkFinished; // 0x81d(0x01)
	char pad_81E[0x2]; // 0x81e(0x02)
	float MoveSpeed; // 0x820(0x04)
	struct FVector2D BeginPosition; // 0x824(0x08)
	struct FVector2D TargetPosition; // 0x82c(0x08)
	char pad_834[0x3c]; // 0x834(0x3c)
	struct UMaterialInstanceDynamic* CaptureProgressBaseBarMID; // 0x870(0x08)
	struct UMaterialInstanceDynamic* CaptureProgressBarMID; // 0x878(0x08)

	void ShowAcRising(float RiseTime); // Function Breakthrough.SectorAnchorMarker.ShowAcRising // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorOwnerSceneActor
// Size: 0x388 (Inherited: 0x378)
class ASectorOwnerSceneActor : public AActor {
public:

	struct USceneComponent* SceneComponent; // 0x378(0x08)
	struct ABattleSectorBase* OwnerSectorBase; // 0x380(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.FadingDirectionDataManager
// Size: 0x48 (Inherited: 0x38)
class UFadingDirectionDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorTextSceneActor
// Size: 0x388 (Inherited: 0x378)
class ASectorTextSceneActor : public AActor {
public:

	struct USceneComponent* SceneComponent; // 0x378(0x08)
	struct ABattleSectorBase* OwnerSectorBase; // 0x380(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.HubOneTypeVehicleStatus
// Size: 0x48 (Inherited: 0x30)
class UHubOneTypeVehicleStatus : public UObject {
public:

	int32_t VehicleId; // 0x30(0x04)
	int32_t SpawnerCount; // 0x34(0x04)
	int32_t AvailableCount; // 0x38(0x04)
	float CDProgress; // 0x3c(0x04)
	float ConfigVehicleSpawnCD; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	void Reset(); // Function Breakthrough.HubOneTypeVehicleStatus.Reset // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SpawnAreaHub
// Size: 0x4d8 (Inherited: 0x378)
class ASpawnAreaHub : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct USceneComponent* SceneComponent; // 0x390(0x08)
	/*struct TArray<struct TSoftObjectPtr<AAnchorSpawnArea>>*/char SpawnAreas[0x10]; // 0x398(0x10)
	/*struct TArray<struct TSoftObjectPtr<ABreakthroughVehicleSpawner>>*/char VehicleSpawners[0x10]; // 0x3a8(0x10)
	/*struct TArray<struct TSoftObjectPtr<ABreakthroughPlotPlayerStart>>*/char DefenderPlotPlayerStarts[0x10]; // 0x3b8(0x10)
	/*struct TArray<struct TSoftObjectPtr<ABreakthroughPlotPlayerStart>>*/char AttackerPlotPlayerStarts[0x10]; // 0x3c8(0x10)
	bool IsActive; // 0x3d8(0x01)
	bool NeedAreaActive; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct FText Name; // 0x3e0(0x18)
	bool DisableFootSoldier; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	int32_t OwnerCamp; // 0x3fc(0x04)
	struct TArray<struct FVehicleSpawnerState> VehicleSpawnerStates; // 0x400(0x10)
	struct TMap<int32_t, struct UHubOneTypeVehicleStatus*> HubAllTypeVehicleStatusClient; // 0x410(0x50)
	int32_t ReDeployAutoSelectPriority; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct FTimerHandle TimerHandleWaitHudFieldInit; // 0x468(0x08)
	char pad_470[0x50]; // 0x470(0x50)
	/*struct FMulticastInlineDelegate*/char OnSpawnAreaHubIsActiveChanged[0x10]; // 0x4c0(0x10)
	bool bNeedMarker; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)

	void WaitHudFieldInit(); // Function Breakthrough.SpawnAreaHub.WaitHudFieldInit // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SplineAreaComponent
// Size: 0x730 (Inherited: 0x650)
class USplineAreaComponent : public USplineComponent {
public:

	float CollisionHeight; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct UBodySetup* BodySetup; // 0x658(0x08)
	bool GenerateCollision; // 0x660(0x01)
	char pad_661[0x7]; // 0x661(0x07)
	struct FSoftObjectPath LineTexturePath; // 0x668(0x18)
	struct FSoftObjectPath AreaTexturePath; // 0x680(0x18)
	bool bGenerateTriangles; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)
	struct TArray<struct FVector> TriangleList; // 0x6a0(0x10)
	struct FBox Box3D; // 0x6b0(0x1c)
	struct FBox2D Box2D; // 0x6cc(0x14)
	struct FBox2D SquareBox2D; // 0x6e0(0x14)
	float SquareBoxExt; // 0x6f4(0x04)
	struct FVector2D SquareBoxCenter; // 0x6f8(0x08)
	struct TArray<struct FVector> WorldSplinePoint; // 0x700(0x10)
	struct TArray<struct FUMGSplineAreaPoint> Points; // 0x710(0x10)
	struct TArray<struct FUMGSplineAreaPoint> TrianglePoints; // 0x720(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.VehicleRefreshRule
// Size: 0x390 (Inherited: 0x378)
class AVehicleRefreshRule : public AActor {
public:

	struct ABattleSectorBase* OwnerSector; // 0x378(0x08)
	/*struct TArray<struct TSoftObjectPtr<AVehicleSpawner>>*/char VehicleSpawners[0x10]; // 0x380(0x10)

	void OnSectorTransEnd(int32_t ActiveSector); // Function Breakthrough.VehicleRefreshRule.OnSectorTransEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughBigMapHUDView
// Size: 0x9e0 (Inherited: 0x998)
class UBreakthroughBigMapHUDView : public UBigMapBattleFieldHUDView {
public:

	/*struct TSoftClassPtr<UObject>*/char BigMapBattleMainKeyClass[0x28]; // 0x998(0x28)
	struct UBigMapBattleMainKey* MainKey; // 0x9c0(0x08)
	char pad_9C8[0x8]; // 0x9c8(0x08)
	int32_t MainKeyZOrder; // 0x9d0(0x04)
	float BigMapSignDuration; // 0x9d4(0x04)
	bool bEnableScreenOCStaticMeshWhenShow; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)

	void OnBigMapBattleMainKeyClassComplete(struct FSoftObjectPath& SoftObjectPath); // Function Breakthrough.BreakthroughBigMapHUDView.OnBigMapBattleMainKeyClassComplete // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSplineAreaView
// Size: 0x330 (Inherited: 0x298)
class UBreakthroughSplineAreaView : public UUserWidget {
public:

	struct AActor* BindTargetActor; // 0x298(0x08)
	struct USplineAreaComponent* SplineAreaComponent; // 0x2a0(0x08)
	struct USplineAreaWidget* SplineAreaWidgetUseForBg; // 0x2a8(0x08)
	struct USplineAreaWidget* SplineAreaWidget; // 0x2b0(0x08)
	struct FName EmissiveColorParameterName; // 0x2b8(0x08)
	struct FName BattleCenterU; // 0x2c0(0x08)
	struct FName BattleCenterV; // 0x2c8(0x08)
	struct FName IsBattleCenter; // 0x2d0(0x08)
	struct FName WidgetSizeX; // 0x2d8(0x08)
	struct FName WidgetSizeY; // 0x2e0(0x08)
	bool UseTilling; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float TillingStep; // 0x2ec(0x04)
	bool FlipX; // 0x2f0(0x01)
	bool bGradient; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	struct FLinearColor TintColor; // 0x2f4(0x10)
	float Thickness; // 0x304(0x04)
	struct FLinearColor AreaTintColor; // 0x308(0x10)
	struct FLinearColor BgAreaTintColor; // 0x318(0x10)
	bool bOnlyDrawLine; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)

	void SetTintColor(struct FLinearColor Color); // Function Breakthrough.BreakthroughSplineAreaView.SetTintColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTipsBroadCastView
// Size: 0x3f8 (Inherited: 0x388)
class UBreakthroughTipsBroadCastView : public UBaseUIView {
public:

	struct TMap<enum class EBreakthroughTipType, struct FTipsBroadCastData> TipsBroadCastDataMap; // 0x388(0x50)
	struct UTextBlock* TipsText; // 0x3d8(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x3e0(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void OnShowBattleReportTips(struct FBattleFieldBroadcastTipInfo& InTipInfo); // Function Breakthrough.BreakthroughTipsBroadCastView.OnShowBattleReportTips // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ReDeployPointSelectableWidget
// Size: 0x538 (Inherited: 0x310)
class UReDeployPointSelectableWidget : public UDFMHudMvcViewBase {
public:

	struct FRedeployMarkInit InitData; // 0x310(0xd0)
	struct UReDeployPointsPanel* DeployPointPanel; // 0x3e0(0x08)
	enum class ERedeployMarkerType RedeployMarkerType; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UBreakthroughRedeployPointSelectQuad* RedeployPointSelectQuad; // 0x3f0(0x08)
	struct FName RedeployPointSelectQuadParentWidgetName; // 0x3f8(0x08)
	struct UReDeployPointSelectableWidget* ParentWidget; // 0x400(0x08)
	struct UReDeployPointSelectableWidget* ChildWidget; // 0x408(0x08)
	struct FString InvalidDeploymentPointReason; // 0x410(0x10)
	struct UBreakthroughDeployPointCanSelectQuadView* CanSelectQuadView; // 0x420(0x08)
	struct FName SelectableBorderWidgetName; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
	bool bNeedHideNextTick; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	struct FVector2D ScreenOffset; // 0x43c(0x08)
	char pad_444[0x10]; // 0x444(0x10)
	bool bEnableScreenEdgeOffset; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FVector2D ScreenEdgeOffsetDesignScreenSize; // 0x458(0x08)
	struct FMargin ScreenEdgeOffset; // 0x460(0x10)
	struct FVector2D ScreenEdgeOffsetDesignScreenSizeHD; // 0x470(0x08)
	struct FMargin ScreenEdgeOffsetHD; // 0x478(0x10)
	bool bScreenEdge; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	struct FVector2D ScreenEdgeDir; // 0x48c(0x08)
	struct FVector2D InfoListIconSize; // 0x494(0x08)
	struct FVector2D InfoListSecondIconSize; // 0x49c(0x08)
	bool bFixedScreenPos; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct FVector2D FixedScreenPos; // 0x4a8(0x08)
	struct FVector2D HDFixedScreenPos; // 0x4b0(0x08)
	struct FVector2D DesignScreenSize; // 0x4b8(0x08)
	struct FVector2D HDDesignScreenSize; // 0x4c0(0x08)
	struct FAnchors FixedScreenPosAnchor; // 0x4c8(0x10)
	int32_t LocalPlayerCamp; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct AGameState_Breakthrough* Cache_GameState_Breakthrough; // 0x4e0(0x08)
	struct AGPPlayerState* Cache_LocalPlayerState; // 0x4e8(0x08)
	struct ABattleFieldCharacter* Cache_LocalCharacter; // 0x4f0(0x08)
	struct UBreakthroughRedeployHudField* Cache_RedeployHudField; // 0x4f8(0x08)
	struct UBreakthroughRedeployComponent* Cache_BreakthroughRedeployComponent; // 0x500(0x08)
	int32_t OldZOrder; // 0x508(0x04)
	int32_t RedeployPointSelectQuadType; // 0x50c(0x04)
	struct FRedeployMarkerInfoRow RedeployMarkerInfoRow; // 0x510(0x28)

	void UpdateWidget(float DeltaTime); // Function Breakthrough.ReDeployPointSelectableWidget.UpdateWidget // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughVehicleSpawner
// Size: 0x520 (Inherited: 0x3c0)
class ABreakthroughVehicleSpawner : public AVehicleSpawner {
public:

	struct FTimerHandle TimerTickHandle; // 0x3c0(0x08)
	struct FTimerHandle TimerHandleCountCD; // 0x3c8(0x08)
	float CountCDTimerTickInterval; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct ADFMVehicleBase*> SpawnedVehicles; // 0x3d8(0x10)
	char pad_3E8[0x4]; // 0x3e8(0x04)
	float EmptyVehicleDecreaseHPMinTime; // 0x3ec(0x04)
	float EmptyVehicleDecreaseHPPercent; // 0x3f0(0x04)
	float MinVehicleDecreaseHPDist; // 0x3f4(0x04)
	struct FName SpawnerID; // 0x3f8(0x08)
	char pad_400[0xa0]; // 0x400(0xa0)
	float VehicleRefreshCD; // 0x4a0(0x04)
	float VehicleSelfRefreshCD; // 0x4a4(0x04)
	bool bInGlobalVehicleLimit; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct AGameState_Breakthrough* GameState_Breakthrough; // 0x4b0(0x08)
	char pad_4B8[0x68]; // 0x4b8(0x68)

	void UpdateIsSpawnedAliveValue(bool InIsSpawnedAlive); // Function Breakthrough.BreakthroughVehicleSpawner.UpdateIsSpawnedAliveValue // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ForbiddenBox
// Size: 0x3e8 (Inherited: 0x378)
class AForbiddenBox : public AActor {
public:

	struct USceneComponent* SceneComponent; // 0x378(0x08)
	struct UBoxComponent* SectorBoxComponent; // 0x380(0x08)
	bool bNeedCheckAI; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	/*struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>*/char InnerCharacters[0x50]; // 0x390(0x50)
	char pad_3E0[0x8]; // 0x3e0(0x08)

	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Breakthrough.ForbiddenBox.OnOverlapEnd // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SplineAreaBaseMapItemView
// Size: 0x450 (Inherited: 0x3f8)
class USplineAreaBaseMapItemView : public UMapItemHUDView {
public:

	struct USplineAreaWidget* SplineAreaWidget_1; // 0x3f8(0x08)
	char pad_400[0x14]; // 0x400(0x14)
	struct FName EmissiveColorParameterName; // 0x414(0x08)
	struct FName IsMiniMapCulling; // 0x41c(0x08)
	struct FName MiniMapCenterU; // 0x424(0x08)
	struct FName MiniMapCenterV; // 0x42c(0x08)
	struct FName MiniMapUVRange; // 0x434(0x08)
	char pad_43C[0x14]; // 0x43c(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SplineAreaBaseController
// Size: 0x2a0 (Inherited: 0x290)
class USplineAreaBaseController : public UMapIconViewController {
public:

	struct USplineAreaComponent* SplineAreaComponent; // 0x290(0x08)
	float LineThickness; // 0x298(0x04)
	bool bCreateLine; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ReDeployChooseItemBaseHUDView
// Size: 0x648 (Inherited: 0x3f8)
class UReDeployChooseItemBaseHUDView : public UDFMBaseUIView {
public:

	struct TArray<enum class GameHUDSate> ConfigVisibleGameHudStates; // 0x3f8(0x10)
	struct TArray<enum class GameHUDSate> ConfigInVisibleGameHudStates; // 0x408(0x10)
	struct FName HudTemplateName; // 0x418(0x08)
	struct UDFMBaseUIView* HudTemplate; // 0x420(0x08)
	struct FName HeaderTextBlockWidgetName; // 0x428(0x08)
	struct UDFTextBlock* HeaderTextBlock; // 0x430(0x08)
	struct FName HeaderSubTextBlockWidgetName; // 0x438(0x08)
	struct UDFTextBlock* HeaderSubTextBlock; // 0x440(0x08)
	struct FName ScrollBoxWidgetName; // 0x448(0x08)
	struct UDFScrollBox* ScrollBox; // 0x450(0x08)
	struct FName HotKeyWidgetName; // 0x458(0x08)
	struct URedeployHotKeyView* HotKeyView; // 0x460(0x08)
	struct FName RightInfoWidgetName; // 0x468(0x08)
	struct UWidget* RightInfoWidget; // 0x470(0x08)
	struct UDFCommonButton* CustomButton; // 0x478(0x08)
	struct FName HDCustomButtonWidgetName; // 0x480(0x08)
	struct FName CustomButtonWidgetName; // 0x488(0x08)
	struct UDFCommonButton* EnsureButton; // 0x490(0x08)
	struct FName HDEnsureButtonWidgetName; // 0x498(0x08)
	struct FName EnsureButtonWidgetName; // 0x4a0(0x08)
	struct UClass* URedeployChooseItemBaseViewClass; // 0x4a8(0x08)
	struct TArray<struct FString> ShowHotKeyWidgetNames; // 0x4b0(0x10)
	bool bHoverUint64DataAsItemIDSetHeadTitle; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct TArray<enum class ERedeployStoreType> ConfigRedeployStoreTypes; // 0x4c8(0x10)
	struct TMap<enum class ERedeployStoreType, bool> RedeployStoreTypeToShowRightInfoWidgetMap; // 0x4d8(0x50)
	struct TMap<enum class ERedeployStoreType, bool> RedeployStoreTypeToShowCustomButtonMap; // 0x528(0x50)
	struct TMap<enum class ERedeployStoreType, bool> RedeployStoreTypeToShowEnsureButtonMap; // 0x578(0x50)
	enum class ERedeployStoreType RedeployStoreType; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct TMap<enum class ERedeployStoreType, enum class EAttachPosition> RedeployStoreTypeToAttachPositionMap; // 0x5d0(0x50)
	struct TArray<struct URedeployChooseItemBaseView*> AllChooseItemViews; // 0x620(0x10)
	struct URedeployChooseItemBaseView* CurrentChooseItemBaseView; // 0x630(0x08)
	struct UBreakthroughRedeployHudField* RedeployHudField; // 0x638(0x08)
	struct UBreakthroughRedeployHudLogic* RedeployHudLogic; // 0x640(0x08)

	void UpdateRightInfoWidget(uint64_t InUint64Value); // Function Breakthrough.ReDeployChooseItemBaseHUDView.UpdateRightInfoWidget // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployChooseItemBaseView
// Size: 0x970 (Inherited: 0x310)
class URedeployChooseItemBaseView : public UDFMHudMvcViewBase {
public:

	struct FName HudItemTemplateViewName; // 0x310(0x08)
	struct UHudItemTemplateView* HudItemTemplateView; // 0x318(0x08)
	struct FInventoryItemInfo InventoryItemInfo; // 0x320(0x538)
	int32_t HoverInt32Data; // 0x858(0x04)
	char pad_85C[0x4]; // 0x85c(0x04)
	uint64_t HoverUint64Data; // 0x860(0x08)
	enum class ERedeployStoreType ItemType; // 0x868(0x01)
	enum class ERedeployStoreType ParentHudStoreType; // 0x869(0x01)
	char pad_86A[0x6]; // 0x86a(0x06)
	struct TMap<enum class ERedeployStoreType, enum class EAttachPosition> RedeployStoreTypeToAttachPositionMap; // 0x870(0x50)
	struct TMap<enum class ERedeployStoreType, bool> RedeployStoreTypeToCanRightClickMap; // 0x8c0(0x50)
	struct TMap<enum class ERedeployStoreType, bool> RedeployStoreTypeToShortNameMap; // 0x910(0x50)
	bool bSelected; // 0x960(0x01)
	char pad_961[0x7]; // 0x961(0x07)
	struct UBreakthroughRedeployHudField* RedeployHudField; // 0x968(0x08)

	void UpdateStyleType(); // Function Breakthrough.RedeployChooseItemBaseView.UpdateStyleType // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployWeaponPresetStoreBaseHUDView
// Size: 0x528 (Inherited: 0x3f8)
class URedeployWeaponPresetStoreBaseHUDView : public UDFMBaseUIView {
public:

	struct TArray<enum class GameHUDSate> ConfigVisibleGameHudStates; // 0x3f8(0x10)
	struct TArray<enum class GameHUDSate> ConfigInVisibleGameHudStates; // 0x408(0x10)
	struct FName HudTemplateName; // 0x418(0x08)
	struct UDFMBaseUIView* HudTemplate; // 0x420(0x08)
	struct FName CommonPopWindowV2LuaBaseWidgetName; // 0x428(0x08)
	struct UCommonPopWindowV2LuaBaseWidget* CommonPopWindowV2LuaBaseWidget; // 0x430(0x08)
	struct FName HeaderTextBlockWidgetName; // 0x438(0x08)
	struct UComputeTextBlock* HeaderTextBlock; // 0x440(0x08)
	struct FName CloseBtnWidgetName; // 0x448(0x08)
	struct UDFButton* CloseBtn; // 0x450(0x08)
	struct FName ScrollBoxWidgetName; // 0x458(0x08)
	struct UDFWaterfallScrollView* ScrollBox; // 0x460(0x08)
	struct FName HotKeyWidgetName; // 0x468(0x08)
	struct URedeployHotKeyView* HotKeyView; // 0x470(0x08)
	struct FName HotKeyCloseBtnWidgetName; // 0x478(0x08)
	struct UDFButton* HotKeyCloseBtn; // 0x480(0x08)
	struct FName RightInfoWidgetName; // 0x488(0x08)
	struct UWidget* RightInfoWidget; // 0x490(0x08)
	struct UDFCommonButton* EquipButton; // 0x498(0x08)
	struct FName HDEquipButtonWidgetName; // 0x4a0(0x08)
	struct FName EquipButtonWidgetName; // 0x4a8(0x08)
	bool bShowRightInfoWidget; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UClass* URedeployWeaponPresetStoreItemViewClass; // 0x4b8(0x08)
	struct TArray<struct FString> ShowHotKeyWidgetNames; // 0x4c0(0x10)
	bool bHoverUint64DataAsItemIDSetHeadTitle; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct TArray<enum class ERedeployStoreType> ConfigRedeployStoreTypes; // 0x4d8(0x10)
	enum class ERedeployStoreType RedeployStoreType; // 0x4e8(0x01)
	enum class ERedeployStoreType ItemViewRedeployStoreType; // 0x4e9(0x01)
	char pad_4EA[0x6]; // 0x4ea(0x06)
	uint64_t WeaponItemGid; // 0x4f0(0x08)
	uint64_t WeaponItemId; // 0x4f8(0x08)
	struct UBreakthroughRedeployHudField* RedeployHudField; // 0x500(0x08)
	struct UBreakthroughRedeployHudLogic* RedeployHudLogic; // 0x508(0x08)
	struct TArray<struct FTDMWeaponPreset> WeaponPresetArr; // 0x510(0x10)
	int32_t InfoPanelShowingPresetIndex; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)

	void UpdateRightInfoWidget(int32_t InInt32Value); // Function Breakthrough.RedeployWeaponPresetStoreBaseHUDView.UpdateRightInfoWidget // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSupportReleaseView
// Size: 0xad8 (Inherited: 0x9e0)
class UBreakthroughSupportReleaseView : public UBreakthroughBigMapHUDView {
public:

	struct UWidgetAnimation* Anima_AutoIn; // 0x9e0(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x9e8(0x08)
	struct UTextBlock* SkillNameText; // 0x9f0(0x08)
	struct UTextBlock* SkillDetailText; // 0x9f8(0x08)
	struct UTextBlock* FreeNumText; // 0xa00(0x08)
	struct UDFImage* SkillIconImage; // 0xa08(0x08)
	struct UDFCanvasPanel* MapCanvasPanel; // 0xa10(0x08)
	struct UDFCommonButton* ReleaseButton; // 0xa18(0x08)
	struct UButton* CloseButton; // 0xa20(0x08)
	struct UDFCommonButton* RefreshButton; // 0xa28(0x08)
	struct UDFCommonAddDecSlider* DFCommonAddDecSlider; // 0xa30(0x08)
	struct USlider* DFScaleSlider; // 0xa38(0x08)
	struct UImage* ImageProgressBar; // 0xa40(0x08)
	struct UMaterialInstanceDynamic* ImageProgressBarMID; // 0xa48(0x08)
	float AutoZoomTimeConfig; // 0xa50(0x04)
	float LongPressTime; // 0xa54(0x04)
	float ReleaseLongPressTime; // 0xa58(0x04)
	float PCDragMoveThreshold; // 0xa5c(0x04)
	float ClickButtonAnimationDelayTime; // 0xa60(0x04)
	float ClickButtonAnimationTotalTime; // 0xa64(0x04)
	float ClickButtonAnimationDeltaTime; // 0xa68(0x04)
	float VOPlayIntervals; // 0xa6c(0x04)
	char pad_A70[0x68]; // 0xa70(0x68)

	void UpdateFreeNum(int32_t FreeNum); // Function Breakthrough.BreakthroughSupportReleaseView.UpdateFreeNum // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughCampSectorSplineAreaView
// Size: 0x3a0 (Inherited: 0x330)
class UBreakthroughCampSectorSplineAreaView : public UBreakthroughSplineAreaView {
public:

	struct FLinearColor SelfCampTintColor; // 0x330(0x10)
	struct FLinearColor EnemyCampTintColor; // 0x340(0x10)
	struct FLinearColor SelfCampAreaTintColor; // 0x350(0x10)
	struct FLinearColor EnemyCampAreaTintColor; // 0x360(0x10)
	struct FLinearColor SelfCampBgAreaTintColor; // 0x370(0x10)
	struct FLinearColor EnemyCampBgAreaTintColor; // 0x380(0x10)
	struct FLinearColor InContestBgAreaTintColor; // 0x390(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSafeAreaSplineAreaView
// Size: 0x330 (Inherited: 0x330)
class UBreakthroughSafeAreaSplineAreaView : public UBreakthroughSplineAreaView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSectorBaseSplineAreaView
// Size: 0x3c0 (Inherited: 0x330)
class UBreakthroughSectorBaseSplineAreaView : public UBreakthroughSplineAreaView {
public:

	struct FLinearColor SelfCampTintColor; // 0x330(0x10)
	struct FLinearColor EnemyCampTintColor; // 0x340(0x10)
	struct FLinearColor InContestTintColor; // 0x350(0x10)
	struct FLinearColor SelfCampAreaTintColor; // 0x360(0x10)
	struct FLinearColor EnemyCampAreaTintColor; // 0x370(0x10)
	struct FLinearColor InContestAreaTintColor; // 0x380(0x10)
	struct FLinearColor SelfCampBgAreaTintColor; // 0x390(0x10)
	struct FLinearColor EnemyCampBgAreaTintColor; // 0x3a0(0x10)
	struct FLinearColor InContestBgAreaTintColor; // 0x3b0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughGeneralStrongBroadcastView
// Size: 0x490 (Inherited: 0x3f8)
class UBreakthroughGeneralStrongBroadcastView : public UBreakthroughTipsBroadCastView {
public:

	struct FText CurTipsText; // 0x3f8(0x18)
	struct FText CurSubTipsText; // 0x410(0x18)
	char pad_428[0x30]; // 0x428(0x30)
	struct UTextBlock* SubTipsText; // 0x458(0x08)
	struct UWidgetAnimation* Anim_2Row; // 0x460(0x08)
	struct UWidgetAnimation* Anim_2RowOut; // 0x468(0x08)
	float StrongBroadcastSubTextChangeTime; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x478(0x08)
	struct FName MutexRegName; // 0x480(0x08)
	bool bGotMutex; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)

	void SetTipsText(struct FText& InShowTips); // Function Breakthrough.BreakthroughGeneralStrongBroadcastView.SetTipsText // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughIconStrongBroadcastView
// Size: 0x498 (Inherited: 0x3f8)
class UBreakthroughIconStrongBroadcastView : public UBreakthroughTipsBroadCastView {
public:

	struct FText CurTipsText; // 0x3f8(0x18)
	struct FText CurSubTipsText; // 0x410(0x18)
	char pad_428[0x30]; // 0x428(0x30)
	struct UTextBlock* SubTipsText; // 0x458(0x08)
	struct UWidgetAnimation* Anim_2Row; // 0x460(0x08)
	struct UWidgetAnimation* Anim_2RowOut; // 0x468(0x08)
	struct UImage* TipsIcon; // 0x470(0x08)
	float StrongBroadcastSubTextChangeTime; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x480(0x08)
	struct FName MutexRegName; // 0x488(0x08)
	bool bGotMutex; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)

	void SetTipsText(struct FText& InShowTips); // Function Breakthrough.BreakthroughIconStrongBroadcastView.SetTipsText // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughOrderItemBroadcastView
// Size: 0x4e8 (Inherited: 0x3f8)
class UBreakthroughOrderItemBroadcastView : public UBreakthroughTipsBroadCastView {
public:

	struct FText CurTipsText; // 0x3f8(0x18)
	char pad_410[0x28]; // 0x410(0x28)
	struct UWidgetAnimation* Anim_Retract; // 0x438(0x08)
	struct UWidgetAnimation* Anim_Expand; // 0x440(0x08)
	struct UImage* DFImage_Anchor; // 0x448(0x08)
	struct UImage* DFImage_Icon; // 0x450(0x08)
	struct UTextBlock* DFTextBlock_Main; // 0x458(0x08)
	char pad_460[0x88]; // 0x460(0x88)

	void SetTipsText(struct FText& InShowTips); // Function Breakthrough.BreakthroughOrderItemBroadcastView.SetTipsText // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughSpecialStrongBroadcastView
// Size: 0x450 (Inherited: 0x3f8)
class UBreakthroughSpecialStrongBroadcastView : public UBreakthroughTipsBroadCastView {
public:

	struct FText CurTipsText; // 0x3f8(0x18)
	int32_t CurTipsType; // 0x410(0x04)
	int32_t CurColorType; // 0x414(0x04)
	char pad_418[0x8]; // 0x418(0x08)
	struct UMaterialInstanceDynamic* Image_LinePointFXL_MI; // 0x420(0x08)
	struct UMaterialInstanceDynamic* Image_LinePointFXR_MI; // 0x428(0x08)
	struct UMaterialInstanceDynamic* Image_LinePointFX_yellowL_MI; // 0x430(0x08)
	struct UMaterialInstanceDynamic* Image_LinePointFX_yellowR_MI; // 0x438(0x08)
	struct TArray<struct UObject*> CampImageArray; // 0x440(0x10)

	void UpdateCampIcon(); // Function Breakthrough.BreakthroughSpecialStrongBroadcastView.UpdateCampIcon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughTipsWeakBroadcastView
// Size: 0x440 (Inherited: 0x3f8)
class UBreakthroughTipsWeakBroadcastView : public UBreakthroughTipsBroadCastView {
public:

	struct FText CurTipsText; // 0x3f8(0x18)
	char pad_410[0x8]; // 0x410(0x08)
	struct URichTextBlock* TipsRichText; // 0x418(0x08)
	char pad_420[0x20]; // 0x420(0x20)

	void SetWeakTipsInfo(struct FBattleFieldBroadcastTipInfo& InTipInfo); // Function Breakthrough.BreakthroughTipsWeakBroadcastView.SetWeakTipsInfo // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughWirelessDialogBroadcastView
// Size: 0x408 (Inherited: 0x3f8)
class UBreakthroughWirelessDialogBroadcastView : public UBreakthroughTipsBroadCastView {
public:

	char pad_3F8[0x10]; // 0x3f8(0x10)

	void ShowSubtitle(struct FText& SpeakerName, struct FText& SubtitleText); // Function Breakthrough.BreakthroughWirelessDialogBroadcastView.ShowSubtitle // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ReDeployPointBaseWidget
// Size: 0x560 (Inherited: 0x538)
class UReDeployPointBaseWidget : public UReDeployPointSelectableWidget {
public:

	struct FString MarkerTypeName; // 0x538(0x10)
	struct FVector2D MarkerCenter; // 0x548(0x08)
	struct FVector OldLocation; // 0x550(0x0c)
	char pad_55C[0x4]; // 0x55c(0x04)

	void InitWidget(); // Function Breakthrough.ReDeployPointBaseWidget.InitWidget // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployPointVehicleHub
// Size: 0x590 (Inherited: 0x538)
class UBreakthroughRedeployPointVehicleHub : public UReDeployPointSelectableWidget {
public:

	struct ASpawnAreaHub* SpawnAreaHub; // 0x538(0x08)
	struct FName ButtonWidgetName; // 0x540(0x08)
	struct UDFButton* SelectButton; // 0x548(0x08)
	struct FName AvailableNumWidgetName; // 0x550(0x08)
	struct UTextBlock* AvailableNumText; // 0x558(0x08)
	struct FName AvailableNumContainerWidgetName; // 0x560(0x08)
	struct UWidget* AvailableNumContainer; // 0x568(0x08)
	struct FName CanvasPanelWidgetName; // 0x570(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x578(0x08)
	struct FName BackLightWidgetName; // 0x580(0x08)
	struct UWidget* BackLight; // 0x588(0x08)

	void SetHide(); // Function Breakthrough.BreakthroughRedeployPointVehicleHub.SetHide // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughCampVehicleSpawner
// Size: 0x548 (Inherited: 0x520)
class ABreakthroughCampVehicleSpawner : public ABreakthroughVehicleSpawner {
public:

	bool bActive; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct FTimerHandle TimerHandleDelaySpawn; // 0x528(0x08)
	struct FTimerHandle TimerHandleWaitSpawnIDAvaliable; // 0x530(0x08)
	float CheckSpawnIDAvaliableInterval; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct ADFMVehicleBase* CurVehicle; // 0x540(0x08)

	void TimerTickCheckSpawnIDAvaliable(); // Function Breakthrough.BreakthroughCampVehicleSpawner.TimerTickCheckSpawnIDAvaliable // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughVehicleSpawnerActiveByAnchorOccupy
// Size: 0x538 (Inherited: 0x520)
class ABreakthroughVehicleSpawnerActiveByAnchorOccupy : public ABreakthroughVehicleSpawner {
public:

	struct ABattleSectorAnchor* BindSectorAnchor; // 0x520(0x08)
	bool bActive; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct ADFMVehicleBase* CurVehicle; // 0x530(0x08)

	void OnServerSectorOccupyStatusChanged(/*struct AActor* InSectorAnchorActor, int32_t OccupyCampId, int32_t BetterCamp, struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>>& InnerCharacters, struct FName NameInIcon*/); // Function Breakthrough.BreakthroughVehicleSpawnerActiveByAnchorOccupy.OnServerSectorOccupyStatusChanged // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ForceSafeBox
// Size: 0x3f0 (Inherited: 0x3e8)
class AForceSafeBox : public AForbiddenBox {
public:

	bool bNeedReverseAPI; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.MaskSplineAreaHUDView
// Size: 0x460 (Inherited: 0x450)
class UMaskSplineAreaHUDView : public USplineAreaBaseMapItemView {
public:

	struct UMaterialInstanceDynamic* MidDynamic; // 0x450(0x08)
	struct FName TillingParameterName; // 0x458(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorSplineAreaHUDView
// Size: 0x480 (Inherited: 0x450)
class USectorSplineAreaHUDView : public USplineAreaBaseMapItemView {
public:

	struct UMaterialInstanceDynamic* MidDynamic; // 0x450(0x08)
	struct FName NeedFadingAlpha; // 0x458(0x08)
	struct FName BattleCenterU; // 0x460(0x08)
	struct FName BattleCenterV; // 0x468(0x08)
	struct FName IsVertical; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.MaskSplineAreaViewController
// Size: 0x2c0 (Inherited: 0x2a0)
class UMaskSplineAreaViewController : public USplineAreaBaseController {
public:

	struct FLinearColor MaskAreaColor; // 0x2a0(0x10)
	float MapTilling; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct AMaskEdgeActor* MaskEdgeActor; // 0x2b8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.SectorSplineAreaViewController
// Size: 0x340 (Inherited: 0x2a0)
class USectorSplineAreaViewController : public USplineAreaBaseController {
public:

	bool bIsBattleSectorAnchor; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FLinearColor BattleLineColor; // 0x2a4(0x10)
	struct FLinearColor LocalLineColor; // 0x2b4(0x10)
	struct FLinearColor LocalAreaColor; // 0x2c4(0x10)
	struct FLinearColor EnemyLineColor; // 0x2d4(0x10)
	struct FLinearColor EnemyAreaColor; // 0x2e4(0x10)
	struct FLinearColor NeutralLineColor; // 0x2f4(0x10)
	struct FLinearColor NeutralAreaColor; // 0x304(0x10)
	char pad_314[0x4]; // 0x314(0x04)
	struct ABattleSectorBase* BattleSectorBase; // 0x318(0x08)
	struct ABattleCampSector* BattleCampSector; // 0x320(0x08)
	struct ABattleSectorAnchor* BattleSectorAnchor; // 0x328(0x08)
	char pad_330[0x10]; // 0x330(0x10)

	void OnSectorActived(struct AActor* NewSector); // Function Breakthrough.SectorSplineAreaViewController.OnSectorActived // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployArmItemHUDView
// Size: 0x648 (Inherited: 0x648)
class URedeployArmItemHUDView : public UReDeployChooseItemBaseHUDView {
public:


	void OnClientReceiveWeaponStore(int32_t InArmedForceID, uint32_t InUint32); // Function Breakthrough.RedeployArmItemHUDView.OnClientReceiveWeaponStore // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ReDeployVehicleInfoHUDView
// Size: 0x720 (Inherited: 0x648)
class UReDeployVehicleInfoHUDView : public UReDeployChooseItemBaseHUDView {
public:

	struct ASpawnAreaHub* SpawnAreaHub; // 0x648(0x08)
	struct UBreakthroughRedeployPointVehicleHub* RedeployPointVehicleHub; // 0x650(0x08)
	struct TArray<struct UReDeployVehicleItemView*> VehicleItemViewList; // 0x658(0x10)
	struct TMap<enum class EVehicleDeployType, struct UOneDeployTypeVehiclesStatus*> VehicleStatusMap; // 0x668(0x50)
	struct TArray<enum class EVehicleDeployType> VehicleStatusMapKeyList; // 0x6b8(0x10)
	struct TMap<enum class EVehicleDeployType, struct FText> VehicleTypeNameMap; // 0x6c8(0x50)
	struct UClass* UReDeployVehicleItemViewClass; // 0x718(0x08)

	void RemoveSpawnAreaHubIsActiveChangedDelegate(); // Function Breakthrough.ReDeployVehicleInfoHUDView.RemoveSpawnAreaHubIsActiveChangedDelegate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployWeaponStoreHUDView
// Size: 0x768 (Inherited: 0x648)
class URedeployWeaponStoreHUDView : public UReDeployChooseItemBaseHUDView {
public:

	char pad_648[0x50]; // 0x648(0x50)
	struct TArray<enum class EWeaponItemType> PreviewArmAvaliableWeaponTypes; // 0x698(0x10)
	struct TMap<enum class ERedeployStoreType, struct FRedeployStoreTypeToWeaponTypes> StoreTypeToWeaponTypeMap; // 0x6a8(0x50)
	struct TArray<uint64_t> ShowingRedDotItemIDs; // 0x6f8(0x10)
	struct TArray<uint64_t> ClickedRedDotItemIDs; // 0x708(0x10)
	struct FTimerHandle FrameTaskTimerHandle; // 0x718(0x08)
	float FrameTaskInterval; // 0x720(0x04)
	int32_t TaskFrameCount; // 0x724(0x04)
	int32_t TaskPerFrameCount; // 0x728(0x04)
	int32_t MinTaskPerFrameCount; // 0x72c(0x04)
	struct TArray<struct FFrameTask> FrameTaskArray; // 0x730(0x10)
	struct FTimerHandle FrameTaskTimerHandle_GeneratorIcon; // 0x740(0x08)
	float FrameTaskInterval_GeneratorIcon; // 0x748(0x04)
	int32_t TaskFrameCount_GeneratorIcon; // 0x74c(0x04)
	int32_t TaskPerFrameCount_GeneratorIcon; // 0x750(0x04)
	int32_t MinTaskPerFrameCount_GeneratorIcon; // 0x754(0x04)
	struct TArray<struct URedeployChooseItemBaseView*> FrameTaskArray_GeneratorIcon; // 0x758(0x10)

	void OnFrameTaskTimer_GeneratorIcon(); // Function Breakthrough.RedeployWeaponStoreHUDView.OnFrameTaskTimer_GeneratorIcon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployArmItemView
// Size: 0x970 (Inherited: 0x970)
class URedeployArmItemView : public URedeployChooseItemBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.ReDeployVehicleItemView
// Size: 0x9c8 (Inherited: 0x970)
class UReDeployVehicleItemView : public URedeployChooseItemBaseView {
public:

	struct UBreakthroughRedeployComponent* RedeployComponent; // 0x970(0x08)
	struct UHubOneTypeVehicleStatus* VehicleSpawnerStatus; // 0x978(0x08)
	char pad_980[0x10]; // 0x980(0x10)
	struct FString CurrentName; // 0x990(0x10)
	struct ASpawnAreaHub* SpawnAreaHub; // 0x9a0(0x08)
	enum class EReDeployVehicleItemViewUnDeployReason UnDeployReason; // 0x9a8(0x01)
	char pad_9A9[0x7]; // 0x9a9(0x07)
	struct FTimerHandle TimerHandle_UpdateItemView; // 0x9b0(0x08)
	float TimerInterval; // 0x9b8(0x04)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct UMaterialInterface* DefaultCircleMaterial; // 0x9c0(0x08)

	void UpdateItemView(); // Function Breakthrough.ReDeployVehicleItemView.UpdateItemView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployWeaponPresetStoreItemView
// Size: 0x978 (Inherited: 0x970)
class URedeployWeaponPresetStoreItemView : public URedeployChooseItemBaseView {
public:

	uint64_t UsingPresetIndex; // 0x970(0x08)

	void SetUsingPresetIndex(int32_t InUsingPresetIndex); // Function Breakthrough.RedeployWeaponPresetStoreItemView.SetUsingPresetIndex // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployWeaponStoreItemView
// Size: 0x970 (Inherited: 0x970)
class URedeployWeaponStoreItemView : public URedeployChooseItemBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployWeaponPresetStoreHUDView
// Size: 0x540 (Inherited: 0x528)
class URedeployWeaponPresetStoreHUDView : public URedeployWeaponPresetStoreBaseHUDView {
public:

	int32_t WeaponPresetCount; // 0x528(0x04)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct TArray<struct FText> WeaponPresetNameArr; // 0x530(0x10)

	void OnClientReceiveWeaponPresetStore(uint64_t InWeaponItemID); // Function Breakthrough.RedeployWeaponPresetStoreHUDView.OnClientReceiveWeaponPresetStore // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RedeployMarkerBaseWidget
// Size: 0x598 (Inherited: 0x560)
class URedeployMarkerBaseWidget : public UReDeployPointBaseWidget {
public:

	int64_t Guid; // 0x560(0x08)
	bool BeSelected; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UWidget* QuadAreaWidget; // 0x570(0x08)
	struct FVector2D CannotSelectRect; // 0x578(0x08)
	struct FVector2D CanSelectRect; // 0x580(0x08)
	struct FVector2D SelectedRect; // 0x588(0x08)
	enum class ERedeployShowStage RedeployShowStage; // 0x590(0x01)
	enum class ERedeployShowStage CurrentRedeployShowStage; // 0x591(0x01)
	char pad_592[0x6]; // 0x592(0x06)

	void unRegisterDelegates(); // Function Breakthrough.RedeployMarkerBaseWidget.unRegisterDelegates // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.RebornWarTowerMarker
// Size: 0x580 (Inherited: 0x560)
class URebornWarTowerMarker : public UReDeployPointBaseWidget {
public:

	struct UImage* ProgressBar; // 0x560(0x08)
	int32_t OwnerCamp; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct ADFMTieBreaker* OwnerTieBreaker; // 0x570(0x08)
	bool IsLock; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	int32_t HP; // 0x57c(0x04)

	void UnLock(); // Function Breakthrough.RebornWarTowerMarker.UnLock // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughGlobalStageCampSectorOwnerView
// Size: 0x610 (Inherited: 0x598)
class UBreakthroughGlobalStageCampSectorOwnerView : public URedeployMarkerBaseWidget {
public:

	struct UImage* CampIcon; // 0x598(0x08)
	struct UImage* CampBg; // 0x5a0(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x5a8(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x5b0(0x08)
	struct FLinearColor Blue; // 0x5b8(0x10)
	struct FLinearColor Red; // 0x5c8(0x10)
	struct FLinearColor Neutral; // 0x5d8(0x10)
	struct UPaperSprite* Camp0Sprite; // 0x5e8(0x08)
	struct UPaperSprite* Camp0BgSprite; // 0x5f0(0x08)
	struct UPaperSprite* Camp1Sprite; // 0x5f8(0x08)
	struct UPaperSprite* Camp1BgSprite; // 0x600(0x08)
	bool PointSelected; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)

	void ShowBubble(bool Show); // Function Breakthrough.BreakthroughGlobalStageCampSectorOwnerView.ShowBubble // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughGlobalStageSectorOwnerView
// Size: 0x610 (Inherited: 0x598)
class UBreakthroughGlobalStageSectorOwnerView : public URedeployMarkerBaseWidget {
public:

	struct UImage* CampIcon; // 0x598(0x08)
	struct UImage* CampBg; // 0x5a0(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x5a8(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x5b0(0x08)
	struct FLinearColor Blue; // 0x5b8(0x10)
	struct FLinearColor Red; // 0x5c8(0x10)
	struct FLinearColor Neutral; // 0x5d8(0x10)
	struct UPaperSprite* Camp0Sprite; // 0x5e8(0x08)
	struct UPaperSprite* Camp0BgSprite; // 0x5f0(0x08)
	struct UPaperSprite* Camp1Sprite; // 0x5f8(0x08)
	struct UPaperSprite* Camp1BgSprite; // 0x600(0x08)
	int32_t SectorState; // 0x608(0x04)
	bool PointSelected; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)

	void ShowBubble(bool Show); // Function Breakthrough.BreakthroughGlobalStageSectorOwnerView.ShowBubble // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughGlobalStageSectorTextView
// Size: 0x5c0 (Inherited: 0x598)
class UBreakthroughGlobalStageSectorTextView : public URedeployMarkerBaseWidget {
public:

	struct UWidgetAnimation* Anima_AutoIn; // 0x598(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x5a0(0x08)
	float DelayShowTime; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct UTextBlock* SectorNameText; // 0x5b0(0x08)
	struct FName SectorNameTextName; // 0x5b8(0x08)

	void PlayAnim_AutoOut(); // Function Breakthrough.BreakthroughGlobalStageSectorTextView.PlayAnim_AutoOut // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughMoveableMarkerView
// Size: 0x5f8 (Inherited: 0x598)
class UBreakthroughMoveableMarkerView : public URedeployMarkerBaseWidget {
public:

	struct UImage* MoveableImage; // 0x598(0x08)
	struct UImage* DieImage; // 0x5a0(0x08)
	struct UClass* URedeployUIElementViewClass; // 0x5a8(0x08)
	struct UPaperSprite* Img; // 0x5b0(0x08)
	struct UPaperSprite* DeadImg; // 0x5b8(0x08)
	struct UPaperSprite* FireImg; // 0x5c0(0x08)
	struct FLinearColor CampColor; // 0x5c8(0x10)
	uint64_t PlayerNetGUID; // 0x5d8(0x08)
	int32_t WeaponChangeId; // 0x5e0(0x04)
	int32_t DeathShowTime; // 0x5e4(0x04)
	bool IsDeadth; // 0x5e8(0x01)
	bool IsEnemy; // 0x5e9(0x01)
	char pad_5EA[0x2]; // 0x5ea(0x02)
	float DeathTime; // 0x5ec(0x04)
	struct URedeployUIElementView* RedeployUIElementView; // 0x5f0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRebornFlagMarker
// Size: 0x5f8 (Inherited: 0x598)
class UBreakthroughRebornFlagMarker : public URedeployMarkerBaseWidget {
public:

	struct UCanvasPanel* CanvasPanel; // 0x598(0x08)
	struct UImage* Icon; // 0x5a0(0x08)
	struct UWidget* ProgressBgWidget; // 0x5a8(0x08)
	struct FName ProgressBgWidgetName; // 0x5b0(0x08)
	struct UDFImage* ProgressImage; // 0x5b8(0x08)
	struct FName ProgressImageName; // 0x5c0(0x08)
	struct FName NumberScalarParameterName; // 0x5c8(0x08)
	struct FName WidthScalarParameterName; // 0x5d0(0x08)
	struct FName ProgressScalarParameterName; // 0x5d8(0x08)
	struct FColor ColorDefault; // 0x5e0(0x04)
	struct FColor ColorEnemy; // 0x5e4(0x04)
	struct FColor ColorTeam; // 0x5e8(0x04)
	struct FColor ColorCamp; // 0x5ec(0x04)
	char pad_5F0[0x8]; // 0x5f0(0x08)

	void UpdateProgress(float InNumber, float InWidth, float InProgress); // Function Breakthrough.BreakthroughRebornFlagMarker.UpdateProgress // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployLocalCharacterPoint
// Size: 0x640 (Inherited: 0x598)
class UBreakthroughRedeployLocalCharacterPoint : public URedeployMarkerBaseWidget {
public:

	struct UCanvasPanel* ViewAnglePanel; // 0x598(0x08)
	struct UClass* URedeployUIElementViewClass; // 0x5a0(0x08)
	struct UWidget* NormalPanel; // 0x5a8(0x08)
	struct UDFImage* TeamPlayerIcon; // 0x5b0(0x08)
	struct FString TeamPlayerName; // 0x5b8(0x10)
	struct AGPPlayerState* TeammatePlayerState; // 0x5c8(0x08)
	struct UDFImage* DieIcon; // 0x5d0(0x08)
	int32_t DeathShowTime; // 0x5d8(0x04)
	bool IsDying; // 0x5dc(0x01)
	bool IsBattling; // 0x5dd(0x01)
	char pad_5DE[0x2]; // 0x5de(0x02)
	float DeathTime; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	uint64_t Uin; // 0x5e8(0x08)
	int32_t PlayerIndex; // 0x5f0(0x04)
	int32_t ArmedForceID; // 0x5f4(0x04)
	struct FName DeploySelfEffectWidgetName; // 0x5f8(0x08)
	struct FName DeploySelfEffectAnimationName; // 0x600(0x08)
	char pad_608[0x8]; // 0x608(0x08)
	struct URedeployUIElementView* RedeployUIElementView; // 0x610(0x08)
	struct UCanvasPanel* RootCanvasPanel; // 0x618(0x08)
	struct UDFImage* ArmsImage; // 0x620(0x08)
	float UpdateInterval; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct FString MapName; // 0x630(0x10)

	void UpdatePlayerArmsIcon(); // Function Breakthrough.BreakthroughRedeployLocalCharacterPoint.UpdatePlayerArmsIcon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployPointView
// Size: 0x648 (Inherited: 0x598)
class UBreakthroughRedeployPointView : public URedeployMarkerBaseWidget {
public:

	struct UImage* CampIcon; // 0x598(0x08)
	struct UImage* CampBg; // 0x5a0(0x08)
	struct UCanvasPanel* RootCanvasPanel; // 0x5a8(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x5b0(0x08)
	struct UWidgetAnimation* Anima_AutoOut; // 0x5b8(0x08)
	struct FLinearColor Blue; // 0x5c0(0x10)
	struct FLinearColor Red; // 0x5d0(0x10)
	struct FLinearColor IconGray; // 0x5e0(0x10)
	struct FLinearColor BGGray; // 0x5f0(0x10)
	struct UPaperSprite* Camp0Img; // 0x600(0x08)
	struct UPaperSprite* Camp0BgImg; // 0x608(0x08)
	struct UPaperSprite* Camp1Img; // 0x610(0x08)
	struct UPaperSprite* Camp1BgImg; // 0x618(0x08)
	struct UBreakthroughRedeployPointVehicleHub* BreakthroughRedeployPointVehicleHub; // 0x620(0x08)
	float ReDeployDelayShowVehicleHubItem; // 0x628(0x04)
	bool PointSelected; // 0x62c(0x01)
	bool CanShowHub; // 0x62d(0x01)
	char pad_62E[0x2]; // 0x62e(0x02)
	struct AActor* CacheSpawnAreaHub; // 0x630(0x08)
	struct FTimerHandle DelayShowHubItemHandle; // 0x638(0x08)
	bool HasSetIconAndColor; // 0x640(0x01)
	bool HasSetCampIconColor; // 0x641(0x01)
	char pad_642[0x2]; // 0x642(0x02)
	float CampIconOpacity; // 0x644(0x04)

	void ShowBubble(bool Show); // Function Breakthrough.BreakthroughRedeployPointView.ShowBubble // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeploySectorAnchorPointView
// Size: 0x5c8 (Inherited: 0x598)
class UBreakthroughRedeploySectorAnchorPointView : public URedeployMarkerBaseWidget {
public:

	struct UBreakthroughSectorBattleProgressSectorAnchorInfo* WBP_TipsPro_Sectorpoint; // 0x598(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x5a0(0x08)
	struct UBreakthroughRedeployPointVehicleHub* BreakthroughRedeployPointVehicleHub; // 0x5a8(0x08)
	float ReDeployDelayShowVehicleHubItem; // 0x5b0(0x04)
	bool PointSelected; // 0x5b4(0x01)
	bool CanShowHub; // 0x5b5(0x01)
	char pad_5B6[0x2]; // 0x5b6(0x02)
	struct AActor* CacheSpawnAreaHub; // 0x5b8(0x08)
	struct FTimerHandle DelayShowHubItemHandle; // 0x5c0(0x08)

	void SetPointSelected(bool seelected); // Function Breakthrough.BreakthroughRedeploySectorAnchorPointView.SetPointSelected // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployStaticPointView
// Size: 0x610 (Inherited: 0x598)
class UBreakthroughRedeployStaticPointView : public URedeployMarkerBaseWidget {
public:

	struct UDFImage* Icon; // 0x598(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x5a0(0x08)
	struct TMap<char, struct FSoftObjectPath> StaticPointIconMap; // 0x5a8(0x50)
	int32_t ComplexStaticPointType; // 0x5f8(0x04)
	struct FColor ColorDefault; // 0x5fc(0x04)
	struct FColor ColorEnemy; // 0x600(0x04)
	struct FColor ColorTeam; // 0x604(0x04)
	struct FColor ColorCamp; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughRedeployTeamMatePoint
// Size: 0x640 (Inherited: 0x598)
class UBreakthroughRedeployTeamMatePoint : public URedeployMarkerBaseWidget {
public:

	struct UCanvasPanel* ViewAnglePanel; // 0x598(0x08)
	struct UClass* URedeployUIElementViewClass; // 0x5a0(0x08)
	struct UWidget* NormalPanel; // 0x5a8(0x08)
	struct UDFImage* TeamPlayerIcon; // 0x5b0(0x08)
	struct FString TeamPlayerName; // 0x5b8(0x10)
	struct AGPPlayerState* TeammatePlayerState; // 0x5c8(0x08)
	struct UDFImage* DieIcon; // 0x5d0(0x08)
	int32_t DeathShowTime; // 0x5d8(0x04)
	bool IsDying; // 0x5dc(0x01)
	bool IsBattling; // 0x5dd(0x01)
	char pad_5DE[0x2]; // 0x5de(0x02)
	float DeathTime; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	uint64_t Uin; // 0x5e8(0x08)
	int32_t PlayerIndex; // 0x5f0(0x04)
	int32_t ArmedForceID; // 0x5f4(0x04)
	struct FTimerHandle TimerHandle_UpdateBattling; // 0x5f8(0x08)
	float UpdateBattlingInterval; // 0x600(0x04)
	char pad_604[0x4]; // 0x604(0x04)
	struct URedeployUIElementView* RedeployUIElementView; // 0x608(0x08)
	struct UCanvasPanel* RootCanvasPanel; // 0x610(0x08)
	struct UDFImage* ArmsImage; // 0x618(0x08)
	float UpdateInterval; // 0x620(0x04)
	float ConfigBattlingKeepShowTime; // 0x624(0x04)
	float BattlingKeepShowTime; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct FString MapName; // 0x630(0x10)

	void UpdatePlayerArmsIcon(); // Function Breakthrough.BreakthroughRedeployTeamMatePoint.UpdatePlayerArmsIcon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.BreakthroughVehiclePointView
// Size: 0x618 (Inherited: 0x598)
class UBreakthroughVehiclePointView : public URedeployMarkerBaseWidget {
public:

	struct UDFImage* MoveableImage; // 0x598(0x08)
	struct FName MoveableImageWidgetName; // 0x5a0(0x08)
	struct UPaperSprite* Camp0Img; // 0x5a8(0x08)
	struct UPaperSprite* Camp1Img; // 0x5b0(0x08)
	struct UPaperSprite* DeadImg; // 0x5b8(0x08)
	struct UPaperSprite* FireImg; // 0x5c0(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x5c8(0x08)
	int32_t VehicleId; // 0x5d0(0x04)
	bool IsFull; // 0x5d4(0x01)
	bool IsDeadth; // 0x5d5(0x01)
	bool isSameTeam; // 0x5d6(0x01)
	char pad_5D7[0x1]; // 0x5d7(0x01)
	struct FString ShowPlayerName; // 0x5d8(0x10)
	bool IsGuideVehicle; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	struct UWidget* DirectionArrow; // 0x5f0(0x08)
	struct FName DirectionArrowWidgetName; // 0x5f8(0x08)
	bool bConfigVehicleShowInEdgeWhenRedeploy; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	float SyncVehicleDataTime; // 0x604(0x04)
	int32_t OldCamp; // 0x608(0x04)
	int32_t OldTeamID; // 0x60c(0x04)
	bool CanBeClick; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	int32_t InQuadListColorType; // 0x614(0x04)

	void BP_SetColorType(int32_t& ColorType); // Function Breakthrough.BreakthroughVehiclePointView.BP_SetColorType // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Breakthrough.MapRandomMarker
// Size: 0x598 (Inherited: 0x598)
class UMapRandomMarker : public URedeployMarkerBaseWidget {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
