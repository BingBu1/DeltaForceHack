
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct OpenWorldHISM.BillboardTransformParamRuntime
// Size: 0x20 (Inherited: 0x00)
struct FBillboardTransformParamRuntime {
public:

	struct FLinearColor UVTransform; // 0x00(0x10)
	struct FLinearColor MeshTransform; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldHISM.BillboardMIParamRuntime
// Size: 0x40 (Inherited: 0x00)
struct FBillboardMIParamRuntime {
public:

	float RandomTintGain; // 0x00(0x04)
	struct FLinearColor RandomTint; // 0x04(0x10)
	struct FLinearColor TranslucencyTintColor; // 0x14(0x10)
	float TranslucencyTintIntensity; // 0x24(0x04)
	float LeafTranslucency; // 0x28(0x04)
	float FakeShadow; // 0x2c(0x04)
	float SkylightTranslucencyIntensity; // 0x30(0x04)
	float OutlightAOContrast; // 0x34(0x04)
	float OutlightIntensity; // 0x38(0x04)
	float OutlightOffset; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldHISM.CustomInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FCustomInstanceData {
public:

	struct FMatrix Transform; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
