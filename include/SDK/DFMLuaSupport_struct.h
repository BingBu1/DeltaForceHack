
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMLuaSupport.ELuaFrontEndType
enum class ELuaFrontEndType : int {
	None = 0,
	Normal = 1,
	FromSettlement = 2,
	WidgetTest = 3,
	ELuaFrontEndType_MAX = 4
};

// ScriptStruct DFMLuaSupport.LuaWidgetCreatedPool
// Size: 0x40 (Inherited: 0x00)
struct FLuaWidgetCreatedPool {
public:

	struct TArray<struct UUserWidget*> CreatedWidgets; // 0x00(0x10)
	struct TArray<struct UUserWidget*> BindLuaWidgets; // 0x10(0x10)
	struct TArray<struct TWeakObjectPtr<struct UUserWidget>> UsingWidget; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
