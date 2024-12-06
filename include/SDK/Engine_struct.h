
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Engine.ETextGender
enum class ETextGender : UINT8 {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : UINT8 {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : UINT8 {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : UINT8 {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : UINT8 {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Enum Engine.EComponentReplicationFlags
enum class EComponentReplicationFlags : UINT8 {
	Rep_Always = 0,
	Rep_OwnerOnly = 1,
	Rep_SimulateOnly = 2,
	Rep_ToBeObservedOnly = 3,
	Rep_OwnerAndSimulate = 4,
	Rep_OwnerAndOB = 5,
	Rep_SimulteAndOB = 6,
	Rep_MAX = 7
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : UINT8 {
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : UINT8 {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : UINT8 {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Enum Engine.ETeleportType
enum class ETeleportType : UINT8 {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	SkipSkeletalMeshUpdateChildComponents = 3,
	ETeleportType_MAX = 4
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : UINT8 {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Enum Engine.EMovementMode
enum class EMovementMode : UINT8 {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : UINT8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	NonExistantPackage = 11,
	CorruptedPacket = 12,
	ENetworkFailure_MAX = 13
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : UINT8 {
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : UINT8 {
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	EScreenOrientation_MAX = 7
};

// Enum Engine.EApplicationState
enum class EApplicationState : UINT8 {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : UINT8 {
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : UINT8 {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : UINT8 {
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : UINT8 {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : UINT8 {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : UINT8 {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : UINT8 {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Enum Engine.EMaterialAtlasUsage
enum class EMaterialAtlasUsage : UINT8 {
	None = 0,
	Usage0 = 1,
	Usage1 = 2,
	Usage2 = 3,
	Usage3 = 4,
	EMaterialAtlasUsage_MAX = 5
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : UINT8 {
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : UINT8 {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags_MAX = 4
};

// Enum Engine.EInputEvent
enum class EInputEvent : UINT8 {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

// Enum Engine.ENetRole
enum class ENetRole : UINT8 {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : UINT8 {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : UINT8 {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : UINT8 {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : UINT8 {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_DormantAll_KeelChannel = 5,
	DORM_MAX = 6
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : UINT8 {
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : UINT8 {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : UINT8 {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : UINT8 {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : UINT8 {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : UINT8 {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : UINT8 {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : UINT8 {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Enum Engine.EDetailMode
enum class EDetailMode : UINT8 {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : UINT8 {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : UINT8 {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : UINT8 {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : UINT8 {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : UINT8 {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : UINT8 {
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 3,
	AACF_DriveMaterial_DEPRECATED = 4,
	AACF_Metadata = 5,
	AACF_DriveTrack = 6,
	AACF_Disabled = 7,
	AACF_MAX = 8
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : UINT8 {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : UINT8 {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : UINT8 {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : UINT8 {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : UINT8 {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : UINT8 {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : UINT8 {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : UINT8 {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : UINT8 {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : UINT8 {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : UINT8 {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Enum Engine.EInertializationState
enum class EInertializationState : UINT8 {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : UINT8 {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : UINT8 {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Enum Engine.ECopyType
enum class ECopyType : UINT8 {
	MemCopy = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	ECopyType_MAX = 4
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : UINT8 {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : UINT8 {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : UINT8 {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : UINT8 {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : UINT8 {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : UINT8 {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : UINT8 {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Enum Engine.EComponentType
enum class EComponentType : UINT8 {
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11
};

// Enum Engine.EAxisOption
enum class EAxisOption : UINT8 {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : UINT8 {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : UINT8 {
	MaxWeight = 0,
	NormalizeByWeight = 1,
	BlendByWeight = 2,
	ECurveBlendOption_MAX = 3
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : UINT8 {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : UINT8 {
	NoFiltering = 0,
	LOD = 1,
	AnimLOD = 2,
	ENotifyFilterType_MAX = 3
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : UINT8 {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : UINT8 {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : UINT8 {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : UINT8 {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Enum Engine.EPrimaryAssetPakRule
enum class EPrimaryAssetPakRule : UINT8 {
	Default = 0,
	Necessary = 1,
	Auto = 2,
	Options = 3,
	EPrimaryAssetPakRule_MAX = 4
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : UINT8 {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : UINT8 {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : UINT8 {
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : UINT8 {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : UINT8 {
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : UINT8 {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : UINT8 {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : UINT8 {
	Low16000Hz = 0,
	Normal24000Hz = 1,
	EVoiceSampleRate_MAX = 2
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : UINT8 {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : UINT8 {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : UINT8 {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : UINT8 {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : UINT8 {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : UINT8 {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : UINT8 {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : UINT8 {
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Enum Engine.EDOFMode
enum class EDOFMode : UINT8 {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : UINT8 {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : UINT8 {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : UINT8 {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

// Enum Engine.EBrushType
enum class EBrushType : UINT8 {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Enum Engine.ECsgOper
enum class ECsgOper : UINT8 {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : UINT8 {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : UINT8 {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : UINT8 {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : UINT8 {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : UINT8 {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : UINT8 {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : UINT8 {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : UINT8 {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : UINT8 {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : UINT8 {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : UINT8 {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : UINT8 {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : UINT8 {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : UINT8 {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : UINT8 {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : UINT8 {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : UINT8 {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : UINT8 {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : UINT8 {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : UINT8 {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : UINT8 {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : UINT8 {
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6
};

// Enum Engine.EGraphType
enum class EGraphType : UINT8 {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Enum Engine.ETransitionType
enum class ETransitionType : UINT8 {
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : UINT8 {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : UINT8 {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 7,
	VMI_LightmapDensity = 8,
	VMI_LitLightmapDensity = 9,
	VMI_ReflectionOverride = 10,
	VMI_VisualizeBuffer = 11,
	VMI_StationaryLightOverlap = 12,
	VMI_CollisionPawn = 13,
	VMI_CollisionVisibility = 14,
	VMI_LODColoration = 15,
	VMI_QuadOverdraw = 16,
	VMI_PrimitiveDistanceAccuracy = 17,
	VMI_MeshUVDensityAccuracy = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration = 20,
	VMI_GroupLODColoration = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution = 23,
	VMI_PathTracing = 24,
	VMI_RayTracingDebug = 25,
	VMI_PRT = 26,
	VMI_PRT_Normal = 27,
	VMI_PRT_PbCheck = 28,
	VMI_LIGHT_Check = 29,
	VMI_MeshTextureDensity = 30,
	VMI_RayTracingCausticsDebug = 31,
	VMI_Max = 32,
	VMI_Unknown = 33
};

// Enum Engine.ENetMode
enum class ENetMode : UINT8 {
	NM_Standalone = 0,
	NM_DedicatedServer = 1,
	NM_ListenServer = 2,
	NM_Client = 3,
	NM_MAX = 4
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : UINT8 {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9
};

// Enum Engine.ETravelType
enum class ETravelType : UINT8 {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : UINT8 {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Enum Engine.ETickListType
enum class ETickListType : UINT8 {
	AnyTickList = 0,
	EnabledTickList = 1,
	CoolingDownTickList = 2,
	DisabledTickList = 3,
	RescheduleTickList = 4,
	NewlySpawnedTickList = 5,
	MaxTypeCount = 6,
	ETickListType_MAX = 7
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : UINT8 {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : UINT8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};

// Enum Engine.EPrebakeShadowCascadeIndex
enum class EPrebakeShadowCascadeIndex : UINT8 {
	Cascade_None = 0,
	Cascade_1 = 1,
	Cascade_2 = 2,
	Cascade_3 = 3,
	Cascade_4 = 4,
	Cascade_MAX = 5
};

// Enum Engine.ELODShadowBiasType
enum class ELODShadowBiasType : UINT8 {
	LOD_None = 0,
	LOD_1 = 1,
	LOD_2 = 2,
	LOD_3 = 3,
	LOD_4 = 4,
	LOD_5 = 5,
	LOD_6 = 6,
	LOD_7 = 7,
	LOD_8 = 8,
	LOD_MAX = 9
};

// Enum Engine.EMaterialStencilOpType
enum class EMaterialStencilOpType : UINT8 {
	MSOP_None = 0,
	MSOP_Equal = 1,
	MSOP_NoEqual = 2,
	MSOP_Always = 3,
	MSOP_MAX = 4
};

// Enum Engine.ELightMapAllocationPolicy
enum class ELightMapAllocationPolicy : UINT8 {
	LMAP_FixTexelLengthRatio = 0,
	LMAP_FixLightMapCount = 1,
	LMAP_MAX = 2
};

// Enum Engine.ELightMapGroupingPolicy
enum class ELightMapGroupingPolicy : UINT8 {
	LMGP_DefaultUE = 0,
	LMGP_Distance = 1,
	LMGP_PreDefinedLightMapGroup = 2,
	LMGP_MAX = 3
};

// Enum Engine.EWorldScale
enum class EWorldScale : UINT8 {
	MiniWorld = 0,
	MidWorld = 1,
	BigWorld = 2,
	EWorldScale_MAX = 3
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : UINT8 {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : UINT8 {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2
};

// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : UINT8 {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : UINT8 {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : UINT8 {
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : UINT8 {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : UINT8 {
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : UINT8 {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : UINT8 {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : UINT8 {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : UINT8 {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : UINT8 {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3
};

// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : UINT8 {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : UINT8 {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : UINT8 {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Enum Engine.ETraceMaskFilter
enum class ETraceMaskFilter : UINT8 {
	TraceMaskFilter_1 = 0,
	TraceMaskFilter_2 = 1,
	TraceMaskFilter_3 = 2,
	TraceMaskFilter_4 = 3,
	TraceMaskFilter_5 = 4,
	TraceMaskFilter_6 = 5,
	TraceMaskFilter_MAX = 6
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : UINT8 {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : UINT8 {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : UINT8 {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4
};

// Enum Engine.ELightingBuildMode
enum class ELightingBuildMode : UINT8 {
	LBM_Default = 0,
	LBM_BakeForHD = 1,
	LBM_MAX = 2
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : UINT8 {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Enum Engine.ESimpleEFXLitQuality
enum class ESimpleEFXLitQuality : UINT8 {
	SIMPLE_EFX_LIT_QUALITY_NONE = 0,
	SIMPLE_EFX_LIT_QUALITY_LOW = 1,
	SIMPLE_EFX_LIT_QUALITY_MID = 2,
	SIMPLE_EFX_LIT_QUALITY_HIGH = 3,
	SIMPLE_EFX_LIT_QUALITY_ULTRA = 4,
	SIMPLE_EFX_LIT_QUALITY_COUNT = 5,
	SIMPLE_EFX_LIT_QUALITY_MAX = 6
};

// Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : UINT8 {
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_4x2 = 4,
	MSR_2x4 = 5,
	MSR_4x4 = 6,
	MSR_Count = 7,
	MSR_MAX = 8
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : UINT8 {
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : UINT8 {
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : UINT8 {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : UINT8 {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Mobile_Hair_Mask = 8,
	MSM_Mobile_Hair_Blend = 9,
	MSM_Cloth = 10,
	MSM_Eye = 11,
	MSM_SingleLayerWater = 12,
	MSM_SGSSS = 13,
	MSM_ThinTranslucent = 14,
	MSM_Weapon = 15,
	MSM_NUM = 16,
	MSM_FromMaterialExpression = 17,
	MSM_MAX = 18
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : UINT8 {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : UINT8 {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : UINT8 {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : UINT8 {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : UINT8 {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_LinearColorLDR = 9,
	SCS_MAX = 10
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : UINT8 {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Enum Engine.ERefractionMode
enum class ERefractionMode : UINT8 {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : UINT8 {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : UINT8 {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3
};

// Enum Engine.EMaterialLightingChannelMask
enum class EMaterialLightingChannelMask : UINT8 {
	MLCM_0000 = 0,
	MLCM_0001 = 1,
	MLCM_0010 = 2,
	MLCM_0100 = 3,
	MLCM_1001 = 4,
	MLCM_MAX = 5
};

// Enum Engine.EBlendMode
enum class EBlendMode : UINT8 {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_AdditiveRGB = 7,
	BLEND_MAX = 8
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : UINT8 {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Enum Engine.ELightmapType
enum class ELightmapType : UINT8 {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : UINT8 {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : UINT8 {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : UINT8 {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : UINT8 {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : UINT8 {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Enum Engine.EStandbyType
enum class EStandbyType : UINT8 {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : UINT8 {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Enum Engine.EWindowMode
enum class EWindowMode : UINT8 {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : UINT8 {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : UINT8 {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : UINT8 {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : UINT8 {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : UINT8 {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : UINT8 {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : UINT8 {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : UINT8 {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : UINT8 {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : UINT8 {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : UINT8 {
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : UINT8 {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : UINT8 {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : UINT8 {
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : UINT8 {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Enum Engine.ELocalLightBakeMode
enum class ELocalLightBakeMode : UINT8 {
	SKY_AO_MODE = 0,
	SDF_SHADOW_MASK_MODE = 1,
	OUTDOOR_AO_MODE = 2,
	ELocalLightBakeMode_MAX = 3
};

// Enum Engine.EMaterialVertexColorBlendWeightChannels
enum class EMaterialVertexColorBlendWeightChannels : UINT8 {
	None = 0,
	R = 1,
	RG = 2,
	RGB = 3,
	RGBA = 4,
	EMaterialVertexColorBlendWeightChannels_MAX = 5
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : UINT8 {
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : UINT8 {
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : UINT8 {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : UINT8 {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : UINT8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4
};

// Enum Engine.EClampMode
enum class EClampMode : UINT8 {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : UINT8 {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : UINT8 {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : UINT8 {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_MAX = 11
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : UINT8 {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : UINT8 {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : UINT8 {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : UINT8 {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : UINT8 {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : UINT8 {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : UINT8 {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : UINT8 {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_ClampMipLevel = 4,
	TMVM_MAX = 5
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : UINT8 {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : UINT8 {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : UINT8 {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : UINT8 {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : UINT8 {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_WindParams = 13,
	MEVP_RotateAngle = 14,
	MEVP_MAX = 15
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : UINT8 {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : UINT8 {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Enum Engine.EMaterialCategory
enum class EMaterialCategory : UINT8 {
	MC_PBR_Opaque = 0,
	MC_Weapon = 1,
	MC_Character = 2,
	MC_Terrain = 3,
	MC_Sky = 4,
	MC_Grass = 5,
	MC_Rock = 6,
	MC_Tree = 7,
	MC_Tree_Lod = 8,
	MC_Particle = 9,
	MC_Keep_Original = 10,
	MC_MAX = 11
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : UINT8 {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_WaterCaustics = 15,
	MATUSAGE_HairStrands = 16,
	MATUSAGE_MAX = 17
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : UINT8 {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : UINT8 {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : UINT8 {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : UINT8 {
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_CustomData = 29,
	PPI_MAX = 30
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : UINT8 {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_Missing = 7,
	MD_MAX = 8
};

// Enum Engine.EVertexPhase
enum class EVertexPhase : UINT8 {
	VP_ViewResolving = 0,
	VP_PositionCalculation = 1,
	VP_VariantsCalculation = 2,
	VP_MAX = 3
};

// Enum Engine.EShadingPhase
enum class EShadingPhase : UINT8 {
	SP_V2F = 0,
	SP_DataPrepare = 1,
	SP_OutColorGenerate = 2,
	SP_Debug = 3,
	SP_MAX = 4
};

// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : UINT8 {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};

// Enum Engine.EUVOutput
enum class EUVOutput : UINT8 {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : UINT8 {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : UINT8 {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : UINT8 {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : UINT8 {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : UINT8 {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : UINT8 {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : UINT8 {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : UINT8 {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : UINT8 {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : UINT8 {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : UINT8 {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : UINT8 {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : UINT8 {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : UINT8 {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : UINT8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : UINT8 {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Enum Engine.EControllMode
enum class EControllMode : UINT8 {
	ENone = 0,
	EExposureOnly = 1,
	EFullControll = 2,
	EControllMode_MAX = 3
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : UINT8 {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : UINT8 {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : UINT8 {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : UINT8 {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Enum Engine.EParticleVRSShadingRate
enum class EParticleVRSShadingRate : UINT8 {
	VRS_None = 0,
	VRS_2X2 = 1,
	Num = 2,
	EParticleVRSShadingRate_MAX = 3
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : UINT8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : UINT8 {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : UINT8 {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Enum Engine.EModuleType
enum class EModuleType : UINT8 {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : UINT8 {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : UINT8 {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : UINT8 {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : UINT8 {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : UINT8 {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : UINT8 {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : UINT8 {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : UINT8 {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : UINT8 {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : UINT8 {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : UINT8 {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : UINT8 {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : UINT8 {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : UINT8 {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : UINT8 {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : UINT8 {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : UINT8 {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : UINT8 {
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : UINT8 {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : UINT8 {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : UINT8 {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : UINT8 {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : UINT8 {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : UINT8 {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : UINT8 {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : UINT8 {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : UINT8 {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : UINT8 {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : UINT8 {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : UINT8 {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : UINT8 {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : UINT8 {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : UINT8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : UINT8 {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : UINT8 {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : UINT8 {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : UINT8 {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Enum Engine.EPreferredWorldScaleType
enum class EPreferredWorldScaleType : UINT8 {
	EPWS_MiniWorld = 0,
	EPWS_MidWorld = 1,
	EPWS_BigWorld = 2,
	EPWS_Num = 3,
	EPWS_MAX = 4
};

// Enum Engine.ERenderMatrixMode
enum class ERenderMatrixMode : UINT8 {
	ERMM_Default = 0,
	ERMM_IndependentFovFromCameraManager = 1,
	ERMM_MAX = 2
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : UINT8 {
	ERSM_Default = 0,
	ERSM_256 = 1,
	ERSM_2 = 2,
	ERSM_3 = 3,
	ERSM_5 = 4,
	ERSM_9 = 5,
	ERSM_17 = 6,
	ERSM_33 = 7,
	ERSM_65 = 8,
	ERSM_129 = 9,
	ERSM_MAX = 10
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : UINT8 {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : UINT8 {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : UINT8 {
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : UINT8 {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Enum Engine.EReflectionInfluencePrimitiveType
enum class EReflectionInfluencePrimitiveType : UINT8 {
	BothStaticAndMovable = 0,
	StaticOnly = 1,
	MovableOnly = 2,
	EReflectionInfluencePrimitiveType_MAX = 3
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : UINT8 {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Enum Engine.EReflectionRangeShape
enum class EReflectionRangeShape : UINT8 {
	Sphere = 0,
	Box = 1,
	EReflectionRangeShape_MAX = 2
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : UINT8 {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : UINT8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : UINT8 {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3
};

// Enum Engine.EVelocityOutputPass
enum class EVelocityOutputPass : UINT8 {
	DepthPass = 0,
	BasePass = 1,
	AfterBasePass = 2,
	EVelocityOutputPass_MAX = 3
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : UINT8 {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : UINT8 {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : UINT8 {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	EMobileMSAASampleCount_MAX = 4
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : UINT8 {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : UINT8 {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : UINT8 {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : UINT8 {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : UINT8 {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : UINT8 {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : UINT8 {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2
};

// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : UINT8 {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_MAX = 5
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : UINT8 {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : UINT8 {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : UINT8 {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : UINT8 {
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : UINT8 {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : UINT8 {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags_MAX = 2
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : UINT8 {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : UINT8 {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Enum Engine.ERTCChannelPlane
enum class ERTCChannelPlane : UINT8 {
	Default = 0,
	R = 1,
	RG = 2,
	RG_B = 3,
	RGB = 4,
	RGBA = 5,
	RGB_A = 6,
	RG_A = 7,
	Count = 8,
	ERTCChannelPlane_MAX = 9
};

// Enum Engine.ERTCColorSpace
enum class ERTCColorSpace : UINT8 {
	Default = 0,
	LDR = 1,
	Count = 2,
	ERTCColorSpace_MAX = 3
};

// Enum Engine.ERTCQuality
enum class ERTCQuality : UINT8 {
	Default = 0,
	Fastest = 1,
	Normal = 2,
	High = 3,
	Count = 4,
	ERTCQuality_MAX = 5
};

// Enum Engine.ERTCFormat
enum class ERTCFormat : UINT8 {
	Default = 0,
	UE4Ori = 1,
	None = 2,
	ASTC_Family = 3,
	ETC_Family = 4,
	DXT_Family = 5,
	Count = 6,
	ERTCFormat_MAX = 7
};

// Enum Engine.ERuntimeVirtualTextureLayerType
enum class ERuntimeVirtualTextureLayerType : UINT8 {
	Detail = 0,
	Base = 1,
	Backup = 2,
	Count = 3,
	ERuntimeVirtualTextureLayerType_MAX = 4
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : UINT8 {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : UINT8 {
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Specular = 2,
	BaseColor_Normal_Roughness_Specular_Mask_Height = 3,
	BaseColor_Normal_Specular_YCoCg = 4,
	BaseColor_Normal_Specular_Mask_YCoCg = 5,
	WorldHeight = 6,
	Count = 7,
	ERuntimeVirtualTextureMaterialType_MAX = 8
};

// Enum Engine.ERayTracingWaterCausticsBufferScale
enum class ERayTracingWaterCausticsBufferScale : UINT8 {
	FULL = 0,
	HALF = 1,
	QUATER = 2,
	ERayTracingWaterCausticsBufferScale_MAX = 3
};

// Enum Engine.ERayTracingWaterCausticsType
enum class ERayTracingWaterCausticsType : UINT8 {
	Disable = 0,
	SurfelBasedRendering = 1,
	ProceduralMeshes = 2,
	ERayTracingWaterCausticsType_MAX = 3
};

// Enum Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : UINT8 {
	Disabled = 0,
	BestPerformance = 1,
	BetterQuality = 2,
	BestQuality = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4
};

// Enum Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : UINT8 {
	Usual = 0,
	MobilePPRExclusive = 1,
	MobilePPR = 2,
	EMobilePlanarReflectionMode_MAX = 3
};

// Enum Engine.ERayTracingMeshCausticsDebugScreenData
enum class ERayTracingMeshCausticsDebugScreenData : UINT8 {
	Debug_None = 0,
	Debug_Photon = 1,
	Debug_CausticsVariance = 2,
	Debug_MAX = 3
};

// Enum Engine.ERayTracingMeshCausticsDebugLightData
enum class ERayTracingMeshCausticsDebugLightData : UINT8 {
	Debug_None = 0,
	Debug_Normal = 1,
	Debug_ScreenArea = 2,
	Debug_CausticsVariance = 3,
	Debug_RayDensity = 4,
	Debug_RayDensityMip = 5,
	Debug_LightID = 6,
	Debug_PhotonCount = 7,
	Debug_MAX = 8
};

// Enum Engine.ERayTracingMeshCausticsTranslucentReflectionMode
enum class ERayTracingMeshCausticsTranslucentReflectionMode : UINT8 {
	TranslucentReflectionMode_NoReflection = 0,
	TranslucentReflectionMode_AlwaysReflection = 1,
	TranslucentReflectionMode_RandomReflection = 2,
	TranslucentReflectionMode_MAX = 3
};

// Enum Engine.ERayTracingMeshCausticsBufferScale
enum class ERayTracingMeshCausticsBufferScale : UINT8 {
	BufferScale_Full = 0,
	BufferScale_Half = 1,
	BufferScale_Quarter = 2,
	BufferScale_MAX = 3
};

// Enum Engine.ERayTracingMeshCausticsResolutionOverride
enum class ERayTracingMeshCausticsResolutionOverride : UINT8 {
	Resolution_None = 0,
	Resolution_65 = 1,
	Resolution_129 = 2,
	Resolution_257 = 3,
	Resolution_513 = 4,
	Resolution_1025 = 5,
	Resolution_2049 = 6,
	Resolution_MAX = 7
};

// Enum Engine.ERayTracingMeshCausticsResolution
enum class ERayTracingMeshCausticsResolution : UINT8 {
	Resolution_65 = 0,
	Resolution_129 = 1,
	Resolution_257 = 2,
	Resolution_513 = 3,
	Resolution_1025 = 4,
	Resolution_2049 = 5,
	Resolution_MAX = 6
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : UINT8 {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Enum Engine.ERayTracingGIDenoiseDebugType
enum class ERayTracingGIDenoiseDebugType : UINT8 {
	Disabled = 0,
	Variance = 1,
	FirstMoment = 2,
	SecondMoment = 3,
	HistoryLength = 4,
	MotionVector = 5,
	HitDistance = 6,
	RawOutput = 7,
	ERayTracingGIDenoiseDebugType_MAX = 8
};

// Enum Engine.ERayTracingGIDenoiseSpatialFilterType
enum class ERayTracingGIDenoiseSpatialFilterType : UINT8 {
	ATrous = 0,
	Gaussian = 1,
	ERayTracingGIDenoiseSpatialFilterType_MAX = 2
};

// Enum Engine.ERayTracingGIDenoiseType
enum class ERayTracingGIDenoiseType : UINT8 {
	Disabled = 0,
	UE4_UE4 = 1,
	New = 2,
	ERayTracingGIDenoiseType_MAX = 3
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : UINT8 {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : UINT8 {
	Raster = 0,
	RayTracing = 1,
	HybridTranslucency = 2,
	EnhancedRayTracing = 3,
	ETranslucencyType_MAX = 4
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : UINT8 {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2
};

// Enum Engine.ELightUnits
enum class ELightUnits : UINT8 {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3
};

// Enum Engine.EPPEdgeDetectMethod
enum class EPPEdgeDetectMethod : UINT8 {
	DD_NONE = 0,
	DD_Sobel = 1,
	DD_IRoberts = 2,
	DD_MAX = 3
};

// Enum Engine.EPPBlurMethod
enum class EPPBlurMethod : UINT8 {
	BB_NONE = 0,
	BB_GB = 1,
	BB_IB = 2,
	BB_MAX = 3
};

// Enum Engine.ELensFlareMethod
enum class ELensFlareMethod : UINT8 {
	LFM_UE = 0,
	LFM_OPTIMIZED = 1,
	LFM_CUSTOM = 2,
	LFM_MAX = 3
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : UINT8 {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : UINT8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : UINT8 {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Enum Engine.ELiteRendererUsage
enum class ELiteRendererUsage : UINT8 {
	Default = 0,
	OnlyTranslucent = 1,
	Scope = 2,
	ELiteRendererUsage_MAX = 3
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : UINT8 {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Enum Engine.ESSAA
enum class ESSAA : UINT8 {
	SSAA_None = 0,
	SSAA_2X = 1,
	SSAA_3X = 2,
	SSAA_4X = 3,
	SSAA_MAX = 4
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : UINT8 {
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Normal = 9,
	MP_WorldPositionOffset = 10,
	MP_WorldDisplacement = 11,
	MP_TessellationMultiplier = 12,
	MP_SubsurfaceColor = 13,
	MP_CustomData0 = 14,
	MP_CustomData1 = 15,
	MP_AmbientOcclusion = 16,
	MP_Refraction = 17,
	MP_CustomizedUVs0 = 18,
	MP_CustomizedUVs1 = 19,
	MP_CustomizedUVs2 = 20,
	MP_CustomizedUVs3 = 21,
	MP_CustomizedUVs4 = 22,
	MP_CustomizedUVs5 = 23,
	MP_CustomizedUVs6 = 24,
	MP_CustomizedUVs7 = 25,
	MP_PixelDepthOffset = 26,
	MP_ShadingModel = 27,
	MP_MaterialAttributes = 28,
	MP_CustomOutput = 29,
	MP_MAX = 30
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : UINT8 {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_TSR = 4,
	AAM_SMAA = 5,
	AAM_LWTAA = 6,
	AAM_MAX = 7
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : UINT8 {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : UINT8 {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : UINT8 {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Enum Engine.EClothMassMode
enum class EClothMassMode : UINT8 {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : UINT8 {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : UINT8 {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : UINT8 {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : UINT8 {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : UINT8 {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : UINT8 {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : UINT8 {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : UINT8 {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : UINT8 {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : UINT8 {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : UINT8 {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : UINT8 {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : UINT8 {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : UINT8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : UINT8 {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : UINT8 {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : UINT8 {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : UINT8 {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : UINT8 {
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 5,
	ESoundWaveLoadingBehavior_MAX = 6
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : UINT8 {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : UINT8 {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : UINT8 {
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : UINT8 {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : UINT8 {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : UINT8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};

// Enum Engine.ESubmixChannelFormat
enum class ESubmixChannelFormat : UINT8 {
	Device = 0,
	Stereo = 1,
	Quad = 2,
	FiveDotOne = 3,
	SevenDotOne = 4,
	Ambisonics = 5,
	Count = 6,
	ESubmixChannelFormat_MAX = 7
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : UINT8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : UINT8 {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : UINT8 {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : UINT8 {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : UINT8 {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : UINT8 {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : UINT8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Enum Engine.EMaterialErrorType
enum class EMaterialErrorType : UINT8 {
	None = 0,
	WIP = 1,
	Warning = 2,
	Error = 3,
	EMaterialErrorType_MAX = 4
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : UINT8 {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : UINT8 {
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Enum Engine.ENormalMode
enum class ENormalMode : UINT8 {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Enum Engine.EReflectionCachePolicy
enum class EReflectionCachePolicy : UINT8 {
	CacheRuntime = 0,
	ManuallySpecify = 1,
	EReflectionCachePolicy_MAX = 2
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : UINT8 {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : UINT8 {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : UINT8 {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : UINT8 {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : UINT8 {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : UINT8 {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : UINT8 {
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : UINT8 {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_G16 = 8,
	TSF_MAX = 9
};

// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : UINT8 {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : UINT8 {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Enum Engine.EBlendChannel
enum class EBlendChannel : UINT8 {
	BC_BlendToRed = 0,
	BC_BlendToGreen = 1,
	BC_BlendToBlue = 2,
	BC_BlendToAlpha = 3,
	BC_MAX = 4
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : UINT8 {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Enum Engine.ECompositeChannelType
enum class ECompositeChannelType : UINT8 {
	CCT_None = 0,
	CCT_RG_As_Normalized_Normal = 1,
	CCT_MAX = 2
};

// Enum Engine.TextureAddress
enum class TextureAddress : UINT8 {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Enum Engine.TextureFilter
enum class TextureFilter : UINT8 {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : UINT8 {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_HDR_RGBM = 12,
	TC_HDR_RGBM_NoCompressed = 13,
	TC_MAX = 14
};

// Enum Engine.ETextureDownSampleAmount
enum class ETextureDownSampleAmount : UINT8 {
	TDSA_FromTextureGroup = 0,
	TDSA_None = 1,
	TDSA_Low = 2,
	TDSA_Medium = 3,
	TDSA_High = 4,
	TDSA_MAX = 5
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : UINT8 {
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : UINT8 {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : UINT8 {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : UINT8 {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : UINT8 {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_MAX = 21
};

// Enum Engine.ETextureAstcCompressionQuality
enum class ETextureAstcCompressionQuality : UINT8 {
	TCQ_ASTC_Default = 0,
	TCQ_ASTC_4x4 = 1,
	TCQ_ASTC_5x4 = 2,
	TCQ_ASTC_5x5 = 3,
	TCQ_ASTC_6x5 = 4,
	TCQ_ASTC_6x6 = 5,
	TCQ_ASTC_8x5 = 6,
	TCQ_ASTC_8x6 = 7,
	TCQ_ASTC_10x5 = 8,
	TCQ_ASTC_10x6 = 9,
	TCQ_ASTC_8x8 = 10,
	TCQ_ASTC_10x8 = 11,
	TCQ_ASTC_10x10 = 12,
	TCQ_ASTC_12x10 = 13,
	TCQ_ASTC_12x12 = 14,
	TCQ_ASTC_Max = 15
};

// Enum Engine.TextureGroup
enum class TextureGroup : UINT8 {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_WorldAniso = 34,
	TEXTUREGROUP_WorldNoSmallPak = 35,
	TEXTUREGROUP_Grass = 36,
	TEXTUREGROUP_Tree = 37,
	TEXTUREGROUP_Building = 38,
	TEXTUREGROUP_Stone = 39,
	TEXTUREGROUP_Prop = 40,
	TEXTUREGROUP_Decal = 41,
	TEXTUREGROUP_Project01 = 42,
	TEXTUREGROUP_Project02 = 43,
	TEXTUREGROUP_Project03 = 44,
	TEXTUREGROUP_Project04 = 45,
	TEXTUREGROUP_Project05 = 46,
	TEXTUREGROUP_Project06 = 47,
	TEXTUREGROUP_Project07 = 48,
	TEXTUREGROUP_Project08 = 49,
	TEXTUREGROUP_Project09 = 50,
	TEXTUREGROUP_Project10 = 51,
	TEXTUREGROUP_MAX = 52
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : UINT8 {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : UINT8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : UINT8 {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : UINT8 {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : UINT8 {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : UINT8 {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : UINT8 {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : UINT8 {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : UINT8 {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : UINT8 {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : UINT8 {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : UINT8 {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : UINT8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : UINT8 {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : UINT8 {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

// Enum Engine.EStaticShadowmapScale
enum class EStaticShadowmapScale : UINT8 {
	StaticShadowmapScale_Complete = 0,
	StaticShadowmapScale_Half = 1,
	StaticShadowmapScale_Quarter = 2,
	StaticShadowmapScale_Max = 3
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator {
public:

	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator {
public:

	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)
struct FFormatArgumentData {
public:

	struct FString ArgumentName; // 0x00(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int32_t ArgumentValueInt; // 0x30(0x04)
	float ArgumentValueFloat; // 0x34(0x04)
	enum class ETextGender ArgumentValueGender; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimerHandle
// Size: 0x08 (Inherited: 0x00)
struct FTimerHandle {
public:

	uint64_t Handle; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 (Inherited: 0x00)
struct FBranchingPointNotifyPayload {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SubtitleCue
// Size: 0x20 (Inherited: 0x00)
struct FSubtitleCue {
public:

	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InterpControlPoint
// Size: 0x1c (Inherited: 0x00)
struct FInterpControlPoint {
public:

	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char pad_D[0xf]; // 0x0d(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
public:

	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LatentActionInfo
// Size: 0x18 (Inherited: 0x00)
struct FLatentActionInfo {
public:

	int32_t Linkage; // 0x00(0x04)
	int32_t UUID; // 0x04(0x04)
	struct FName ExecutionFunction; // 0x08(0x08)
	struct UObject* CallbackTarget; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
public:

	struct FName Name; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GenericStruct
// Size: 0x04 (Inherited: 0x00)
struct FGenericStruct {
public:

	int32_t Data; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.UserActivity
// Size: 0x18 (Inherited: 0x00)
struct FUserActivity {
public:

	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FastArraySerializerItem
// Size: 0x0c (Inherited: 0x00)
struct FFastArraySerializerItem {
public:

	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
	int32_t MostRecentArrayReplicationKey; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle {
public:

	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FastArraySerializer
// Size: 0x108 (Inherited: 0x00)
struct FFastArraySerializer {
public:

	char pad_0[0x54]; // 0x00(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x04)
	char pad_58[0xa8]; // 0x58(0xa8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x00)
struct FDebugDisplayProperty {
public:

	struct UObject* obj; // 0x00(0x08)
	struct UClass* WithinClass; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement {
public:

	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char bSimulatedPhysicSleep : 1; // 0x30(0x01)
	char bRepPhysics : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x31(0x01)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x32(0x01)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x33(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ResponseChannel
// Size: 0x0c (Inherited: 0x00)
struct FResponseChannel {
public:

	struct FName Channel; // 0x00(0x08)
	enum class ECollisionResponse Response; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomPrimitiveData {
public:

	struct TArray<float> Data; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightingChannels
// Size: 0x01 (Inherited: 0x00)
struct FLightingChannels {
public:

	char bChannel0 : 1; // 0x00(0x01)
	char bChannel1 : 1; // 0x00(0x01)
	char bChannel2 : 1; // 0x00(0x01)
	char bChannel3 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// Size: 0x10 (Inherited: 0x00)
struct FActorComponentDuplicatedObjectData {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
public:

	struct UObject* MemberParent; // 0x00(0x08)
	struct FString MemberScope; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid MemberGuid; // 0x20(0x10)
	bool bSelfContext; // 0x30(0x01)
	bool bWasDeprecated; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticParameterSet
// Size: 0x40 (Inherited: 0x00)
struct FStaticParameterSet {
public:

	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x00(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10(0x10)
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20(0x10)
	struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x28 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
public:

	char bOverride_OpacityMaskClipValue : 1; // 0x00(0x01)
	char bOverride_SoftDepthOffsetValue : 1; // 0x00(0x01)
	char bOverride_TranslucentFogDensity : 1; // 0x00(0x01)
	char bOverride_BlendMode : 1; // 0x00(0x01)
	char bOverride_ShadingRate : 1; // 0x00(0x01)
	char bOverride_ShadingModel : 1; // 0x00(0x01)
	char bOverride_LightingChannelMask : 1; // 0x00(0x01)
	char bOverride_DitheredLODTransition : 1; // 0x00(0x01)
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x01(0x01)
	char bOverride_TwoSided : 1; // 0x01(0x01)
	char bOverride_DisableDepthTest : 1; // 0x01(0x01)
	char TwoSided : 1; // 0x01(0x01)
	char bDisableDepthTest : 1; // 0x01(0x01)
	char bOverride_UseLandscapeShadowmask : 1; // 0x01(0x01)
	char UseLandscapeShadowmask : 1; // 0x01(0x01)
	char bOverride_UseGBufferCustomDataAlphaSaveDepthOffset : 1; // 0x01(0x01)
	char UseGBufferCustomDataAlphaSaveDepthOffset : 1; // 0x02(0x01)
	char bOverride_UseLandscapeLocalHeightmap : 1; // 0x02(0x01)
	char UseLandscapeLocalHeightmap : 1; // 0x02(0x01)
	char bOverride_TranslucencyRenderLast : 1; // 0x02(0x01)
	char DitheredLODTransition : 1; // 0x02(0x01)
	char bOverride_ToForceFlattenGI : 1; // 0x02(0x01)
	char ToForceFlattenGI : 1; // 0x02(0x01)
	char bCastDynamicShadowAsMasked : 1; // 0x02(0x01)
	char bOverride_MaterialDeprecated : 1; // 0x03(0x01)
	char bOverride_MaterialDebugModeColorType : 1; // 0x03(0x01)
	char bOverride_MiniWorldShadingType : 1; // 0x03(0x01)
	char bMiniWorldShadingType : 1; // 0x03(0x01)
	char bOverride_TranslucencyWriteCustomData : 1; // 0x03(0x01)
	char bTranslucencyWriteCustomData : 1; // 0x03(0x01)
	char bOverride_TranslucencyRenderFullPercentageLast : 1; // 0x03(0x01)
	char bTranslucencyRenderFullPercentageLast : 1; // 0x03(0x01)
	char bOverride_UsedWith3DUI : 1; // 0x04(0x01)
	char bUsedWith3DUI : 1; // 0x04(0x01)
	char bOverride_IsNeedExtraBone : 1; // 0x04(0x01)
	char bIsNeedExtraBone : 1; // 0x04(0x01)
	char bOverride_UsedWithLightMap : 1; // 0x04(0x01)
	char bUsedWithLightMap : 1; // 0x04(0x01)
	char bOverride_MobileMaskPreZRender : 1; // 0x04(0x01)
	char bMobileMaskPreZRender : 1; // 0x04(0x01)
	char bOverride_EnableFoliageBillboardBatch : 1; // 0x05(0x01)
	char bEnableFoliageBillboardBatch : 1; // 0x05(0x01)
	char bOverride_IsBatchedFoliageBillboard : 1; // 0x05(0x01)
	char bIsBatchedFoliageBillboard : 1; // 0x05(0x01)
	char bOverride_IsSimpleEFXLit : 1; // 0x05(0x01)
	char bIsSimpleEFXLit : 1; // 0x05(0x01)
	char bOverride_SimpleEFXLitSubShadingModels : 1; // 0x05(0x01)
	char pad_5_7 : 1; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t SimpleEFXLitSubShadingModels; // 0x08(0x04)
	char bIsDisableWritingToSceneDepthAux : 1; // 0x0c(0x01)
	char bOverride_IsDisableWritingToSceneDepthAux : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	enum class EBlendMode BlendMode; // 0x0d(0x01)
	enum class EMaterialShadingRate ShadingRate; // 0x0e(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x0f(0x01)
	enum class EMaterialLightingChannelMask LightingChannelMask; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float SoftDepthOffsetValue; // 0x14(0x04)
	float OpacityMaskClipValue; // 0x18(0x04)
	uint32_t MaterialDebugModeColorType; // 0x1c(0x04)
	char bTranslucencyRenderLast : 1; // 0x20(0x01)
	char bMaterialDeprecated : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float TranslucentFogDensity; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureMergingInfo
// Size: 0x18 (Inherited: 0x00)
struct FTextureMergingInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FRegion> Regions; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Region
// Size: 0x28 (Inherited: 0x00)
struct FRegion {
public:

	struct UTexture2D* Texture; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
public:

	enum class ERichCurveInterpMode InterpMode; // 0x00(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x01(0x01)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialTextureInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialTextureInfo {
public:

	float SamplingScale; // 0x00(0x04)
	int32_t UVChannelIndex; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BroadphaseSettings
// Size: 0x40 (Inherited: 0x00)
struct FBroadphaseSettings {
public:

	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FBox MBPBounds; // 0x04(0x1c)
	struct FBox MBPOuterBounds; // 0x20(0x1c)
	uint32_t MBPNumSubdivs; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x60 (Inherited: 0x00)
struct FPredictProjectilePathParams {
public:

	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector LaunchVelocity; // 0x0c(0x0c)
	bool bTraceWithCollision; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ProjectileRadius; // 0x1c(0x04)
	float MaxSimTime; // 0x20(0x04)
	bool bTraceWithChannel; // 0x24(0x01)
	enum class ECollisionChannel TraceChannel; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
	float SimFrequency; // 0x48(0x04)
	float OverrideGravityZ; // 0x4c(0x04)
	enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float DrawDebugTime; // 0x54(0x04)
	bool bTraceComplex; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam {
public:

	struct FName Name; // 0x00(0x08)
	enum class EParticleSysParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x28 (Inherited: 0x01)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper {
public:

	char pad_1[0x17]; // 0x01(0x17)
	struct TArray<char> ReplicationBytes; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
public:

	int32_t SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
public:

	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BranchFilter
// Size: 0x0c (Inherited: 0x00)
struct FBranchFilter {
public:

	struct FName BoneName; // 0x00(0x08)
	int32_t BlendDepth; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle {
public:

	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavAvoidanceMask
// Size: 0x04 (Inherited: 0x00)
struct FNavAvoidanceMask {
public:

	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KeyHandleLookupTable
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleLookupTable {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshot {
public:

	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x0c (Inherited: 0x00)
struct FAnimCurveParam {
public:

	struct FName Name; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KAggregateGeom
// Size: 0x58 (Inherited: 0x00)
struct FKAggregateGeom {
public:

	struct TArray<struct FKSphereElem> SphereElems; // 0x00(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationGroupReference
// Size: 0x0c (Inherited: 0x00)
struct FAnimationGroupReference {
public:

	struct FName GroupName; // 0x00(0x08)
	enum class EAnimGroupRole GroupRole; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimGroupInstance
// Size: 0x70 (Inherited: 0x00)
struct FAnimGroupInstance {
public:

	char pad_0[0x70]; // 0x00(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimTickRecord
// Size: 0x48 (Inherited: 0x00)
struct FAnimTickRecord {
public:

	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x14 (Inherited: 0x00)
struct FMarkerSyncAnimPosition {
public:

	struct FName PreviousMarkerName; // 0x00(0x08)
	struct FName NextMarkerName; // 0x08(0x08)
	float PositionBetweenMarkers; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlendFilter
// Size: 0x78 (Inherited: 0x00)
struct FBlendFilter {
public:

	char pad_0[0x78]; // 0x00(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)
struct FBlendSampleData {
public:

	int32_t SampleDataIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float Time; // 0x14(0x04)
	float PreviousTime; // 0x18(0x04)
	float SamplePlayRate; // 0x1c(0x04)
	char pad_20[0x20]; // 0x20(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x10 (Inherited: 0x00)
struct FAnimationRecordingSettings {
public:

	bool bRecordInWorldSpace; // 0x00(0x01)
	bool bRemoveRootAnimation; // 0x01(0x01)
	bool bAutoSaveAsset; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x0c(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FComponentSpacePose {
public:

	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LocalSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FLocalSpacePose {
public:

	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NamedTransform
// Size: 0x40 (Inherited: 0x00)
struct FNamedTransform {
public:

	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NamedColor
// Size: 0x0c (Inherited: 0x00)
struct FNamedColor {
public:

	struct FColor Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NamedVector
// Size: 0x14 (Inherited: 0x00)
struct FNamedVector {
public:

	struct FVector Value; // 0x00(0x0c)
	struct FName Name; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NamedFloat
// Size: 0x0c (Inherited: 0x00)
struct FNamedFloat {
public:

	float Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x00)
struct FAnimParentNodeAssetOverride {
public:

	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid ParentNodeGuid; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimGroupInfo {
public:

	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x01 (Inherited: 0x00)
struct FAnimationFrameSnapshot {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StateMachineDebugData
// Size: 0xb0 (Inherited: 0x00)
struct FStateMachineDebugData {
public:

	char pad_0[0xb0]; // 0x00(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StateMachineStateDebugData
// Size: 0x10 (Inherited: 0x00)
struct FStateMachineStateDebugData {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimGraphBlendOptions
// Size: 0x08 (Inherited: 0x00)
struct FAnimGraphBlendOptions {
public:

	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// Size: 0x10 (Inherited: 0x00)
struct FGraphAssetPlayerInformation {
public:

	struct TArray<int32_t> PlayerNodeIndices; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CachedPoseIndices
// Size: 0x10 (Inherited: 0x00)
struct FCachedPoseIndices {
public:

	struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimBlueprintFunction
// Size: 0x68 (Inherited: 0x00)
struct FAnimBlueprintFunction {
public:

	struct FName Name; // 0x00(0x08)
	struct FName Group; // 0x08(0x08)
	int32_t OutputPoseNodeIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> InputPoseNames; // 0x18(0x10)
	struct TArray<int32_t> InputPoseNodeIndices; // 0x28(0x10)
	char pad_38[0x28]; // 0x38(0x28)
	bool bImplemented; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
public:

	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32_t LoopingCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x00)
struct FRootMotionExtractionStep {
public:

	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationErrorStats
// Size: 0x10 (Inherited: 0x00)
struct FAnimationErrorStats {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x00)
struct FRawCurveTracks {
public:

	struct TArray<struct FFloatCurve> FloatCurves; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SlotEvaluationPose
// Size: 0x40 (Inherited: 0x00)
struct FSlotEvaluationPose {
public:

	enum class EAdditiveAnimationType AdditiveType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.QueuedDrawDebugItem
// Size: 0x68 (Inherited: 0x00)
struct FQueuedDrawDebugItem {
public:

	enum class EDrawDebugItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector StartLoc; // 0x04(0x0c)
	struct FVector EndLoc; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float radius; // 0x34(0x04)
	float size; // 0x38(0x04)
	int32_t Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool bPersistentLines; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D TextScale; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BranchingPointMarker
// Size: 0x0c (Inherited: 0x00)
struct FBranchingPointMarker {
public:

	int32_t NotifyIndex; // 0x00(0x04)
	float TriggerTime; // 0x04(0x04)
	enum class EAnimNotifyEventType NotifyEventType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InertializationPoseDiff
// Size: 0x28 (Inherited: 0x00)
struct FInertializationPoseDiff {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InertializationCurveDiff
// Size: 0x08 (Inherited: 0x00)
struct FInertializationCurveDiff {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InertializationBoneDiff
// Size: 0x3c (Inherited: 0x00)
struct FInertializationBoneDiff {
public:

	char pad_0[0x3c]; // 0x00(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InertializationPose
// Size: 0x90 (Inherited: 0x00)
struct FInertializationPose {
public:

	char pad_0[0x90]; // 0x00(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 (Inherited: 0x00)
struct FAnimationPotentialTransition {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xe0 (Inherited: 0x00)
struct FAnimationActiveTransitionEntry {
public:

	char pad_0[0xb8]; // 0x00(0xb8)
	struct UBlendProfile* BlendProfile; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct TArray<struct FAnimCurveValueBlendCurve> CustomizedAnimCurveBlendCurve; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimCurveValueBlendCurve
// Size: 0x10 (Inherited: 0x00)
struct FAnimCurveValueBlendCurve {
public:

	struct FName CurveName; // 0x00(0x08)
	struct UCurveFloat* Curve; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x48 (Inherited: 0x00)
struct FExposedValueHandler {
public:

	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	struct UFunction* Function; // 0x18(0x08)
	/*struct TFieldPath<FNone>*/char ValueHandlerNodeProperty[0x20]; // 0x20(0x20)
	char pad_40[0x8]; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)
struct FExposedValueCopyRecord {
public:

	struct FName SourcePropertyName; // 0x00(0x08)
	struct FName SourceSubPropertyName; // 0x08(0x08)
	int32_t SourceArrayIndex; // 0x10(0x04)
	bool bInstanceIsTarget; // 0x14(0x01)
	enum class EPostCopyOperation PostCopyOperation; // 0x15(0x01)
	enum class ECopyType CopyType; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	/*struct TFieldPath<FNone>*/char DestProperty[0x20]; // 0x18(0x20)
	int32_t DestArrayIndex; // 0x38(0x04)
	int32_t size; // 0x3c(0x04)
	/*struct TFieldPath<FNone>*/char CachedSourceProperty[0x20]; // 0x40(0x20)
	/*struct TFieldPath<FNone>*/char CachedSourceStructSubProperty[0x20]; // 0x60(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNotifyQueue
// Size: 0x70 (Inherited: 0x00)
struct FAnimNotifyQueue {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x10(0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNotifyArray
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyArray {
public:

	struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNotifyEventReference
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyEventReference {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* NotifySource; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x00)
struct FCompressedTrack {
public:

	struct TArray<char> ByteStream; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[0x3]; // 0x20(0x0c)
	float Ranges[0x3]; // 0x2c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CurveTrack
// Size: 0x18 (Inherited: 0x00)
struct FCurveTrack {
public:

	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> CurveWeights; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x00)
struct FScaleTrack {
public:

	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x00)
struct FRotationTrack {
public:

	struct TArray<struct FQuat> RotKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x00)
struct FTranslationTrack {
public:

	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceTrackContainer {
public:

	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x00)
struct FRawAnimSequenceTrack {
public:

	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<struct FQuat> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x00)
struct FAnimSetMeshLinkup {
public:

	struct TArray<int32_t> BoneToTrackTable; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x00)
struct FBakedAnimationStateMachine {
public:

	struct FName MachineName; // 0x00(0x08)
	int32_t InitialState; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BakedAnimationState
// Size: 0x58 (Inherited: 0x00)
struct FBakedAnimationState {
public:

	struct FName StateName; // 0x00(0x08)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x08(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x04)
	int32_t StartNotify; // 0x1c(0x04)
	int32_t EndNotify; // 0x20(0x04)
	int32_t FullyBlendedNotify; // 0x24(0x04)
	bool bIsAConduit; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t EntryRuleNodeIndex; // 0x2c(0x04)
	struct TArray<int32_t> PlayerNodeIndices; // 0x30(0x10)
	struct TArray<int32_t> LayerNodeIndices; // 0x40(0x10)
	bool bAlwaysResetOnEntry; // 0x50(0x01)
	bool bLoopState; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 (Inherited: 0x00)
struct FBakedStateExitTransition {
public:

	int32_t CanTakeDelegateIndex; // 0x00(0x04)
	int32_t CustomResultNodeIndex; // 0x04(0x04)
	int32_t TransitionIndex; // 0x08(0x04)
	bool bDesiredTransitionReturnValue; // 0x0c(0x01)
	bool bAutomaticRemainingTimeRule; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 (Inherited: 0x00)
struct FAnimationTransitionRule {
public:

	struct FName RuleToExecute; // 0x00(0x08)
	bool TransitionReturnVal; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t TransitionIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x04 (Inherited: 0x00)
struct FTrackToSkeletonMap {
public:

	int32_t BoneTreeIndex; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MarkerSyncData
// Size: 0x20 (Inherited: 0x00)
struct FMarkerSyncData {
public:

	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSyncMarker
// Size: 0x0c (Inherited: 0x00)
struct FAnimSyncMarker {
public:

	struct FName MarkerName; // 0x00(0x08)
	float Time; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack {
public:

	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x00)
struct FPerBoneBlendWeights {
public:

	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x00)
struct FAssetManagerRedirect {
public:

	struct FString old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AssetMapping
// Size: 0x10 (Inherited: 0x00)
struct FAssetMapping {
public:

	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	struct UAnimationAsset* TargetAsset; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2c (Inherited: 0x00)
struct FAtmospherePrecomputeParameters {
public:

	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32_t MaxScatteringOrder; // 0x08(0x04)
	int32_t TransmittanceTexWidth; // 0x0c(0x04)
	int32_t TransmittanceTexHeight; // 0x10(0x04)
	int32_t IrradianceTexWidth; // 0x14(0x04)
	int32_t IrradianceTexHeight; // 0x18(0x04)
	int32_t InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32_t InscatterMuNum; // 0x20(0x04)
	int32_t InscatterMuSNum; // 0x24(0x04)
	int32_t InscatterNuNum; // 0x28(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AudioComponentParam
// Size: 0x20 (Inherited: 0x00)
struct FAudioComponentParam {
public:

	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t IntParam; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x00)
struct FAudioQualitySettings {
public:

	struct FText DisplayName; // 0x00(0x18)
	int32_t MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x00)
struct FInteriorSettings {
public:

	bool bIsWorldSettings; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x20 (Inherited: 0x00)
struct FReverbSettings {
public:

	bool bApplyReverb; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	struct USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10(0x08)
	float Volume; // 0x18(0x04)
	float FadeTime; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorMapPerformanceTestDefinition {
public:

	struct FSoftObjectPath PerformanceTestmap; // 0x00(0x18)
	int32_t TestTimer; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x00)
struct FImportFactorySettingValues {
public:

	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavAvoidanceData
// Size: 0x3c (Inherited: 0x00)
struct FNavAvoidanceData {
public:

	char pad_0[0x3c]; // 0x00(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BandwidthTestGenerator
// Size: 0x20 (Inherited: 0x00)
struct FBandwidthTestGenerator {
public:

	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BandwidthTestItem
// Size: 0x10 (Inherited: 0x00)
struct FBandwidthTestItem {
public:

	struct TArray<char> Kilobyte; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
public:

	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector SampleValue; // 0x08(0x0c)
	float RateScale; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
public:

	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32_t GridNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter {
public:

	float InterpolationTime; // 0x00(0x04)
	enum class EFilterInterpolationType InterpolationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BPEditorBookmarkNode
// Size: 0x38 (Inherited: 0x00)
struct FBPEditorBookmarkNode {
public:

	struct FGuid NodeGuid; // 0x00(0x10)
	struct FGuid ParentGuid; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EditedDocumentInfo
// Size: 0x30 (Inherited: 0x00)
struct FEditedDocumentInfo {
public:

	struct FSoftObjectPath EditedObjectPath; // 0x00(0x18)
	struct FVector2D SavedViewOffset; // 0x18(0x08)
	float SavedZoomAmount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UObject* EditedObject; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x00)
struct FBPInterfaceDescription {
public:

	struct UClass* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 (Inherited: 0x00)
struct FBPVariableMetaDataEntry {
public:

	struct FName DataKey; // 0x00(0x08)
	struct FString DataValue; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintMacroCosmeticInfo {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 (Inherited: 0x00)
struct FCompilerNativizationOptions {
public:

	struct FName PlatformName; // 0x00(0x08)
	bool ServerOnlyPlatform; // 0x08(0x01)
	bool ClientOnlyPlatform; // 0x09(0x01)
	bool bExcludeMonolithicHeaders; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct TArray<struct FName> ExcludedModules; // 0x10(0x10)
	/*struct TSet<struct FSoftObjectPath>*/char ExcludedAssets[0x50]; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BPComponentClassOverride
// Size: 0x10 (Inherited: 0x00)
struct FBPComponentClassOverride {
public:

	struct FName ComponentName; // 0x00(0x08)
	struct UClass* ComponentClass; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentChangedPropertyInfo {
public:

	struct FName PropertyName; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* PropertyScope; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x00)
struct FEventGraphFastCallPair {
public:

	struct UFunction* FunctionToPatch; // 0x00(0x08)
	int32_t EventGraphCallOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintDebugData {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x08 (Inherited: 0x00)
struct FPointerToUberGraphFrame {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x190 (Inherited: 0x00)
struct FDebuggingInfoForSingleFunction {
public:

	char pad_0[0x190]; // 0x00(0x190)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x00)
struct FNodeToCodeAssociation {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimCurveType
// Size: 0x02 (Inherited: 0x00)
struct FAnimCurveType {
public:

	char pad_0[0x2]; // 0x00(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmark2DJumpToSettings {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GeomSelection
// Size: 0x0c (Inherited: 0x00)
struct FGeomSelection {
public:

	int32_t Type; // 0x00(0x04)
	int32_t Index; // 0x04(0x04)
	int32_t SelectionIndex; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BuilderPoly
// Size: 0x20 (Inherited: 0x00)
struct FBuilderPoly {
public:

	struct TArray<int32_t> VertexIndices; // 0x00(0x10)
	int32_t Direction; // 0x10(0x04)
	struct FName ItemName; // 0x14(0x08)
	int32_t PolyFlags; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x24 (Inherited: 0x00)
struct FCachedAnimTransitionData {
public:

	struct FName StateMachineName; // 0x00(0x08)
	struct FName FromStateName; // 0x08(0x08)
	struct FName ToStateName; // 0x10(0x08)
	char pad_18[0xc]; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimRelevancyData {
public:

	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0xc]; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimAssetPlayerData {
public:

	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimStateArray {
public:

	struct TArray<struct FCachedAnimStateData> States; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CachedAnimStateData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimStateData {
public:

	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0xc]; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 (Inherited: 0x00)
struct FPooledCameraShakes {
public:

	struct TArray<struct UCameraShake*> PooledShakes; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x01 (Inherited: 0x00)
struct FDummySpacerCameraTypes {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x20 (Inherited: 0x00)
struct FWeightedBlendable {
public:

	float Weight; // 0x00(0x04)
	struct FVector2D CustomViewportLeftTop; // 0x04(0x08)
	struct FVector2D CustomViewportSize; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct UObject* Object; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x00)
struct FCanvasIcon {
public:

	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.WrappedStringElement
// Size: 0x18 (Inherited: 0x00)
struct FWrappedStringElement {
public:

	struct FString Value; // 0x00(0x10)
	struct FVector2D LineExtent; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextSizingParameters
// Size: 0x28 (Inherited: 0x00)
struct FTextSizingParameters {
public:

	float DrawX; // 0x00(0x04)
	float DrawY; // 0x04(0x04)
	float DrawXL; // 0x08(0x04)
	float DrawYL; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* DrawFont; // 0x18(0x08)
	struct FVector2D SpacingAdjust; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// Size: 0x40 (Inherited: 0x00)
struct FChildActorAttachedActorInfo {
public:

	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CustomTraceMaskFilterName
// Size: 0x0c (Inherited: 0x00)
struct FCustomTraceMaskFilterName {
public:

	struct FName Name; // 0x00(0x08)
	enum class ETraceMaskFilter FilterType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile {
public:

	struct FName Name; // 0x00(0x08)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CustomChannelSetup
// Size: 0x0c (Inherited: 0x00)
struct FCustomChannelSetup {
public:

	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse DefaultResponse; // 0x01(0x01)
	bool bTraceType; // 0x02(0x01)
	bool bStaticObject; // 0x03(0x01)
	struct FName Name; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x48 (Inherited: 0x00)
struct FCollisionResponseTemplate {
public:

	struct FName Name; // 0x00(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x1]; // 0x09(0x01)
	bool bCanModify; // 0x0a(0x01)
	char pad_B[0x21]; // 0x0b(0x21)
	struct FName ObjectTypeName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentDelegateBinding {
public:

	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName FunctionNameToBind; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteNode {
public:

	int32_t IndexChar; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CullDistanceSizePair
// Size: 0x08 (Inherited: 0x00)
struct FCullDistanceSizePair {
public:

	float size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NamedCurveValue
// Size: 0x0c (Inherited: 0x00)
struct FNamedCurveValue {
public:

	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle {
public:

	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size: 0x10 (Inherited: 0x00)
struct FDebugCameraControllerSettingsViewModeIndex {
public:

	char pad_0[0x8]; // 0x00(0x08)
	enum class EViewModeIndex ViewModeIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DebugTextInfo
// Size: 0x60 (Inherited: 0x00)
struct FDebugTextInfo {
public:

	struct AActor* SrcActor; // 0x00(0x08)
	struct FVector SrcActorOffset; // 0x08(0x0c)
	struct FVector SrcActorDesiredOffset; // 0x14(0x0c)
	struct FString DebugText; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char bKeepAttachedToActor : 1; // 0x3c(0x01)
	char bDrawShadow : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector OrigActorLocation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float FontScale; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MulticastRecordOptions
// Size: 0x18 (Inherited: 0x00)
struct FMulticastRecordOptions {
public:

	struct FString FuncPathName; // 0x00(0x10)
	bool bServerSkip; // 0x10(0x01)
	bool bClientSkip; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0xa0 (Inherited: 0x00)
struct FRollbackNetStartupActorInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
	struct ULevel* Level; // 0x28(0x08)
	char pad_30[0x60]; // 0x30(0x60)
	struct TArray<struct UObject*> ObjReferences; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 (Inherited: 0x00)
struct FLevelNameAndTime {
public:

	struct FString LevelName; // 0x00(0x10)
	uint32_t LevelChangeTimeInMS; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DirectionalShadowUseSkylightAOParameters
// Size: 0x10 (Inherited: 0x00)
struct FDirectionalShadowUseSkylightAOParameters {
public:

	float FullShadowThreshold; // 0x00(0x04)
	float ShadowSharpness; // 0x04(0x04)
	float FadeAoDistance; // 0x08(0x04)
	float TransitionDistance; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x00)
struct FGraphReference {
public:

	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* GraphBlueprint; // 0x08(0x08)
	struct FGuid GraphGuid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 (Inherited: 0x00)
struct FEdGraphPinReference {
public:

	struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x00(0x08)
	struct FGuid PinId; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x00)
struct FPluginRedirect {
public:

	struct FString OldPluginName; // 0x00(0x10)
	struct FString NewPluginName; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StructRedirect
// Size: 0x10 (Inherited: 0x00)
struct FStructRedirect {
public:

	struct FName OldStructName; // 0x00(0x08)
	struct FName NewStructName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ClassRedirect
// Size: 0x3c (Inherited: 0x00)
struct FClassRedirect {
public:

	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName NewClassClass; // 0x28(0x08)
	struct FName NewClassPackage; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GameNameRedirect
// Size: 0x10 (Inherited: 0x00)
struct FGameNameRedirect {
public:

	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ScreenMessageString
// Size: 0x30 (Inherited: 0x00)
struct FScreenMessageString {
public:

	uint64_t Key; // 0x00(0x08)
	struct FString ScreenMessage; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float TimeToDisplay; // 0x1c(0x04)
	float CurrentTimeDisplayed; // 0x20(0x04)
	struct FVector2D TextScale; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DropNoteInfo
// Size: 0x28 (Inherited: 0x00)
struct FDropNoteInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x00)
struct FStatColorMapping {
public:

	struct FString StatName; // 0x00(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 (Inherited: 0x00)
struct FStatColorMapEntry {
public:

	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x00)
struct FNamedNetDriver {
public:

	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 (Inherited: 0x00)
struct FLevelStreamingStatus {
public:

	struct FName PackageName; // 0x00(0x08)
	char bShouldBeLoaded : 1; // 0x08(0x01)
	char bShouldBeVisible : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t LodIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x00)
struct FFullyLoadedPackagesInfo {
public:

	enum class EFullyLoadPackageType FullyLoadType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x00)
struct FNetDriverDefinition {
public:

	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x0c (Inherited: 0x00)
struct FExposureSettings {
public:

	float FixedEV100; // 0x00(0x04)
	bool bFixed; // 0x04(0x01)
	bool bUseLuminance; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float Fixedluminance; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x00)
struct FTickPrerequisite {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightMapAtlasPackingSettings
// Size: 0x20 (Inherited: 0x00)
struct FLightMapAtlasPackingSettings {
public:

	enum class ELightMapGroupingPolicy LightMapGroupingPolicy; // 0x00(0x01)
	enum class ELightMapAllocationPolicy LightMapAllocationPolicy; // 0x01(0x01)
	bool bPackAndNoBaking; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t TotalLightMapCount; // 0x04(0x04)
	float TexelPerMeter; // 0x08(0x04)
	float MinTexelPerTriangle; // 0x0c(0x04)
	float GlobalLODLightMapScaleFactor; // 0x10(0x04)
	int32_t MaxLightMapResolution; // 0x14(0x04)
	int32_t AtlasPaddingPixels; // 0x18(0x04)
	int32_t LightMapMarginPixels; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CanvasUVTri
// Size: 0x60 (Inherited: 0x00)
struct FCanvasUVTri {
public:

	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector {
public:

	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollectionReference
// Size: 0x08 (Inherited: 0x00)
struct FCollectionReference {
public:

	struct FName CollectionName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ComponentReference
// Size: 0x28 (Inherited: 0x00)
struct FComponentReference {
public:

	struct AActor* OtherActor; // 0x00(0x08)
	struct FName ComponentProperty; // 0x08(0x08)
	struct FString PathToComponent; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x08 (Inherited: 0x00)
struct FConstrainComponentPropName {
public:

	struct FName ComponentName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.POV
// Size: 0x1c (Inherited: 0x00)
struct FPOV {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x98 (Inherited: 0x00)
struct FAnimUpdateRateParameters {
public:

	char pad_0[0x1]; // 0x00(0x01)
	enum class EUpdateRateShiftBucket ShiftBucket; // 0x01(0x01)
	char bInterpolateSkippedFrames : 1; // 0x02(0x01)
	char bShouldUseLodMap : 1; // 0x02(0x01)
	char bShouldUseMinLod : 1; // 0x02(0x01)
	char bShouldUseMinURO : 1; // 0x02(0x01)
	char bSkipUpdate : 1; // 0x02(0x01)
	char bSkipEvaluation : 1; // 0x02(0x01)
	char pad_2_6 : 2; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t UpdateRate; // 0x04(0x04)
	int32_t EvaluationRate; // 0x08(0x04)
	float TickedPoseOffestTime; // 0x0c(0x04)
	float AdditionalTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int32_t BaseNonRenderedUpdateRate; // 0x18(0x04)
	int32_t MaxEvalRateForInterpolation; // 0x1c(0x04)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30(0x50)
	struct TArray<struct FAnimThresholdRate> BaseVisibleDistanceFactorThesholdsRates; // 0x80(0x10)
	int32_t SkippedUpdateFrames; // 0x90(0x04)
	int32_t SkippedEvalFrames; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimThresholdRate
// Size: 0x08 (Inherited: 0x00)
struct FAnimThresholdRate {
public:

	float ThresHold; // 0x00(0x04)
	int32_t Rate; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSlotDesc
// Size: 0x0c (Inherited: 0x00)
struct FAnimSlotDesc {
public:

	struct FName SlotName; // 0x00(0x08)
	int32_t NumChannels; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotInfo {
public:

	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> ChannelWeights; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MTDResult
// Size: 0x10 (Inherited: 0x00)
struct FMTDResult {
public:

	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.OverlapResult
// Size: 0x20 (Inherited: 0x00)
struct FOverlapResult {
public:

	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x08(0x08)
	char pad_10[0xc]; // 0x10(0x0c)
	char bBlockingHit : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 (Inherited: 0x00)
struct FPrimitiveMaterialRef {
public:

	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32_t ElementIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SwarmDebugOptions
// Size: 0x04 (Inherited: 0x00)
struct FSwarmDebugOptions {
public:

	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char bInitialized : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 (Inherited: 0x00)
struct FLightmassDebugOptions {
public:

	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char pad_9_3 : 5; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x20 (Inherited: 0x00)
struct FLightmassPrimitiveSettings {
public:

	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveLightFalloffExponent; // 0x04(0x04)
	float EmissiveLightExplicitInfluenceRadius; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float EmissiveAttenuationRadius; // 0x10(0x04)
	float DiffuseBoost; // 0x14(0x04)
	float FullyOccludedSamplesFraction; // 0x18(0x04)
	char bJoinLocalLightBake : 1; // 0x1c(0x01)
	char bIgnoreBounds : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BasedPosition
// Size: 0x38 (Inherited: 0x00)
struct FBasedPosition {
public:

	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector CachedBaseLocation; // 0x14(0x0c)
	struct FRotator CachedBaseRotation; // 0x20(0x0c)
	struct FVector CachedTransPosition; // 0x2c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FractureEffect
// Size: 0x10 (Inherited: 0x00)
struct FFractureEffect {
public:

	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollisionImpactData
// Size: 0x28 (Inherited: 0x00)
struct FCollisionImpactData {
public:

	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x00(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0x0c)
	struct FVector TotalFrictionImpulse; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 (Inherited: 0x00)
struct FRigidBodyContactInfo {
public:

	struct FVector ContactPosition; // 0x00(0x0c)
	struct FVector ContactNormal; // 0x0c(0x0c)
	float ContactPenetration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x2]; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x34 (Inherited: 0x00)
struct FRigidBodyErrorCorrection {
public:

	float PingExtrapolation; // 0x00(0x04)
	float PingLimit; // 0x04(0x04)
	float ErrorPerLinearDifference; // 0x08(0x04)
	float ErrorPerAngularDifference; // 0x0c(0x04)
	float MaxRestoredStateError; // 0x10(0x04)
	float MaxLinearHardSnapDistance; // 0x14(0x04)
	float PositionLerp; // 0x18(0x04)
	float AngleLerp; // 0x1c(0x04)
	float LinearVelocityCoefficient; // 0x20(0x04)
	float AngularVelocityCoefficient; // 0x24(0x04)
	float ErrorAccumulationSeconds; // 0x28(0x04)
	float ErrorAccumulationDistanceSq; // 0x2c(0x04)
	float ErrorAccumulationSimilarity; // 0x30(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialShadingModelField
// Size: 0x02 (Inherited: 0x00)
struct FMaterialShadingModelField {
public:

	uint16_t ShadingModelField; // 0x00(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AttachmentTransformRules
// Size: 0x04 (Inherited: 0x00)
struct FAttachmentTransformRules {
public:

	enum class EAttachmentRule LocationRule; // 0x00(0x01)
	enum class EAttachmentRule RotationRule; // 0x01(0x01)
	enum class EAttachmentRule ScaleRule; // 0x02(0x01)
	bool bWeldSimulatedBodies; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GlobalInteriorFogData
// Size: 0x30 (Inherited: 0x00)
struct FGlobalInteriorFogData {
public:

	struct UMaterialInterface* InteriorFogMaterial; // 0x00(0x08)
	struct FLinearColor Albedo; // 0x08(0x10)
	float ExtinctionScale; // 0x18(0x04)
	float ViewDistance; // 0x1c(0x04)
	float ExcludeRange; // 0x20(0x04)
	float ExcludeOpacity; // 0x24(0x04)
	float ExtendVisibleDistance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExponentialHeightFogData
// Size: 0x10 (Inherited: 0x00)
struct FExponentialHeightFogData {
public:

	float SecondFogDensity; // 0x00(0x04)
	float SecondFogHeightFalloff; // 0x04(0x04)
	float SecondFogHeightOffset; // 0x08(0x04)
	float SecondFogStartDistance; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x00)
struct FFontCharacter {
public:

	int32_t StartU; // 0x00(0x04)
	int32_t StartV; // 0x04(0x04)
	int32_t USize; // 0x08(0x04)
	int32_t VSize; // 0x0c(0x04)
	char TextureIndex; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t VerticalOffset; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FontImportOptionsData
// Size: 0xb0 (Inherited: 0x00)
struct FFontImportOptionsData {
public:

	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char bEnableAntialiasing : 1; // 0x14(0x01)
	char bEnableBold : 1; // 0x14(0x01)
	char bEnableItalic : 1; // 0x14(0x01)
	char bEnableUnderline : 1; // 0x14(0x01)
	char bAlphaOnly : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class EFontImportCharacterSet CharacterSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Chars; // 0x20(0x10)
	struct FString UnicodeRange; // 0x30(0x10)
	struct FString CharsFilePath; // 0x40(0x10)
	struct FString CharsFileWildcard; // 0x50(0x10)
	char bCreatePrintableOnly : 1; // 0x60(0x01)
	char bIncludeASCIIRange : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char bEnableDropShadow : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32_t TexturePageWidth; // 0x78(0x04)
	int32_t TexturePageMaxHeight; // 0x7c(0x04)
	int32_t XPadding; // 0x80(0x04)
	int32_t YPadding; // 0x84(0x04)
	int32_t ExtendBoxTop; // 0x88(0x04)
	int32_t ExtendBoxBottom; // 0x8c(0x04)
	int32_t ExtendBoxRight; // 0x90(0x04)
	int32_t ExtendBoxLeft; // 0x94(0x04)
	char bEnableLegacyMode : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t DistanceFieldScaleFactor; // 0xa4(0x04)
	float DistanceFieldScanRadiusScale; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveForceFeedbackEffect {
public:

	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ForceFeedbackParameters
// Size: 0x0c (Inherited: 0x00)
struct FForceFeedbackParameters {
public:

	struct FName Tag; // 0x00(0x08)
	bool bLooping; // 0x08(0x01)
	bool bIgnoreTimeDilation; // 0x09(0x01)
	bool bPlayWhilePaused; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveHapticFeedbackEffect {
public:

	struct UHapticFeedbackEffect_Base* HapticEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ClusterNode
// Size: 0x40 (Inherited: 0x00)
struct FClusterNode {
public:

	struct FVector BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
	struct FVector MinInstanceScale; // 0x28(0x0c)
	struct FVector MaxInstanceScale; // 0x34(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// Size: 0x28 (Inherited: 0x00)
struct FClusterNode_DEPRECATED {
public:

	struct FVector BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 (Inherited: 0x00)
struct FHLODProxyMesh {
public:

	/*LazyObjectProperty*/char LODActor[0x1c]; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UStaticMesh* StaticMesh; // 0x20(0x08)
	struct FName Key; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundModulationParameter
// Size: 0x14 (Inherited: 0x00)
struct FSoundModulationParameter {
public:

	struct FName Control; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundModulation
// Size: 0x10 (Inherited: 0x00)
struct FSoundModulation {
public:

	struct TArray<struct USoundModulationPluginSourceSettingsBase*> Settings; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ImportanceTexture
// Size: 0x50 (Inherited: 0x00)
struct FImportanceTexture {
public:

	struct FIntPoint size; // 0x00(0x08)
	int32_t NumMips; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> MarginalCDF; // 0x10(0x10)
	struct TArray<float> ConditionalCDF; // 0x20(0x10)
	struct TArray<struct FColor> TextureData; // 0x30(0x10)
	struct TWeakObjectPtr<struct UTexture2D> Texture; // 0x40(0x08)
	enum class EImportanceWeight Weighting; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CachedKeyToActionInfo
// Size: 0x70 (Inherited: 0x00)
struct FCachedKeyToActionInfo {
public:

	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshInstanceData {
public:

	struct FMatrix Transform; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x08 (Inherited: 0x00)
struct FInstancedStaticMeshMappingInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.IntegralKey
// Size: 0x08 (Inherited: 0x00)
struct FIntegralKey {
public:

	float Time; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x00)
struct FCurveEdTab {
public:

	struct FString TabName; // 0x00(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x04)
	float ViewEndInput; // 0x24(0x04)
	float ViewStartOutput; // 0x28(0x04)
	float ViewEndOutput; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x00)
struct FCurveEdEntry {
public:

	struct UObject* CurveObject; // 0x00(0x08)
	struct FColor CurveColor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x04)
	int32_t bColorCurve; // 0x24(0x04)
	int32_t bFloatingPointColorCurve; // 0x28(0x04)
	int32_t bClamp; // 0x2c(0x04)
	float ClampLow; // 0x30(0x04)
	float ClampHigh; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 (Inherited: 0x00)
struct FInterpEdSelKey {
public:

	struct UInterpGroup* Group; // 0x00(0x08)
	struct UInterpTrack* Track; // 0x08(0x08)
	int32_t KeyIndex; // 0x10(0x04)
	float UnsnappedPosition; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 (Inherited: 0x00)
struct FCameraPreviewInfo {
public:

	struct UClass* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* PawnInst; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SubTrackGroup
// Size: 0x28 (Inherited: 0x00)
struct FSubTrackGroup {
public:

	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32_t> TrackIndices; // 0x10(0x10)
	char bIsCollapsed : 1; // 0x20(0x01)
	char bIsSelected : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 (Inherited: 0x00)
struct FSupportedSubTrackInfo {
public:

	struct UClass* SupportedClass; // 0x00(0x08)
	struct FString SubTrackName; // 0x08(0x10)
	int32_t GroupIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAnimControlTrackKey {
public:

	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float AnimStartOffset; // 0x10(0x04)
	float AnimEndOffset; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char bReverse : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BoolTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FBoolTrackKey {
public:

	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DirectorTrackCut
// Size: 0x14 (Inherited: 0x00)
struct FDirectorTrackCut {
public:

	float Time; // 0x00(0x04)
	float TransitionTime; // 0x04(0x04)
	struct FName TargetCamGroup; // 0x08(0x08)
	int32_t ShotNumber; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EventTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FEventTrackKey {
public:

	float Time; // 0x00(0x04)
	struct FName EventName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 (Inherited: 0x00)
struct FInterpLookupTrack {
public:

	struct TArray<struct FInterpLookupPoint> Points; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InterpLookupPoint
// Size: 0x0c (Inherited: 0x00)
struct FInterpLookupPoint {
public:

	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FParticleReplayTrackKey {
public:

	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32_t ClipIDNumber; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundTrackKey
// Size: 0x18 (Inherited: 0x00)
struct FSoundTrackKey {
public:

	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ToggleTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FToggleTrackKey {
public:

	float Time; // 0x00(0x04)
	enum class ETrackToggleAction ToggleAction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VisibilityTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FVisibilityTrackKey {
public:

	float Time; // 0x00(0x04)
	enum class EVisibilityTrackAction Action; // 0x04(0x01)
	enum class EVisibilityTrackCondition ActiveCondition; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VectorSpringState
// Size: 0x18 (Inherited: 0x00)
struct FVectorSpringState {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FloatSpringState
// Size: 0x08 (Inherited: 0x00)
struct FFloatSpringState {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x10 (Inherited: 0x00)
struct FDrawToRenderTargetContext {
public:

	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LatentActionManager
// Size: 0x60 (Inherited: 0x00)
struct FLatentActionManager {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x00)
struct FLayerActorStats {
public:

	struct UClass* Type; // 0x00(0x08)
	int32_t Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size: 0x38 (Inherited: 0x00)
struct FReplicatedStaticActorDestructionInfo {
public:

	char pad_0[0x30]; // 0x00(0x30)
	struct UClass* ObjClass; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ManMadeAmbientProbe
// Size: 0x01 (Inherited: 0x00)
struct FManMadeAmbientProbe {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightImportanceSampleAssetData
// Size: 0x28 (Inherited: 0x00)
struct FLightImportanceSampleAssetData {
public:

	struct FVector SamplePosition; // 0x00(0x0c)
	struct FVector SampleExtent; // 0x0c(0x0c)
	struct TArray<struct FLightImportanceAssetData> LightImportances; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightImportanceAssetData
// Size: 0x14 (Inherited: 0x00)
struct FLightImportanceAssetData {
public:

	struct FGuid LightGuid; // 0x00(0x10)
	float Importance; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BatchedPoint
// Size: 0x28 (Inherited: 0x00)
struct FBatchedPoint {
public:

	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float RemainingLifeTime; // 0x20(0x04)
	char DepthPriority; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BatchedLine
// Size: 0x34 (Inherited: 0x00)
struct FBatchedLine {
public:

	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float RemainingLifeTime; // 0x2c(0x04)
	char DepthPriority; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LocalLightGroupBakeShadowMapInfo
// Size: 0x40 (Inherited: 0x00)
struct FLocalLightGroupBakeShadowMapInfo {
public:

	struct UShadowMapTexture2D* ShadowMapTexture2D; // 0x00(0x08)
	struct FVector2D CoordinateScale; // 0x08(0x08)
	struct FVector2D CoordinateBias; // 0x10(0x08)
	struct TArray<bool> bChannelValid; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4 InvUniformPenumbraSize; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LocalLightGroupBakeLightMapInfo
// Size: 0x18 (Inherited: 0x00)
struct FLocalLightGroupBakeLightMapInfo {
public:

	struct ULightMapTexture2D* LightMapTextureLowQuality; // 0x00(0x08)
	struct FVector2D CoordinateScale; // 0x08(0x08)
	struct FVector2D CoordinateBias; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x00)
struct FClientReceiveData {
public:

	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32_t MessageIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_2; // 0x28(0x08)
	struct APlayerState* RelatedPlayerState_3; // 0x30(0x08)
	struct UObject* OptionalObject; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParameterGroupData
// Size: 0x18 (Inherited: 0x00)
struct FParameterGroupData {
public:

	struct FString GroupName; // 0x00(0x10)
	int32_t GroupSortPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialParameterCollectionInfo {
public:

	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialFunctionInfo {
public:

	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialFunctionInterface* Function; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x00)
struct FMaterialSpriteElement {
public:

	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParameterChannelNames
// Size: 0x60 (Inherited: 0x00)
struct FParameterChannelNames {
public:

	struct FText R; // 0x00(0x18)
	struct FText G; // 0x18(0x18)
	struct FText B; // 0x30(0x18)
	struct FText A; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CustomDefine
// Size: 0x20 (Inherited: 0x00)
struct FCustomDefine {
public:

	struct FString DefineName; // 0x00(0x10)
	struct FString DefineValue; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CustomOutput
// Size: 0x0c (Inherited: 0x00)
struct FCustomOutput {
public:

	struct FName OutputName; // 0x00(0x08)
	enum class ECustomMaterialOutputType OutputType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LandscapeLayerTillingsValue
// Size: 0x04 (Inherited: 0x00)
struct FLandscapeLayerTillingsValue {
public:

	float LayerTilling; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AtlasMapRegionArray
// Size: 0x18 (Inherited: 0x00)
struct FAtlasMapRegionArray {
public:

	enum class EMaterialAtlasUsage AtlasUsage; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector4> RegionValues; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FScalarParameterAtlasInstanceData {
public:

	bool bIsUsedAsAtlasPosition; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	/*struct TSoftObjectPtr<UCurveLinearColor>*/char Curve[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UCurveLinearColorAtlas>*/char Atlas[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x10 (Inherited: 0x00)
struct FLightmassMaterialInterfaceSettings {
public:

	float EmissiveBoost; // 0x00(0x04)
	float DiffuseBoost; // 0x04(0x04)
	float ExportResolutionScale; // 0x08(0x04)
	char bCastShadowAsMasked : 1; // 0x0c(0x01)
	char bOverrideCastShadowAsMasked : 1; // 0x0c(0x01)
	char bOverrideEmissiveBoost : 1; // 0x0c(0x01)
	char bOverrideDiffuseBoost : 1; // 0x0c(0x01)
	char bOverrideExportResolutionScale : 1; // 0x0c(0x01)
	char bOverrideExportAsLightmapUV : 1; // 0x0c(0x01)
	char bExportAsLightmapUV : 1; // 0x0c(0x01)
	char bOverrideForceNoExportAsLightmapUV : 1; // 0x0c(0x01)
	char bForceNoExportAsLightmapUV : 1; // 0x0d(0x01)
	char pad_D_1 : 7; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FInterpGroupActorInfo {
public:

	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> actors; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CameraCutInfo
// Size: 0x10 (Inherited: 0x00)
struct FCameraCutInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshGroupSettings
// Size: 0x80 (Inherited: 0x00)
struct FMeshGroupSettings {
public:

	struct FName GroupName; // 0x00(0x08)
	struct TArray<int32_t> MinLODs; // 0x08(0x10)
	struct TArray<int32_t> PCMinLODs; // 0x18(0x10)
	struct TArray<float> LODFactorScales; // 0x28(0x10)
	struct TArray<bool> EnableLodBlend; // 0x38(0x10)
	struct TArray<bool> HDEnableLodBlend; // 0x48(0x10)
	struct TArray<float> CullingDistanceFactorScale; // 0x58(0x10)
	struct TArray<float> PCCullingDistanceFactorScale; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 (Inherited: 0x00)
struct FMeshInstancingSettings {
public:

	struct UClass* ActorClassToUse; // 0x00(0x08)
	int32_t InstanceReplacementThreshold; // 0x08(0x04)
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // 0x0c(0x01)
	bool bSkipMeshesWithVertexColors; // 0x0d(0x01)
	bool bUseHLODVolumes; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct UClass* ISMComponentToUse; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialCluster
// Size: 0x18 (Inherited: 0x00)
struct FMaterialCluster {
public:

	uint32_t TargetSectionIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<uint32_t> SourceSectionIndexArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseInfo {
public:

	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NameCurveKey
// Size: 0x0c (Inherited: 0x00)
struct FNameCurveKey {
public:

	float Time; // 0x00(0x04)
	struct FName Value; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ChannelDefinition
// Size: 0x28 (Inherited: 0x00)
struct FChannelDefinition {
public:

	struct FName ChannelName; // 0x00(0x08)
	struct FName ClassName; // 0x08(0x08)
	struct UClass* ChannelClass; // 0x10(0x08)
	int32_t StaticChannelIndex; // 0x18(0x04)
	bool bTickOnCreate; // 0x1c(0x01)
	bool bServerOpen; // 0x1d(0x01)
	bool bClientOpen; // 0x1e(0x01)
	bool bInitialServer; // 0x1f(0x01)
	bool bInitialClient; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x38 (Inherited: 0x00)
struct FPacketSimulationSettings {
public:

	int32_t PktLoss; // 0x00(0x04)
	int32_t PktJitter; // 0x04(0x04)
	int32_t PktLossMaxSize; // 0x08(0x04)
	int32_t PktLossMinSize; // 0x0c(0x04)
	int32_t PktOrder; // 0x10(0x04)
	int32_t PktDup; // 0x14(0x04)
	int32_t PktLag; // 0x18(0x04)
	int32_t PktLagVariance; // 0x1c(0x04)
	int32_t PktLagMin; // 0x20(0x04)
	int32_t PktLagMax; // 0x24(0x04)
	int32_t PktIncomingLagMin; // 0x28(0x04)
	int32_t PktIncomingLagMax; // 0x2c(0x04)
	int32_t PktIncomingLoss; // 0x30(0x04)
	int32_t PktIncomingJitter; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// Size: 0x20 (Inherited: 0x00)
struct FNetworkEmulationProfileDescription {
public:

	struct FString ProfileName; // 0x00(0x10)
	struct FString ToolTip; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NodeItem
// Size: 0x40 (Inherited: 0x00)
struct FNodeItem {
public:

	struct FName ParentName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Names
// Size: 0x100 (Inherited: 0x00)
struct FTOD_Names {
public:

	struct FString WeatherNames_Wtx[0x10]; // 0x00(0x100)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_TexturesInEditor
// Size: 0x18 (Inherited: 0x00)
struct FTOD_TexturesInEditor {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Textures
// Size: 0x28 (Inherited: 0x00)
struct FTOD_Textures {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UTexture2D* CloudNoiseTexture; // 0x08(0x08)
	struct UTexture2D* NoiseTexture; // 0x10(0x08)
	struct UTexture2D* LunarFace; // 0x18(0x08)
	struct UKojimaRuntimeData* RuntimeData; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Actors
// Size: 0x28 (Inherited: 0x00)
struct FTOD_Actors {
public:

	struct ADirectionalLight* DirectionalLight; // 0x00(0x08)
	struct AActor* LensFlareActor; // 0x08(0x08)
	struct ASkyLight* SkyLightActor; // 0x10(0x08)
	struct AExponentialHeightFog* HeightFogActor; // 0x18(0x08)
	struct ASkyAtmosphere* SkyAmopshere; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Sun
// Size: 0x34 (Inherited: 0x00)
struct FTOD_Sun {
public:

	char pad_0[0x18]; // 0x00(0x18)
	float StarDis; // 0x18(0x04)
	float StarBrightness; // 0x1c(0x04)
	int32_t StarNum; // 0x20(0x04)
	struct FLinearColor StarRGB; // 0x24(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Animation
// Size: 0x30 (Inherited: 0x00)
struct FTOD_Animation {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Time
// Size: 0x04 (Inherited: 0x00)
struct FTOD_Time {
public:

	float CurrTime; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_NightParameters
// Size: 0x10 (Inherited: 0x00)
struct FTOD_NightParameters {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_WeatherActors
// Size: 0x180 (Inherited: 0x00)
struct FTOD_WeatherActors {
public:

	struct ASkyAtmosphere* SkyAmopshereActor_Wtx[0x10]; // 0x00(0x80)
	struct APostProcessVolume* PPVolume_Wtx[0x10]; // 0x80(0x80)
	struct AStaticMeshActor* SkyMesh_Wtx[0x10]; // 0x100(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_PRTPlacingParameters
// Size: 0x24 (Inherited: 0x00)
struct FTOD_PRTPlacingParameters {
public:

	float VoxelSize; // 0x00(0x04)
	float Bandwidth; // 0x04(0x04)
	float MaxWidth; // 0x08(0x04)
	float MinWidth; // 0x0c(0x04)
	float SmallBoxWidth; // 0x10(0x04)
	float SmallBoxWidth_hp; // 0x14(0x04)
	float SmallBoxWidth_lw; // 0x18(0x04)
	float variance_threshold; // 0x1c(0x04)
	int32_t krek; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_CycleParameters
// Size: 0x24 (Inherited: 0x00)
struct FTOD_CycleParameters {
public:

	char pad_0[0x14]; // 0x00(0x14)
	float latitude; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
	float ZRotate; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_GiAdjust
// Size: 0x68 (Inherited: 0x00)
struct FTOD_GiAdjust {
public:

	char pad_0[0xd]; // 0x00(0x0d)
	bool UseLerp; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float PrtMult; // 0x10(0x04)
	float NormalStrenthen; // 0x14(0x04)
	char pad_18[0x10]; // 0x18(0x10)
	struct FSoftObjectPath SyncTarget; // 0x28(0x18)
	float UseFakeDirectionalBounce; // 0x40(0x04)
	struct FLinearColor GlobalLowQualityMobileBounceColor; // 0x44(0x10)
	struct FLinearColor GlobalCharacterLightingHack; // 0x54(0x10)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_SkylightCompensate
// Size: 0x08 (Inherited: 0x00)
struct FTOD_SkylightCompensate {
public:

	float SLightCompen; // 0x00(0x04)
	float SkyMABC; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Art
// Size: 0x14 (Inherited: 0x00)
struct FTOD_Art {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleBurst
// Size: 0x0c (Inherited: 0x00)
struct FParticleBurst {
public:

	int32_t Count; // 0x00(0x04)
	int32_t CountLow; // 0x04(0x04)
	float Time; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x00)
struct FParticleRandomSeedInfo {
public:

	struct FName ParameterName; // 0x00(0x08)
	char bGetSeedFromInstance : 1; // 0x08(0x01)
	char bInstanceSeedIsIndex : 1; // 0x08(0x01)
	char bResetSeedOnEmitterLooping : 1; // 0x08(0x01)
	char bRandomlySelectSeedArray : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x00)
struct FParticleCurvePair {
public:

	struct FString CurveName; // 0x00(0x10)
	struct UObject* CurveObject; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BeamModifierOptions
// Size: 0x04 (Inherited: 0x00)
struct FBeamModifierOptions {
public:

	char bModify : 1; // 0x00(0x01)
	char bScale : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 (Inherited: 0x00)
struct FParticleEvent_GenerateInfo {
public:

	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t frequency; // 0x04(0x04)
	int32_t ParticleFrequency; // 0x08(0x04)
	char FirstTimeOnly : 1; // 0x0c(0x01)
	char LastTimeOnly : 1; // 0x0c(0x01)
	char UseReflectedImpactVector : 1; // 0x0c(0x01)
	char bUseOrbitOffset : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName CustomName; // 0x10(0x08)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x14 (Inherited: 0x00)
struct FLocationBoneSocketInfo {
public:

	struct FName BoneSocketName; // 0x00(0x08)
	struct FVector offset; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.OrbitOptions
// Size: 0x04 (Inherited: 0x00)
struct FOrbitOptions {
public:

	char bProcessDuringSpawn : 1; // 0x00(0x01)
	char bProcessDuringUpdate : 1; // 0x00(0x01)
	char bUseEmitterTime : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BeamTargetData
// Size: 0x0c (Inherited: 0x00)
struct FBeamTargetData {
public:

	struct FName TargetName; // 0x00(0x08)
	float TargetPercentage; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x160 (Inherited: 0x00)
struct FGPUSpriteResourceData {
public:

	struct TArray<struct FColor> QuantizedColorSamples; // 0x00(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 ColorBias; // 0x40(0x10)
	struct FVector4 MiscScale; // 0x50(0x10)
	struct FVector4 MiscBias; // 0x60(0x10)
	struct FVector4 SimulationAttrCurveScale; // 0x70(0x10)
	struct FVector4 SimulationAttrCurveBias; // 0x80(0x10)
	struct FVector4 SubImageSize; // 0x90(0x10)
	struct FVector4 SizeBySpeed; // 0xa0(0x10)
	struct FVector ConstantAcceleration; // 0xb0(0x0c)
	struct FVector OrbitOffsetBase; // 0xbc(0x0c)
	struct FVector OrbitOffsetRange; // 0xc8(0x0c)
	struct FVector OrbitFrequencyBase; // 0xd4(0x0c)
	struct FVector OrbitFrequencyRange; // 0xe0(0x0c)
	struct FVector OrbitPhaseBase; // 0xec(0x0c)
	struct FVector OrbitPhaseRange; // 0xf8(0x0c)
	float GlobalVectorFieldScale; // 0x104(0x04)
	float GlobalVectorFieldTightness; // 0x108(0x04)
	float PerParticleVectorFieldScale; // 0x10c(0x04)
	float PerParticleVectorFieldBias; // 0x110(0x04)
	float DragCoefficientScale; // 0x114(0x04)
	float DragCoefficientBias; // 0x118(0x04)
	float ResilienceScale; // 0x11c(0x04)
	float ResilienceBias; // 0x120(0x04)
	float CollisionRadiusScale; // 0x124(0x04)
	float CollisionRadiusBias; // 0x128(0x04)
	float CollisionTimeBias; // 0x12c(0x04)
	float CollisionRandomSpread; // 0x130(0x04)
	float CollisionRandomDistribution; // 0x134(0x04)
	float OneMinusFriction; // 0x138(0x04)
	float RotationRateScale; // 0x13c(0x04)
	float CameraMotionBlurAmount; // 0x140(0x04)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x144(0x01)
	enum class EParticleAxisLock LockAxisFlag; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FVector2D PivotOffset; // 0x148(0x08)
	char bRemoveHMDRoll : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float MinFacingCameraBlendDistance; // 0x154(0x04)
	float MaxFacingCameraBlendDistance; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 (Inherited: 0x00)
struct FNamedEmitterMaterial {
public:

	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x00)
struct FLODSoloTrack {
public:

	struct TArray<char> SoloEnableSetting; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleSystemLOD
// Size: 0x01 (Inherited: 0x00)
struct FParticleSystemLOD {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleSystemReplayFrame {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleEmitterReplayFrame {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformLocalLight
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformLocalLight {
public:

	struct ULocalLightGroupBake* Default; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformTextureCube
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformTextureCube {
public:

	struct UTextureCube* Default; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformTexture
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformTexture {
public:

	struct UTexture* Default; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformMaterialInterface
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformMaterialInterface {
public:

	struct UMaterialInterface* Default; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformStaticMesh
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformStaticMesh {
public:

	struct UStaticMesh* Default; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformObject
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformObject {
public:

	struct UObject* Default; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformQuat
// Size: 0x10 (Inherited: 0x00)
struct FPerPlatformQuat {
public:

	struct FQuat Default; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformRotator
// Size: 0x0c (Inherited: 0x00)
struct FPerPlatformRotator {
public:

	struct FRotator Default; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformVector4
// Size: 0x10 (Inherited: 0x00)
struct FPerPlatformVector4 {
public:

	struct FVector4 Default; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformVector
// Size: 0x0c (Inherited: 0x00)
struct FPerPlatformVector {
public:

	struct FVector Default; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformVector2D
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformVector2D {
public:

	struct FVector2D Default; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformString
// Size: 0x10 (Inherited: 0x00)
struct FPerPlatformString {
public:

	struct FString Default; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformLocalReflectionGroupBakeSoftPtr
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformLocalReflectionGroupBakeSoftPtr {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformLocalLightGroupBakeSoftPtr
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformLocalLightGroupBakeSoftPtr {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformStaticMeshSoftPtr
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformStaticMeshSoftPtr {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformTextureCubeSoftPtr
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformTextureCubeSoftPtr {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformTMapStringTextureCubeSoftPtr
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformTMapStringTextureCubeSoftPtr {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Quat
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Quat {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Rotator
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Rotator {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Vector4
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Vector4 {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Vector2D
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Vector2D {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Vector
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Vector {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_String
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_String {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Bool
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Bool {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Float
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Float {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatform_Int32
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatform_Int32 {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformTMapInt32FGuid
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformTMapInt32FGuid {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformFGuid
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformFGuid {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TireFrictionScalePair
// Size: 0x10 (Inherited: 0x00)
struct FTireFrictionScalePair {
public:

	struct UTireType* TireType; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ChaosPhysicsSettings
// Size: 0x03 (Inherited: 0x00)
struct FChaosPhysicsSettings {
public:

	enum class EChaosThreadingMode DefaultThreadingModel; // 0x00(0x01)
	enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x01(0x01)
	enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x0c (Inherited: 0x00)
struct FPhysicalSurfaceName {
public:

	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x00)
struct FDelegateArray {
public:

	/*struct TArray<struct FDelegate>*/char Delegates[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetTransitionParams {
public:

	float BlendTime; // 0x00(0x04)
	enum class EViewTargetBlendFunction BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x14 (Inherited: 0x00)
struct FUpdateLevelVisibilityLevelInfo {
public:

	struct FName PackageName; // 0x00(0x08)
	struct FName Filename; // 0x08(0x08)
	char bIsVisible : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size: 0x10 (Inherited: 0x00)
struct FUpdateLevelStreamingLevelStatus {
public:

	struct FName PackageName; // 0x00(0x08)
	int32_t LodIndex; // 0x08(0x04)
	char bNewShouldBeLoaded : 1; // 0x0c(0x01)
	char bNewShouldBeVisible : 1; // 0x0c(0x01)
	char bNewShouldBlockOnLoad : 1; // 0x0c(0x01)
	char pad_C_3 : 5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputActionSpeechMapping
// Size: 0x10 (Inherited: 0x00)
struct FInputActionSpeechMapping {
public:

	struct FName ActionName; // 0x00(0x08)
	struct FName SpeechKeyword; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisKeyMapping {
public:

	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKey Key; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputActionKeyMapping {
public:

	struct FName ActionName; // 0x00(0x08)
	char bShift : 1; // 0x08(0x01)
	char bCtrl : 1; // 0x08(0x01)
	char bAlt : 1; // 0x08(0x01)
	char bCmd : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FKey Key; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KeyBind
// Size: 0x30 (Inherited: 0x00)
struct FKeyBind {
public:

	struct FKey Key; // 0x00(0x18)
	struct FString Command; // 0x18(0x10)
	char Control : 1; // 0x28(0x01)
	char Shift : 1; // 0x28(0x01)
	char Alt : 1; // 0x28(0x01)
	char Cmd : 1; // 0x28(0x01)
	char bIgnoreCtrl : 1; // 0x28(0x01)
	char bIgnoreShift : 1; // 0x28(0x01)
	char bIgnoreAlt : 1; // 0x28(0x01)
	char bIgnoreCmd : 1; // 0x28(0x01)
	char bDisabled : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PlayerMuteList
// Size: 0x38 (Inherited: 0x00)
struct FPlayerMuteList {
public:

	char pad_0[0x30]; // 0x00(0x30)
	bool bHasVoiceHandshakeCompleted; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t VoiceChannelIdx; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PoseDataContainer
// Size: 0x90 (Inherited: 0x00)
struct FPoseDataContainer {
public:

	struct TArray<struct FSmartName> PoseNames; // 0x00(0x10)
	struct TArray<struct FName> Tracks; // 0x10(0x10)
	struct TMap<struct FName, int32_t> TrackMap; // 0x20(0x50)
	struct TArray<struct FPoseData> Poses; // 0x70(0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PoseData
// Size: 0x70 (Inherited: 0x00)
struct FPoseData {
public:

	struct TArray<struct FTransform> LocalSpacePose; // 0x00(0x10)
	struct TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10(0x50)
	struct TArray<float> CurveData; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PreBakeDirectionalShadowDepthMap
// Size: 0x80 (Inherited: 0x00)
struct FPreBakeDirectionalShadowDepthMap {
public:

	struct FVector LightDirection; // 0x00(0x0c)
	struct FIntPoint TileCount; // 0x0c(0x08)
	struct FBoxSphereBounds ShadowBounds; // 0x14(0x1c)
	/*struct TMap<struct FIntPoint, struct TSoftObjectPtr<UPreBakeShadowDepthTileMap>>*/char ShadowDepthTiles[0x50]; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ShadowDataItem
// Size: 0x10 (Inherited: 0x00)
struct FShadowDataItem {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UPreBakeShadowDepthTileMap* DataInMem; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x00)
struct FPreviewAssetAttachContainer {
public:

	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x38 (Inherited: 0x00)
struct FPreviewAttachedObjectPair {
public:

	/*struct TSoftObjectPtr<UObject>*/char AttachedObject[0x28]; // 0x00(0x28)
	struct UObject* Object; // 0x28(0x08)
	struct FName AttachedTo; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x28 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
public:

	/*struct TSoftObjectPtr<USkeletalMesh>*/char SkeletalMesh[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x38 (Inherited: 0x00)
struct FSpriteCategoryInfo {
public:

	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ReflectionRangeInfo
// Size: 0x50 (Inherited: 0x00)
struct FReflectionRangeInfo {
public:

	enum class EReflectionRangeShape ReflectionRangeShape; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FVector4 LocationAndRadius; // 0x10(0x10)
	struct FVector4 AxisXAndExtent; // 0x20(0x10)
	struct FVector4 AxisYAndExtent; // 0x30(0x10)
	struct FVector4 AxisZAndExtent; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CompressedRichCurve
// Size: 0x18 (Inherited: 0x00)
struct FCompressedRichCurve {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RigTransformConstraint
// Size: 0x10 (Inherited: 0x00)
struct FRigTransformConstraint {
public:

	enum class EConstraintTransform TranformType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParentSpace; // 0x04(0x08)
	float Weight; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode {
public:

	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool bAdvanced; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkelMeshMaterials
// Size: 0x28 (Inherited: 0x00)
struct FSkelMeshMaterials {
public:

	struct TArray<struct FSkeletalMaterial> SkeletalMeshMaterials; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RTCProfile
// Size: 0x0c (Inherited: 0x00)
struct FRTCProfile {
public:

	enum class ERTCFormat ePreferredFormatAndroidGLES; // 0x00(0x01)
	enum class ERTCFormat ePreferredFormatIOSMetal; // 0x01(0x01)
	enum class ERTCFormat ePreferredFormatEditor; // 0x02(0x01)
	enum class ERTCQuality eCompressionQuality; // 0x03(0x01)
	enum class ERTCChannelPlane eChannels; // 0x04(0x01)
	char pad_5[0x7]; // 0x05(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SVTRegionDataSoftObject
// Size: 0x20 (Inherited: 0x00)
struct FSVTRegionDataSoftObject {
public:

	struct TArray<struct FSVTMipRegionDataSoftObject> MipSVTDatas; // 0x00(0x10)
	struct TArray<struct FSVTIntVector4> MipSVTRects; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SVTIntVector4
// Size: 0x10 (Inherited: 0x00)
struct FSVTIntVector4 {
public:

	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
	int32_t W; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SVTMipRegionDataSoftObject
// Size: 0x10 (Inherited: 0x00)
struct FSVTMipRegionDataSoftObject {
public:

	/*struct TArray<struct TSoftObjectPtr<URuntimeVirtualTextureStreamingProxy>>*/char AllRegionSVTs[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SVTRegionData
// Size: 0x20 (Inherited: 0x00)
struct FSVTRegionData {
public:

	struct TArray<struct FSVTMipRegionData> MipSVTDatas; // 0x00(0x10)
	struct TArray<struct FSVTIntVector4> MipSVTRects; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SVTMipRegionData
// Size: 0x10 (Inherited: 0x00)
struct FSVTMipRegionData {
public:

	struct TArray<struct URuntimeVirtualTextureStreamingProxy*> AllRegionSVTs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CameraExposureSettings
// Size: 0x40 (Inherited: 0x00)
struct FCameraExposureSettings {
public:

	enum class EAutoExposureMethod Method; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowPercent; // 0x04(0x04)
	float HighPercent; // 0x08(0x04)
	float MinBrightness; // 0x0c(0x04)
	float MaxBrightness; // 0x10(0x04)
	float SpeedUp; // 0x14(0x04)
	float SpeedDown; // 0x18(0x04)
	float Bias; // 0x1c(0x04)
	struct UCurveFloat* BiasCurve; // 0x20(0x08)
	struct UTexture* MeterMask; // 0x28(0x08)
	float HistogramLogMin; // 0x30(0x04)
	float HistogramLogMax; // 0x34(0x04)
	float CalibrationConstant; // 0x38(0x04)
	char ApplyPhysicalCameraExposure : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FilmStockSettings
// Size: 0x14 (Inherited: 0x00)
struct FFilmStockSettings {
public:

	float Slope; // 0x00(0x04)
	float Toe; // 0x04(0x04)
	float Shoulder; // 0x08(0x04)
	float BlackClip; // 0x0c(0x04)
	float WhiteClip; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x00)
struct FEngineShowFlagsSetting {
public:

	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
// Size: 0x50 (Inherited: 0x00)
struct FSceneViewExtensionIsActiveFunctor {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SimpleCurveKey
// Size: 0x08 (Inherited: 0x00)
struct FSimpleCurveKey {
public:

	float Time; // 0x00(0x04)
	float Value; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 (Inherited: 0x00)
struct FSingleAnimationPlayData {
public:

	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x58 (Inherited: 0x00)
struct FSkeletalMeshClothBuildParams {
public:

	struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x00(0x08)
	int32_t TargetLod; // 0x08(0x04)
	bool bRemapParameters; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString AssetName; // 0x10(0x10)
	int32_t LodIndex; // 0x20(0x04)
	int32_t SourceSection; // 0x24(0x04)
	bool bRemoveFromMesh; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	/*struct TSoftObjectPtr<UPhysicsAsset>*/char PhysicsAsset[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BoneMirrorExport
// Size: 0x14 (Inherited: 0x00)
struct FBoneMirrorExport {
public:

	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	enum class EAxis BoneFlipAxis; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BoneMirrorInfo
// Size: 0x08 (Inherited: 0x00)
struct FBoneMirrorInfo {
public:

	int32_t SourceIndex; // 0x00(0x04)
	enum class EAxis BoneFlipAxis; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FBoneFilter {
public:

	bool bExcludeSelf; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName BoneName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size: 0x78 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBuiltData {
public:

	char pad_0[0x78]; // 0x00(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size: 0x48 (Inherited: 0x00)
struct FSkeletalMeshSamplingLODBuiltData {
public:

	char pad_0[0x48]; // 0x00(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegion {
public:

	struct FName Name; // 0x00(0x08)
	int32_t LodIndex; // 0x08(0x04)
	char bSupportUniformlyDistributedSampling : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBoneFilter {
public:

	struct FName BoneName; // 0x00(0x08)
	char bIncludeOrExclude : 1; // 0x08(0x01)
	char bApplyToChildren : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size: 0x08 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionMaterialFilter {
public:

	struct FName MaterialName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VirtualBone
// Size: 0x18 (Inherited: 0x00)
struct FVirtualBone {
public:

	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName VirtualBoneName; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotGroup {
public:

	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FRigConfiguration {
public:

	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NameMapping
// Size: 0x10 (Inherited: 0x00)
struct FNameMapping {
public:

	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x00)
struct FBoneReductionSetting {
public:

	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
public:

	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BoneNode
// Size: 0x10 (Inherited: 0x00)
struct FBoneNode {
public:

	struct FName Name; // 0x00(0x08)
	int32_t ParentIndex; // 0x08(0x04)
	enum class EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x00)
struct FSkeletonToMeshLinkup {
public:

	struct TArray<int32_t> SkeletonToMeshTable; // 0x00(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x28 (Inherited: 0x00)
struct FSkelMeshComponentLODInfo {
public:

	struct TArray<bool> HiddenMaterials; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x28 (Inherited: 0x00)
struct FSkelMeshSkinWeightInfo {
public:

	int32_t Bones[0x8]; // 0x00(0x20)
	char Weights[0x8]; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TentDistribution
// Size: 0x0c (Inherited: 0x00)
struct FTentDistribution {
public:

	float TipAltitude; // 0x00(0x04)
	float TipValue; // 0x04(0x04)
	float Width; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x00)
struct FSmartNameContainer {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SmartNameMapping
// Size: 0x70 (Inherited: 0x00)
struct FSmartNameMapping {
public:

	char pad_0[0x70]; // 0x00(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CurveMetaData
// Size: 0x20 (Inherited: 0x00)
struct FCurveMetaData {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
public:

	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float MaxVolumeThreshold; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundClassProperties
// Size: 0x30 (Inherited: 0x00)
struct FSoundClassProperties {
public:

	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float LowPassFilterFrequency; // 0x08(0x04)
	float StereoBleed; // 0x0c(0x04)
	float LFEBleed; // 0x10(0x04)
	float VoiceCenterChannelVolume; // 0x14(0x04)
	float RadioFilterVolume; // 0x18(0x04)
	float RadioFilterVolumeThreshold; // 0x1c(0x04)
	char bApplyEffects : 1; // 0x20(0x01)
	char bAlwaysPlay : 1; // 0x20(0x01)
	char bIsUISound : 1; // 0x20(0x01)
	char bIsMusic : 1; // 0x20(0x01)
	char bReverb : 1; // 0x20(0x01)
	char pad_20_5 : 3; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Default2DReverbSendAmount; // 0x24(0x04)
	char bCenterChannelOnly : 1; // 0x28(0x01)
	char bApplyAmbientVolumes : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	enum class EAudioOutputTarget OutputTarget; // 0x2c(0x01)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundClassEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundClassEditorData {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x20 (Inherited: 0x00)
struct FSoundConcurrencySettings {
public:

	int32_t MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
	float VolumeScaleAttackTime; // 0x10(0x04)
	char bVolumeScaleCanRelease : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float VolumeScaleReleaseTime; // 0x18(0x04)
	float VoiceStealReleaseTime; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundNodeEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundNodeEditorData {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectChainEntry {
public:

	struct USoundEffectSourcePreset* Preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
public:

	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundClassAdjuster
// Size: 0x20 (Inherited: 0x00)
struct FSoundClassAdjuster {
public:

	struct USoundClass* SoundClassObject; // 0x00(0x08)
	float VolumeAdjuster; // 0x08(0x04)
	float PitchAdjuster; // 0x0c(0x04)
	float LowPassFilterFrequency; // 0x10(0x04)
	char bApplyToChildren : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float VoiceCenterChannelVolumeAdjuster; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x38 (Inherited: 0x00)
struct FAudioEQEffect {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float FrequencyCenter0; // 0x08(0x04)
	float Gain0; // 0x0c(0x04)
	float Bandwidth0; // 0x10(0x04)
	float FrequencyCenter1; // 0x14(0x04)
	float Gain1; // 0x18(0x04)
	float Bandwidth1; // 0x1c(0x04)
	float FrequencyCenter2; // 0x20(0x04)
	float Gain2; // 0x24(0x04)
	float Bandwidth2; // 0x28(0x04)
	float FrequencyCenter3; // 0x2c(0x04)
	float Gain3; // 0x30(0x04)
	float Bandwidth3; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
public:

	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 (Inherited: 0x00)
struct FModulatorContinuousParams {
public:

	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float MinInput; // 0x0c(0x04)
	float MaxInput; // 0x10(0x04)
	float MinOutput; // 0x14(0x04)
	float MaxOutput; // 0x18(0x04)
	enum class ModulationParamMode ParamMode; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveEnvelopeTimeData {
public:

	float Amplitude; // 0x00(0x04)
	float TimeSec; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// Size: 0x18 (Inherited: 0x00)
struct FSoundWaveSpectralTimeData {
public:

	struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x00(0x10)
	float TimeSec; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveSpectralDataEntry {
public:

	float Magnitude; // 0x00(0x04)
	float NormalizedMagnitude; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size: 0x10 (Inherited: 0x00)
struct FSoundWaveEnvelopeDataPerSound {
public:

	float Envelope; // 0x00(0x04)
	float PlaybackTime; // 0x04(0x04)
	struct USoundWave* SoundWave; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size: 0x20 (Inherited: 0x00)
struct FSoundWaveSpectralDataPerSound {
public:

	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x00(0x10)
	float PlaybackTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWave; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundWaveSpectralData
// Size: 0x0c (Inherited: 0x00)
struct FSoundWaveSpectralData {
public:

	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
	float NormalizedMagnitude; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedAudioPlatformData {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)
struct FSplinePoint {
public:

	float InputKey; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	enum class ESplinePointType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SplineMeshParams
// Size: 0x58 (Inherited: 0x00)
struct FSplineMeshParams {
public:

	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector2D EndScale; // 0x38(0x08)
	struct FVector EndTangent; // 0x40(0x0c)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DestructibleStaticMeshLabelModel
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleStaticMeshLabelModel {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshSectionInfo
// Size: 0x08 (Inherited: 0x00)
struct FMeshSectionInfo {
public:

	int32_t MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool bCastShadow; // 0x05(0x01)
	bool bVisibleInRayTracing; // 0x06(0x01)
	bool bForceOpaque; // 0x07(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 (Inherited: 0x00)
struct FMaterialRemapIndex {
public:

	uint32_t ImportVersionKey; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> MaterialRemap; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 (Inherited: 0x00)
struct FAssetEditorOrbitCameraPosition {
public:

	bool bIsSet; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector CamOrbitPoint; // 0x04(0x0c)
	struct FVector CamOrbitZoom; // 0x10(0x0c)
	struct FRotator CamOrbitRotation; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1c (Inherited: 0x00)
struct FStaticMeshOptimizationSettings {
public:

	enum class EOptimizationType ReductionMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float MaxDeviationPercentage; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float NormalsThreshold; // 0x14(0x04)
	char SilhouetteImportance; // 0x18(0x01)
	char TextureImportance; // 0x19(0x01)
	char ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0x0c (Inherited: 0x00)
struct FStreamingTextureBuildInfo {
public:

	uint32_t PackedRelativeBox; // 0x00(0x04)
	int32_t TextureLevelIndex; // 0x04(0x04)
	float TexelFactor; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// Size: 0x28 (Inherited: 0x00)
struct FStaticMeshVertexColorLODData {
public:

	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x00(0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10(0x10)
	uint32_t LodIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PaintedVertex
// Size: 0x20 (Inherited: 0x00)
struct FPaintedVertex {
public:

	struct FVector Position; // 0x00(0x0c)
	struct FColor Color; // 0x0c(0x04)
	struct FVector4 Normal; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0xa0 (Inherited: 0x00)
struct FStaticMeshComponentLODInfo {
public:

	char pad_0[0xa0]; // 0x00(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EquirectProps
// Size: 0x48 (Inherited: 0x00)
struct FEquirectProps {
public:

	struct FBox2D LeftUVRect; // 0x00(0x14)
	struct FBox2D RightUVRect; // 0x14(0x14)
	struct FVector2D LeftScale; // 0x28(0x08)
	struct FVector2D RightScale; // 0x30(0x08)
	struct FVector2D LeftBias; // 0x38(0x08)
	struct FVector2D RightBias; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x00)
struct FStringCurveKey {
public:

	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x8c (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
public:

	struct FLinearColor SurfaceAlbedo; // 0x00(0x10)
	struct FLinearColor MeanFreePathColor; // 0x10(0x10)
	float MeanFreePathDistance; // 0x20(0x04)
	float WorldUnitScale; // 0x24(0x04)
	bool bEnableBurley; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ScatterRadius; // 0x2c(0x04)
	struct FLinearColor SubsurfaceColor; // 0x30(0x10)
	struct FLinearColor FalloffColor; // 0x40(0x10)
	struct FLinearColor BoundaryColorBleed; // 0x50(0x10)
	float ExtinctionScale; // 0x60(0x04)
	float NormalScale; // 0x64(0x04)
	float ScatteringDistribution; // 0x68(0x04)
	float IOR; // 0x6c(0x04)
	float Roughness0; // 0x70(0x04)
	float Roughness1; // 0x74(0x04)
	float LobeMix; // 0x78(0x04)
	struct FLinearColor TransmissionTintColor; // 0x7c(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TetLightSetting
// Size: 0x0c (Inherited: 0x00)
struct FTetLightSetting {
public:

	bool bEnableTetLight; // 0x00(0x01)
	bool bStaticMeshUseCachedABC; // 0x01(0x01)
	bool bVisibility; // 0x02(0x01)
	bool bBounce; // 0x03(0x01)
	bool bSkyAO; // 0x04(0x01)
	bool bAtf; // 0x05(0x01)
	bool bDrawTetProbe; // 0x06(0x01)
	bool bDrawVisibility; // 0x07(0x01)
	bool bDrawAllTetQuery; // 0x08(0x01)
	bool bDrawTetQuery; // 0x09(0x01)
	bool bOnlySelectedMesh; // 0x0a(0x01)
	bool bForceTetLightInside64m; // 0x0b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureFormatSettings
// Size: 0x02 (Inherited: 0x00)
struct FTextureFormatSettings {
public:

	enum class TextureCompressionSettings CompressionSettings; // 0x00(0x01)
	char CompressionNoAlpha : 1; // 0x01(0x01)
	char CompressionNone : 1; // 0x01(0x01)
	char CompressionYCoCg : 1; // 0x01(0x01)
	char SRGB : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TexturePlatformData
// Size: 0x50 (Inherited: 0x00)
struct FTexturePlatformData {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureSource
// Size: 0xa8 (Inherited: 0x00)
struct FTextureSource {
public:

	char pad_0[0xa8]; // 0x00(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SourceMipsChain
// Size: 0x10 (Inherited: 0x00)
struct FSourceMipsChain {
public:

	struct TArray<char> RawData; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerMipmapBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerMipmapBlendWeight {
public:

	int32_t MipmapID; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureSourceBlock
// Size: 0x18 (Inherited: 0x00)
struct FTextureSourceBlock {
public:

	int32_t BlockX; // 0x00(0x04)
	int32_t BlockY; // 0x04(0x04)
	int32_t SizeX; // 0x08(0x04)
	int32_t SizeY; // 0x0c(0x04)
	int32_t NumSlices; // 0x10(0x04)
	int32_t NumMips; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PlatformCustomSettings
// Size: 0x01 (Inherited: 0x00)
struct FPlatformCustomSettings {
public:

	enum class EPixelFormat PixelFormat; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureGroupSettings
// Size: 0x30 (Inherited: 0x00)
struct FTextureGroupSettings {
public:

	enum class TextureGroup TextureGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> MobileMinLODs; // 0x08(0x10)
	struct TArray<int32_t> PCMinLODs; // 0x18(0x10)
	float DistanceScale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PlatformMinLOD
// Size: 0x02 (Inherited: 0x00)
struct FPlatformMinLOD {
public:

	char MobileMinLOD; // 0x00(0x01)
	char PCMinLOD; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureGroupStreamingPriorityBias
// Size: 0x02 (Inherited: 0x00)
struct FTextureGroupStreamingPriorityBias {
public:

	char LoadOrderPriorityBias; // 0x00(0x01)
	char RetentionPriorityBias; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x60 (Inherited: 0x00)
struct FTextureLODGroup {
public:

	enum class TextureGroup Group; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	int32_t LODBias; // 0x0c(0x04)
	int32_t LODBias_Smaller; // 0x10(0x04)
	int32_t LODBias_Smallest; // 0x14(0x04)
	char pad_18[0x4]; // 0x18(0x04)
	int32_t NumStreamedMips; // 0x1c(0x04)
	enum class TextureMipGenSettings MipGenSettings; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MinLODSize; // 0x24(0x04)
	int32_t MaxLODSize; // 0x28(0x04)
	int32_t MaxLODSize_Smaller; // 0x2c(0x04)
	int32_t MaxLODSize_Smallest; // 0x30(0x04)
	int32_t OptionalLODBias; // 0x34(0x04)
	int32_t OptionalMaxLODSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FName MinMagFilter; // 0x40(0x08)
	struct FName MipFilter; // 0x48(0x08)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x50(0x01)
	bool DuplicateNonOptionalMips; // 0x51(0x01)
	enum class ETextureLossyCompressionAmount LossyCompressionAmount; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	float ScaleRatio; // 0x54(0x04)
	int32_t MipsToCook; // 0x58(0x04)
	int32_t EnableBiasWhenNoStreamable; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x30 (Inherited: 0x00)
struct FStreamingRenderAssetPrimitiveInfo {
public:

	struct UStreamableRenderAsset* RenderAsset; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float TexelFactor; // 0x24(0x04)
	uint32_t PackedRelativeBox; // 0x28(0x04)
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c(0x01)
	char bAffectedByComponentScale : 1; // 0x2c(0x01)
	char pad_2C_2 : 6; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Timeline
// Size: 0x98 (Inherited: 0x00)
struct FTimeline {
public:

	enum class ETimelineLengthMode LengthMode; // 0x00(0x01)
	char bLooping : 1; // 0x01(0x01)
	char bReversePlayback : 1; // 0x01(0x01)
	char bPlaying : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Length; // 0x04(0x04)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	struct TArray<struct FTimelineEventEntry> Events; // 0x10(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40(0x10)
	/*struct FDelegate*/char TimelinePostUpdateFunc[0x10]; // 0x50(0x10)
	/*struct FDelegate*/char TimelineFinishedFunc[0x10]; // 0x60(0x10)
	struct TWeakObjectPtr<struct UObject> PropertySetObject; // 0x70(0x08)
	struct FName DirectionPropertyName; // 0x78(0x08)
	char pad_80[0x18]; // 0x80(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineLinearColorTrack {
public:

	struct UCurveLinearColor* LinearColorCurve; // 0x00(0x08)
	/*struct FDelegate*/char InterpFunc[0x10]; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName LinearColorPropertyName; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimelineFloatTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineFloatTrack {
public:

	struct UCurveFloat* FloatCurve; // 0x00(0x08)
	/*struct FDelegate*/char InterpFunc[0x10]; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName FloatPropertyName; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimelineVectorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineVectorTrack {
public:

	struct UCurveVector* VectorCurve; // 0x00(0x08)
	/*struct FDelegate*/char InterpFunc[0x10]; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName VectorPropertyName; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimelineEventEntry
// Size: 0x14 (Inherited: 0x00)
struct FTimelineEventEntry {
public:

	float Time; // 0x00(0x04)
	/*struct FDelegate*/char EventFunc[0x10]; // 0x04(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 (Inherited: 0x00)
struct FTimeStretchCurveInstance {
public:

	bool bHasValidData; // 0x00(0x01)
	char pad_1[0x2f]; // 0x01(0x2f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 (Inherited: 0x00)
struct FTimeStretchCurve {
public:

	float SamplingRate; // 0x00(0x04)
	float CurveValueMinPrecision; // 0x04(0x04)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x08(0x10)
	float Sum_dT_i_by_C_i[0x3]; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 (Inherited: 0x00)
struct FTimeStretchCurveMarker {
public:

	float Time[0x3]; // 0x00(0x0c)
	float Alpha; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Reflections
// Size: 0xe0 (Inherited: 0x00)
struct FTOD_Reflections {
public:

	struct TArray<struct FString> CubeMapNames; // 0x00(0x10)
	struct TArray<struct FLinearColor> AvgSkyColor; // 0x10(0x10)
	struct TArray<struct FLinearColor> AvgSkyColorBigTable; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
	int32_t StoreBoundLeft[0x10]; // 0x40(0x40)
	int32_t StoreBoundRight[0x10]; // 0x80(0x40)
	char pad_C0[0x20]; // 0xc0(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_SphericHarmonics
// Size: 0x40 (Inherited: 0x00)
struct FTOD_SphericHarmonics {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<float> EnvIrradianceMap24HSavable; // 0x10(0x10)
	char pad_20[0x20]; // 0x20(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExposureSpeedOverrides
// Size: 0x0c (Inherited: 0x00)
struct FExposureSpeedOverrides {
public:

	char bOverride_AutoExposureSpeedUp : 1; // 0x00(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AutoExposureSpeedUp; // 0x04(0x04)
	float AutoExposureSpeedDown; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TouchInputControl
// Size: 0x68 (Inherited: 0x00)
struct FTouchInputControl {
public:

	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D VisualSize; // 0x18(0x08)
	struct FVector2D ThumbSize; // 0x20(0x08)
	struct FVector2D InteractionSize; // 0x28(0x08)
	struct FVector2D InputScale; // 0x30(0x08)
	struct FKey MainInputKey; // 0x38(0x18)
	struct FKey AltInputKey; // 0x50(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 (Inherited: 0x00)
struct FHardwareCursorReference {
public:

	struct FName CursorPath; // 0x00(0x08)
	struct FVector2D HotSpot; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// Size: 0x10 (Inherited: 0x00)
struct FVirtualTextureBuildSettings {
public:

	int32_t TileSize; // 0x00(0x04)
	int32_t LightMapTileSize; // 0x04(0x04)
	int32_t TileBorderSize; // 0x08(0x04)
	bool bEnableCompressCrunch; // 0x0c(0x01)
	bool bEnableCompressZlib; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size: 0x20 (Inherited: 0x00)
struct FVirtualTextureSpacePoolConfig {
public:

	int32_t MinTileSize; // 0x00(0x04)
	int32_t MaxTileSize; // 0x04(0x04)
	struct TArray<enum class EPixelFormat> Formats; // 0x08(0x10)
	int32_t SizeInMegabyte; // 0x18(0x04)
	bool bAllowSizeScale; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VoiceSettings
// Size: 0x18 (Inherited: 0x00)
struct FVoiceSettings {
public:

	struct USceneComponent* ComponentToAttachTo; // 0x00(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x08(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StreamingLevelsToConsider
// Size: 0x28 (Inherited: 0x00)
struct FStreamingLevelsToConsider {
public:

	struct TArray<struct FLevelStreamingWrapper> StreamingLevels; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LevelStreamingWrapper
// Size: 0x08 (Inherited: 0x00)
struct FLevelStreamingWrapper {
public:

	struct ULevelStreaming* StreamingLevel; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LevelCollection
// Size: 0x78 (Inherited: 0x00)
struct FLevelCollection {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	/*struct TSet<struct ULevel*>*/char Levels[0x50]; // 0x28(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x00)
struct FLevelViewportInfo {
public:

	struct FVector CamPosition; // 0x00(0x0c)
	struct FRotator CamRotation; // 0x0c(0x0c)
	float CamOrthoZoom; // 0x18(0x04)
	bool CamUpdated; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.WorldObjectPool
// Size: 0x60 (Inherited: 0x00)
struct FWorldObjectPool {
public:

	char pad_0[0x50]; // 0x00(0x50)
	struct UWorld* PoolWorld; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.WorldPSCPool
// Size: 0x58 (Inherited: 0x00)
struct FWorldPSCPool {
public:

	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x00(0x50)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PSCPool
// Size: 0x38 (Inherited: 0x00)
struct FPSCPool {
public:

	struct TArray<struct FPSCPoolElem> FreeElements; // 0x00(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Manual; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PSCPoolElem
// Size: 0x10 (Inherited: 0x00)
struct FPSCPoolElem {
public:

	struct UParticleSystemComponent* PSC; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NetViewer
// Size: 0x38 (Inherited: 0x00)
struct FNetViewer {
public:

	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* InViewer; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector ViewDir; // 0x24(0x0c)
	float ZoomingFactor; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmapNormalParameters
// Size: 0x0c (Inherited: 0x00)
struct FLightmapNormalParameters {
public:

	float MinOffset; // 0x00(0x04)
	float MaxOffset; // 0x04(0x04)
	float LightmapScale; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExposureConversion
// Size: 0x20 (Inherited: 0x00)
struct FExposureConversion {
public:

	float AtfRuntimeScaleUp; // 0x00(0x04)
	float LightMapCoef; // 0x04(0x04)
	float MainLightCoef; // 0x08(0x04)
	float IBLCoef; // 0x0c(0x04)
	float LightComponentDebug; // 0x10(0x04)
	float AssetInspectionLowerBound; // 0x14(0x04)
	float AssetInspectionUpperBound; // 0x18(0x04)
	float ReflectionCaptureOutDoor; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x64 (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
public:

	float StaticLightingLevelScale; // 0x00(0x04)
	int32_t NumIndirectLightingBounces; // 0x04(0x04)
	int32_t NumSkyLightingBounces; // 0x08(0x04)
	float IndirectLightingQuality; // 0x0c(0x04)
	float IndirectLightingSmoothness; // 0x10(0x04)
	struct FColor EnvironmentColor; // 0x14(0x04)
	float EnvironmentIntensity; // 0x18(0x04)
	float EmissiveBoost; // 0x1c(0x04)
	float DiffuseBoost; // 0x20(0x04)
	float GlobalIndirectBoost; // 0x24(0x04)
	enum class EVolumeLightingMethod VolumeLightingMethod; // 0x28(0x01)
	char bUseAmbientOcclusion : 1; // 0x29(0x01)
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x29(0x01)
	char bVisualizeMaterialDiffuse : 1; // 0x29(0x01)
	char bVisualizeAmbientOcclusion : 1; // 0x29(0x01)
	char bCompressLightmaps : 1; // 0x29(0x01)
	char bGenerateSHDirectionality : 1; // 0x29(0x01)
	char pad_29_6 : 2; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float VolumetricLightmapDetailCellSize; // 0x2c(0x04)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x30(0x04)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x34(0x04)
	float VolumeLightSamplePlacementScale; // 0x38(0x04)
	float DirectIlluminationOcclusionFraction; // 0x3c(0x04)
	float IndirectIlluminationOcclusionFraction; // 0x40(0x04)
	float OcclusionExponent; // 0x44(0x04)
	float FullyOccludedSamplesFraction; // 0x48(0x04)
	float MaxOcclusionDistance; // 0x4c(0x04)
	struct FColor LightingMinColor; // 0x50(0x04)
	float LightingMinColorIntensity; // 0x54(0x04)
	char bIsBlueprintScene : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float EnvironmentIndirectBoost; // 0x5c(0x04)
	float ReflectionLightSpecularScale; // 0x60(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// UserDefinedStruct Engine.Default__UserDefinedStruct
// Size: 0x00 (Inherited: 0x00)
struct FDefault__UserDefinedStruct {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x20 (Inherited: 0x00)
struct FDistributionLookupTable {
public:

	float TimeScale; // 0x00(0x04)
	float TimeBias; // 0x04(0x04)
	struct TArray<float> Values; // 0x08(0x10)
	char Op; // 0x18(0x01)
	char EntryCount; // 0x19(0x01)
	char EntryStride; // 0x1a(0x01)
	char SubEntryStride; // 0x1b(0x01)
	char LockFlag; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x0c (Inherited: 0x00)
struct FExpressionInput {
public:

	int32_t OutputIndex; // 0x00(0x04)
	struct FName ExpressionName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x08 (Inherited: 0x00)
struct FExpressionOutput {
public:

	struct FName OutputName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialInput
// Size: 0x0c (Inherited: 0x00)
struct FMaterialInput {
public:

	int32_t OutputIndex; // 0x00(0x04)
	struct FName ExpressionName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : public FVector {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : public FVector {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
public:

	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid MemberGuid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TickFunction
// Size: 0x60 (Inherited: 0x00)
struct FTickFunction {
public:

	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup TickGroup; // 0x08(0x01)
	enum class ETickingGroup EndTickGroup; // 0x09(0x01)
	char bTickEvenWhenPaused : 1; // 0x0a(0x01)
	char bCanEverTick : 1; // 0x0a(0x01)
	char bStartWithTickEnabled : 1; // 0x0a(0x01)
	char bAllowTickOnDedicatedServer : 1; // 0x0a(0x01)
	char pad_A_4 : 4; // 0x0a(0x01)
	bool bEnableLightweightTick; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	float TickInterval; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
	struct UClass* AggregateClass; // 0x20(0x08)
	struct ULevel* OwnerLevel; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x00)
struct FPlatformInterfaceData {
public:

	struct FName DataName; // 0x00(0x08)
	enum class EPlatformInterfaceDataType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : public FVector {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : public FVector {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x00)
struct FWalkableSlopeOverride {
public:

	enum class EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
public:

	enum class ECollisionResponse WorldStatic; // 0x00(0x01)
	enum class ECollisionResponse WorldDynamic; // 0x01(0x01)
	enum class ECollisionResponse Pawn; // 0x02(0x01)
	enum class ECollisionResponse Visibility; // 0x03(0x01)
	enum class ECollisionResponse Camera; // 0x04(0x01)
	enum class ECollisionResponse PhysicsBody; // 0x05(0x01)
	enum class ECollisionResponse Vehicle; // 0x06(0x01)
	enum class ECollisionResponse Destructible; // 0x07(0x01)
	enum class ECollisionResponse EngineTraceChannel1; // 0x08(0x01)
	enum class ECollisionResponse EngineTraceChannel2; // 0x09(0x01)
	enum class ECollisionResponse EngineTraceChannel3; // 0x0a(0x01)
	enum class ECollisionResponse EngineTraceChannel4; // 0x0b(0x01)
	enum class ECollisionResponse EngineTraceChannel5; // 0x0c(0x01)
	enum class ECollisionResponse EngineTraceChannel6; // 0x0d(0x01)
	enum class ECollisionResponse GameTraceChannel1; // 0x0e(0x01)
	enum class ECollisionResponse GameTraceChannel2; // 0x0f(0x01)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x01)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x01)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x01)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x01)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x01)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x01)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x01)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x01)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x01)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x01)
	enum class ECollisionResponse GameTraceChannel13; // 0x1a(0x01)
	enum class ECollisionResponse GameTraceChannel14; // 0x1b(0x01)
	enum class ECollisionResponse GameTraceChannel15; // 0x1c(0x01)
	enum class ECollisionResponse GameTraceChannel16; // 0x1d(0x01)
	enum class ECollisionResponse GameTraceChannel17; // 0x1e(0x01)
	enum class ECollisionResponse GameTraceChannel18; // 0x1f(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ActorComponentInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FActorComponentInstanceData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* SourceComponentTemplate; // 0x08(0x08)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t SourceComponentTypeSerializedIndex; // 0x14(0x04)
	struct TArray<char> SavedProperties; // 0x18(0x10)
	struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28(0x10)
	struct TArray<struct UObject*> ReferencedObjects; // 0x38(0x10)
	struct TArray<struct FName> ReferencedNames; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SplineCurves
// Size: 0x68 (Inherited: 0x00)
struct FSplineCurves {
public:

	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
	struct USplineMetadata* MetaData; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EdGraphTerminalType
// Size: 0x1c (Inherited: 0x00)
struct FEdGraphTerminalType {
public:

	struct FName TerminalCategory; // 0x00(0x08)
	struct FName TerminalSubCategory; // 0x08(0x08)
	struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x10(0x08)
	bool bTerminalIsConst; // 0x18(0x01)
	bool bTerminalIsWeakPointer; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialParameterInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParameterInfo {
public:

	struct FName Name; // 0x00(0x08)
	enum class EMaterialParameterAssociation Association; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Index; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x40 (Inherited: 0x00)
struct FMaterialLayersFunctions {
public:

	struct TArray<struct UMaterialFunctionInterface*> Layers; // 0x00(0x10)
	struct TArray<struct UMaterialFunctionInterface*> Blends; // 0x10(0x10)
	struct TArray<bool> LayerStates; // 0x20(0x10)
	struct FString KeyString; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleMap {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
public:

	struct FString Path; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
public:

	struct FString FilePath; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x40 (Inherited: 0x00)
struct FAnimNode_Base {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange {
public:

	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x00)
struct FAlphaBlend {
public:

	struct UCurveFloat* CustomCurve; // 0x00(0x08)
	float BlendTime; // 0x08(0x04)
	char pad_C[0x18]; // 0x0c(0x18)
	enum class EAlphaBlendOption BlendOption; // 0x24(0x01)
	char pad_25[0xb]; // 0x25(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
public:

	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x10 (Inherited: 0x00)
struct FPoseLinkBase {
public:

	int32_t LinkID; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BoneReference
// Size: 0x10 (Inherited: 0x00)
struct FBoneReference {
public:

	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimInstanceProxy
// Size: 0x748 (Inherited: 0x00)
struct FAnimInstanceProxy {
public:

	char pad_0[0xb8]; // 0x00(0xb8)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8(0x08)
	char pad_C0[0x688]; // 0xc0(0x688)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SmartName
// Size: 0x0c (Inherited: 0x00)
struct FSmartName {
public:

	struct FName DisplayName; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt {
public:

	int32_t Default; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat {
public:

	float Default; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ObjectPool
// Size: 0x40 (Inherited: 0x00)
struct FObjectPool {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KShapeElem
// Size: 0x30 (Inherited: 0x00)
struct FKShapeElem {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float RestOffset; // 0x08(0x04)
	struct FName Name; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	char bContributeToMass : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 (Inherited: 0x00)
struct FRootMotionMovementParams {
public:

	bool bHasRootMotion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RootMotionTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
public:

	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x00)
struct FA2Pose {
public:

	struct TArray<struct FTransform> Bones; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* LinkedMontage; // 0x08(0x08)
	int32_t SlotIndex; // 0x10(0x04)
	int32_t SegmentIndex; // 0x14(0x04)
	enum class EAnimLinkMethod LinkMethod; // 0x18(0x01)
	enum class EAnimLinkMethod CachedLinkMethod; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float SegmentBeginTime; // 0x1c(0x04)
	float SegmentLength; // 0x20(0x04)
	float LinkValue; // 0x24(0x04)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SimpleAnimTransition
// Size: 0x08 (Inherited: 0x00)
struct FSimpleAnimTransition {
public:

	float Duration; // 0x00(0x04)
	enum class EAlphaBlendOption Mode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationStateBase
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateBase {
public:

	struct FName StateName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrimaryAssetRules
// Size: 0x0c (Inherited: 0x00)
struct FPrimaryAssetRules {
public:

	int32_t Priority; // 0x00(0x04)
	int32_t ChunkId; // 0x04(0x04)
	bool bApplyRecursively; // 0x08(0x01)
	enum class EPrimaryAssetCookRule CookRule; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x00)
struct FEditorElement {
public:

	int32_t Indices[0x3]; // 0x00(0x0c)
	float Weights[0x3]; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x48 (Inherited: 0x00)
struct FBlueprintCookedComponentInstancingData {
public:

	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x00(0x10)
	char pad_10[0x11]; // 0x10(0x11)
	bool bHasValidCookedData; // 0x21(0x01)
	char pad_22[0x26]; // 0x22(0x26)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmarkBaseJumpToSettings {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FOscillator
// Size: 0x0c (Inherited: 0x00)
struct FFOscillator {
public:

	float Amplitude; // 0x00(0x04)
	float frequency; // 0x04(0x04)
	enum class EInitialOscillatorOffset InitialOffset; // 0x08(0x01)
	enum class EOscillatorWaveform Waveform; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
public:

	struct TArray<struct FWeightedBlendable> array; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceSettings {
public:

	char Flags; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 (Inherited: 0x00)
struct FMeshUVChannelInfo {
public:

	bool bInitialized; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LocalUVDensities[0x4]; // 0x04(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ConstraintDrive
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDrive {
public:

	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char bEnablePositionDrive : 1; // 0x0c(0x01)
	char bEnableVelocityDrive : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 (Inherited: 0x00)
struct FConstraintBaseParams {
public:

	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
public:

	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 (Inherited: 0x00)
struct FEdGraphSchemaAction {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FText MenuDescription; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32_t Grouping; // 0x68(0x04)
	int32_t SectionID; // 0x6c(0x04)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70(0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80(0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90(0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xa0(0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xb0(0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xc0(0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xd0(0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xe0(0x10)
	struct FString SearchText; // 0xf0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.URL
// Size: 0x68 (Inherited: 0x00)
struct FURL {
public:

	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x04)
	int32_t Valid; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 (Inherited: 0x00)
struct FDepthFieldGlowInfo {
public:

	char bEnableGlow : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageEvent {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UClass* DamageTypeClass; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x00)
struct FRadialDamageParams {
public:

	float BaseDamage; // 0x00(0x04)
	float MinimumDamage; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float DamageFalloff; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMeshBuildSettings {
public:

	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ThresholdPosition; // 0x04(0x04)
	float ThresholdTangentNormal; // 0x08(0x04)
	float ThresholdUV; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x30 (Inherited: 0x00)
struct FMeshBuildSettings {
public:

	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x01(0x01)
	char bGenerateLightmapUVs : 1; // 0x01(0x01)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinLightmapResolution; // 0x04(0x04)
	int32_t SrcLightmapIndex; // 0x08(0x04)
	int32_t DstLightmapIndex; // 0x0c(0x04)
	float BuildScale; // 0x10(0x04)
	struct FVector BuildScale3D; // 0x14(0x0c)
	float DistanceFieldResolutionScale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmassLightSettings
// Size: 0x0c (Inherited: 0x00)
struct FLightmassLightSettings {
public:

	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x1c (Inherited: 0x00)
struct FPredictProjectilePathPointData {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
public:

	struct UClass* OwnerClass; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x04 (Inherited: 0x00)
struct FBlueprintInputDelegateBinding {
public:

	char bConsumeInput : 1; // 0x00(0x01)
	char bExecuteWhenPaused : 1; // 0x00(0x01)
	char bOverrideParentBinding : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshLightMapInstanceData {
public:

	struct FTransform Transform; // 0x00(0x30)
	struct TArray<struct FGuid> MapBuildDataIds; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x74 (Inherited: 0x00)
struct FMaterialProxySettings {
public:

	struct FIntPoint TextureSize; // 0x00(0x08)
	float GutterSpace; // 0x08(0x04)
	float MetallicConstant; // 0x0c(0x04)
	float RoughnessConstant; // 0x10(0x04)
	float SpecularConstant; // 0x14(0x04)
	float OpacityConstant; // 0x18(0x04)
	float OpacityMaskConstant; // 0x1c(0x04)
	float AmbientOcclusionConstant; // 0x20(0x04)
	enum class ETextureSizingType TextureSizingType; // 0x24(0x01)
	enum class EMaterialMergeType MaterialMergeType; // 0x25(0x01)
	enum class EBlendMode BlendMode; // 0x26(0x01)
	char bAllowTwoSidedMaterial : 1; // 0x27(0x01)
	char bNormalMap : 1; // 0x27(0x01)
	char bMetallicMap : 1; // 0x27(0x01)
	char bRoughnessMap : 1; // 0x27(0x01)
	char bSpecularMap : 1; // 0x27(0x01)
	char bEmissiveMap : 1; // 0x27(0x01)
	char bOpacityMap : 1; // 0x27(0x01)
	char bOpacityMaskMap : 1; // 0x27(0x01)
	char bAmbientOcclusionMap : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FIntPoint DiffuseTextureSize; // 0x2c(0x08)
	struct FIntPoint NormalTextureSize; // 0x34(0x08)
	struct FIntPoint MetallicTextureSize; // 0x3c(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x44(0x08)
	struct FIntPoint SpecularTextureSize; // 0x4c(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x54(0x08)
	struct FIntPoint OpacityTextureSize; // 0x5c(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x64(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x6c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StreamableTextureInstance
// Size: 0x28 (Inherited: 0x00)
struct FStreamableTextureInstance {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 (Inherited: 0x00)
struct FCollectionParameterBase {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x24 (Inherited: 0x00)
struct FMeshReductionSettings {
public:

	float PercentTriangles; // 0x00(0x04)
	float PercentVertices; // 0x04(0x04)
	float MaxDeviation; // 0x08(0x04)
	float PixelError; // 0x0c(0x04)
	float WeldingThreshold; // 0x10(0x04)
	float HardAngleThreshold; // 0x14(0x04)
	int32_t BaseLODModel; // 0x18(0x04)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x1c(0x01)
	enum class EMeshFeatureImportance TextureImportance; // 0x1d(0x01)
	enum class EMeshFeatureImportance ShadingImportance; // 0x1e(0x01)
	char bRecalculateNormals : 1; // 0x1f(0x01)
	char bGenerateUniqueLightmapUVs : 1; // 0x1f(0x01)
	char bKeepSymmetry : 1; // 0x1f(0x01)
	char bVisibilityAided : 1; // 0x1f(0x01)
	char bCullOccluded : 1; // 0x1f(0x01)
	char bLockEdges : 1; // 0x1f(0x01)
	char bKeepZeroPolygonSection : 1; // 0x1f(0x01)
	char pad_1F_7 : 1; // 0x1f(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20(0x01)
	enum class EMeshFeatureImportance VisibilityAggressiveness; // 0x21(0x01)
	enum class EMeshFeatureImportance VertexColorImportance; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MovementProperties
// Size: 0x01 (Inherited: 0x00)
struct FMovementProperties {
public:

	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
public:

	char bSupportsAgent0 : 1; // 0x00(0x01)
	char bSupportsAgent1 : 1; // 0x00(0x01)
	char bSupportsAgent2 : 1; // 0x00(0x01)
	char bSupportsAgent3 : 1; // 0x00(0x01)
	char bSupportsAgent4 : 1; // 0x00(0x01)
	char bSupportsAgent5 : 1; // 0x00(0x01)
	char bSupportsAgent6 : 1; // 0x00(0x01)
	char bSupportsAgent7 : 1; // 0x00(0x01)
	char bSupportsAgent8 : 1; // 0x01(0x01)
	char bSupportsAgent9 : 1; // 0x01(0x01)
	char bSupportsAgent10 : 1; // 0x01(0x01)
	char bSupportsAgent11 : 1; // 0x01(0x01)
	char bSupportsAgent12 : 1; // 0x01(0x01)
	char bSupportsAgent13 : 1; // 0x01(0x01)
	char bSupportsAgent14 : 1; // 0x01(0x01)
	char bSupportsAgent15 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AdditionalPRTMarker
// Size: 0x50 (Inherited: 0x00)
struct FAdditionalPRTMarker {
public:

	/*struct TMap<int32_t, struct TSoftObjectPtr<UPRTScriptObj>>*/char DataMap[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 (Inherited: 0x00)
struct FGPUSpriteLocalVectorFieldInfo {
public:

	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator MinInitialRotation; // 0x40(0x0c)
	struct FRotator MaxInitialRotation; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float Tightness; // 0x68(0x04)
	char bIgnoreComponentTransform : 1; // 0x6c(0x01)
	char bTileX : 1; // 0x6c(0x01)
	char bTileY : 1; // 0x6c(0x01)
	char bTileZ : 1; // 0x6c(0x01)
	char bUseFixDT : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerPlatformBool
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformBool {
public:

	bool Default; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PhysicalAnimationData
// Size: 0x24 (Inherited: 0x00)
struct FPhysicalAnimationData {
public:

	struct FName BodyName; // 0x00(0x08)
	char bIsLocalSimulation : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OrientationStrength; // 0x0c(0x04)
	float AngularVelocityStrength; // 0x10(0x04)
	float PositionStrength; // 0x14(0x04)
	float VelocityStrength; // 0x18(0x04)
	float MaxLinearForce; // 0x1c(0x04)
	float MaxAngularForce; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x00)
struct FInputAxisProperties {
public:

	float DeadZone; // 0x00(0x04)
	float Sensitivity; // 0x04(0x04)
	float Exponent; // 0x08(0x04)
	char bInvert : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SCSBResult
// Size: 0x40 (Inherited: 0x00)
struct FSCSBResult {
public:

	float M[0x10]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x00)
struct FTransformBaseConstraint {
public:

	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x14 (Inherited: 0x00)
struct FRootMotionFinishVelocitySettings {
public:

	enum class ERootMotionFinishVelocityMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector SetVelocity; // 0x04(0x0c)
	float ClampVelocity; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceStatus {
public:

	char Flags; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 (Inherited: 0x00)
struct FLensImperfectionSettings {
public:

	struct UTexture* DirtMask; // 0x00(0x08)
	float DirtMaskIntensity; // 0x08(0x04)
	struct FLinearColor DirtMaskTint; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GaussianBlurEffectSettings
// Size: 0x04 (Inherited: 0x00)
struct FGaussianBlurEffectSettings {
public:

	float Weight; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x28 (Inherited: 0x00)
struct FConvolutionBloomSettings {
public:

	struct UTexture2D* Texture; // 0x00(0x08)
	float size; // 0x08(0x04)
	struct FVector2D CenterUV; // 0x0c(0x08)
	float PreFilterMin; // 0x14(0x04)
	float PreFilterMax; // 0x18(0x04)
	float PreFilterMult; // 0x1c(0x04)
	float BufferScale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x88 (Inherited: 0x00)
struct FGaussianSumBloomSettings {
public:

	float Intensity; // 0x00(0x04)
	float MaxLuminance; // 0x04(0x04)
	float ThresHold; // 0x08(0x04)
	float SizeScale; // 0x0c(0x04)
	float Filter1Size; // 0x10(0x04)
	float Filter2Size; // 0x14(0x04)
	float Filter3Size; // 0x18(0x04)
	float Filter4Size; // 0x1c(0x04)
	float Filter5Size; // 0x20(0x04)
	float Filter6Size; // 0x24(0x04)
	struct FLinearColor Filter1Tint; // 0x28(0x10)
	struct FLinearColor Filter2Tint; // 0x38(0x10)
	struct FLinearColor Filter3Tint; // 0x48(0x10)
	struct FLinearColor Filter4Tint; // 0x58(0x10)
	struct FLinearColor Filter5Tint; // 0x68(0x10)
	struct FLinearColor Filter6Tint; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0x50 (Inherited: 0x00)
struct FColorGradePerRangeSettings {
public:

	struct FVector4 Saturation; // 0x00(0x10)
	struct FVector4 Contrast; // 0x10(0x10)
	struct FVector4 Gamma; // 0x20(0x10)
	struct FVector4 Gain; // 0x30(0x10)
	struct FVector4 offset; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
public:

	float VerticalResistance; // 0x00(0x04)
	float HorizontalResistance; // 0x04(0x04)
	float BendResistance; // 0x08(0x04)
	float ShearResistance; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float InertiaBlend; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float FiberCompression; // 0x44(0x04)
	float FiberExpansion; // 0x48(0x04)
	float FiberResistance; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x3c (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
public:

	enum class SkeletalMeshTerminationCriterion TerminationCriterion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float NumOfVertPercentage; // 0x08(0x04)
	uint32_t MaxNumOfTriangles; // 0x0c(0x04)
	uint32_t MaxNumOfVerts; // 0x10(0x04)
	float MaxDeviationPercentage; // 0x14(0x04)
	enum class SkeletalMeshOptimizationType ReductionMethod; // 0x18(0x01)
	enum class SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x19(0x01)
	enum class SkeletalMeshOptimizationImportance TextureImportance; // 0x1a(0x01)
	enum class SkeletalMeshOptimizationImportance ShadingImportance; // 0x1b(0x01)
	enum class SkeletalMeshOptimizationImportance SkinningImportance; // 0x1c(0x01)
	char bRemapMorphTargets : 1; // 0x1d(0x01)
	char bRecalcNormals : 1; // 0x1d(0x01)
	char pad_1D_2 : 6; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float WeldingThreshold; // 0x20(0x04)
	float NormalsThreshold; // 0x24(0x04)
	int32_t MaxBonesPerVertex; // 0x28(0x04)
	char bEnforceBoneBoundaries : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float VolumeImportance; // 0x30(0x04)
	char bLockEdges : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t BaseLOD; // 0x38(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size: 0x20 (Inherited: 0x00)
struct FSkeletalMeshSamplingBuiltData {
public:

	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x00(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// Size: 0x30 (Inherited: 0x00)
struct FSoundAttenuationPluginSettings {
public:

	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x00(0x10)
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10(0x10)
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FMeshSectionInfoMap {
public:

	struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TTTrackBase
// Size: 0x18 (Inherited: 0x00)
struct FTTTrackBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FName TrackName; // 0x08(0x08)
	bool bIsExternalCurve; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RawDistribution
// Size: 0x20 (Inherited: 0x00)
struct FRawDistribution {
public:

	struct FDistributionLookupTable Table; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x20 (Inherited: 0x00)
struct FFloatDistribution {
public:

	struct FDistributionLookupTable Table; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x20 (Inherited: 0x00)
struct FVectorDistribution {
public:

	struct FDistributionLookupTable Table; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x20 (Inherited: 0x00)
struct FVector4Distribution {
public:

	struct FDistributionLookupTable Table; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x10 (Inherited: 0x0c)
struct FMaterialAttributesInput : public FExpressionInput {
public:

	int32_t PropertyConnectedBitmask; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CustomInput
// Size: 0x20 (Inherited: 0x00)
struct FCustomInput {
public:

	struct FName InputName; // 0x00(0x08)
	bool UseFloatPrecision; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FExpressionInput Input; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExtraOutputPin
// Size: 0x20 (Inherited: 0x00)
struct FExtraOutputPin {
public:

	struct FName Name; // 0x00(0x08)
	bool useTexture; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FExpressionInput Input; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FunctionExpressionInput
// Size: 0x30 (Inherited: 0x00)
struct FFunctionExpressionInput {
public:

	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x00(0x08)
	struct FGuid ExpressionInputId; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x20 (Inherited: 0x00)
struct FFunctionExpressionOutput {
public:

	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x00(0x08)
	struct FGuid ExpressionOutputId; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FColorMaterialInput : public FMaterialInput {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FScalarMaterialInput : public FMaterialInput {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ShadingModelMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FShadingModelMaterialInput : public FMaterialInput {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVectorMaterialInput : public FMaterialInput {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVector2MaterialInput : public FMaterialInput {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x00)
struct FHitResult {
public:

	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FaceIndex; // 0x04(0x04)
	float Time; // 0x08(0x04)
	float Distance; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x40(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x4c(0x0c)
	float PenetrationDepth; // 0x58(0x04)
	int32_t Item; // 0x5c(0x04)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x60(0x08)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x68(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x70(0x08)
	struct FName BoneName; // 0x78(0x08)
	struct FName MyBoneName; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FActorComponentTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ActorTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FActorTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FParticleSystemWorldManagerTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FEndPhysicsTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FStartPhysicsTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x00)
struct FPlatformInterfaceDelegateResult {
public:

	bool bSuccessful; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPlatformInterfaceData Data; // 0x08(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RepAttachment
// Size: 0x40 (Inherited: 0x00)
struct FRepAttachment {
public:

	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 LocationOffset; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator RotationOffset; // 0x20(0x0c)
	struct FName AttachSocket; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct USceneComponent* AttachComponent; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RigidBodyState
// Size: 0x40 (Inherited: 0x00)
struct FRigidBodyState {
public:

	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 LinVel; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	float Timestamp; // 0x38(0x04)
	char Flags; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BasedMovementInfo
// Size: 0x30 (Inherited: 0x00)
struct FBasedMovementInfo {
public:

	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool bServerHasBaseComponent; // 0x28(0x01)
	bool bRelativeRotation; // 0x29(0x01)
	bool bServerHasVelocity; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x00)
struct FCollisionResponse {
public:

	struct FCollisionResponseContainer ResponseToChannels; // 0x00(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SceneComponentInstanceData
// Size: 0xa8 (Inherited: 0x58)
struct FSceneComponentInstanceData : public FActorComponentInstanceData {
public:

	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EdGraphPinType
// Size: 0x58 (Inherited: 0x00)
struct FEdGraphPinType {
public:

	struct FName PinCategory; // 0x00(0x08)
	struct FName PinSubCategory; // 0x08(0x08)
	struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x10(0x08)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x18(0x20)
	struct FEdGraphTerminalType PinValueType; // 0x38(0x1c)
	enum class EPinContainerType ContainerType; // 0x54(0x01)
	char bIsArray : 1; // 0x55(0x01)
	char bIsReference : 1; // 0x55(0x01)
	char bIsConst : 1; // 0x55(0x01)
	char bIsWeakPointer : 1; // 0x55(0x01)
	char pad_55_4 : 4; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticParameterBase
// Size: 0x24 (Inherited: 0x00)
struct FStaticParameterBase {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	bool bOverride; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGuid ExpressionGUID; // 0x14(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VectorParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FVectorParameterValue {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FGuid ExpressionGUID; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ScalarParameterValue
// Size: 0x24 (Inherited: 0x00)
struct FScalarParameterValue {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	struct FGuid ExpressionGUID; // 0x14(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FontParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FFontParameterValue {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct UFont* FontValue; // 0x10(0x08)
	int32_t FontPage; // 0x18(0x04)
	struct FGuid ExpressionGUID; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FRuntimeVirtualTextureParameterValue {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct URuntimeVirtualTexture* ParameterValue; // 0x10(0x08)
	struct FGuid ExpressionGUID; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FTextureParameterValue {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct UTexture* ParameterValue; // 0x10(0x08)
	struct FGuid ExpressionGUID; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SpriteTextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FSpriteTextureParameterValue {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct UObject* ParameterValue; // 0x10(0x08)
	struct FGuid ExpressionGUID; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x68 (Inherited: 0x00)
struct FIndexedCurve {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x00)
struct FBuildPromotionNewProjectSettings {
public:

	struct FDirectoryPath NewProjectFolderOverride; // 0x00(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x00)
struct FLaunchOnTestSettings {
public:

	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x00)
struct FBuildPromotionOpenAssetSettings {
public:

	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorImportWorkflowDefinition {
public:

	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FBlueprintEditorPromotionSettings {
public:

	struct FFilePath FirstMeshPath; // 0x00(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x00)
struct FParticleEditorPromotionSettings {
public:

	struct FFilePath DefaultParticleAsset; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FMaterialEditorPromotionSettings {
public:

	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x00)
struct FEditorImportExportTestDefinition {
public:

	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x00)
struct FExternalToolDefinition {
public:

	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x60 (Inherited: 0x40)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base {
public:

	int32_t GroupIndex; // 0x40(0x04)
	enum class EAnimGroupRole GroupRole; // 0x44(0x01)
	bool bIgnoreForRelevancyTest; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	float BlendWeight; // 0x48(0x04)
	float InternalTimeAccumulator; // 0x4c(0x04)
	char pad_50[0x10]; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_CustomProperty
// Size: 0x88 (Inherited: 0x40)
struct FAnimNode_CustomProperty : public FAnimNode_Base {
public:

	struct TArray<struct FName> SourcePropertyNames; // 0x40(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x50(0x10)
	struct UObject* TargetInstance; // 0x60(0x08)
	char pad_68[0x20]; // 0x68(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x88 (Inherited: 0x40)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base {
public:

	char pad_40[0x38]; // 0x40(0x38)
	int32_t FramesToCachePose; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	enum class EEvaluatorDataSource DataSource; // 0x80(0x01)
	enum class EEvaluatorMode EvaluatorMode; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x68 (Inherited: 0x40)
struct FAnimNode_TransitionResult : public FAnimNode_Base {
public:

	bool bCanEnterTransition; // 0x40(0x01)
	bool bEnableRawPtr; // 0x41(0x01)
	char pad_42[0x26]; // 0x42(0x26)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp {
public:

	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x48 (Inherited: 0x00)
struct FInputAlphaBoolBlend {
public:

	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimMontageInstance
// Size: 0x1b0 (Inherited: 0x00)
struct FAnimMontageInstance {
public:

	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	bool bPlaying; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DefaultBlendTimeMultiplier; // 0x2c(0x04)
	char pad_30[0xb8]; // 0x30(0xb8)
	struct TArray<int32_t> NextSections; // 0xe8(0x10)
	struct TArray<int32_t> PrevSections; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118(0x10)
	float Position; // 0x128(0x04)
	float PlayRate; // 0x12c(0x04)
	struct FAlphaBlend Blend; // 0x130(0x30)
	char pad_160[0x28]; // 0x160(0x28)
	int32_t DisableRootMotionCount; // 0x188(0x04)
	char pad_18C[0x24]; // 0x18c(0x24)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x10 (Inherited: 0x10)
struct FComponentSpacePoseLink : public FPoseLinkBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PoseLink
// Size: 0x10 (Inherited: 0x10)
struct FPoseLink : public FPoseLinkBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x14 (Inherited: 0x00)
struct FBlendProfileBoneEntry {
public:

	struct FBoneReference BoneReference; // 0x00(0x10)
	float BlendScale; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PerBoneInterpolation
// Size: 0x14 (Inherited: 0x00)
struct FPerBoneInterpolation {
public:

	struct FBoneReference BoneReference; // 0x00(0x10)
	float InterpolationSpeedPerSec; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x8c0 (Inherited: 0x748)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy {
public:

	char pad_748[0x178]; // 0x748(0x178)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x18 (Inherited: 0x00)
struct FAnimCurveBase {
public:

	struct FName LastObservedName; // 0x00(0x08)
	struct FSmartName Name; // 0x08(0x0c)
	int32_t CurveTypeFlags; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ActorObjectPool
// Size: 0x48 (Inherited: 0x40)
struct FActorObjectPool : public FObjectPool {
public:

	bool ReinitializeInstances; // 0x40(0x01)
	bool InstantiateOnDemand; // 0x41(0x01)
	bool KeepOrphanActorsAlive; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KTaperedCapsuleElem
// Size: 0x58 (Inherited: 0x30)
struct FKTaperedCapsuleElem : public FKShapeElem {
public:

	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Radius0; // 0x48(0x04)
	float Radius1; // 0x4c(0x04)
	float Length; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KConvexElem
// Size: 0xa0 (Inherited: 0x30)
struct FKConvexElem : public FKShapeElem {
public:

	struct TArray<struct FVector> VertexData; // 0x30(0x10)
	struct FBox ElemBox; // 0x40(0x1c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FTransform Transform; // 0x60(0x30)
	char pad_90[0x10]; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KSphylElem
// Size: 0x50 (Inherited: 0x30)
struct FKSphylElem : public FKShapeElem {
public:

	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float radius; // 0x48(0x04)
	float Length; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KBoxElem
// Size: 0x58 (Inherited: 0x30)
struct FKBoxElem : public FKShapeElem {
public:

	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float X; // 0x48(0x04)
	float Y; // 0x4c(0x04)
	float Z; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.KSphereElem
// Size: 0x40 (Inherited: 0x30)
struct FKSphereElem : public FKShapeElem {
public:

	struct FVector Center; // 0x30(0x0c)
	float radius; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 (Inherited: 0x00)
struct FSlotAnimationTrack {
public:

	struct FName SlotName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : public FA2Pose {
public:

	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<char> ComponentSpaceFlags; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xb8 (Inherited: 0x30)
struct FAnimNotifyEvent : public FAnimLinkableElement {
public:

	float DisplayTime; // 0x30(0x04)
	float TriggerTimeOffset; // 0x34(0x04)
	float EndTriggerTimeOffset; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool bConvertedFromBranchingPoint; // 0x90(0x01)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	bool bTriggerOnFollower; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	int32_t TrackIndex; // 0xa4(0x04)
	char pad_A8[0x10]; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : public FAnimLinkableElement {
public:

	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float TriggerTimeOffset; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : public FAnimLinkableElement {
public:

	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	struct FName NextSectionName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0x158 (Inherited: 0x40)
struct FAnimNode_StateMachine : public FAnimNode_Base {
public:

	int32_t StateMachineIndexInClass; // 0x40(0x04)
	int32_t MaxTransitionsPerFrame; // 0x44(0x04)
	bool bSkipFirstUpdateTransition; // 0x48(0x01)
	bool bReinitializeOnBecomingRelevant; // 0x49(0x01)
	bool bEnableForceSwitchState; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	struct FName StateNameToBeSwitched; // 0x4c(0x08)
	struct FSimpleAnimTransition DefaultTransitionConfig; // 0x54(0x08)
	bool bActiveSleep; // 0x5c(0x01)
	bool bEnableRawPtr; // 0x5d(0x01)
	char pad_5E[0xfa]; // 0x5e(0xfa)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x50 (Inherited: 0x08)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase {
public:

	int32_t PreviousState; // 0x08(0x04)
	int32_t NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32_t StartNotify; // 0x14(0x04)
	int32_t EndNotify; // 0x18(0x04)
	int32_t InterruptNotify; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class ETransitionLogicType LogicType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FAnimCurveValueBlendCurve> AnimCurveBlendCurves; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimationState
// Size: 0x28 (Inherited: 0x08)
struct FAnimationState : public FAnimationStateBase {
public:

	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x08(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x04)
	int32_t StartNotify; // 0x1c(0x04)
	int32_t EndNotify; // 0x20(0x04)
	int32_t FullyBlendedNotify; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size: 0x38 (Inherited: 0x00)
struct FPrimaryAssetRulesCustomOverride {
public:

	struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x08)
	struct FDirectoryPath FilterDirectory; // 0x08(0x10)
	struct FString FilterString; // 0x18(0x10)
	struct FPrimaryAssetRules Rules; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x1c (Inherited: 0x00)
struct FPrimaryAssetRulesOverride {
public:

	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct FPrimaryAssetRules Rules; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 (Inherited: 0x00)
struct FPrimaryAssetTypeInfo {
public:

	struct FName PrimaryAssetType; // 0x00(0x08)
	/*struct TSoftClassPtr<UObject>*/char AssetBaseClass[0x28]; // 0x08(0x28)
	struct UClass* AssetBaseClassLoaded; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	bool bIsEditorOnly; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50(0x10)
	struct FPrimaryAssetRules Rules; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FString> AssetScanPaths; // 0x70(0x10)
	bool bIsDynamicAsset; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t NumberOfAssets; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GridBlendSample
// Size: 0x1c (Inherited: 0x00)
struct FGridBlendSample {
public:

	struct FEditorElement GridElement; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BookmarkJumpToSettings
// Size: 0x01 (Inherited: 0x01)
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VOscillator
// Size: 0x24 (Inherited: 0x00)
struct FVOscillator {
public:

	struct FFOscillator X; // 0x00(0x0c)
	struct FFOscillator Y; // 0x0c(0x0c)
	struct FFOscillator Z; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ROscillator
// Size: 0x24 (Inherited: 0x00)
struct FROscillator {
public:

	struct FFOscillator Pitch; // 0x00(0x0c)
	struct FFOscillator Yaw; // 0x0c(0x0c)
	struct FFOscillator Roll; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x950 (Inherited: 0x00)
struct FPostProcessSettings {
public:

	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x00(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x01(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x02(0x01)
	char bOverride_BlueCorrection : 1; // 0x03(0x01)
	char bOverride_DarknessCorrection : 1; // 0x03(0x01)
	char bOverride_ExpandGamut : 1; // 0x03(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x03(0x01)
	char bOverride_FilmSaturation : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x03(0x01)
	char bOverride_FilmContrast : 1; // 0x04(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x04(0x01)
	char bOverride_FilmHealAmount : 1; // 0x04(0x01)
	char bOverride_FilmToeAmount : 1; // 0x04(0x01)
	char bOverride_FilmShadowTint : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x04(0x01)
	char bOverride_FilmSlope : 1; // 0x04(0x01)
	char bOverride_FilmToe : 1; // 0x05(0x01)
	char bOverride_FilmShoulder : 1; // 0x05(0x01)
	char bOverride_FilmBlackClip : 1; // 0x05(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x05(0x01)
	char pad_5_4 : 4; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	char bOverride_Mobile_ACES_A : 1; // 0x08(0x01)
	char bOverride_Mobile_ACES_B : 1; // 0x08(0x01)
	char bOverride_Mobile_ACES_C : 1; // 0x08(0x01)
	char bOverride_Mobile_ACES_D : 1; // 0x08(0x01)
	char bOverride_Mobile_ACES_E : 1; // 0x08(0x01)
	char bOverride_Mobile_LDR_ACES_A : 1; // 0x08(0x01)
	char bOverride_Mobile_LDR_ACES_B : 1; // 0x08(0x01)
	char bOverride_Mobile_LDR_ACES_C : 1; // 0x08(0x01)
	char bOverride_Mobile_LDR_ACES_D : 1; // 0x09(0x01)
	char bOverride_Mobile_LDR_ACES_E : 1; // 0x09(0x01)
	char bOverride_Mobile_CG_Exposure : 1; // 0x09(0x01)
	char bOverride_Mobile_CG_HdrScale : 1; // 0x09(0x01)
	char bOverride_Mobile_CG_MasterSaturation : 1; // 0x09(0x01)
	char bOverride_Mobile_CG_MasterTint : 1; // 0x09(0x01)
	char bOverride_Mobile_CG_Saturation_K0 : 1; // 0x09(0x01)
	char bOverride_Mobile_CG_Exposure_K0 : 1; // 0x09(0x01)
	char bOverride_Mobile_CG_Tint_K0 : 1; // 0x0a(0x01)
	char bOverride_Mobile_CG_Saturation_K1 : 1; // 0x0a(0x01)
	char bOverride_Mobile_CG_Exposure_K1 : 1; // 0x0a(0x01)
	char bOverride_Mobile_CG_Tint_K1 : 1; // 0x0a(0x01)
	char bOverride_Mobile_CG_Saturation_K2 : 1; // 0x0a(0x01)
	char bOverride_Mobile_CG_Exposure_K2 : 1; // 0x0a(0x01)
	char bOverride_Mobile_CG_Tint_K2 : 1; // 0x0a(0x01)
	char bOverride_MobileColorGradingLUT : 1; // 0x0a(0x01)
	char bOverride_MobileColorGradingLUTWeight : 1; // 0x0b(0x01)
	char pad_B_1 : 7; // 0x0b(0x01)
	char bOverride_SceneColorTint : 1; // 0x0c(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x0c(0x01)
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x0c(0x01)
	char bOverride_ChromaticAberrationSCaleR : 1; // 0x0c(0x01)
	char bOverride_ChromaticAberrationSCaleG : 1; // 0x0c(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x0c(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x0c(0x01)
	char bOverride_BloomMethod : 1; // 0x0c(0x01)
	char bOverride_PPBlurMethod : 1; // 0x0d(0x01)
	char bOverride_PPEdgeDetectMethod : 1; // 0x0d(0x01)
	char bOverride_BloomIntensity : 1; // 0x0d(0x01)
	char bOverride_BloomMaxLuminance : 1; // 0x0d(0x01)
	char bOverride_MobileBloomMaxLuminance : 1; // 0x0d(0x01)
	char bOverride_BloomThreshold : 1; // 0x0d(0x01)
	char bOverride_Bloom1Tint : 1; // 0x0d(0x01)
	char bOverride_Bloom1Size : 1; // 0x0d(0x01)
	char bOverride_Bloom2Size : 1; // 0x0e(0x01)
	char bOverride_Bloom2Tint : 1; // 0x0e(0x01)
	char bOverride_Bloom3Tint : 1; // 0x0e(0x01)
	char bOverride_Bloom3Size : 1; // 0x0e(0x01)
	char bOverride_Bloom4Tint : 1; // 0x0e(0x01)
	char bOverride_Bloom4Size : 1; // 0x0e(0x01)
	char bOverride_Bloom5Tint : 1; // 0x0e(0x01)
	char bOverride_Bloom5Size : 1; // 0x0e(0x01)
	char bOverride_Bloom6Tint : 1; // 0x0f(0x01)
	char bOverride_Bloom6Size : 1; // 0x0f(0x01)
	char bOverride_BloomSizeScale : 1; // 0x0f(0x01)
	char bOverride_MobileBloomTint : 1; // 0x0f(0x01)
	char bOverride_MobileBloomThreshold : 1; // 0x0f(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x0f(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x0f(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x0f(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x10(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x10(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x10(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x10(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x10(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x10(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x10(0x01)
	char bOverride_BloomDirtMask : 1; // 0x10(0x01)
	char bOverride_CameraShutterSpeed : 1; // 0x11(0x01)
	char bOverride_CameraISO : 1; // 0x11(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x11(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x11(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x11(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x11(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x11(0x01)
	char bOverride_AutoExposureCalibrationConstant : 1; // 0x11(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x12(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x12(0x01)
	char bOverride_AutoExposureBias : 1; // 0x12(0x01)
	char bOverride_AutoExposureBiasCurve : 1; // 0x12(0x01)
	char bOverride_AutoExposureMeterMask : 1; // 0x12(0x01)
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0x12(0x01)
	char bOverride_HistogramLogMin : 1; // 0x12(0x01)
	char bOverride_HistogramLogMax : 1; // 0x12(0x01)
	char bOverride_LocalExposureHighlightContrastScale : 1; // 0x13(0x01)
	char bOverride_LocalExposureShadowContrastScale : 1; // 0x13(0x01)
	char bOverride_LocalExposureHighlightContrastCurve : 1; // 0x13(0x01)
	char bOverride_LocalExposureShadowContrastCurve : 1; // 0x13(0x01)
	char bOverride_LocalExposureHighlightThreshold : 1; // 0x13(0x01)
	char bOverride_LocalExposureShadowThreshold : 1; // 0x13(0x01)
	char bOverride_LocalExposureDetailStrength : 1; // 0x13(0x01)
	char bOverride_LocalExposureBlurredLuminanceBlend : 1; // 0x13(0x01)
	char bOverride_LocalExposureBlurredLuminanceKernelSizePercent : 1; // 0x14(0x01)
	char bOverride_LocalExposureMiddleGreyBias : 1; // 0x14(0x01)
	char bOverride_MiddleGreyBiasCompensation : 1; // 0x14(0x01)
	char bOverride_LensFlareMethod : 1; // 0x14(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x14(0x01)
	char bOverride_LensFlareTint : 1; // 0x14(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x14(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x14(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x15(0x01)
	char bOverride_LensFlareLineWidth : 1; // 0x15(0x01)
	char bOverride_LensFlareLineLength : 1; // 0x15(0x01)
	char bOverride_LensFlareLineIntensity : 1; // 0x15(0x01)
	char bOverride_LensFlareLineTint : 1; // 0x15(0x01)
	char bOverride_LensFlareHalo : 1; // 0x15(0x01)
	char bOverride_LensFlareHaloScaleMin : 1; // 0x15(0x01)
	char bOverride_LensFlareHaloScaleMax : 1; // 0x15(0x01)
	char bOverride_LensFlareTints_2 : 1; // 0x16(0x01)
	char bOverride_LensFlareLocation_2 : 1; // 0x16(0x01)
	char bOverride_LensFlareTints_3 : 1; // 0x16(0x01)
	char bOverride_LensFlareLocation_3 : 1; // 0x16(0x01)
	char bOverride_LensFlareTints_4 : 1; // 0x16(0x01)
	char bOverride_LensFlareLocation_4 : 1; // 0x16(0x01)
	char bOverride_LensFlareTints_5 : 1; // 0x16(0x01)
	char bOverride_LensFlareLocation_5 : 1; // 0x16(0x01)
	char bOverride_LensFlareTints_6 : 1; // 0x17(0x01)
	char bOverride_LensFlareLocation_6 : 1; // 0x17(0x01)
	char bOverride_LensFlareTints_7 : 1; // 0x17(0x01)
	char bOverride_LensFlareTints_8 : 1; // 0x17(0x01)
	char bOverride_LensFlareTints_9 : 1; // 0x17(0x01)
	char bOverride_bUseMobileLensFlare : 1; // 0x17(0x01)
	char bOverride_MobileLensFlareIntensity : 1; // 0x17(0x01)
	char bOverride_MobileLensFlareTint : 1; // 0x17(0x01)
	char bOverride_MobileLensFlareBokehSize : 1; // 0x18(0x01)
	char bOverride_LensFlareRandomSeed : 1; // 0x18(0x01)
	char bOverride_LensFlareFlareCount : 1; // 0x18(0x01)
	char bOverride_LensFlareMinPositionScale : 1; // 0x18(0x01)
	char bOverride_LensFlareMaxPositionScale : 1; // 0x18(0x01)
	char bOverride_MobileLensFlareBokehShape : 1; // 0x18(0x01)
	char bOverride_LensFlareIntensity2 : 1; // 0x18(0x01)
	char bOverride_LensFlareTint2 : 1; // 0x18(0x01)
	char bOverride_LensFlareBokehSize2 : 1; // 0x19(0x01)
	char bOverride_LensFlareRandomSeed2 : 1; // 0x19(0x01)
	char bOverride_LensFlareFlareCount2 : 1; // 0x19(0x01)
	char bOverride_LensFlareMinPositionScale2 : 1; // 0x19(0x01)
	char bOverride_LensFlareMaxPositionScale2 : 1; // 0x19(0x01)
	char bOverride_LensFlareBokehShape2 : 1; // 0x19(0x01)
	char bOverride_LensFlareRayTint : 1; // 0x19(0x01)
	char bOverride_LensFlareRaySliceCount : 1; // 0x19(0x01)
	char bOverride_LensFlareRayThreshold : 1; // 0x1a(0x01)
	char bOverride_LensFlareRayRandomSeed : 1; // 0x1a(0x01)
	char bOverride_LensFlareRaySize : 1; // 0x1a(0x01)
	char bOverride_LensFlareRayWidth : 1; // 0x1a(0x01)
	char bOverride_LensFlareRayIntensity : 1; // 0x1a(0x01)
	char bOverride_VignetteIntensity : 1; // 0x1a(0x01)
	char bOverride_GrainIntensity : 1; // 0x1a(0x01)
	char bOverride_GrainJitter : 1; // 0x1a(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x1b(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x1c(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x1c(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x1c(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x1c(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x1c(0x01)
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0x1c(0x01)
	char bOverride_SSRTAOThreshold : 1; // 0x1c(0x01)
	char bOverride_SSRTAOTwoSidedFoliageThreshold : 1; // 0x1c(0x01)
	char bOverride_SSRTAOBentNormalThreshold : 1; // 0x1d(0x01)
	char bOverride_SSRTAONoiseStep : 1; // 0x1d(0x01)
	char bOverride_SSRTAOStepSize : 1; // 0x1d(0x01)
	char bOverride_SSRTAOFirstPersonStepSize : 1; // 0x1d(0x01)
	char bOverride_SSRTAOFoliageStepSize : 1; // 0x1d(0x01)
	char bOverride_SSRTAOFoliageNormalAdjust : 1; // 0x1d(0x01)
	char bOverride_SSRTAODenoiseTemporalBlendWeight : 1; // 0x1d(0x01)
	char bOverride_SSRTAODenoiseTemporalMomentBlendWeight : 1; // 0x1d(0x01)
	char bOverride_SSRTAODenoiseTemporalNormalTolerance : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseTemporalDepthTolerance : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseTemporalHistoryLength : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseSpatialAOSigma : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseSpatialDepthSigma : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseSpatialNormalSigma : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseATrousIteration : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseATrousCopyIterationIndex : 1; // 0x1e(0x01)
	char bOverride_SSRTAODenoiseATrousIterationStartKernelStep : 1; // 0x1f(0x01)
	char bOverride_SSRTAODenoiseATrousAOSigma : 1; // 0x1f(0x01)
	char bOverride_SSRTAODenoiseATrousDepthSigma : 1; // 0x1f(0x01)
	char bOverride_SSRTAODenoiseATrousDepthWeightCutoff : 1; // 0x1f(0x01)
	char bOverride_SSRTAODenoiseATrousNormalSigma : 1; // 0x1f(0x01)
	char bOverride_SSRTAODenoiseATrousMinVarianceToDenoise : 1; // 0x1f(0x01)
	char pad_1F_6 : 2; // 0x1f(0x01)
	char bOverride_RayTracingAO : 1; // 0x20(0x01)
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bOverride_LPVIntensity : 1; // 0x24(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x24(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x24(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x24(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x24(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x24(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x24(0x01)
	char bOverride_LPVSize : 1; // 0x24(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x25(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x25(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x25(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x25(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x25(0x01)
	char bOverride_LPVFadeRange : 1; // 0x25(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x25(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x25(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x26(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x26(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x26(0x01)
	char bOverride_UseACEScc : 1; // 0x26(0x01)
	char bOverride_LMT_LUTIntensity : 1; // 0x26(0x01)
	char bOverride_LMT_LUT : 1; // 0x26(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x26(0x01)
	char bOverride_MobileDepthOfFieldFocalDistance : 1; // 0x26(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldMinFstop : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldBladeCount : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldSqueezeFactor : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x27(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x28(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x28(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x28(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x28(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x28(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x28(0x01)
	char bOverride_MobileDefaultUEHQGaussian : 1; // 0x28(0x01)
	char bOverride_MobileRadialBlur : 1; // 0x28(0x01)
	char bOverride_MobileGhostEffect : 1; // 0x29(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x29(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x29(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x29(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x29(0x01)
	char bOverride_MotionBlurMax : 1; // 0x29(0x01)
	char bOverride_MotionBlurTargetFPS : 1; // 0x29(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x29(0x01)
	char bOverride_EnableMobileMotionBlur : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurMaxSampleCount : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurVelocityScale : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurMaxVelocity : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurUseAABBMask : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurDepthMask : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurDepthMaskTransition : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurAABBMaskCenter : 1; // 0x2a(0x01)
	char bOverride_MobileMotionBlurAABBMaskExtent : 1; // 0x2b(0x01)
	char bOverride_MobileMotionBlurAABBMaskTransition : 1; // 0x2b(0x01)
	char bOverride_MobileMotionBlurDisplayIntensity : 1; // 0x2b(0x01)
	char bOverride_MobileMotionBlurUseVSVelocity : 1; // 0x2b(0x01)
	char bOverride_MobileMotionBlurDownSampleFactor : 1; // 0x2b(0x01)
	char bOverride_MobileMotionBlurAssumedDepth : 1; // 0x2b(0x01)
	char bOverride_ScreenPercentage : 1; // 0x2b(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x2b(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x2c(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x2c(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x2c(0x01)
	char pad_2C_3 : 5; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bOverride_ScreenRainDropBlurStrength : 1; // 0x30(0x01)
	char bOverride_ScreenRainDropBlurCullRadius : 1; // 0x30(0x01)
	char bOverride_ScreenRainDropBlurStaticSplit : 1; // 0x30(0x01)
	char bOverride_ScreenRainDropBlurStaticDropDensity : 1; // 0x30(0x01)
	char bOverride_ScreenRainDropBlurDynamicXSplit : 1; // 0x30(0x01)
	char bOverride_ScreenRainDropBlurDynamicYSplit : 1; // 0x30(0x01)
	char bOverride_ScreenRainDropBlurDynamicDropDensity : 1; // 0x30(0x01)
	char bOverride_ScreenRainDropBlurTest : 1; // 0x30(0x01)
	char bOverride_ReflectionsType : 1; // 0x31(0x01)
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x31(0x01)
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x31(0x01)
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x31(0x01)
	char bOverride_RayTracingReflectionsShadows : 1; // 0x31(0x01)
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x31(0x01)
	char bOverride_TranslucencyType : 1; // 0x31(0x01)
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x31(0x01)
	char bOverride_RayTracingTranslucencyMinReflectionThroughput : 1; // 0x32(0x01)
	char bOverride_RayTracingTranslucencyMinRefractionThroughput : 1; // 0x32(0x01)
	char bOverride_RayTracingTranslucencyEnableAbsorption : 1; // 0x32(0x01)
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x32(0x01)
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x32(0x01)
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x32(0x01)
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x32(0x01)
	char bOverride_RayTracingGI : 1; // 0x32(0x01)
	char bOverride_RayTracingGIMaxBounces : 1; // 0x33(0x01)
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x33(0x01)
	char bOverride_GIDenoiseApplyAO : 1; // 0x33(0x01)
	char bOverride_GIDenoiseEnableTemporal : 1; // 0x33(0x01)
	char bOverride_GIDenoiseTemporalBlendWeight : 1; // 0x33(0x01)
	char bOverride_GIDenoiseTemporalMomentBlendWeight : 1; // 0x33(0x01)
	char bOverride_GIDenoiseTemporalNormalTolerance : 1; // 0x33(0x01)
	char bOverride_GIDenoiseTemporalDepthTolerance : 1; // 0x33(0x01)
	char bOverride_GIDenoiseColorClamp : 1; // 0x34(0x01)
	char bOverride_GIDenoiseHistoryLength : 1; // 0x34(0x01)
	char bOverride_GIDenoiseEnableATrous : 1; // 0x34(0x01)
	char bOverride_GIDenoiseATrousIteration : 1; // 0x34(0x01)
	char bOverride_GIDenoiseATrousCopyIteration : 1; // 0x34(0x01)
	char bOverride_GIDenoiseATrousSampleDepthAsNormal : 1; // 0x34(0x01)
	char bOverride_GIDenoiseATrousFilterWidth : 1; // 0x34(0x01)
	char bOverride_GIDenoiseATrousVarianceGain : 1; // 0x34(0x01)
	char bOverride_GIDenoiseATrousNormalTolerance : 1; // 0x35(0x01)
	char bOverride_GIDenoiseATrousDepthTolerance : 1; // 0x35(0x01)
	char bOverride_GIDenoiseATrousAOTolerance : 1; // 0x35(0x01)
	char bOverride_GIDenoiseSpatialFilterType : 1; // 0x35(0x01)
	char bOverride_GIDenoiseType : 1; // 0x35(0x01)
	char bOverride_GIDenoiseDebugType : 1; // 0x35(0x01)
	char bOverride_PathTracingMaxBounces : 1; // 0x35(0x01)
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x35(0x01)
	char bOverride_RayTracingCausticsEnable : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsResolution : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsIntensity : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsMaxIntensity : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsMaxTraceDepth : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsFinalCullColorThreshold : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsMidCullColorThreshold : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsTranslucentReflectionMode : 1; // 0x36(0x01)
	char bOverride_RayTracingCausticsMaxScreenRadius : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsBufferScale : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsScatterDepthTolerance : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsSplatSize : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsEnableDispersion : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsDispersionSamples : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsAdaptivePhotonSize : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsAdaptiveVarianceGain : 1; // 0x37(0x01)
	char bOverride_RayTracingCausticsAdaptiveSmooth : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsAdaptiveMaxSample : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsAdaptiveUpdateSpeed : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsEnableTemporalFilter : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsJitter : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsTemporalStrength : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsTemporalColorTolerance : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsDebugLightData : 1; // 0x38(0x01)
	char bOverride_RayTracingCausticsDebugScreenData : 1; // 0x39(0x01)
	char bOverride_RayTracingCausticsDebugMaxPixelValue : 1; // 0x39(0x01)
	char bOverride_RayTracingCausticsDebugMapScale : 1; // 0x39(0x01)
	char bOverride_RayTracingCausticsDebugMaxPhotonCount : 1; // 0x39(0x01)
	char bOverride_RayTracingCausticsDebugMip : 1; // 0x39(0x01)
	char bOverride_RayTracingWaterCausticsType : 1; // 0x39(0x01)
	char bOverride_RayTracingWaterCausticsBufferScale : 1; // 0x39(0x01)
	char bOverride_RayTracingWaterCausticsFollowCamera : 1; // 0x39(0x01)
	char bOverride_RayTracingWaterCausticsLookAt : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsRange : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsColor : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsNumDenoisePasses : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsDispersionIntensity : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsDispersionOffset : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsReflectiveIntensity : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsReflectedRayTMax : 1; // 0x3a(0x01)
	char bOverride_RayTracingWaterCausticsReflectedRayTMin : 1; // 0x3b(0x01)
	char bOverride_RayTracingWaterCausticsRefractiveIntensity : 1; // 0x3b(0x01)
	char bOverride_RayTracingWaterCausticsRefractedRayTMax : 1; // 0x3b(0x01)
	char bOverride_RayTracingWaterCausticsRefractedRayTMin : 1; // 0x3b(0x01)
	char bOverride_RayTracingWaterCausticsFresnelBaseReflectFraction : 1; // 0x3b(0x01)
	char bOverride_RayTracingWaterCausticsReflectBackFaceCullingThreshold : 1; // 0x3b(0x01)
	char bOverride_RayTracingWaterCausticsRefractBackFaceCullingThreshold : 1; // 0x3b(0x01)
	char pad_3B_7 : 1; // 0x3b(0x01)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x3c(0x01)
	char bMobileHQGaussian : 1; // 0x3d(0x01)
	char bMobileDefaultUEHQGaussian : 1; // 0x3d(0x01)
	char pad_3D_2 : 6; // 0x3d(0x01)
	enum class EBloomMethod BloomMethod; // 0x3e(0x01)
	enum class EPPBlurMethod PPBlurMethod; // 0x3f(0x01)
	enum class EPPEdgeDetectMethod PPEdgeDetectMethod; // 0x40(0x01)
	char bMobileRadialBlur : 1; // 0x41(0x01)
	char pad_41_1 : 7; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float mobileradialtint; // 0x44(0x04)
	float mobileradialstrength; // 0x48(0x04)
	struct FVector2D mobileradialcenter; // 0x4c(0x08)
	struct FVector2D mobileghostspeed; // 0x54(0x08)
	float mobileghostblurtint; // 0x5c(0x04)
	char bMobileGhostEffect : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float WhiteTemp; // 0x64(0x04)
	float WhiteTint; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FVector4 ColorSaturation; // 0x70(0x10)
	struct FVector4 ColorContrast; // 0x80(0x10)
	struct FVector4 ColorGamma; // 0x90(0x10)
	struct FVector4 ColorGain; // 0xa0(0x10)
	struct FVector4 ColorOffset; // 0xb0(0x10)
	struct FVector4 ColorSaturationShadows; // 0xc0(0x10)
	struct FVector4 ColorContrastShadows; // 0xd0(0x10)
	struct FVector4 ColorGammaShadows; // 0xe0(0x10)
	struct FVector4 ColorGainShadows; // 0xf0(0x10)
	struct FVector4 ColorOffsetShadows; // 0x100(0x10)
	struct FVector4 ColorSaturationMidtones; // 0x110(0x10)
	struct FVector4 ColorContrastMidtones; // 0x120(0x10)
	struct FVector4 ColorGammaMidtones; // 0x130(0x10)
	struct FVector4 ColorGainMidtones; // 0x140(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x150(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x160(0x10)
	struct FVector4 ColorContrastHighlights; // 0x170(0x10)
	struct FVector4 ColorGammaHighlights; // 0x180(0x10)
	struct FVector4 ColorGainHighlights; // 0x190(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x1a0(0x10)
	float ColorCorrectionHighlightsMin; // 0x1b0(0x04)
	float ColorCorrectionShadowsMax; // 0x1b4(0x04)
	float BlueCorrection; // 0x1b8(0x04)
	float DarknessCorrection; // 0x1bc(0x04)
	float ExpandGamut; // 0x1c0(0x04)
	float FilmSlope; // 0x1c4(0x04)
	float FilmToe; // 0x1c8(0x04)
	float FilmShoulder; // 0x1cc(0x04)
	float FilmBlackClip; // 0x1d0(0x04)
	float FilmWhiteClip; // 0x1d4(0x04)
	float Mobile_ACES_A; // 0x1d8(0x04)
	float Mobile_ACES_B; // 0x1dc(0x04)
	float Mobile_ACES_C; // 0x1e0(0x04)
	float Mobile_ACES_D; // 0x1e4(0x04)
	float Mobile_ACES_E; // 0x1e8(0x04)
	float Mobile_LDR_ACES_A; // 0x1ec(0x04)
	float Mobile_LDR_ACES_B; // 0x1f0(0x04)
	float Mobile_LDR_ACES_C; // 0x1f4(0x04)
	float Mobile_LDR_ACES_D; // 0x1f8(0x04)
	float Mobile_LDR_ACES_E; // 0x1fc(0x04)
	struct FLinearColor Mobile_CG_MasterTint; // 0x200(0x10)
	float Mobile_CG_MasterSaturation; // 0x210(0x04)
	float Mobile_CG_Exposure; // 0x214(0x04)
	float Mobile_CG_HdrScale; // 0x218(0x04)
	struct FLinearColor Mobile_CG_Tint_K0; // 0x21c(0x10)
	float Mobile_CG_Saturation_K0; // 0x22c(0x04)
	float Mobile_CG_Exposure_K0; // 0x230(0x04)
	struct FLinearColor Mobile_CG_Tint_K1; // 0x234(0x10)
	float Mobile_CG_Saturation_K1; // 0x244(0x04)
	float Mobile_CG_Exposure_K1; // 0x248(0x04)
	struct FLinearColor Mobile_CG_Tint_K2; // 0x24c(0x10)
	float Mobile_CG_Saturation_K2; // 0x25c(0x04)
	float Mobile_CG_Exposure_K2; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UTexture* MobileColorGradingLUT; // 0x268(0x08)
	float MobileColorGradingLUTWeight; // 0x270(0x04)
	struct FLinearColor FilmWhitePoint; // 0x274(0x10)
	struct FLinearColor FilmShadowTint; // 0x284(0x10)
	float FilmShadowTintBlend; // 0x294(0x04)
	float FilmShadowTintAmount; // 0x298(0x04)
	float FilmSaturation; // 0x29c(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x2a0(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x2b0(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x2c0(0x10)
	float FilmContrast; // 0x2d0(0x04)
	float FilmToeAmount; // 0x2d4(0x04)
	float FilmHealAmount; // 0x2d8(0x04)
	float FilmDynamicRange; // 0x2dc(0x04)
	struct FLinearColor SceneColorTint; // 0x2e0(0x10)
	float SceneFringeIntensity; // 0x2f0(0x04)
	float ChromaticAberrationStartOffset; // 0x2f4(0x04)
	float ChromaticAberrationSCaleR; // 0x2f8(0x04)
	float ChromaticAberrationSCaleG; // 0x2fc(0x04)
	float BloomIntensity; // 0x300(0x04)
	float BloomMaxLuminance; // 0x304(0x04)
	float MobileBloomMaxLuminance; // 0x308(0x04)
	float BloomThreshold; // 0x30c(0x04)
	float BloomSizeScale; // 0x310(0x04)
	float Bloom1Size; // 0x314(0x04)
	float Bloom2Size; // 0x318(0x04)
	float Bloom3Size; // 0x31c(0x04)
	float Bloom4Size; // 0x320(0x04)
	float Bloom5Size; // 0x324(0x04)
	float Bloom6Size; // 0x328(0x04)
	struct FLinearColor Bloom1Tint; // 0x32c(0x10)
	struct FLinearColor Bloom2Tint; // 0x33c(0x10)
	struct FLinearColor Bloom3Tint; // 0x34c(0x10)
	struct FLinearColor Bloom4Tint; // 0x35c(0x10)
	struct FLinearColor Bloom5Tint; // 0x36c(0x10)
	struct FLinearColor Bloom6Tint; // 0x37c(0x10)
	struct FLinearColor MobileBloomTint; // 0x38c(0x10)
	float MobileBloomThreshold; // 0x39c(0x04)
	float BloomConvolutionSize; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct UTexture2D* BloomConvolutionTexture; // 0x3a8(0x08)
	struct FVector2D BloomConvolutionCenterUV; // 0x3b0(0x08)
	float BloomConvolutionPreFilterMin; // 0x3b8(0x04)
	float BloomConvolutionPreFilterMax; // 0x3bc(0x04)
	float BloomConvolutionPreFilterMult; // 0x3c0(0x04)
	float BloomConvolutionBufferScale; // 0x3c4(0x04)
	struct UTexture* BloomDirtMask; // 0x3c8(0x08)
	float BloomDirtMaskIntensity; // 0x3d0(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x3d4(0x10)
	struct FLinearColor AmbientCubemapTint; // 0x3e4(0x10)
	float AmbientCubemapIntensity; // 0x3f4(0x04)
	struct UTextureCube* AmbientCubemap; // 0x3f8(0x08)
	float CameraShutterSpeed; // 0x400(0x04)
	float CameraISO; // 0x404(0x04)
	float DepthOfFieldFstop; // 0x408(0x04)
	float DepthOfFieldMinFstop; // 0x40c(0x04)
	int32_t DepthOfFieldBladeCount; // 0x410(0x04)
	float AutoExposureBias; // 0x414(0x04)
	float AutoExposureBiasBackup; // 0x418(0x04)
	char bOverride_AutoExposureBiasBackup : 1; // 0x41c(0x01)
	char pad_41C_1 : 7; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x428(0x08)
	struct UTexture* AutoExposureMeterMask; // 0x430(0x08)
	float AutoExposureLowPercent; // 0x438(0x04)
	float AutoExposureHighPercent; // 0x43c(0x04)
	float AutoExposureMinBrightness; // 0x440(0x04)
	float AutoExposureMaxBrightness; // 0x444(0x04)
	float AutoExposureSpeedUp; // 0x448(0x04)
	float AutoExposureSpeedDown; // 0x44c(0x04)
	float HistogramLogMin; // 0x450(0x04)
	float HistogramLogMax; // 0x454(0x04)
	float AutoExposureCalibrationConstant; // 0x458(0x04)
	float LocalExposureHighlightContrastScale; // 0x45c(0x04)
	float LocalExposureShadowContrastScale; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UCurveFloat* LocalExposureHighlightContrastCurve; // 0x468(0x08)
	struct UCurveFloat* LocalExposureShadowContrastCurve; // 0x470(0x08)
	float LocalExposureHighlightThreshold; // 0x478(0x04)
	float LocalExposureShadowThreshold; // 0x47c(0x04)
	float LocalExposureDetailStrength; // 0x480(0x04)
	float LocalExposureBlurredLuminanceBlend; // 0x484(0x04)
	float LocalExposureBlurredLuminanceKernelSizePercent; // 0x488(0x04)
	float LocalExposureMiddleGreyBias; // 0x48c(0x04)
	char MiddleGreyBiasCompensation : 1; // 0x490(0x01)
	char pad_490_1 : 7; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	int32_t BlurRadius; // 0x494(0x04)
	enum class ELensFlareMethod LensFlareMethod; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	float LensFlareIntensity; // 0x49c(0x04)
	struct FLinearColor LensFlareTint; // 0x4a0(0x10)
	float LensFlareBokehSize; // 0x4b0(0x04)
	float LensFlareThreshold; // 0x4b4(0x04)
	struct UTexture* LensFlareBokehShape; // 0x4b8(0x08)
	float LensFlareLineWidth; // 0x4c0(0x04)
	float LensFlareLineLength; // 0x4c4(0x04)
	float LensFlareLineIntensity; // 0x4c8(0x04)
	struct FLinearColor LensFlareLineTint; // 0x4cc(0x10)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UTexture* LensFlareHalo; // 0x4e0(0x08)
	float LensFlareHaloScaleMin; // 0x4e8(0x04)
	float LensFlareHaloScaleMax; // 0x4ec(0x04)
	struct FLinearColor LensFlareTints_2; // 0x4f0(0x10)
	float LensFlareLocation_2; // 0x500(0x04)
	struct FLinearColor LensFlareTints_3; // 0x504(0x10)
	float LensFlareLocation_3; // 0x514(0x04)
	struct FLinearColor LensFlareTints_4; // 0x518(0x10)
	float LensFlareLocation_4; // 0x528(0x04)
	struct FLinearColor LensFlareTints_5; // 0x52c(0x10)
	float LensFlareLocation_5; // 0x53c(0x04)
	struct FLinearColor LensFlareTints_6; // 0x540(0x10)
	float LensFlareLocation_6; // 0x550(0x04)
	struct FLinearColor LensFlareTints_7; // 0x554(0x10)
	struct FLinearColor LensFlareTints_8; // 0x564(0x10)
	struct FLinearColor LensFlareTints_9; // 0x574(0x10)
	char bUseMobileLensFlare : 1; // 0x584(0x01)
	char pad_584_1 : 7; // 0x584(0x01)
	char pad_585[0x3]; // 0x585(0x03)
	float MobileLensFlareIntensity; // 0x588(0x04)
	struct FLinearColor MobileLensFlareTint; // 0x58c(0x10)
	float MobileLensFlareBokehSize; // 0x59c(0x04)
	int32_t LensFlareRandomSeed; // 0x5a0(0x04)
	int32_t LensFlareFlareCount; // 0x5a4(0x04)
	float LensFlareMinPositionScale; // 0x5a8(0x04)
	float LensFlareMaxPositionScale; // 0x5ac(0x04)
	struct UTexture* MobileLensFlareBokehShape; // 0x5b0(0x08)
	float LensFlareIntensity2; // 0x5b8(0x04)
	struct FLinearColor LensFlareTint2; // 0x5bc(0x10)
	float LensFlareBokehSize2; // 0x5cc(0x04)
	int32_t LensFlareRandomSeed2; // 0x5d0(0x04)
	int32_t LensFlareFlareCount2; // 0x5d4(0x04)
	float LensFlareMinPositionScale2; // 0x5d8(0x04)
	float LensFlareMaxPositionScale2; // 0x5dc(0x04)
	struct UTexture* LensFlareBokehShape2; // 0x5e0(0x08)
	struct FLinearColor LensFlareRayTint; // 0x5e8(0x10)
	int32_t LensFlareRaySliceCount; // 0x5f8(0x04)
	float LensFlareRayThreshold; // 0x5fc(0x04)
	int32_t LensFlareRayRandomSeed; // 0x600(0x04)
	float LensFlareRaySize; // 0x604(0x04)
	float LensFlareRayWidth; // 0x608(0x04)
	float LensFlareRayIntensity; // 0x60c(0x04)
	float VignetteIntensity; // 0x610(0x04)
	float GrainJitter; // 0x614(0x04)
	float GrainIntensity; // 0x618(0x04)
	float AmbientOcclusionIntensity; // 0x61c(0x04)
	float AmbientOcclusionStaticFraction; // 0x620(0x04)
	float AmbientOcclusionRadius; // 0x624(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x628(0x01)
	char pad_628_1 : 7; // 0x628(0x01)
	char pad_629[0x3]; // 0x629(0x03)
	float AmbientOcclusionFadeDistance; // 0x62c(0x04)
	float AmbientOcclusionFadeRadius; // 0x630(0x04)
	float AmbientOcclusionDistance; // 0x634(0x04)
	float AmbientOcclusionPower; // 0x638(0x04)
	float AmbientOcclusionBias; // 0x63c(0x04)
	float AmbientOcclusionQuality; // 0x640(0x04)
	float AmbientOcclusionMipBlend; // 0x644(0x04)
	float AmbientOcclusionMipScale; // 0x648(0x04)
	float AmbientOcclusionMipThreshold; // 0x64c(0x04)
	float AmbientOcclusionTemporalBlendWeight; // 0x650(0x04)
	float SSRTAOThreshold; // 0x654(0x04)
	float SSRTAOTwoSidedFoliageThreshold; // 0x658(0x04)
	float SSRTAOBentNormalThreshold; // 0x65c(0x04)
	float SSRTAONoiseStep; // 0x660(0x04)
	float SSRTAOStepSize; // 0x664(0x04)
	float SSRTAOFirstPersonStepSize; // 0x668(0x04)
	float SSRTAOFoliageStepSize; // 0x66c(0x04)
	float SSRTAOFoliageNormalAdjust; // 0x670(0x04)
	float SSRTAODenoiseTemporalBlendWeight; // 0x674(0x04)
	float SSRTAODenoiseTemporalMomentBlendWeight; // 0x678(0x04)
	float SSRTAODenoiseTemporalNormalTolerance; // 0x67c(0x04)
	float SSRTAODenoiseTemporalDepthTolerance; // 0x680(0x04)
	int32_t SSRTAODenoiseTemporalHistoryLength; // 0x684(0x04)
	float SSRTAODenoiseSpatialAOSigma; // 0x688(0x04)
	float SSRTAODenoiseSpatialDepthSigma; // 0x68c(0x04)
	float SSRTAODenoiseSpatialNormalSigma; // 0x690(0x04)
	int32_t SSRTAODenoiseATrousIteration; // 0x694(0x04)
	int32_t SSRTAODenoiseATrousCopyIterationIndex; // 0x698(0x04)
	int32_t SSRTAODenoiseATrousIterationStartKernelStep; // 0x69c(0x04)
	float SSRTAODenoiseATrousAOSigma; // 0x6a0(0x04)
	float SSRTAODenoiseATrousDepthSigma; // 0x6a4(0x04)
	float SSRTAODenoiseATrousDepthWeightCutoff; // 0x6a8(0x04)
	float SSRTAODenoiseATrousNormalSigma; // 0x6ac(0x04)
	float SSRTAODenoiseATrousMinVarianceToDenoise; // 0x6b0(0x04)
	char RayTracingAO : 1; // 0x6b4(0x01)
	char pad_6B4_1 : 7; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	int32_t RayTracingAOSamplesPerPixel; // 0x6b8(0x04)
	struct FLinearColor IndirectLightingColor; // 0x6bc(0x10)
	float IndirectLightingIntensity; // 0x6cc(0x04)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x6d0(0x01)
	char pad_6D1[0x3]; // 0x6d1(0x03)
	int32_t RayTracingGIMaxBounces; // 0x6d4(0x04)
	int32_t RayTracingGISamplesPerPixel; // 0x6d8(0x04)
	char RayTracingCausticsEnable : 1; // 0x6dc(0x01)
	char pad_6DC_1 : 7; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	enum class ERayTracingMeshCausticsResolutionOverride RayTracingCausticsResolution; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	float RayTracingCausticsIntensity; // 0x6e4(0x04)
	float RayTracingCausticsMaxIntensity; // 0x6e8(0x04)
	int32_t RayTracingCausticsMaxTraceDepth; // 0x6ec(0x04)
	float RayTracingCausticsFinalCullColorThreshold; // 0x6f0(0x04)
	float RayTracingCausticsMidCullColorThreshold; // 0x6f4(0x04)
	enum class ERayTracingMeshCausticsTranslucentReflectionMode RayTracingCausticsTranslucentReflectionMode; // 0x6f8(0x01)
	char pad_6F9[0x3]; // 0x6f9(0x03)
	float RayTracingCausticsMaxScreenRadius; // 0x6fc(0x04)
	enum class ERayTracingMeshCausticsBufferScale RayTracingCausticsBufferScale; // 0x700(0x01)
	char pad_701[0x3]; // 0x701(0x03)
	float RayTracingCausticsScatterDepthTolerance; // 0x704(0x04)
	float RayTracingCausticsSplatSize; // 0x708(0x04)
	char RayTracingCausticsEnableDispersion : 1; // 0x70c(0x01)
	char pad_70C_1 : 7; // 0x70c(0x01)
	char pad_70D[0x3]; // 0x70d(0x03)
	int32_t RayTracingCausticsDispersionSamples; // 0x710(0x04)
	float RayTracingCausticsAdaptivePhotonSize; // 0x714(0x04)
	float RayTracingCausticsAdaptiveVarianceGain; // 0x718(0x04)
	float RayTracingCausticsAdaptiveSmooth; // 0x71c(0x04)
	int32_t RayTracingCausticsAdaptiveMaxSample; // 0x720(0x04)
	float RayTracingCausticsAdaptiveUpdateSpeed; // 0x724(0x04)
	char RayTracingCausticsEnableTemporalFilter : 1; // 0x728(0x01)
	char pad_728_1 : 7; // 0x728(0x01)
	char pad_729[0x3]; // 0x729(0x03)
	float RayTracingCausticsJitter; // 0x72c(0x04)
	float RayTracingCausticsTemporalStrength; // 0x730(0x04)
	float RayTracingCausticsTemporalColorTolerance; // 0x734(0x04)
	enum class ERayTracingMeshCausticsDebugLightData RayTracingCausticsDebugLightData; // 0x738(0x01)
	enum class ERayTracingMeshCausticsDebugScreenData RayTracingCausticsDebugScreenData; // 0x739(0x01)
	char pad_73A[0x2]; // 0x73a(0x02)
	float RayTracingCausticsDebugMaxPixelValue; // 0x73c(0x04)
	float RayTracingCausticsDebugMapScale; // 0x740(0x04)
	int32_t RayTracingCausticsDebugMaxPhotonCount; // 0x744(0x04)
	int32_t RayTracingCausticsDebugMip; // 0x748(0x04)
	char GIDenoiseApplyAO : 1; // 0x74c(0x01)
	char GIDenoiseEnableTemporal : 1; // 0x74c(0x01)
	char pad_74C_2 : 6; // 0x74c(0x01)
	char pad_74D[0x3]; // 0x74d(0x03)
	float GIDenoiseTemporalBlendWeight; // 0x750(0x04)
	float GIDenoiseTemporalMomentBlendWeight; // 0x754(0x04)
	float GIDenoiseTemporalNormalTolerance; // 0x758(0x04)
	float GIDenoiseTemporalDepthTolerance; // 0x75c(0x04)
	int32_t GIDenoiseColorClamp; // 0x760(0x04)
	int32_t GIDenoiseHistoryLength; // 0x764(0x04)
	char GIDenoiseEnableATrous : 1; // 0x768(0x01)
	char pad_768_1 : 7; // 0x768(0x01)
	char pad_769[0x3]; // 0x769(0x03)
	int32_t GIDenoiseATrousIteration; // 0x76c(0x04)
	int32_t GIDenoiseATrousCopyIteration; // 0x770(0x04)
	char GIDenoiseATrousSampleDepthAsNormal : 1; // 0x774(0x01)
	char pad_774_1 : 7; // 0x774(0x01)
	char pad_775[0x3]; // 0x775(0x03)
	float GIDenoiseATrousFilterWidth; // 0x778(0x04)
	float GIDenoiseATrousVarianceGain; // 0x77c(0x04)
	float GIDenoiseATrousNormalTolerance; // 0x780(0x04)
	float GIDenoiseATrousDepthTolerance; // 0x784(0x04)
	float GIDenoiseATrousAOTolerance; // 0x788(0x04)
	enum class ERayTracingGIDenoiseSpatialFilterType GIDenoiseSpatialFilterType; // 0x78c(0x01)
	enum class ERayTracingGIDenoiseType GIDenoiseType; // 0x78d(0x01)
	enum class ERayTracingGIDenoiseDebugType GIDenoiseDebugType; // 0x78e(0x01)
	enum class ERayTracingWaterCausticsType RayTracingWaterCausticsType; // 0x78f(0x01)
	enum class ERayTracingWaterCausticsBufferScale RayTracingWaterCausticsBufferScale; // 0x790(0x01)
	char pad_791[0x3]; // 0x791(0x03)
	char RayTracingWaterCausticsFollowCamera : 1; // 0x794(0x01)
	char pad_794_1 : 7; // 0x794(0x01)
	char pad_795[0x3]; // 0x795(0x03)
	struct FVector RayTracingWaterCausticsLookAt; // 0x798(0x0c)
	struct FVector RayTracingWaterCausticsRange; // 0x7a4(0x0c)
	struct FLinearColor RayTracingWaterCausticsColor; // 0x7b0(0x10)
	int32_t RayTracingWaterCausticsNumDenoisePasses; // 0x7c0(0x04)
	float RayTracingWaterCausticsDispersionIntensity; // 0x7c4(0x04)
	float RayTracingWaterCausticsDispersionOffset; // 0x7c8(0x04)
	float RayTracingWaterCausticsReflectiveIntensity; // 0x7cc(0x04)
	float RayTracingWaterCausticsReflectedRayTMax; // 0x7d0(0x04)
	float RayTracingWaterCausticsReflectedRayTMin; // 0x7d4(0x04)
	float RayTracingWaterCausticsRefractiveIntensity; // 0x7d8(0x04)
	float RayTracingWaterCausticsRefractedRayTMax; // 0x7dc(0x04)
	float RayTracingWaterCausticsRefractedRayTMin; // 0x7e0(0x04)
	float RayTracingWaterCausticsFresnelBaseReflectFraction; // 0x7e4(0x04)
	float RayTracingWaterCausticsReflectBackFaceCullingThreshold; // 0x7e8(0x04)
	float RayTracingWaterCausticsRefractBackFaceCullingThreshold; // 0x7ec(0x04)
	float ColorGradingIntensity; // 0x7f0(0x04)
	char pad_7F4[0x4]; // 0x7f4(0x04)
	struct UTexture* ColorGradingLUT; // 0x7f8(0x08)
	bool UseACEScc; // 0x800(0x01)
	char pad_801[0x3]; // 0x801(0x03)
	float LMT_LUTIntensity; // 0x804(0x04)
	struct UTexture* LMT_LUT; // 0x808(0x08)
	float DepthOfFieldSensorWidth; // 0x810(0x04)
	float DepthOfFieldSqueezeFactor; // 0x814(0x04)
	float DepthOfFieldFocalDistance; // 0x818(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x81c(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x820(0x04)
	float DepthOfFieldFocalRegion; // 0x824(0x04)
	float MobileDepthOfFieldFocalDistance; // 0x828(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x82c(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x830(0x04)
	float DepthOfFieldScale; // 0x834(0x04)
	float DepthOfFieldNearBlurSize; // 0x838(0x04)
	float DepthOfFieldFarBlurSize; // 0x83c(0x04)
	float DepthOfFieldOcclusion; // 0x840(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x844(0x04)
	float DepthOfFieldVignetteSize; // 0x848(0x04)
	float ScreenRainDropBlurStrength; // 0x84c(0x04)
	float ScreenRainDropBlurCullRadius; // 0x850(0x04)
	float ScreenRainDropBlurStaticSplit; // 0x854(0x04)
	float ScreenRainDropBlurStaticDropDensity; // 0x858(0x04)
	float ScreenRainDropBlurDynamicXSplit; // 0x85c(0x04)
	float ScreenRainDropBlurDynamicYSplit; // 0x860(0x04)
	float ScreenRainDropBlurDynamicDropDensity; // 0x864(0x04)
	float ScreenRainDropBlurTest; // 0x868(0x04)
	float MotionBlurAmount; // 0x86c(0x04)
	float MotionBlurMax; // 0x870(0x04)
	int32_t MotionBlurTargetFPS; // 0x874(0x04)
	float MotionBlurPerObjectSize; // 0x878(0x04)
	char bEnableMobileMotionBlur : 1; // 0x87c(0x01)
	char pad_87C_1 : 7; // 0x87c(0x01)
	char pad_87D[0x3]; // 0x87d(0x03)
	int32_t MobileMotionBlurMaxSampleCount; // 0x880(0x04)
	float MobileMotionBlurVelocityScale; // 0x884(0x04)
	float MobileMotionBlurMaxVelocity; // 0x888(0x04)
	char bMobileMotionBlurUseAABBMask : 1; // 0x88c(0x01)
	char pad_88C_1 : 7; // 0x88c(0x01)
	char pad_88D[0x3]; // 0x88d(0x03)
	float MobileMotionBlurDepthMask; // 0x890(0x04)
	float MobileMotionBlurDepthMaskTransition; // 0x894(0x04)
	struct FVector2D MobileMotionBlurAABBMaskCenter; // 0x898(0x08)
	struct FVector2D MobileMotionBlurAABBMaskExtent; // 0x8a0(0x08)
	float MobileMotionBlurAABBMaskTransition; // 0x8a8(0x04)
	char bMobileMotionBlurDisplayIntensity : 1; // 0x8ac(0x01)
	char bMobileMotionBlurUseVSVelocity : 1; // 0x8ac(0x01)
	char pad_8AC_2 : 6; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	int32_t MobileMotionBlurDownSampleFactor; // 0x8b0(0x04)
	float MobileMotionBlurAssumedDepth; // 0x8b4(0x04)
	float LPVIntensity; // 0x8b8(0x04)
	float LPVVplInjectionBias; // 0x8bc(0x04)
	float LPVSize; // 0x8c0(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x8c4(0x04)
	float LPVSecondaryBounceIntensity; // 0x8c8(0x04)
	float LPVGeometryVolumeBias; // 0x8cc(0x04)
	float LPVEmissiveInjectionIntensity; // 0x8d0(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x8d4(0x04)
	float LPVDirectionalOcclusionRadius; // 0x8d8(0x04)
	float LPVDiffuseOcclusionExponent; // 0x8dc(0x04)
	float LPVSpecularOcclusionExponent; // 0x8e0(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x8e4(0x04)
	float LPVSpecularOcclusionIntensity; // 0x8e8(0x04)
	enum class EReflectionsType ReflectionsType; // 0x8ec(0x01)
	char pad_8ED[0x3]; // 0x8ed(0x03)
	float ScreenSpaceReflectionIntensity; // 0x8f0(0x04)
	float ScreenSpaceReflectionQuality; // 0x8f4(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x8f8(0x04)
	float RayTracingReflectionsMaxRoughness; // 0x8fc(0x04)
	int32_t RayTracingReflectionsMaxBounces; // 0x900(0x04)
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x904(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x908(0x01)
	char RayTracingReflectionsTranslucency : 1; // 0x909(0x01)
	char pad_909_1 : 7; // 0x909(0x01)
	enum class ETranslucencyType TranslucencyType; // 0x90a(0x01)
	char pad_90B[0x1]; // 0x90b(0x01)
	float RayTracingTranslucencyMaxRoughness; // 0x90c(0x04)
	float RayTracingTranslucencyMinReflectionThroughput; // 0x910(0x04)
	float RayTracingTranslucencyMinRefractionThroughput; // 0x914(0x04)
	char RayTracingTranslucencyEnableAbsorption : 1; // 0x918(0x01)
	char pad_918_1 : 7; // 0x918(0x01)
	char pad_919[0x3]; // 0x919(0x03)
	int32_t RayTracingTranslucencyRefractionRays; // 0x91c(0x04)
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x920(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x924(0x01)
	char RayTracingTranslucencyRefraction : 1; // 0x925(0x01)
	char pad_925_1 : 7; // 0x925(0x01)
	char pad_926[0x2]; // 0x926(0x02)
	int32_t PathTracingMaxBounces; // 0x928(0x04)
	int32_t PathTracingSamplesPerPixel; // 0x92c(0x04)
	float LPVFadeRange; // 0x930(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x934(0x04)
	float ScreenPercentage; // 0x938(0x04)
	char pad_93C[0x4]; // 0x93c(0x04)
	struct FWeightedBlendables WeightedBlendables; // 0x940(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0xf8 (Inherited: 0x00)
struct FRootMotionSourceGroup {
public:

	char pad_0[0xe8]; // 0x00(0xe8)
	char bHasAdditiveSources : 1; // 0xe8(0x01)
	char bHasOverrideSources : 1; // 0xe8(0x01)
	char bIsAdditiveVelocityApplied : 1; // 0xe8(0x01)
	char pad_E8_3 : 5; // 0xe8(0x01)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0xec(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMaterial
// Size: 0x28 (Inherited: 0x00)
struct FSkeletalMaterial {
public:

	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct FMeshUVChannelInfo UVChannelData; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticMaterial
// Size: 0x30 (Inherited: 0x00)
struct FStaticMaterial {
public:

	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct FName ImportedMaterialSlotName; // 0x10(0x08)
	struct FMeshUVChannelInfo UVChannelData; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AngularDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FAngularDriveConstraint {
public:

	struct FConstraintDrive TwistDrive; // 0x00(0x10)
	struct FConstraintDrive SwingDrive; // 0x10(0x10)
	struct FConstraintDrive SlerpDrive; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LinearDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FLinearDriveConstraint {
public:

	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct FConstraintDrive XDrive; // 0x18(0x10)
	struct FConstraintDrive YDrive; // 0x28(0x10)
	struct FConstraintDrive ZDrive; // 0x38(0x10)
	char bEnablePositionDrive : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TwistConstraint
// Size: 0x1c (Inherited: 0x14)
struct FTwistConstraint : public FConstraintBaseParams {
public:

	float TwistLimitDegrees; // 0x14(0x04)
	enum class EAngularConstraintMotion TwistMotion; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ConeConstraint
// Size: 0x20 (Inherited: 0x14)
struct FConeConstraint : public FConstraintBaseParams {
public:

	float Swing1LimitDegrees; // 0x14(0x04)
	float Swing2LimitDegrees; // 0x18(0x04)
	enum class EAngularConstraintMotion Swing1Motion; // 0x1c(0x01)
	enum class EAngularConstraintMotion Swing2Motion; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LinearConstraint
// Size: 0x1c (Inherited: 0x14)
struct FLinearConstraint : public FConstraintBaseParams {
public:

	float Limit; // 0x14(0x04)
	enum class ELinearConstraintMotion XMotion; // 0x18(0x01)
	enum class ELinearConstraintMotion YMotion; // 0x19(0x01)
	enum class ELinearConstraintMotion ZMotion; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
public:

	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 (Inherited: 0x00)
struct FDialogueContextMapping {
public:

	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString LocalizationKeyFormat; // 0x20(0x10)
	struct UDialogueSoundWaveProxy* Proxy; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 (Inherited: 0x100)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction {
public:

	struct UEdGraphNode* NodeTemplate; // 0x100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.WorldContext
// Size: 0x280 (Inherited: 0x00)
struct FWorldContext {
public:

	char pad_0[0xb0]; // 0x00(0xb0)
	struct FName ContextHandle; // 0xb0(0x08)
	struct FString TravelURL; // 0xb8(0x10)
	char TravelType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FURL LastURL; // 0xd0(0x68)
	struct FURL LastRemoteURL; // 0x138(0x68)
	struct UPendingNetGame* PendingNetGame; // 0x1a0(0x08)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a8(0x10)
	struct TArray<struct FName> LevelsToLoadForPendingMapChange; // 0x1b8(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1c8(0x10)
	struct FString PendingMapChangeFailureDescription; // 0x1d8(0x10)
	char bShouldCommitPendingMapChange : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x1f0(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200(0x10)
	struct UGameViewportClient* GameViewport; // 0x210(0x08)
	struct UGameInstance* OwningGameInstance; // 0x218(0x08)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x220(0x10)
	int32_t PIEInstance; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FString PIEPrefix; // 0x238(0x10)
	char pad_248[0x4]; // 0x248(0x04)
	bool RunAsDedicated; // 0x24c(0x01)
	bool bWaitingOnOnlineSubsystem; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
	uint32_t AudioDeviceHandle; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FString CustomDescription; // 0x258(0x10)
	char pad_268[0x18]; // 0x268(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FontRenderInfo
// Size: 0x28 (Inherited: 0x00)
struct FFontRenderInfo {
public:

	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FDepthFieldGlowInfo GlowInfo; // 0x04(0x24)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RadialDamageEvent
// Size: 0x40 (Inherited: 0x10)
struct FRadialDamageEvent : public FDamageEvent {
public:

	struct FRadialDamageParams Params; // 0x10(0x14)
	struct FVector Origin; // 0x24(0x0c)
	struct TArray<struct FHitResult> ComponentHits; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0x0c)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings {
public:

	float LightSourceAngle; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LightmassPointLightSettings
// Size: 0x0c (Inherited: 0x0c)
struct FLightmassPointLightSettings : public FLightmassLightSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x78 (Inherited: 0x00)
struct FComponentOverrideRecord {
public:

	struct UClass* ComponentClass; // 0x00(0x08)
	struct UActorComponent* ComponentTemplate; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x18 (Inherited: 0x04)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding {
public:

	struct FName InputActionName; // 0x04(0x08)
	enum class EInputEvent InputKeyEvent; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName FunctionNameToBind; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x04)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding {
public:

	struct FName InputAxisName; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x28 (Inherited: 0x04)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding {
public:

	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName FunctionNameToBind; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x04)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding {
public:

	char pad_4[0x4]; // 0x04(0x04)
	struct FInputChord InputChord; // 0x08(0x20)
	enum class EInputEvent InputKeyEvent; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName FunctionNameToBind; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0x10 (Inherited: 0x04)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding {
public:

	enum class EInputEvent InputKeyEvent; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName FunctionNameToBind; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x104 (Inherited: 0x00)
struct FLevelSimplificationDetails {
public:

	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x08(0x74)
	bool bOverrideLandscapeExportLOD; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	int32_t LandscapeExportLOD; // 0x80(0x04)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0x84(0x74)
	bool bBakeFoliageToLandscape; // 0xf8(0x01)
	bool bBakeGrassToLandscape; // 0xf9(0x01)
	bool bGenerateMeshNormalMap; // 0xfa(0x01)
	bool bGenerateMeshMetallicMap; // 0xfb(0x01)
	bool bGenerateMeshRoughnessMap; // 0xfc(0x01)
	bool bGenerateMeshSpecularMap; // 0xfd(0x01)
	bool bGenerateLandscapeNormalMap; // 0xfe(0x01)
	bool bGenerateLandscapeMetallicMap; // 0xff(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0x100(0x01)
	bool bGenerateLandscapeSpecularMap; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0x8c (Inherited: 0x00)
struct FMeshMergingSettings {
public:

	int32_t TargetLightMapResolution; // 0x00(0x04)
	enum class EUVOutput OutputUVs[0x8]; // 0x04(0x08)
	struct FMaterialProxySettings MaterialSettings; // 0x0c(0x74)
	int32_t GutterSize; // 0x80(0x04)
	int32_t SpecificLOD; // 0x84(0x04)
	enum class EMeshLODSelectionType LODSelectionType; // 0x88(0x01)
	char bGenerateLightMapUV : 1; // 0x89(0x01)
	char bComputedLightMapResolution : 1; // 0x89(0x01)
	char bPivotPointAtZero : 1; // 0x89(0x01)
	char bMergePhysicsData : 1; // 0x89(0x01)
	char bMergeMaterials : 1; // 0x89(0x01)
	char bCreateMergedMaterial : 1; // 0x89(0x01)
	char bBakeVertexDataToMesh : 1; // 0x89(0x01)
	char bUseVertexDataForBakingMaterial : 1; // 0x89(0x01)
	char bUseTextureBinning : 1; // 0x8a(0x01)
	char bReuseMeshLightmapUVs : 1; // 0x8a(0x01)
	char bMergeEquivalentMaterials : 1; // 0x8a(0x01)
	char bUseLandscapeCulling : 1; // 0x8a(0x01)
	char bIncludeImposters : 1; // 0x8a(0x01)
	char bAllowDistanceField : 1; // 0x8a(0x01)
	char bMergeSOCMeshData : 1; // 0x8a(0x01)
	char pad_8A_7 : 1; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0x98 (Inherited: 0x00)
struct FMeshProxySettings {
public:

	int32_t ScreenSize; // 0x00(0x04)
	float VoxelSize; // 0x04(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x08(0x74)
	float MergeDistance; // 0x7c(0x04)
	struct FColor UnresolvedGeometryColor; // 0x80(0x04)
	float MaxRayCastDist; // 0x84(0x04)
	float HardAngleThreshold; // 0x88(0x04)
	int32_t LightMapResolution; // 0x8c(0x04)
	enum class EProxyNormalComputationMethod NormalCalculationMethod; // 0x90(0x01)
	enum class ELandscapeCullingPrecision LandscapeCullingPrecision; // 0x91(0x01)
	char bCalculateCorrectLODModel : 1; // 0x92(0x01)
	char pad_92_1 : 7; // 0x92(0x01)
	char ForceLODLevel; // 0x93(0x01)
	char bOverrideVoxelSize : 1; // 0x94(0x01)
	char bOverrideTransferDistance : 1; // 0x94(0x01)
	char bUseHardAngleThreshold : 1; // 0x94(0x01)
	char bComputeLightMapResolution : 1; // 0x94(0x01)
	char bRecalculateNormals : 1; // 0x94(0x01)
	char bUseLandscapeCulling : 1; // 0x94(0x01)
	char bAllowAdjacency : 1; // 0x94(0x01)
	char bAllowDistanceField : 1; // 0x94(0x01)
	char bReuseMeshLightmapUVs : 1; // 0x95(0x01)
	char bCreateCollision : 1; // 0x95(0x01)
	char bAllowVertexColors : 1; // 0x95(0x01)
	char bGenerateLightmapUVs : 1; // 0x95(0x01)
	char pad_95_4 : 4; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.DynamicTextureInstance
// Size: 0x38 (Inherited: 0x28)
struct FDynamicTextureInstance : public FStreamableTextureInstance {
public:

	struct UTexture2D* Texture; // 0x28(0x08)
	bool bAttached; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float OriginalRadius; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 (Inherited: 0x18)
struct FCollectionVectorParameter : public FCollectionParameterBase {
public:

	struct FLinearColor DefaultValue; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CollectionScalarParameter
// Size: 0x1c (Inherited: 0x18)
struct FCollectionScalarParameter : public FCollectionParameterBase {
public:

	float DefaultValue; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x90 (Inherited: 0x00)
struct FStaticMeshSourceModel {
public:

	struct FMeshBuildSettings BuildSettings; // 0x00(0x30)
	struct FMeshReductionSettings ReductionSettings; // 0x30(0x24)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FMaterialCluster> MaterialClusters; // 0x58(0x10)
	struct TArray<int32_t> SectionDeleteSettings; // 0x68(0x10)
	float LodDistance; // 0x78(0x04)
	struct FPerPlatformFloat ScreenSize; // 0x7c(0x04)
	struct FString SourceImportFilename; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavAgentProperties
// Size: 0x30 (Inherited: 0x01)
struct FNavAgentProperties : public FMovementProperties {
public:

	char pad_1[0x3]; // 0x01(0x03)
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftClassPath PreferredNavData; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x38 (Inherited: 0x00)
struct FNavigationLinkBase {
public:

	float LeftProjectHeight; // 0x00(0x04)
	float MaxFallDownLength; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
	uint32_t ExtData; // 0x0c(0x04)
	float SnapRadius; // 0x10(0x04)
	float SnapHeight; // 0x14(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x18(0x04)
	char bSupportsAgent0 : 1; // 0x1c(0x01)
	char bSupportsAgent1 : 1; // 0x1c(0x01)
	char bSupportsAgent2 : 1; // 0x1c(0x01)
	char bSupportsAgent3 : 1; // 0x1c(0x01)
	char bSupportsAgent4 : 1; // 0x1c(0x01)
	char bSupportsAgent5 : 1; // 0x1c(0x01)
	char bSupportsAgent6 : 1; // 0x1c(0x01)
	char bSupportsAgent7 : 1; // 0x1c(0x01)
	char bSupportsAgent8 : 1; // 0x1d(0x01)
	char bSupportsAgent9 : 1; // 0x1d(0x01)
	char bSupportsAgent10 : 1; // 0x1d(0x01)
	char bSupportsAgent11 : 1; // 0x1d(0x01)
	char bSupportsAgent12 : 1; // 0x1d(0x01)
	char bSupportsAgent13 : 1; // 0x1d(0x01)
	char bSupportsAgent14 : 1; // 0x1d(0x01)
	char bSupportsAgent15 : 1; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	enum class ENavLinkDirection Direction; // 0x20(0x01)
	char bUseSnapHeight : 1; // 0x21(0x01)
	char bSnapToCheapestArea : 1; // 0x21(0x01)
	char bCustomFlag0 : 1; // 0x21(0x01)
	char bCustomFlag1 : 1; // 0x21(0x01)
	char bCustomFlag2 : 1; // 0x21(0x01)
	char bCustomFlag3 : 1; // 0x21(0x01)
	char bCustomFlag4 : 1; // 0x21(0x01)
	char bCustomFlag5 : 1; // 0x21(0x01)
	char bCustomFlag6 : 1; // 0x22(0x01)
	char bCustomFlag7 : 1; // 0x22(0x01)
	char pad_22_2 : 6; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct UClass* AreaClass; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_AdditionalPRTMap
// Size: 0x388 (Inherited: 0x00)
struct FTOD_AdditionalPRTMap {
public:

	bool bNeedReloadAdditionalBlockId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RuntimeEnableIndex[0x8]; // 0x04(0x20)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString AdditionalMapDirectory[0x8]; // 0x28(0x80)
	struct TMap<int32_t, int32_t> RuntimeAdditionalMapBlockIdToPrefixIndex; // 0xa8(0x50)
	struct FAdditionalPRTMarker AdditionalPRTMarker[0x8]; // 0xf8(0x280)
	struct TArray<struct UTetLightDataMap*> AdditionalTetLightMap; // 0x378(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x10 (Inherited: 0x00)
struct FSkinWeightProfileInfo {
public:

	struct FName Name; // 0x00(0x08)
	struct FPerPlatformBool DefaultProfile; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FPerPlatformInt DefaultProfileFromLODIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x2c (Inherited: 0x00)
struct FPhysicalAnimationProfile {
public:

	struct FName ProfileName; // 0x00(0x08)
	struct FPhysicalAnimationData PhysicalAnimationData; // 0x08(0x24)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 (Inherited: 0x00)
struct FInputAxisConfigEntry {
public:

	struct FName AxisKeyName; // 0x00(0x08)
	struct FInputAxisProperties AxisProperties; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PRTSingleColorResult
// Size: 0x180 (Inherited: 0x00)
struct FPRTSingleColorResult {
public:

	struct FSCSBResult M[0x6]; // 0x00(0x180)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TransformBase
// Size: 0x28 (Inherited: 0x00)
struct FTransformBase {
public:

	struct FName Node; // 0x00(0x08)
	struct FTransformBaseConstraint Constraints[0x2]; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSource
// Size: 0x98 (Inherited: 0x00)
struct FRootMotionSource {
public:

	char pad_0[0x10]; // 0x00(0x10)
	uint16_t Priority; // 0x10(0x02)
	uint16_t LocalID; // 0x12(0x02)
	enum class ERootMotionAccumulateMode AccumulateMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName InstanceName; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float PreviousTime; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct FRootMotionSourceStatus Status; // 0x30(0x01)
	struct FRootMotionSourceSettings Settings; // 0x31(0x01)
	bool bInLocalSpace; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
	struct FRootMotionMovementParams RootMotionParams; // 0x40(0x40)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PostProcessBlurEffectSettings
// Size: 0x08 (Inherited: 0x00)
struct FPostProcessBlurEffectSettings {
public:

	struct FGaussianBlurEffectSettings GaussianSum; // 0x00(0x04)
	enum class EPPBlurMethod PPBlurMethod; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LensBloomSettings
// Size: 0xb8 (Inherited: 0x00)
struct FLensBloomSettings {
public:

	struct FGaussianSumBloomSettings GaussianSum; // 0x00(0x88)
	struct FConvolutionBloomSettings Convolution; // 0x88(0x28)
	enum class EBloomMethod Method; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ColorGradingSettings
// Size: 0x150 (Inherited: 0x00)
struct FColorGradingSettings {
public:

	struct FColorGradePerRangeSettings Global; // 0x00(0x50)
	struct FColorGradePerRangeSettings Shadows; // 0x50(0x50)
	struct FColorGradePerRangeSettings Midtones; // 0xa0(0x50)
	struct FColorGradePerRangeSettings Highlights; // 0xf0(0x50)
	float ShadowsMax; // 0x140(0x04)
	float HighlightsMin; // 0x144(0x04)
	char pad_148[0x8]; // 0x148(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
public:

	struct FName AssetName; // 0x00(0x08)
	struct FString ApexFileName; // 0x08(0x10)
	bool bClothPropertiesChanged; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c(0x50)
	char pad_6C[0xc]; // 0x6c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xb8 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
public:

	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	struct TArray<int32_t> LODMaterialMap; // 0x08(0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x10)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x28(0x3c)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x68(0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78(0x10)
	float WeightOfPrioritization; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UAnimSequence* BakePose; // 0x90(0x08)
	struct UAnimSequence* BakePoseOverride; // 0x98(0x08)
	struct FString SourceImportFilename; // 0xa0(0x10)
	char bHasBeenSimplified : 1; // 0xb0(0x01)
	char bHasPerLODVertexColors : 1; // 0xb0(0x01)
	char bAllowCPUAccess : 1; // 0xb0(0x01)
	char bSupportUniformlyDistributedSampling : 1; // 0xb0(0x01)
	char pad_B0_4 : 4; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x80 (Inherited: 0x00)
struct FSkeletalMeshLODGroupSettings {
public:

	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	enum class EBoneFilterActionOption BoneFilterActionOption; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FBoneFilter> BoneList; // 0x10(0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20(0x10)
	float WeightOfPrioritization; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UAnimSequence* BakePose; // 0x38(0x08)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x3c)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingInfo {
public:

	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x00(0x10)
	struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.QuickOptimizationHelper
// Size: 0x60 (Inherited: 0x00)
struct FQuickOptimizationHelper {
public:

	struct FMeshSectionInfoMap SectionInfoMap; // 0x00(0x50)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TTPropertyTrack
// Size: 0x20 (Inherited: 0x18)
struct FTTPropertyTrack : public FTTTrackBase {
public:

	struct FName PropertyName; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TTEventTrack
// Size: 0x28 (Inherited: 0x18)
struct FTTEventTrack : public FTTTrackBase {
public:

	struct FName FunctionName; // 0x18(0x08)
	struct UCurveFloat* CurveKeys; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RawDistributionFloat
// Size: 0x30 (Inherited: 0x20)
struct FRawDistributionFloat : public FRawDistribution {
public:

	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct UDistributionFloat* Distribution; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x48 (Inherited: 0x20)
struct FRawDistributionVector : public FRawDistribution {
public:

	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct FVector MinValueVec; // 0x28(0x0c)
	struct FVector MaxValueVec; // 0x34(0x0c)
	struct UDistributionVector* Distribution; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FindFloorResult
// Size: 0x94 (Inherited: 0x00)
struct FFindFloorResult {
public:

	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	struct FHitResult HitResult; // 0x0c(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PointDamageEvent
// Size: 0xa8 (Inherited: 0x10)
struct FPointDamageEvent : public FDamageEvent {
public:

	float Damage; // 0x10(0x04)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x14(0x0c)
	struct FHitResult HitInfo; // 0x20(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PredictProjectilePathResult
// Size: 0xb8 (Inherited: 0x00)
struct FPredictProjectilePathResult {
public:

	struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x00(0x10)
	struct FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1c)
	struct FHitResult HitResult; // 0x2c(0x88)
	char pad_B4[0x4]; // 0xb4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BodyInstance
// Size: 0x120 (Inherited: 0x00)
struct FBodyInstance {
public:

	char pad_0[0x6]; // 0x00(0x06)
	enum class ECollisionChannel ObjectType; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char BindedTraceMaskFilter; // 0x09(0x01)
	char pad_A[0x1]; // 0x0a(0x01)
	enum class ESleepFamily SleepFamily; // 0x0b(0x01)
	enum class EDOFMode DOFMode; // 0x0c(0x01)
	char bUseCCD : 1; // 0x0d(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x0d(0x01)
	char pad_D_2 : 1; // 0x0d(0x01)
	char bSimulatePhysics : 1; // 0x0d(0x01)
	char bOverrideMass : 1; // 0x0d(0x01)
	char bEnableGravity : 1; // 0x0d(0x01)
	char bAutoWeld : 1; // 0x0d(0x01)
	char bStartAwake : 1; // 0x0d(0x01)
	char bGenerateWakeEvents : 1; // 0x0e(0x01)
	char bUpdateMassWhenScaleChanges : 1; // 0x0e(0x01)
	char bLockTranslation : 1; // 0x0e(0x01)
	char bLockRotation : 1; // 0x0e(0x01)
	char bLockXTranslation : 1; // 0x0e(0x01)
	char bLockYTranslation : 1; // 0x0e(0x01)
	char bLockZTranslation : 1; // 0x0e(0x01)
	char bLockXRotation : 1; // 0x0e(0x01)
	char bLockYRotation : 1; // 0x0f(0x01)
	char bLockZRotation : 1; // 0x0f(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x0f(0x01)
	char pad_F_3 : 2; // 0x0f(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x0f(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x0f(0x01)
	char bInterpolateWhenSubStepping : 1; // 0x0f(0x01)
	char pad_10[0x10]; // 0x10(0x10)
	struct FName CollisionProfileName; // 0x20(0x08)
	char PositionSolverIterationCount; // 0x28(0x01)
	char VelocitySolverIterationCount; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FCollisionResponse CollisionResponses; // 0x30(0x30)
	float MaxDepenetrationVelocity; // 0x60(0x04)
	float MassInKgOverride; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)
	float LinearDamping; // 0x70(0x04)
	float AngularDamping; // 0x74(0x04)
	struct FVector CustomDOFPlaneNormal; // 0x78(0x0c)
	struct FVector COMNudge; // 0x84(0x0c)
	float MassScale; // 0x90(0x04)
	struct FVector InertiaTensorScale; // 0x94(0x0c)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xb0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xc0(0x08)
	float MaxAngularVelocity; // 0xc8(0x04)
	float CustomSleepThresholdMultiplier; // 0xcc(0x04)
	float StabilizationThresholdMultiplier; // 0xd0(0x04)
	float PhysicsBlendWeight; // 0xd4(0x04)
	char pad_D8[0x48]; // 0xd8(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SplineInstanceData
// Size: 0x188 (Inherited: 0xa8)
struct FSplineInstanceData : public FSceneComponentInstanceData {
public:

	bool bSplineHasBeenEdited; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FSplineCurves SplineCurves; // 0xb0(0x68)
	struct FSplineCurves SplineCurvesPreUCS; // 0x118(0x68)
	bool bClosedLoop; // 0x180(0x01)
	bool bClosedLoopPreUCS; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// Size: 0x2a0 (Inherited: 0xa8)
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData {
public:

	char pad_A8[0x1f8]; // 0xa8(0x1f8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// Size: 0xd0 (Inherited: 0xa8)
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData {
public:

	struct FName ChildActorName; // 0xa8(0x08)
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x140 (Inherited: 0xa8)
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData {
public:

	struct UStaticMesh* StaticMesh; // 0xa8(0x08)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0(0x40)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0(0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x100(0x10)
	char pad_110[0x20]; // 0x110(0x20)
	int32_t InstancingRandomSeed; // 0x130(0x04)
	char pad_134[0xc]; // 0x134(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// Size: 0x100 (Inherited: 0xa8)
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData {
public:

	char pad_A8[0x8]; // 0xa8(0x08)
	struct FTransform Transform; // 0xb0(0x30)
	struct FGuid LightGuid; // 0xe0(0x10)
	int32_t PreviewShadowMapChannel; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// Size: 0xf0 (Inherited: 0xa8)
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData {
public:

	char pad_A8[0x8]; // 0xa8(0x08)
	struct FTransform ComponentTransform; // 0xb0(0x30)
	int32_t VisibilityId; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UPrimitiveComponent* LODParent; // 0xe8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size: 0x160 (Inherited: 0xa8)
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData {
public:

	struct FGuid LightGuid; // 0xa8(0x10)
	float AverageBrightness; // 0xb8(0x04)
	char pad_BC[0xa4]; // 0xbc(0xa4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SplineMeshInstanceData
// Size: 0xd8 (Inherited: 0xa8)
struct FSplineMeshInstanceData : public FSceneComponentInstanceData {
public:

	struct FVector StartPos; // 0xa8(0x0c)
	struct FVector EndPos; // 0xb4(0x0c)
	struct FVector StartTangent; // 0xc0(0x0c)
	struct FVector EndTangent; // 0xcc(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BPVariableDescription
// Size: 0xd0 (Inherited: 0x00)
struct FBPVariableDescription {
public:

	struct FName VarName; // 0x00(0x08)
	struct FGuid VarGuid; // 0x08(0x10)
	struct FEdGraphPinType VarType; // 0x18(0x58)
	struct FString FriendlyName; // 0x70(0x10)
	struct FText Category; // 0x80(0x18)
	uint64_t PropertyFlags; // 0x98(0x08)
	struct FName RepNotifyFunc; // 0xa0(0x08)
	enum class ELifetimeCondition ReplicationCondition; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xb0(0x10)
	struct FString DefaultValue; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x68 (Inherited: 0x24)
struct FStaticMaterialLayersParameter : public FStaticParameterBase {
public:

	char pad_24[0x4]; // 0x24(0x04)
	struct FMaterialLayersFunctions Value; // 0x28(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size: 0x2c (Inherited: 0x24)
struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase {
public:

	int32_t WeightmapIndex; // 0x24(0x04)
	bool bWeightBasedBlend; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticComponentMaskParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticComponentMaskParameter : public FStaticParameterBase {
public:

	bool R; // 0x24(0x01)
	bool G; // 0x25(0x01)
	bool B; // 0x26(0x01)
	bool A; // 0x27(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticSwitchParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticSwitchParameter : public FStaticParameterBase {
public:

	bool Value; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RealCurve
// Size: 0x70 (Inherited: 0x68)
struct FRealCurve : public FIndexedCurve {
public:

	float DefaultValue; // 0x68(0x04)
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x6c(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.IntegralCurve
// Size: 0x80 (Inherited: 0x68)
struct FIntegralCurve : public FIndexedCurve {
public:

	struct TArray<struct FIntegralKey> Keys; // 0x68(0x10)
	int32_t DefaultValue; // 0x78(0x04)
	bool bUseDefaultValueBeforeFirstKey; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NameCurve
// Size: 0x78 (Inherited: 0x68)
struct FNameCurve : public FIndexedCurve {
public:

	struct TArray<struct FNameCurveKey> Keys; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StringCurve
// Size: 0x88 (Inherited: 0x68)
struct FStringCurve : public FIndexedCurve {
public:

	struct FString DefaultValue; // 0x68(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x00)
struct FBuildPromotionImportWorkflowSettings {
public:

	struct FEditorImportWorkflowDefinition Diffuse; // 0x00(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xe0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size: 0xc8 (Inherited: 0x88)
struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty {
public:

	struct TArray<struct FPoseLink> InputPoses; // 0x88(0x10)
	struct TArray<struct FName> InputPoseNames; // 0x98(0x10)
	struct UClass* InstanceClass; // 0xa8(0x08)
	struct FName Tag; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x100 (Inherited: 0x60)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase {
public:

	struct UAnimSequenceBase* Sequence; // 0x60(0x08)
	float PlayRateBasis; // 0x68(0x04)
	float PlayRate; // 0x6c(0x04)
	bool bUseCachePose; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t UseRawPoseLODThreshold; // 0x74(0x04)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x78(0x30)
	float StartPosition; // 0xa8(0x04)
	bool bLoopAnimation; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FName AssetMapKey; // 0xb0(0x08)
	struct UAnimSequenceBase* PreviousSequence; // 0xb8(0x08)
	char pad_C0[0x40]; // 0xc0(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x50 (Inherited: 0x40)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base {
public:

	struct FComponentSpacePoseLink ComponentPose; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_Root
// Size: 0x60 (Inherited: 0x40)
struct FAnimNode_Root : public FAnimNode_Base {
public:

	struct FPoseLink Result; // 0x40(0x10)
	struct FName Name; // 0x50(0x08)
	struct FName Group; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0x78 (Inherited: 0x40)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base {
public:

	struct FPoseLink Base; // 0x40(0x10)
	struct FPoseLink Additive; // 0x50(0x10)
	float Alpha; // 0x60(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x64(0x08)
	int32_t LODThreshold; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_Inertialization
// Size: 0xa8 (Inherited: 0x40)
struct FAnimNode_Inertialization : public FAnimNode_Base {
public:

	struct FPoseLink Source; // 0x40(0x10)
	bool bUseLocalSpace; // 0x50(0x01)
	bool bDefendNan; // 0x51(0x01)
	char pad_52[0x56]; // 0x52(0x56)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// Size: 0xa0 (Inherited: 0x40)
struct FAnimNode_LinkedInputPose : public FAnimNode_Base {
public:

	struct FName Name; // 0x40(0x08)
	struct FName Graph; // 0x48(0x08)
	struct FPoseLink InputPose; // 0x50(0x10)
	char pad_60[0x40]; // 0x60(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xf0 (Inherited: 0x40)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base {
public:

	struct FPoseLink Pose; // 0x40(0x10)
	struct FName CachePoseName; // 0x50(0x08)
	char pad_58[0x98]; // 0x58(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x58 (Inherited: 0x40)
struct FAnimNode_UseCachedPose : public FAnimNode_Base {
public:

	struct FPoseLink LinkToCachingNode; // 0x40(0x10)
	struct FName CachePoseName; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x50 (Inherited: 0x40)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base {
public:

	struct FPoseLink LocalPose; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x60 (Inherited: 0x40)
struct FAnimNode_SingleNode : public FAnimNode_Base {
public:

	struct FPoseLink SourcePose; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.MinimalViewInfo
// Size: 0x9e0 (Inherited: 0x00)
struct FMinimalViewInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
	float DesiredFOV; // 0x1c(0x04)
	float OrthoWidth; // 0x20(0x04)
	float OrthoNearClipPlane; // 0x24(0x04)
	float OrthoFarClipPlane; // 0x28(0x04)
	float AspectRatio; // 0x2c(0x04)
	char bConstrainAspectRatio : 1; // 0x30(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	enum class ECameraProjectionMode ProjectionMode; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float PostProcessBlendWeight; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x950)
	struct FVector2D OffCenterProjectionOffset; // 0x990(0x08)
	char pad_998[0x48]; // 0x998(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RepRootMotionMontage
// Size: 0x158 (Inherited: 0x00)
struct FRepRootMotionMontage {
public:

	bool bIsActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName MovementBaseBoneName; // 0x38(0x08)
	bool bRelativePosition; // 0x40(0x01)
	bool bRelativeRotation; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48(0xf8)
	struct FVector_NetQuantize10 Acceleration; // 0x140(0x0c)
	struct FVector_NetQuantize10 LinearVelocity; // 0x14c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x104 (Inherited: 0x00)
struct FConstraintProfileProperties {
public:

	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float LinearBreakThreshold; // 0x08(0x04)
	float AngularBreakThreshold; // 0x0c(0x04)
	struct FLinearConstraint LinearLimit; // 0x10(0x1c)
	struct FConeConstraint ConeLimit; // 0x2c(0x20)
	struct FTwistConstraint TwistLimit; // 0x4c(0x1c)
	struct FLinearDriveConstraint LinearDrive; // 0x68(0x4c)
	struct FAngularDriveConstraint AngularDrive; // 0xb4(0x4c)
	char bDisableCollision : 1; // 0x100(0x01)
	char bParentDominates : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char bLinearBreakable : 1; // 0x100(0x01)
	char pad_100_5 : 3; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x13c (Inherited: 0x00)
struct FHierarchicalSimplification {
public:

	float TransitionScreenSize; // 0x00(0x04)
	float OverrideDrawDistance; // 0x04(0x04)
	char bUseOverrideDrawDistance : 1; // 0x08(0x01)
	char bAllowSpecificExclusion : 1; // 0x08(0x01)
	char bSimplifyMesh : 1; // 0x08(0x01)
	char bOnlyGenerateClustersForVolumes : 1; // 0x08(0x01)
	char bReusePreviousLevelClusters : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings ProxySetting; // 0x0c(0x98)
	struct FMeshMergingSettings MergeSetting; // 0xa4(0x8c)
	float DesiredBoundRadius; // 0x130(0x04)
	float DesiredFillingPercentage; // 0x134(0x04)
	int32_t MinNumberOfActorsToBuild; // 0x138(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavDataConfig
// Size: 0x78 (Inherited: 0x30)
struct FNavDataConfig : public FNavAgentProperties {
public:

	struct FName Name; // 0x30(0x08)
	struct FColor Color; // 0x38(0x04)
	struct FVector DefaultQueryExtent; // 0x3c(0x0c)
	struct UClass* NavigationDataClass; // 0x48(0x08)
	/*struct TSoftClassPtr<UObject>*/char NavDataClass[0x28]; // 0x50(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x68 (Inherited: 0x38)
struct FNavigationSegmentLink : public FNavigationLinkBase {
public:

	struct FVector LeftStart; // 0x38(0x0c)
	struct FVector LeftEnd; // 0x44(0x0c)
	struct FVector RightStart; // 0x50(0x0c)
	struct FVector RightEnd; // 0x5c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.NavigationLink
// Size: 0x50 (Inherited: 0x38)
struct FNavigationLink : public FNavigationLinkBase {
public:

	struct FVector Left; // 0x38(0x0c)
	struct FVector Right; // 0x44(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0xd0 (Inherited: 0x98)
struct FRootMotionSource_JumpForce : public FRootMotionSource {
public:

	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool bDisableTimeout; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct UCurveVector* PathOffsetCurve; // 0xb0(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0xd0 (Inherited: 0x98)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource {
public:

	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector InitialTargetLocation; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool bRestrictSpeedToExpected; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct UCurveVector* PathOffsetCurve; // 0xc0(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0xc8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0xc0 (Inherited: 0x98)
struct FRootMotionSource_MoveToForce : public FRootMotionSource {
public:

	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool bRestrictSpeedToExpected; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct UCurveVector* PathOffsetCurve; // 0xb8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0xe0 (Inherited: 0x98)
struct FRootMotionSource_RadialForce : public FRootMotionSource {
public:

	struct FVector Location; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct AActor* LocationActor; // 0xa8(0x08)
	float radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool bIsPush; // 0xb8(0x01)
	bool bNoZForce; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xc0(0x08)
	struct UCurveFloat* StrengthOverTime; // 0xc8(0x08)
	bool bUseFixedWorldDirection; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FRotator FixedWorldDirection; // 0xd4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0xb0 (Inherited: 0x98)
struct FRootMotionSource_ConstantForce : public FRootMotionSource {
public:

	struct FVector Force; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UCurveFloat* StrengthOverTime; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.LensSettings
// Size: 0xe8 (Inherited: 0x00)
struct FLensSettings {
public:

	struct FLensBloomSettings Bloom; // 0x00(0xb8)
	struct FPostProcessBlurEffectSettings Blur; // 0xb8(0x08)
	struct FLensImperfectionSettings Imperfections; // 0xc0(0x20)
	float ChromaticAberration; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TTLinearColorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTLinearColorTrack : public FTTPropertyTrack {
public:

	struct UCurveLinearColor* CurveLinearColor; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TTVectorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTVectorTrack : public FTTPropertyTrack {
public:

	struct UCurveVector* CurveVector; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TTFloatTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTFloatTrack : public FTTPropertyTrack {
public:

	struct UCurveFloat* CurveFloat; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x48 (Inherited: 0x00)
struct FEmitterDynamicParameter {
public:

	struct FName ParamName; // 0x00(0x08)
	char bUseEmitterTime : 1; // 0x08(0x01)
	char bSpawnTimeOnly : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class EEmitterDynamicParameterValue ValueMethod; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char bScaleVelocityByParamValue : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FRawDistributionFloat ParamValue; // 0x18(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x280 (Inherited: 0x00)
struct FGPUSpriteEmitterInfo {
public:

	struct UParticleModuleRequired* RequiredModule; // 0x00(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x08(0x08)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x08)
	struct UParticleModuleWindBase* WindModule; // 0x18(0x08)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x20(0x10)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x20)
	struct FFloatDistribution DragCoefficient; // 0xc0(0x20)
	struct FFloatDistribution PointAttractorStrength; // 0xe0(0x20)
	struct FFloatDistribution Resilience; // 0x100(0x20)
	struct FVector ConstantAcceleration; // 0x120(0x0c)
	struct FVector PointAttractorPosition; // 0x12c(0x0c)
	float PointAttractorRadiusSq; // 0x138(0x04)
	struct FVector OrbitOffsetBase; // 0x13c(0x0c)
	struct FVector OrbitOffsetRange; // 0x148(0x0c)
	struct FVector2D InvMaxSize; // 0x154(0x08)
	float InvRotationRateScale; // 0x15c(0x04)
	float MaxLifeTime; // 0x160(0x04)
	int32_t MaxParticleCount; // 0x164(0x04)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x168(0x01)
	enum class EParticleAxisLock LockAxisFlag; // 0x169(0x01)
	char pad_16A[0x2]; // 0x16a(0x02)
	char bEnableCollision : 1; // 0x16c(0x01)
	char pad_16C_1 : 7; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	enum class EParticleCollisionMode CollisionMode; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	char bRemoveHMDRoll : 1; // 0x174(0x01)
	char pad_174_1 : 7; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float MinFacingCameraBlendDistance; // 0x178(0x04)
	float MaxFacingCameraBlendDistance; // 0x17c(0x04)
	struct FRawDistributionVector DynamicColor; // 0x180(0x48)
	struct FRawDistributionFloat DynamicAlpha; // 0x1c8(0x30)
	struct FRawDistributionVector DynamicColorScale; // 0x1f8(0x48)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x240(0x30)
	char pad_270[0x10]; // 0x270(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// Size: 0x130 (Inherited: 0xf0)
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData {
public:

	struct UStaticMesh* StaticMesh; // 0xf0(0x08)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8(0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x108(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RichCurve
// Size: 0x98 (Inherited: 0x70)
struct FRichCurve : public FRealCurve {
public:

	struct TArray<struct FRichCurveKey> Keys; // 0x70(0x10)
	struct TArray<int32_t> Orders; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SimpleCurve
// Size: 0x88 (Inherited: 0x70)
struct FSimpleCurve : public FRealCurve {
public:

	enum class ERichCurveInterpMode InterpMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FSimpleCurveKey> Keys; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1f0 (Inherited: 0x00)
struct FBuildPromotionTestSettings {
public:

	struct FFilePath DefaultStaticMeshAsset; // 0x00(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1e0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size: 0xd8 (Inherited: 0xc8)
struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph {
public:

	struct UClass* Interface; // 0xc8(0x08)
	struct FName Layer; // 0xd0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TViewTarget
// Size: 0xa00 (Inherited: 0x00)
struct FTViewTarget {
public:

	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FMinimalViewInfo POV; // 0x10(0x9e0)
	struct APlayerState* PlayerState; // 0x9f0(0x08)
	char pad_9F8[0x8]; // 0x9f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.CameraCacheEntry
// Size: 0x9f0 (Inherited: 0x00)
struct FCameraCacheEntry {
public:

	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FMinimalViewInfo POV; // 0x10(0x9e0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0x160 (Inherited: 0x00)
struct FSimulatedRootMotionReplicatedMove {
public:

	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRepRootMotionMontage RootMotion; // 0x08(0x158)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1b8 (Inherited: 0x00)
struct FConstraintInstance {
public:

	char pad_0[0x18]; // 0x00(0x18)
	struct FName JointName; // 0x18(0x08)
	struct FName ConstraintBone1; // 0x20(0x08)
	struct FName ConstraintBone2; // 0x28(0x08)
	struct FVector Pos1; // 0x30(0x0c)
	struct FVector PriAxis1; // 0x3c(0x0c)
	struct FVector SecAxis1; // 0x48(0x0c)
	struct FVector Pos2; // 0x54(0x0c)
	struct FVector PriAxis2; // 0x60(0x0c)
	struct FVector SecAxis2; // 0x6c(0x0c)
	struct FRotator AngularRotationOffset; // 0x78(0x0c)
	char bScaleLinearLimits : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x7]; // 0x85(0x07)
	struct FConstraintProfileProperties ProfileInstance; // 0x8c(0x104)
	char pad_190[0x28]; // 0x190(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x10c (Inherited: 0x00)
struct FPhysicsConstraintProfileHandle {
public:

	struct FConstraintProfileProperties ProfileProperties; // 0x00(0x104)
	struct FName ProfileName; // 0x104(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x268 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
public:

	struct FRichCurve ColorCurves[0x4]; // 0x00(0x260)
	struct UCurveLinearColor* ExternalCurve; // 0x260(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RuntimeVectorCurve
// Size: 0x1d0 (Inherited: 0x00)
struct FRuntimeVectorCurve {
public:

	struct FRichCurve VectorCurves[0x3]; // 0x00(0x1c8)
	struct UCurveVector* ExternalCurve; // 0x1c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0xa0 (Inherited: 0x00)
struct FRuntimeFloatCurve {
public:

	struct FRichCurve EditorCurveData; // 0x00(0x98)
	struct UCurveFloat* ExternalCurve; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.FloatCurve
// Size: 0xb0 (Inherited: 0x18)
struct FFloatCurve : public FAnimCurveBase {
public:

	struct FRichCurve FloatCurve; // 0x18(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.VectorCurve
// Size: 0x1e0 (Inherited: 0x18)
struct FVectorCurve : public FAnimCurveBase {
public:

	struct FRichCurve FloatCurves[0x3]; // 0x18(0x1c8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xc8 (Inherited: 0x00)
struct FBaseAttenuationSettings {
public:

	char pad_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	enum class EAttenuationShape AttenuationShape; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float dBAttenuationAtMax; // 0x0c(0x04)
	struct FVector AttenuationShapeExtents; // 0x10(0x0c)
	float ConeOffset; // 0x1c(0x04)
	float FalloffDistance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x28(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0xa8 (Inherited: 0x00)
struct FForceFeedbackChannelDetails {
public:

	char bAffectsLeftLarge : 1; // 0x00(0x01)
	char bAffectsLeftSmall : 1; // 0x00(0x01)
	char bAffectsRightLarge : 1; // 0x00(0x01)
	char bAffectsRightSmall : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0x140 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
public:

	struct FRuntimeFloatCurve frequency; // 0x00(0xa0)
	struct FRuntimeFloatCurve Amplitude; // 0xa0(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_DayParameters
// Size: 0x3088 (Inherited: 0x00)
struct FTOD_DayParameters {
public:

	float LowestSunTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRuntimeFloatCurve MainLightIntensity_Wtx[0x10]; // 0x08(0xa00)
	struct FRuntimeCurveLinearColor MainLightColorTint_Wtx[0x10]; // 0xa08(0x2680)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_AtmosphereParameters
// Size: 0xa70 (Inherited: 0x00)
struct FTOD_AtmosphereParameters {
public:

	char pad_0[0x70]; // 0x00(0x70)
	struct FRuntimeFloatCurve IntensityPost_Wtx_Curve[0x10]; // 0x70(0xa00)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TOD_Exposure
// Size: 0x1e48 (Inherited: 0x00)
struct FTOD_Exposure {
public:

	struct FRuntimeFloatCurve CompensationCurve_Wtx[0x10]; // 0x00(0xa00)
	struct FRuntimeFloatCurve MinBrightnessCrv_Wtx[0x10]; // 0xa00(0xa00)
	struct FRuntimeFloatCurve MaxBrightnessCrv_Wtx[0x10]; // 0x1400(0xa00)
	float Compensation; // 0x1e00(0x04)
	float MinBrightness; // 0x1e04(0x04)
	float MaxBrightness; // 0x1e08(0x04)
	float OutdoorFixedEV100; // 0x1e0c(0x04)
	float CPUEyeAdaptation_LightIntensityScale; // 0x1e10(0x04)
	float Speed; // 0x1e14(0x04)
	float SpeedOfAtfDir; // 0x1e18(0x04)
	float PushDis; // 0x1e1c(0x04)
	float MainMult; // 0x1e20(0x04)
	float SkyMult; // 0x1e24(0x04)
	float AtfMult; // 0x1e28(0x04)
	float AtfRuntimeScaleUp; // 0x1e2c(0x04)
	float MainLightCoef; // 0x1e30(0x04)
	float LightMapCoef; // 0x1e34(0x04)
	float IBLCoef; // 0x1e38(0x04)
	char pad_1E3C[0xc]; // 0x1e3c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0xc8 (Inherited: 0x00)
struct FSoundSourceBusSendInfo {
public:

	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundSourceBus* SoundSourceBus; // 0x08(0x08)
	float SendLevel; // 0x10(0x04)
	float MinSendLevel; // 0x14(0x04)
	float MaxSendLevel; // 0x18(0x04)
	float MinSendDistance; // 0x1c(0x04)
	float MaxSendDistance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0xc8 (Inherited: 0x00)
struct FSoundSubmixSendInfo {
public:

	enum class ESendLevelControlMethod SendLevelControlMethod; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundSubmix* SoundSubmix; // 0x08(0x08)
	float SendLevel; // 0x10(0x04)
	float MinSendLevel; // 0x14(0x04)
	float MaxSendLevel; // 0x18(0x04)
	float MinSendDistance; // 0x1c(0x04)
	float MaxSendDistance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.TransformCurve
// Size: 0x5b8 (Inherited: 0x18)
struct FTransformCurve : public FAnimCurveBase {
public:

	struct FVectorCurve TranslationCurve; // 0x18(0x1e0)
	struct FVectorCurve RotationCurve; // 0x1f8(0x1e0)
	struct FVectorCurve ScaleCurve; // 0x3d8(0x1e0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xc8 (Inherited: 0xc8)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x350 (Inherited: 0xc8)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings {
public:

	char bAttenuate : 1; // 0xc8(0x01)
	char bSpatialize : 1; // 0xc8(0x01)
	char bAttenuateWithLPF : 1; // 0xc8(0x01)
	char bEnableListenerFocus : 1; // 0xc8(0x01)
	char bEnableFocusInterpolation : 1; // 0xc8(0x01)
	char bEnableOcclusion : 1; // 0xc8(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xc8(0x01)
	char bEnableReverbSend : 1; // 0xc8(0x01)
	char bApplyNormalizationToStereoSounds : 1; // 0xc9(0x01)
	char bEnableLogFrequencyScaling : 1; // 0xc9(0x01)
	char pad_C9_2 : 6; // 0xc9(0x01)
	enum class ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	float BinauralRadius; // 0xcc(0x04)
	enum class EAirAbsorptionMethod AbsorptionMethod; // 0xd0(0x01)
	enum class ECollisionChannel OcclusionTraceChannel; // 0xd1(0x01)
	enum class EReverbSendMethod ReverbSendMethod; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float OmniRadius; // 0xd4(0x04)
	float StereoSpread; // 0xd8(0x04)
	float LPFRadiusMin; // 0xdc(0x04)
	float LPFRadiusMax; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xe8(0xa0)
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x188(0xa0)
	float LPFFrequencyAtMin; // 0x228(0x04)
	float LPFFrequencyAtMax; // 0x22c(0x04)
	float HPFFrequencyAtMin; // 0x230(0x04)
	float HPFFrequencyAtMax; // 0x234(0x04)
	float FocusAzimuth; // 0x238(0x04)
	float NonFocusAzimuth; // 0x23c(0x04)
	float FocusDistanceScale; // 0x240(0x04)
	float NonFocusDistanceScale; // 0x244(0x04)
	float FocusPriorityScale; // 0x248(0x04)
	float NonFocusPriorityScale; // 0x24c(0x04)
	float FocusVolumeAttenuation; // 0x250(0x04)
	float NonFocusVolumeAttenuation; // 0x254(0x04)
	float FocusAttackInterpSpeed; // 0x258(0x04)
	float FocusReleaseInterpSpeed; // 0x25c(0x04)
	float OcclusionLowPassFilterFrequency; // 0x260(0x04)
	float OcclusionVolumeAttenuation; // 0x264(0x04)
	float OcclusionInterpolationTime; // 0x268(0x04)
	float ReverbWetLevelMin; // 0x26c(0x04)
	float ReverbWetLevelMax; // 0x270(0x04)
	float ReverbDistanceMin; // 0x274(0x04)
	float ReverbDistanceMax; // 0x278(0x04)
	float ManualReverbSendLevel; // 0x27c(0x04)
	struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x280(0xa0)
	struct FSoundAttenuationPluginSettings PluginSettings; // 0x320(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
