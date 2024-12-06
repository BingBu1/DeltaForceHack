
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFM.DFMGameInstance
// Size: 0x3e8 (Inherited: 0x3e0)
class UDFMGameInstance : public UGPGameInstance {
public:

	bool bRenameToPIEWorldInLocalDS; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)

	void StartLocalDS(struct FString MapName, struct FString PlayerIds); // Function DFM.DFMGameInstance.StartLocalDS // (Final|Exec|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFM.POIHUDView
// Size: 0x3b8 (Inherited: 0x388)
class UPOIHUDView : public UBaseUIView {
public:

	struct UDFMCharacterAmbientAudioFSM* OwnerFSM; // 0x388(0x08)
	struct UTextBlock* FirstTextBlock; // 0x390(0x08)
	struct UTextBlock* SecondTextBlock; // 0x398(0x08)
	struct FName POIHUDPanelName; // 0x3a0(0x08)
	struct FTimerHandle HideTimerHandle; // 0x3a8(0x08)
	float DelayHideDuration; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)

	void SetHudAndAutoHide(struct FString TextFirst, struct FString TextSecond); // Function DFM.POIHUDView.SetHudAndAutoHide // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFM.SlatePreDepthActor
// Size: 0x380 (Inherited: 0x378)
class ASlatePreDepthActor : public AActor {
public:

	struct USlatePreDepthMeshComponent* SlatePreDepthComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFM.SlatePreDepthMeshComponent
// Size: 0x6e0 (Inherited: 0x6c8)
class USlatePreDepthMeshComponent : public UMeshComponent {
public:

	char pad_6C8[0x18]; // 0x6c8(0x18)

	bool SetMeshTriangles(struct TArray<struct FSlatePreDepthMeshTriangle>& Triangles); // Function DFM.SlatePreDepthMeshComponent.SetMeshTriangles // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
