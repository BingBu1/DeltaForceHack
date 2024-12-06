
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGameUserInterface.DFCommonTabNavigator
// Size: 0x320 (Inherited: 0x2d8)
class UDFCommonTabNavigator : public UDFCommonTabNavigatorBase {
public:

	struct FName PrevAction; // 0x2d8(0x08)
	struct FName NextAction; // 0x2e0(0x08)
	int32_t ActionPriority; // 0x2e8(0x04)
	bool bLoop; // 0x2ec(0x01)
	bool bAutoBindActions; // 0x2ed(0x01)
	char pad_2EE[0x2]; // 0x2ee(0x02)
	float KeyIconHeight; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UHDKeyIconBoxWidget* PrevKeyIcon; // 0x2f8(0x08)
	struct UHDKeyIconBoxWidget* NextKeyIcon; // 0x300(0x08)
	struct UNamedSlot* ChildSlot; // 0x308(0x08)
	char pad_310[0x8]; // 0x310(0x08)
	struct UDFCommonTabWidget* TabWidget; // 0x318(0x08)

	void InitKeyIcons(); // Function DFMGameUserInterface.DFCommonTabNavigator.InitKeyIcons // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
