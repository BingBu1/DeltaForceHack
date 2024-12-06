
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Overlay.Overlays
// Size: 0x30 (Inherited: 0x30)
class UOverlays : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Overlay.BasicOverlays
// Size: 0x40 (Inherited: 0x30)
class UBasicOverlays : public UOverlays {
public:

	struct TArray<struct FOverlayItem> Overlays; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Overlay.LocalizedOverlays
// Size: 0x88 (Inherited: 0x30)
class ULocalizedOverlays : public UOverlays {
public:

	struct UBasicOverlays* DefaultOverlays; // 0x30(0x08)
	struct TMap<struct FString, struct UBasicOverlays*> LocaleToOverlaysMap; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
