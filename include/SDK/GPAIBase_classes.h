
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPAIBase.AIAdvancedPerceptionComponent
// Size: 0x298 (Inherited: 0x1d0)
class UAIAdvancedPerceptionComponent : public UAIPerceptionComponent {
public:

	bool bUseTagPreference; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FAttractionPerceptionFactor AttractedFactor; // 0x1d4(0x08)
	char pad_1DC[0x2c]; // 0x1dc(0x2c)
	struct TMap<struct FName, float> TagPriorities; // 0x208(0x50)
	struct FVisionConeConfig NoUse_ForKismetInspectorBug; // 0x258(0x38)
	char pad_290[0x8]; // 0x290(0x08)

	bool SetAttracted(bool bActtracted); // Function GPAIBase.AIAdvancedPerceptionComponent.SetAttracted // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AIBPLib
// Size: 0x30 (Inherited: 0x30)
class UAIBPLib : public UBlueprintFunctionLibrary {
public:


	void STATIC_SetBDVector(struct UBlackboardComponent* BlackboardComp, struct FName Key, struct FVector Value); // Function GPAIBase.AIBPLib.SetBDVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPAIFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UGPAIFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_TestCoverToLocationVisibility(struct UNZCoverPoint* FromCover, struct FVector ToLocation, bool bDrawDebug); // Function GPAIBase.GPAIFunctionLibrary.TestCoverToLocationVisibility // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AIJob
// Size: 0x58 (Inherited: 0x30)
class UAIJob : public UObject {
public:

	float JobOverTime; // 0x30(0x04)
	float JobWaitOverTime; // 0x34(0x04)
	int32_t MaxAINum; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct AAIController*> ExecutorControllers; // 0x40(0x10)
	enum class EAIJobType JobType; // 0x50(0x01)
	enum class EAIJobState State; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void Update(); // Function GPAIBase.AIJob.Update // (Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.JobFilterBase
// Size: 0x30 (Inherited: 0x30)
class UJobFilterBase : public UObject {
public:


	struct UAIJob* GetJob_Implementation(struct AAIController* AIController, struct TArray<struct UAIJob*>& Jobs); // Function GPAIBase.JobFilterBase.GetJob_Implementation // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AIJobManager
// Size: 0x3f8 (Inherited: 0x378)
class AAIJobManager : public ALevelSubsystem {
public:

	struct TArray<struct FAIJobList> ActivatedJobs; // 0x378(0x10)
	char pad_388[0x50]; // 0x388(0x50)
	struct TArray<struct FAIJobList> ProducedJobs; // 0x3d8(0x10)
	struct TArray<struct FAIJobSetting> AIJobSettings; // 0x3e8(0x10)

	void UpdateJobs(); // Function GPAIBase.AIJobManager.UpdateJobs // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AILayoutConfigActor
// Size: 0x3c8 (Inherited: 0x378)
class AAILayoutConfigActor : public AActor {
public:

	struct FString JsonConfig; // 0x378(0x10)
	struct TArray<struct FExclusionTag> ExcluList; // 0x388(0x10)
	char pad_398[0x30]; // 0x398(0x30)

	void STATIC_LoadAILayoutCustom(struct UObject* WorldContextObject, struct TArray<struct FString>& LevelList, struct FString MapName); // Function GPAIBase.AILayoutConfigActor.LoadAILayoutCustom // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AIThreatWeightsComponent
// Size: 0x908 (Inherited: 0x100)
class UAIThreatWeightsComponent : public UActorComponent {
public:

	char pad_100[0x800]; // 0x100(0x800)
	float DefaultTypeWeight; // 0x900(0x04)
	float DefaultCampWeight; // 0x904(0x04)

	void SetThreatTypeWeight(char ThreatType, float Weight); // Function GPAIBase.AIThreatWeightsComponent.SetThreatTypeWeight // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.PointGrid
// Size: 0x380 (Inherited: 0x378)
class APointGrid : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)

	void STATIC_ThreatAreaClear(int64_t& AreaToken, struct UObject* WorldContext); // Function GPAIBase.PointGrid.ThreatAreaClear // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AISense_SightEx
// Size: 0x160 (Inherited: 0x88)
class UAISense_SightEx : public UAISense {
public:

