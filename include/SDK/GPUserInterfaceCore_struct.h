
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPUserInterfaceCore.EUIState
enum class EUIState : int {
	Init = 0,
	Open = 1,
	ShowBegin = 2,
	Show = 3,
	HideBegin = 4,
	Hide = 5,
	CloseBegin = 6,
	Close = 7,
	Mute = 8,
	Release = 9,
	EUIState_MAX = 10
};

// Enum GPUserInterfaceCore.EGPUIFocusEffectType
enum class EGPUIFocusEffectType : int {
	None = 0,
	SeparatedFocusEffect = 1,
	ShareHoverEffect = 2,
	EGPUIFocusEffectType_MAX = 3
};

// Enum GPUserInterfaceCore.EViewDragMode
enum class EViewDragMode : int {
	Normal = 0,
	ValidateAngle = 1,
	InverseValidateAngle = 2,
	EViewDragMode_MAX = 3
};

// Enum GPUserInterfaceCore.ETriggerDragLogic
enum class ETriggerDragLogic : int {
	DistanceCheck = 0,
	DragPointSample = 1,
	ETriggerDragLogic_MAX = 2
};

// Enum GPUserInterfaceCore.ELuaUIBaseViewWantedInputMode
enum class ELuaUIBaseViewWantedInputMode : int {
	None = 0,
	GameOnly = 1,
	UIOnly = 2,
	GameAndUI = 3,
	ELuaUIBaseViewWantedInputMode_MAX = 4
};

// Enum GPUserInterfaceCore.EGPUINavigationEventType
enum class EGPUINavigationEventType : int {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	AnalogVertical = 6,
	AnalogHorizontal = 7,
	Accept = 8,
	Back = 9,
	EGPUINavigationEventType_MAX = 10
};

// Enum GPUserInterfaceCore.EGPUINavigationDynamicConfigType
enum class EGPUINavigationDynamicConfigType : int {
	Override = 0,
	Coexist = 1,
	EGPUINavigationDynamicConfigType_MAX = 2
};

// Enum GPUserInterfaceCore.EBackRootType
enum class EBackRootType : int {
	None = 0,
	Image = 1,
	Media = 2,
	CustomBP = 3,
	EBackRootType_MAX = 4
};

// Enum GPUserInterfaceCore.ELuaUILayer
enum class ELuaUILayer : int {
	Sub = 0,
	HUD = 1,
	HUD_ScreenEffect = 2,
	HUD_Mark = 3,
	HUD_Common = 4,
	HUD_Hint = 5,
	HUD_Feedback = 6,
	HUD_Touch = 7,
	HUD_Popup = 8,
	HUD_LargePopup = 9,
	BackRoot = 10,
	Scene = 11,
	Root = 12,
	Stack = 13,
	Top = 14,
	Loading = 15,
	Pop = 16,
	Tip = 17,
	Mask = 18,
	Admin = 19,
	Watermark = 20,
	ELuaUILayer_MAX = 21
};

// ScriptStruct GPUserInterfaceCore.GPUINavigationDynamicConfigRowHD
// Size: 0x28 (Inherited: 0x10)
struct FGPUINavigationDynamicConfigRowHD : public FDescRowBase {
public:

	enum class EGPUINavigationDynamicConfigType ConfigType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FGPUINavigationKeyMapping> Mappings; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterfaceCore.GPUINavigationKeyMapping
// Size: 0x18 (Inherited: 0x00)
struct FGPUINavigationKeyMapping {
public:

	enum class EGPUINavigationEventType EventType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FKey> Keys; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterfaceCore.GPUINavigationConfigRowHD
// Size: 0x28 (Inherited: 0x10)
struct FGPUINavigationConfigRowHD : public FDescRowBase {
public:

	struct FGPUINavigationKeyMapping Mapping; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
