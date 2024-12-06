
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Slate.ECustomTextFlowPolicy
enum class ECustomTextFlowPolicy : int {
	DefaultTextFlow = 0,
	DisableTextFlow = 1,
	TextFlowForceLTR = 2,
	TextFlowForceRTL = 3,
	ECustomTextFlowPolicy_MAX = 4
};

// Enum Slate.ETextJustify
enum class ETextJustify : int {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3
};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : int {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3
};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : int {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};

// Enum Slate.ETextVerticalJustify
enum class ETextVerticalJustify : int {
	Top = 0,
	Middle = 1,
	Bottom = 2,
	ETextVerticalJustify_MAX = 3
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : int {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2
};

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : int {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : int {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : int {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : int {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	MenuSeparator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	ToolBarSeparator = 8,
	Widget = 9,
	EMultiBlockType_MAX = 10
};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : int {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	Menu = 3,
	ButtonRow = 4,
	ToolMenuBar = 5,
	EMultiBoxType_MAX = 6
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : int {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	Bidirectional = 5,
	EProgressBarFillType_MAX = 6
};

// Enum Slate.EStretch
enum class EStretch : int {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : int {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : int {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : int {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : int {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : int {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6
};

// ScriptStruct Slate.VirtualKeyboardOptions
// Size: 0x01 (Inherited: 0x00)
struct FVirtualKeyboardOptions {
public:

	bool bEnableAutocorrect; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Slate.InputChord
// Size: 0x20 (Inherited: 0x00)
struct FInputChord {
public:

	struct FKey Key; // 0x00(0x18)
	char bShift : 1; // 0x18(0x01)
	char bCtrl : 1; // 0x18(0x01)
	char bAlt : 1; // 0x18(0x01)
	char bCmd : 1; // 0x18(0x01)
	char pad_18_4 : 4; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Slate.Anchors
// Size: 0x10 (Inherited: 0x00)
struct FAnchors {
public:

	struct FVector2D Minimum; // 0x00(0x08)
	struct FVector2D Maximum; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Slate.CustomizedToolMenu
// Size: 0x108 (Inherited: 0x00)
struct FCustomizedToolMenu {
public:

	struct FName Name; // 0x00(0x08)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x08(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xa8(0x50)
	struct TArray<struct FName> SectionOrder; // 0xf8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// Size: 0x10 (Inherited: 0x00)
struct FCustomizedToolMenuNameArray {
public:

	struct TArray<struct FName> Names; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Slate.CustomizedToolMenuSection
// Size: 0x04 (Inherited: 0x00)
struct FCustomizedToolMenuSection {
public:

	enum class ECustomizedToolMenuVisibility Visibility; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Slate.CustomizedToolMenuEntry
// Size: 0x04 (Inherited: 0x00)
struct FCustomizedToolMenuEntry {
public:

	enum class ECustomizedToolMenuVisibility Visibility; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