	char pad_88[0xb0]; // 0x88(0xb0)
	int32_t MaxTracesPerTick; // 0x138(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x13c(0x04)
	double MaxTimeSlicePerTick; // 0x140(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	float MaxQueryImportance; // 0x150(0x04)
	float SightLimitQueryImportance; // 0x154(0x04)
	char pad_158[0x8]; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AISenseConfig_SightEx
// Size: 0x70 (Inherited: 0x50)
class UAISenseConfig_SightEx : public UAISenseConfig {
public:

	struct UClass* Implementation; // 0x50(0x08)
	struct TArray<struct FVisionConeConfig> VisionConeConfigs; // 0x58(0x10)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x68(0x04)
	bool bUsePawnRot; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.ThreatAreaInterface
// Size: 0x30 (Inherited: 0x30)
class UThreatAreaInterface : public UInterface {
public:


	enum class EAIThreatAreaType GetThreatAreaType(); // Function GPAIBase.ThreatAreaInterface.GetThreatAreaType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AIThreatAreaSystem
// Size: 0x390 (Inherited: 0x378)
class AAIThreatAreaSystem : public ALevelSubsystem {
public:

	struct TArray<struct FAIThreatArea> ThreatAreaList; // 0x378(0x10)
	float UpdateInterval; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)

	void Tick(float DeltaSeconds); // Function GPAIBase.AIThreatAreaSystem.Tick // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.ThreatSourceInterface
// Size: 0x30 (Inherited: 0x30)
class UThreatSourceInterface : public UInterface {
public:


	float GetThreat_Sight(); // Function GPAIBase.ThreatSourceInterface.GetThreat_Sight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AIThreatRecordComponent
// Size: 0x208 (Inherited: 0x100)
class UAIThreatRecordComponent : public UActorComponent {
public:

	struct TMap<struct TWeakObjectPtr<struct ACHARACTER>, struct FCharacterThreatRecord> ThreadRecordMap; // 0x100(0x50)
	struct TWeakObjectPtr<struct ACHARACTER> HighestThreatKey; // 0x150(0x08)
	struct TWeakObjectPtr<struct ACHARACTER> HighestSightThreatKey; // 0x158(0x08)
	struct TWeakObjectPtr<struct ACHARACTER> HighestHearingThreatKey; // 0x160(0x08)
	struct TWeakObjectPtr<struct ACHARACTER> HighestHurtThreatKey; // 0x168(0x08)
	char pad_170[0x10]; // 0x170(0x10)
	struct FAIThreatConfig ThreatConfig; // 0x180(0x40)
	struct FAIThreatConfig ThreatConfigDefaultSetting; // 0x1c0(0x40)
	struct AAIController* OwnerController; // 0x200(0x08)

	void RecordPerceptionThreat(struct AAIController* perceptionOwner, struct ACHARACTER* threatRelatedCharacter, struct FAIStimulus Stimulus); // Function GPAIBase.AIThreatRecordComponent.RecordPerceptionThreat // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.BTComposite_RandomSelect
// Size: 0xa8 (Inherited: 0x98)
class UBTComposite_RandomSelect : public UBTCompositeNode {
public:

	struct TArray<int32_t> PercentageOfBranch; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.BTComposite_SelectByBBKeyValue
// Size: 0xd0 (Inherited: 0x98)
class UBTComposite_SelectByBBKeyValue : public UBTCompositeNode {
public:

	struct FBlackboardKeySelector SpecKey; // 0x98(0x28)
	struct TArray<float> SpecKeySection; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.DynamicBlackboardComponent
// Size: 0x208 (Inherited: 0x1f8)
class UDynamicBlackboardComponent : public UBlackboardComponent {
public:

	struct TArray<struct FBlackboardDataFrame> Frames; // 0x1f8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.AISpecificBehaviorFlagsInterface
// Size: 0x30 (Inherited: 0x30)
class UAISpecificBehaviorFlagsInterface : public UInterface {
public:


	bool ShouldRecheckBTbySpecificBehaviorType(); // Function GPAIBase.AISpecificBehaviorFlagsInterface.ShouldRecheckBTbySpecificBehaviorType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPAIBehaviorTreeComponent
// Size: 0x330 (Inherited: 0x2b0)
class UGPAIBehaviorTreeComponent : public UBehaviorTreeComponent {
public:

	enum class EGPSpecificBehaviorType SpecificBehaviorType; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TMap<enum class EGPSpecificBehaviorType, struct FGPBehaviorFactor> BehaviorFactorMap; // 0x2b8(0x50)
	char pad_308[0x28]; // 0x308(0x28)

	void SetPathfindCommand(struct FAIPathFindingResult& Command); // Function GPAIBase.GPAIBehaviorTreeComponent.SetPathfindCommand // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPAI_CoverPointAnimSetting
// Size: 0x180 (Inherited: 0x100)
class UGPAI_CoverPointAnimSetting : public UActorComponent {
public:

	enum class ECoverPointCondition CoverPointCodition; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float LastEnterCoverCompleteTime; // 0x104(0x04)
	struct UDataTable* EnterCoverAnimTable; // 0x108(0x08)
	struct FCoverPointAnimInfo NoUse_ForKismetInspectorBug; // 0x110(0x10)
	struct UAnimMontage* RunningIdleMontage; // 0x120(0x08)
	bool IsLerpingToCoverPoint; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float CurrentLerpToCoverPointTime; // 0x12c(0x04)
	float TotalLerpToCoverPointTime; // 0x130(0x04)
	struct FVector LerpingToCoverLocation; // 0x134(0x0c)
	struct FVector LerpingToCoverDirection; // 0x140(0x0c)
	struct FVector LerpingToCoverStartLocation; // 0x14c(0x0c)
	char pad_158[0x8]; // 0x158(0x08)
	struct FQuat LerpingToCoverStartRotation; // 0x160(0x10)
	struct ACHARACTER* OwnerCharacter; // 0x170(0x08)
	char pad_178[0x8]; // 0x178(0x08)

	void SetCharacterCoverPointCondition(enum class ECoverPointCondition Condition); // Function GPAIBase.GPAI_CoverPointAnimSetting.SetCharacterCoverPointCondition // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPAIMontageMappingTemplate
// Size: 0x40 (Inherited: 0x30)
class UGPAIMontageMappingTemplate : public UObject {
public:

	struct TArray<struct FGPAIMontageMapping> MontageMapping; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPAI_PlayMontageCallbackProxy
// Size: 0xb8 (Inherited: 0x30)
class UGPAI_PlayMontageCallbackProxy : public UObject {
public:

	struct UGPAI_CoverPointAnimSetting* coverAnimSetting; // 0x30(0x08)
	/*struct FMulticastInlineDelegate*/char OnCompleted[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnBlendOut[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnInterrupted[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotifyBegin[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotifyEnd[0x10]; // 0x78(0x10)
	char pad_88[0x30]; // 0x88(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function GPAIBase.GPAI_PlayMontageCallbackProxy.OnNotifyEndReceived // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_MoveByPath
// Size: 0xb0 (Inherited: 0x78)
class UGPBTTask_MoveByPath : public UBTTaskNode {
public:

	float CustomAcceptableRadius; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector TargetEnemyKey; // 0x80(0x28)
	bool FaceOnTarget; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTDecorator_SpecificBehaviorCheck
// Size: 0x70 (Inherited: 0x70)
class UGPBTDecorator_SpecificBehaviorCheck : public UBTDecorator {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryInstanceBPWrapper
// Size: 0x80 (Inherited: 0x80)
class UGPEnvQueryInstanceBPWrapper : public UEnvQueryInstanceBlueprintWrapper {
public:


	struct TArray<struct UObject*> GetResultsAsObjects(); // Function GPAIBase.GPEnvQueryInstanceBPWrapper.GetResultsAsObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryTest_AIDensity
// Size: 0x228 (Inherited: 0x200)
class UGPEnvQueryTest_AIDensity : public UEnvQueryTest {
public:

	enum class EAIDensityRatingType AIDensityMode; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UClass* CheckActorType; // 0x208(0x08)
	struct UClass* CheckCenter; // 0x210(0x08)
	float CheckRadius; // 0x218(0x04)
	enum class EAIDensityDistanceType DistanceCalcType; // 0x21c(0x01)
	char pad_21D[0x3]; // 0x21d(0x03)
	struct UCurveFloat* DistanceScoreCurve; // 0x220(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryTest_CoverDirectionCheck
// Size: 0x208 (Inherited: 0x200)
class UGPEnvQueryTest_CoverDirectionCheck : public UEnvQueryTest {
public:

	struct UClass* DistanceTo; // 0x200(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryTest_Distance_CurveScore
// Size: 0x218 (Inherited: 0x200)
class UGPEnvQueryTest_Distance_CurveScore : public UEnvQueryTest {
public:

	enum class EAIDistanceType TestDistanceMode; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UClass* DistanceTo; // 0x208(0x08)
	struct UCurveFloat* ScoreCurve; // 0x210(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryTest_PathTest
// Size: 0x298 (Inherited: 0x200)
class UGPEnvQueryTest_PathTest : public UEnvQueryTest {
public:

	enum class EGPEnvTestPathTest TestMode; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UClass* Context; // 0x208(0x08)
	struct FAIDataProviderBoolValue PathFromContext; // 0x210(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x248(0x38)
	struct UClass* FilterClass; // 0x280(0x08)
	struct FVector NavProjectExtent; // 0x288(0x0c)
	char pad_294[0x4]; // 0x294(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryTest_ThreatScore
// Size: 0x208 (Inherited: 0x200)
class UGPEnvQueryTest_ThreatScore : public UEnvQueryTest {
public:

	enum class EGPThreatRatingType ThreatRateMode; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryTest_VisibilityCheck
// Size: 0x228 (Inherited: 0x200)
class UGPEnvQueryTest_VisibilityCheck : public UEnvQueryTest {
public:

	enum class EAIVisibilityCheckType VisibilityCheckMode; // 0x200(0x01)
	enum class EAIVisibilityRatingType VisibilityRateMode; // 0x201(0x01)
	char pad_202[0x6]; // 0x202(0x06)
	struct UClass* InputContext; // 0x208(0x08)
	float ContextVerticalOffset; // 0x210(0x04)
	float CheckPointVerticalOffset; // 0x214(0x04)
	bool bIgnoreVisibilityTest; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	float FixDistanceRange; // 0x21c(0x04)
	float FixScoreWithinDistance; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.NZCoverGenerator
// Size: 0x420 (Inherited: 0x378)
class ANZCoverGenerator : public AActor {
public:

	bool ForceRefresh; // 0x378(0x01)
	bool bRegenerateAtBeginPlay; // 0x379(0x01)
	bool bRegenerateAtNavigationRebuilt; // 0x37a(0x01)
	char pad_37B[0x1]; // 0x37b(0x01)
	float SegmentLength; // 0x37c(0x04)
	float MaxSegDist; // 0x380(0x04)
	float CharHeight; // 0x384(0x04)
	float StepDistTrace; // 0x388(0x04)
	float TraceLength; // 0x38c(0x04)
	float MinSpaceBetweenValidPoints; // 0x390(0x04)
	float SphereSize; // 0x394(0x04)
	float WidthMaxAgent; // 0x398(0x04)
	float HeightMaxCrouching; // 0x39c(0x04)
	float HeightMaxStanding; // 0x3a0(0x04)
	float OffsetSideAim; // 0x3a4(0x04)
	float OffsetSideAimCrouch; // 0x3a8(0x04)
	float OffsetFrontAim; // 0x3ac(0x04)
	float SideMargin; // 0x3b0(0x04)
	bool bCoverOnWallEnds; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	float HeightFrontShootPoint; // 0x3b8(0x04)
	bool bGlobalRange; // 0x3bc(0x01)
	enum class ECollisionChannel TraceChannl; // 0x3bd(0x01)
	bool DebugDrawAllBusyPoints; // 0x3be(0x01)
	bool DebugDrawAllPoints; // 0x3bf(0x01)
	bool ShowCoversAfterBuild; // 0x3c0(0x01)
	bool bDraw1AllSegmentPointsTested; // 0x3c1(0x01)
	bool bDraw2SegmentPointsWithinBounds; // 0x3c2(0x01)
	bool bDraw3SimpleCoverGeometryTest; // 0x3c3(0x01)
	bool bDraw4SecondPassTracesSides; // 0x3c4(0x01)
	bool bDraw4SecondPassTracesSidesFrontAndBottom; // 0x3c5(0x01)
	bool bDraw5SecondPassArrows; // 0x3c6(0x01)
	bool DebugDisplayLog; // 0x3c7(0x01)
	float DebugDistance; // 0x3c8(0x04)
	bool bDrawOctreeBounds; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	float DebugBusyRedShowHeight; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct FNZCoverPointInfo> CoverPointData; // 0x3d8(0x10)
	float OccupyDistSequared; // 0x3e8(0x04)
	float PostOccupyDistSequared; // 0x3ec(0x04)
	char pad_3F0[0x8]; // 0x3f0(0x08)
	struct TArray<struct UNZCoverPoint*> AllNZCoverPoints; // 0x3f8(0x10)
	struct TArray<struct UNZCoverPoint*> NZCoverPointsCurrentlyUsed; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)

	void ReleaseCover(struct UNZCoverPoint* NZCoverPoint); // Function GPAIBase.NZCoverGenerator.ReleaseCover // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.NZCoverGenMgr
// Size: 0x48 (Inherited: 0x38)
class UNZCoverGenMgr : public UWorldSubsystem {
public:

	struct TArray<struct ANZCoverGenerator*> Generators; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.CoverOccupierInterface
// Size: 0x30 (Inherited: 0x30)
class UCoverOccupierInterface : public UInterface {
public:


	void StopCoverPointMontage(struct UAnimMontage* montageToStop); // Function GPAIBase.CoverOccupierInterface.StopCoverPointMontage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.NZCoverPoint
// Size: 0xa8 (Inherited: 0x30)
class UNZCoverPoint : public UObject {
public:

	struct FVector Location; // 0x30(0x0c)
	struct FVector _DirectionToWall; // 0x3c(0x0c)
	struct FRotator RotatorXToWall; // 0x48(0x0c)
	bool bLeftCoverStanding; // 0x54(0x01)
	bool bRightCoverStanding; // 0x55(0x01)
	bool bLeftCoverCrouched; // 0x56(0x01)
	bool bRightCoverCrouched; // 0x57(0x01)
	bool bFrontCoverCrouched; // 0x58(0x01)
	enum class ECoverType CoverType; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	/*struct TSoftObjectPtr<AActor>*/char CoverActor[0x28]; // 0x60(0x28)
	char pad_88[0x8]; // 0x88(0x08)
	struct AController* OccupiedBy; // 0x90(0x08)
	enum class ECoverOccupyState OccupyState; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct AActor* HoldOwner; // 0xa0(0x08)

	bool TryOccupyCover(struct AController* Controller); // Function GPAIBase.NZCoverPoint.TryOccupyCover // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.NZCoverRangeVolume
// Size: 0x3d8 (Inherited: 0x3b0)
class ANZCoverRangeVolume : public AVolume {
public:

	bool bInclude; // 0x3b0(0x01)
	bool bDisable; // 0x3b1(0x01)
	bool bDebug; // 0x3b2(0x01)
	char pad_3B3[0x25]; // 0x3b3(0x25)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTaskBase
// Size: 0x80 (Inherited: 0x78)
class UGPBTTaskBase : public UBTTaskNode {
public:

	float MaxWaitTime; // 0x78(0x04)
	bool bShowDebugLog; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)

	float GetCurrentGameTime(); // Function GPAIBase.GPBTTaskBase.GetCurrentGameTime // (Final|Native|Protected|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryItemType_ObjectBase
// Size: 0x38 (Inherited: 0x38)
class UGPEnvQueryItemType_ObjectBase : public UEnvQueryItemType_VectorBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEQSGenerator_RoundArea
// Size: 0xc0 (Inherited: 0x88)
class UGPEQSGenerator_RoundArea : public UEnvQueryGenerator_ProjectedPoints {
public:

	enum class EGeneratorIncludeType GeneratePointType; // 0x88(0x01)
	bool bCenterPointIncluded; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float RoundRadius; // 0x8c(0x04)
	char RoundLayerNum; // 0x90(0x01)
	char InitNodeNum; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float IncreaseRate; // 0x94(0x04)
	struct UClass* GenerateAround; // 0x98(0x08)
	bool bAvoidClosePathToTarget; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UClass* AvoidTargetCenter; // 0xa8(0x08)
	float AvoidMinPathDistance; // 0xb0(0x04)
	bool bDebug; // 0xb4(0x01)
	char pad_B5[0xb]; // 0xb5(0x0b)

	bool ShouldAvoidPoint(struct FVector& avoidTargetPoint, struct FVector& testingPoint); // Function GPAIBase.GPEQSGenerator_RoundArea.ShouldAvoidPoint // (Final|Native|Private|HasOutParms|HasDefaults|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_Blueprint
// Size: 0xb0 (Inherited: 0x80)
class UGPBTTask_Blueprint : public UGPBTTaskBase {
public:

	struct AAIController* AIOwner; // 0x80(0x08)
	struct AActor* ActorOwner; // 0x88(0x08)
	char pad_90[0x18]; // 0x90(0x18)
	char bShowPropertyDetails : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t requestId); // Function GPAIBase.GPBTTask_Blueprint.SetFinishOnMessageWithId // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_EnterCoverPoint
// Size: 0xc8 (Inherited: 0x80)
class UGPBTTask_EnterCoverPoint : public UGPBTTaskBase {
public:

	struct FBlackboardKeySelector TargetCoverPointKey; // 0x80(0x28)
	int32_t SquaredDistToPlayEnterMontage; // 0xa8(0x04)
	bool UseControllerRotation; // 0xac(0x01)
	bool bRotationCompositeVelocity; // 0xad(0x01)
	bool bClearFocusTarget; // 0xae(0x01)
	char pad_AF[0x1]; // 0xaf(0x01)
	float MaxBlockTime; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UClass* NavFilter; // 0xb8(0x08)
	bool bDrawDebugLine; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_FocusToActor
// Size: 0xb0 (Inherited: 0x80)
class UGPBTTask_FocusToActor : public UGPBTTaskBase {
public:

	struct FBlackboardKeySelector TargetKey; // 0x80(0x28)
	bool bFocusTarget; // 0xa8(0x01)
	bool bCharacterMovementUseControllerRotation; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_MoveToActor
// Size: 0x130 (Inherited: 0x80)
class UGPBTTask_MoveToActor : public UGPBTTaskBase {
public:

	struct FBlackboardKeySelector TargetKey; // 0x80(0x28)
	float CustomAcceptableRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FBlackboardKeySelector AcceptableRadiusKey; // 0xb0(0x28)
	bool UseControllerRotation; // 0xd8(0x01)
	bool bRotationCompositeVelocity; // 0xd9(0x01)
	bool bFocusTarget; // 0xda(0x01)
	bool bExpireTimeAsSuccess; // 0xdb(0x01)
	bool bClearFocusTarget; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float MaxBlockTime; // 0xe0(0x04)
	bool bMoveAutoOpenDoor; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UClass* NavFilter; // 0xe8(0x08)
	bool bDrawDebugLine; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct AActor* TargetActor; // 0xf8(0x08)
	char pad_100[0x30]; // 0x100(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_RunDynamicBehaviorBase
// Size: 0x88 (Inherited: 0x80)
class UGPBTTask_RunDynamicBehaviorBase : public UGPBTTaskBase {
public:

	struct UBehaviorTree* BehaviorAsset; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEnvQueryItemType_CommonPoint
// Size: 0x38 (Inherited: 0x38)
class UGPEnvQueryItemType_CommonPoint : public UGPEnvQueryItemType_ObjectBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPEQSGenerator_RoundAreaEx
// Size: 0xc8 (Inherited: 0xc0)
class UGPEQSGenerator_RoundAreaEx : public UGPEQSGenerator_RoundArea {
public:

	float CenterOffset; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_RunBlackboardBehavior
// Size: 0xb8 (Inherited: 0x88)
class UGPBTTask_RunBlackboardBehavior : public UGPBTTask_RunDynamicBehaviorBase {
public:

	struct FBlackboardKeySelector BehaviorBBKey; // 0x88(0x28)
	struct UBehaviorTree* DefaultBehavior; // 0xb0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAIBase.GPBTTask_SpecificBehaviorBase
// Size: 0xa0 (Inherited: 0x88)
class UGPBTTask_SpecificBehaviorBase : public UGPBTTask_RunDynamicBehaviorBase {
public:

	struct TArray<struct FGPSpecificBehaviorTreeSetting> SpecificBehaviorList; // 0x88(0x10)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
